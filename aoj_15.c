#include<stdio.h>

#define MAX 100

int main() {
    //変数の宣言
    int a[MAX], b[MAX];
    char op[MAX]; //演算子
    int i=0, j, x[MAX]; //処理用
    
    //入力
    while (1) {
        scanf("%d %c %d", &a[i], &op[i], &b[i]);
        
        //判定
        if (op[i] == '+') {
            x[i] = a[i] + b[i];
        }else if (op[i] == '-') {
            x[i] = a[i] - b[i];
        }else if (op[i] == '*') {
            x[i] = a[i] * b[i];
        }else if (op[i] == '/') {
            x[i] = a[i] / b[i];
        }else{
            break;
        }
        
        i++; //カウント
    }
    
    //出力
    for (j=0; j<i; j++) {
        printf("%d\n", x[j]);
    }
    
    
    return 0;
}
