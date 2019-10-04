#include <iostream>
#include <cmath>

double SN1 (double n);
double SN2 (double n);
double SN3 (double n);
int main (void)
{
  int n=0;
  double x1p=0, x1m = 0, x2p = 0, x2m = 0;
  double a=1, b=1, c=0;

  for (n = 1; n <= 10000; n++)
   {
    double S3 =SN3(n);
    double S2 =SN2(n);
    double S1 =SN1(n);
    double delta1 = std::fabs((S1-S3)/S3);
    double delta2 = std::fabs((S2-S3)/S3);

    std::printf("%10d %10.6e %10.6e %10.6e %10.6e %10.6e \n", n, S1, S2, S3, delta1, delta2);
  }


  return 0;
}

double SN1 (double n)
{
  double sum1 = 0;
  double sign = -1.0;
  for (int i = 1; i <=2*n ; i++)
  {
    sum1+=sign*i/(i+1);
    sign*=-1;
  }
  return sum1;
}
double SN2 (double n)
{
  double sum2p =0;
  double sum2m =0;

  for (int i = 1; i <=n; i++)
  {
    sum2p+=(2*i)/(2.0*i+1);
    sum2m+=(2*i-1.0)/(2*i);
  }

  return sum2p-sum2m;
}
double SN3 (double n)
{
  double sum3 = 0;
  for (int i = 1; i <=n ; i++)
  {
    sum3+=1.0/(2*i*(2*i+1));
  }
  return sum3;
}
