#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  float celcius, kelvin, reamur, fareinheit;
  printf("\n convert temps in Kelvin:");
    scanf("%f", &kelvin);

  celcius = kelvin - 273.15;
  reamur = 4/5 * kelvin - 273;
  fareinheit = 9/5 * kelvin - 273 + 32;
  printf("\n pick a units:");
    scanf("%f %f %f", &celcius, &reamur, &fareinheit);

  printf("\n %f kelvin = %f reamur", kelvin, reamur);
  printf("\n %f kelvin = %f fareinheit", kelvin, fareinheit); 
  printf("\n %f kelvin = %f celcius", kelvin, celcius); 

  return 0;
}
