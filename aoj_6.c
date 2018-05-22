#include<stdio.h>

int main() {
    int a,b,c; //変数の宣言
    
    //入力
    scanf("%d %d %d", &a, &b, &c);
    
    //出力
    if (a < b) {
        if (b < c) {
            printf("Yes\n");
        }else{
            printf("No\n");
        }
    }else{
        printf("No\n");
    }
    
    return 0;
}
