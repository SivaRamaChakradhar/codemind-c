#include <stdio.h>
#include <math.h>
int main()
{
  int n,t, r = 0,rem,c,d;
  scanf("%d", &n);
  while (1)
  {
    n++;
    t = n;
    // Calculating reverse of the number
    while(t)
    {
      rem = t%10;
      r = r*10+rem;
      t = t/10;
    }
    // If reverse equals original then it's a palindrome
    if (r == n)
    {
      d = (int)sqrt(n);
      /* Checking prime */
      for (c = 2; c <= d; c++)
      {
        if (n%c == 0){
          break;
        }
      }
      if (c==d+1){
        break;
      }
    }
    r = 0;
  }
  printf("%d
",n);
  return 0;
}