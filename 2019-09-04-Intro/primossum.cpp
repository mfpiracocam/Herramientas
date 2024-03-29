//programa que suma los primos de 50 a 100

#include <iostream>
#include<cstdio>
#include<cmath>

int isprime(int ii);
int sumprimes(int imin, int imax);
int main (void)
{
  std::printf("sumprimes(%d, %d) = %d\n",500,12400,sumprimes(500,12400));

  return 0;
}
int isprime(int ii)
{
  int r = 1;
  for (int a=2; a<=(std::floor(std::sqrt(ii))) && a!=ii; a++)
      {
        r = (ii%a);
        if (r==0) break;
      }
    if (r==0)
      return 0;
    else
      return 1;
}

int sumprimes(int imin, int imax)
{
  int sum = 0;
  for(int x = imin; x<=imax; x++)
    {
      sum+=isprime(x)*x;
    }
  return sum;
}
