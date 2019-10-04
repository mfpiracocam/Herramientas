#include <iostream>
#include <cmath>
#include <cstdio>


int main(void)
{
  double sum = 0;
  for(double ii = 1.0; ii<=1000; ++ii)
    {
      sum+=1/ii;
      std::printf("Suma armónica hasta %f = %f\n",ii, sum);
      //std::cout<<sum<<std::endl;
    }

  return 0;
}
