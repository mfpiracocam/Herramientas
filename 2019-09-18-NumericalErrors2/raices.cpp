#include <iostream>
#include <cmath>

int main (void)
{
  double x1p=0, x1m = 0, ix1p = 0, ix1m = 0;
  double a=1, b=1, c=1;

  double det = b*b-4*a*c;

  if (det>=0)
  {
    double det1;
    det1 = std::sqrt(det);

    x1p = (-b+det1)/(2*a);
    x1m = (-b-det1)/(2*a);
    //x2p = (-2*c)/(b+det1);
    //x2m = (-2*c)/(b-det1);
    //std::printf(" %10.12f %10.12f %10.12f %10.12f\n", x1p, x1m, x2p, x2m);
  }
  else
  {
    det = std::sqrt(-det);

    x1p = -b/(2*a);
    ix1p = det/(2*a);
    x1m = -b/(2*a);
    ix1m= -det/(2*a);
    //x2p = (-2*c)/(b+det);
    //x2m = (-2*c)/(b-det);
    std::printf(" %10.12f %10.12f %10.12f %10.12f\n", x1p, x1m, ix1p, ix1m);
  }



  return 0;
}

/*
#include <iostream>
#include <cmath>

int main (void)
{
  int n=0;
  double x1p=0, x1m = 0, x2p = 0, x2m = 0;
  double a=1, b=1, c=1;

  for (n = 1; n < 11; n++)
   {
    c=std::pow(10.0, -n);
    double det = std::sqrt(b*b-4*a*c);
    x1p = (-b+det)/(2*a);
    x1m = (-b-det)/(2*a);
    x2p = (-2*c)/(b+det);
    x2p = (-2*c)/(b-det);

    std::printf("%10d %10.6f %10.6f %10.6f %10.6f\n", n, x1p, x1m, x2p, x2m);
  }


  return 0;
}
Programa que calcula raices para c cada vez mas pequeño
*/
