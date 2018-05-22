#include<stdio.h>

int main() {
    //変数の宣言
    int a, b, c;
    int i, count=0; //処理用
    
    //入力
    scanf("%d %d %d", &a, &b, &c);
    
    //条件確認
    if (a<1 || b<1 || c<1 || a>b) {
        printf("not");
    }
    
    for (i=a; i<=b; i++) { //a~b
        if (c%i == 0) {
            count ++;
        }
    }
    
    //出力
    printf("%d\n", count);
    
    return 0;
}
