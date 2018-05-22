#include<stdio.h>

int main() {
    int x, y;//変数の宣言
    
    //入力
    printf("たて　よこ　→ ");
    scanf("%d %d", &x, &y);
    
    //出力
    printf("面積: %d\n", x*y);
    printf("周りの長さ: %d\n", 2*x + 2*y);
    
    return 0;
}
