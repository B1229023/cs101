#include <stdio.h>

int main() {
  int i = 1000;
  if (i<=1500){
    printf("免費");
  }
  else{
    int n = i-1500;
    if(n%100){
      int h = (n/100+1)*10;
      printf("%d元",70+h);
    }
    else{
      printf("%d元",70+(n/100)*10);
    }
  }

  return 0;
}
