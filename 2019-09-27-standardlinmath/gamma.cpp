#include <cstdio> //printf
#include <cmath>

int main(void)
{
  const double xmin = 0.0;
  const double xmax = 10.0;
  const double dx = 0.1;
  const int NSTEPS = (xmax-xmin)/dx;

  for (size_t ii = 0; ii <= NSTEPS; ii++)
  {
    double x = xmin+ii*dx;
    std::printf("%25.16e \t %25.16e\n", x, std::tgamma(x));
  }

  return 0;
}
