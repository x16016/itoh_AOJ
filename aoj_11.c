#include<stdio.h>

#define MAX 3000

int main() {
    //変数の宣言
    int x[MAX], y[MAX];
    int i=0, j; //処理用
    
    //入力
    while (1) {
        scanf("%d %d", &x[i], &y[i]);
        if (x[i] == 0 && y[i] == 0) {
            break;
        }
        i++; //カウント
    }
    
    //出力
    for (j=0; j<i; j++) {
        if (x[j] < y[j]) {
            printf("%d %d\n", x[j], y[j]);
        }else{
            printf("%d %d\n", y[j], x[j]);
        }
    }
    
    return 0;
}
