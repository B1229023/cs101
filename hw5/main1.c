#include <stdio.h>

int main() {
  int n = 7;//n=7
  for (int i = 1;i<=n;i++){//i從1開始加1，直到i<=n為止(計算要做幾次(印幾層))
    for(int j = 1;j<=n;j++){//j從1開始加1，直到j<=n為止(迴圈計算空白數、印幾次i)
    // 判斷印出空白還是數字
        if (j<=(n-i)){ //i前面的空白數為n-i，所以如果j<=n-i時，要印出空白
            printf(" ");
        }
        else{//之後開始印出數字i
            printf("%d ",i);
         }
    }
    printf("\n");
  }
    return 0;
}
