#include <random>
#include <iostream>
#include <vector>

int main()
{
  const int NSAMPLES = 10000;
  int seed = 1;

  const double xmin= 0.0;
  const double xmax= 1.0;
  const double dx=0.05;
  const int nbins= (xmax-xmin)/dx;
  std::vector<double> histo(NSAMPLES);

  std::mt19937 gen(seed); //Standard mersenne_twister_engine seeded with rd()
  std::uniform_real_distribution<> dis(xmin, xmax);

    for (int n = 0; n < NSAMPLES; ++n)
    {
      double r = dis(gen);
      int idx = int(r/dx);

      histo[idx] +=1;
    }
    for (size_t ii = 0; ii <nbins; ii++)
    {
      std::cout << xmin+ii*dx<<" "<<histo[ii]/NSAMPLES/dx<<'\n';
    }

}
