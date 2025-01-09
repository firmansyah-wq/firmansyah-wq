#include <stdbool.h>
#include <stdio.h>

int main(int argc, char *argv[])
{
  //deklarasi variabel
  float nom1,nom2;
  char operation;

  //input pengguna
  printf("\n masukkan persamaan (+,-,*,/) :");
  scanf("%c", &operation);

  printf("\n masukkan 2 angka :");
  scanf("%f %f", &nom1, &nom2);

  //operasi switch 
  switch (operation) {
    case '+':
    printf("%f + %f = %f\n", nom1,nom2,nom1 + nom2);

    break;
    
    case '-':
      printf("%f - %f = %f\n", nom1,nom2,
             nom1 - nom2);
    break;

    case '*':
      printf("%f * %f = %f\n", nom1,nom2,
             nom1 * nom2);
    break;

    case '/':
      if (nom2 == 0.0) {
      } else {
        printf("cant divide by zero\n");
      }
      printf("%f / %f = %f\n", nom1,nom2,
             nom1 / nom2);
      break;

      default:
      printf("\n please enter correct operation");

  return 0;
}
}
