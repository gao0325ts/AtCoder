#include <stdio.h>

int main(void)
{
  int i = 0;
  char buf[101];

  if (scanf("%100s", buf) != 1)
    printf("No");
  else
  {
    if (buf[i] == '<')
    {
      i++;
      if (buf[i] == '=')
      {
        while (buf[i] == '=')
          i++;
        if (buf[i] == '>')
        {
          if(buf[++i] == '\0')
            printf("Yes");
          else
            printf("No");
        }
        else
          printf("No");
      }
      else
        printf("No");
    }
    else
      printf("No");
  }
  return 0;
}