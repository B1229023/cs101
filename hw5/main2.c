#include <stdio.h>

int main() {
  int i,j;
  float PI = 0.0;
  float x;
  for (i=1,j=0;(PI>=3.1416||PI<3.14159);i+=2,j++){
    x=4.0/i;
    if(j%2==0){
      PI=PI+x;
    }
    else {
      PI=PI-x;
    }
  }
  printf("PI = %f",PI);
  printf("X = %f",x);
  return 0;
}
