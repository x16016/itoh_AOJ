#include<stdio.h>

int main() {
    //変数の宣言
    int a, b;
    int d, r;
    double f;
    
    //入力
    scanf("%d %d", &a, &b);
    
    //処理
    d = a / b;
    r = a % b;
    f = 1.0 * a / b;
    
    //出力
    printf("%d %d %f\n", d, r, f);
    
    
    return 0;
}
