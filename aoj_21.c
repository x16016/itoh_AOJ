#include<stdio.h>

#define MAX 1000

int main() {
    //変数の宣言
    int n, hako[MAX]; //入力用
    int i; //出力用
    
    //入力
    scanf("%d", &n);
    for (i=0; i<n; i++) {
        scanf("%d", &hako[i]);
    }
    
    //出力
    for (i=n-1; i>0; i--) {
        printf("%d ", hako[i]);
    }
    
    printf("%d\n", hako[0]);
    
    return 0;
}
