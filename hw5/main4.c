#include <stdio.h>

int main() {
  int n = 12345;
  int new;
  if (n>=1000){
    int unit = n%10; 
    int thousand= n/1000 % 10;
    new=n-unit-(thousand*1000)+(unit*1000)+thousand ;
  }
  else { //
    int unit = n%10;
    int thousand = 0;
    new=n-unit+(unit*1000);
  }
  printf("%d",new);//印出新數字
  return 0;
}
