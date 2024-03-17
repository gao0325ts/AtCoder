#include <stdio.h>

int main(void)
{
  long long X;
  if (scanf("%lld", &X) != 1)
    return 0;

  long long result = X / 10;
  if (X > 0 && X % 10 != 0)
    result += 1;

  printf("%lld", result);
  return 0;
}
