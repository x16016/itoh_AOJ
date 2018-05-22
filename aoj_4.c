#include<stdio.h>

int main() {
    int x; //入力される秒数
    int a, b, c; //時間
    
    //入力
    printf("秒数を入力→ ");
    scanf("%d", &x);
    
    //処理
    a = x / 3600;
    b = x % 3600 / 60;
    c = x % 3600 % 60;
    
    
    //出力
    printf("時, 分, 秒 = %d, %d, %d\n", a, b, c);//h, m, s
    
    return 0;
}
