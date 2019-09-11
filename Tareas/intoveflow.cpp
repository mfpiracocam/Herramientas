#include <iostream>
#include<cmath>

const double err = 2;

double bisec(double a, double b);

int main(void)
{
  int MaxX = 1;
  while (MaxX>0)
  {
    MaxX*10;
  }
    //std::printf("IntOverflow = %d\n",MaxX);
  int n=bisec(,);
  std::cout<<"f(x)=0 en x="<<n<<std::endl;

  /* Hacer crecer x exponencialmente
  Hacer biseccion hasta encontrar el límite */
  return 0;
}
double bisec(double a, double b)
{
  double fda,fdx,x0;
  fda = f(a);

  while(b-a>err){
    x0 = 0.5*a+0.5*b, fdx = f(x0);
    if(fda*fdx<0){
      b=x0;
    }
    else{
      a=x0,fdx=fda;
    }
  }
  return 0.5*(a+b);
}
//how  to use printf("%20.16e",x)
