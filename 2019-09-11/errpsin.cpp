//#include <iostream>
#include <cmath>
//#include <cstdio>
#include <fstream>


int main(void)
{
  std::ofstream fout("datos.txt");
  const double x = 0.123; //rad
  const int N=10;
  for (double x = 0.1; x < 8.0; x+=0.1)
  {
    double sum = x;
    double term = x;
    for (int ii = 1; ii < N; ii++)
    {

      term*=((-1)*x*x)/((2*ii)*(2*ii+1));
      sum+= term;
    }
  fout<<x<<"\t"<<sum<<"\t"<<std::sin(x)<<"\n";
  }

  fout.close();

  return 0;
}
