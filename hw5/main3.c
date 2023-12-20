#include <stdio.h>

int main() {
  for(int i = 0;i<=9*9 ;i++){
    int row = i/9+1 ;
    int times = i%9+1;
    printf("%d*%d=%d\t",row,times,row*times);
    if (i %9==0){
       printf("\n");
    }
  }
  return 0;
}
