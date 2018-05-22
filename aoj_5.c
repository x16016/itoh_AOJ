#include<stdio.h>

int main() {
    int a, b; //変数の宣言
    
    //入力
    scanf("%d %d", &a, &b);
    
    //出力
    if (a < b) {
        printf("a < b\n");
    }else if (a > b) {
        printf("a > b\n");
    }else{
        printf("a == b\n");
    }
    
    return 0;
}
