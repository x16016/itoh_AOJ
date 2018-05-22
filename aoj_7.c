#include<stdio.h>

int main() {
    int a, b, c; //変数の宣言
    int x;
    
    //入力
    scanf("%d %d %d", &a, &b, &c);
    
    //aが一番小さいつもりで
    
    //処理
    if (a > b) {
        x = a;
        a = b;
        b = x;
    }
    
    //この時点で確実にa<b
    

    if (b > c) {
        x = b;
        b = c;
        c = x;
    }
    
    if (a > b) {
        x = a;
        a = b;
        b = x;
    }

    
    //出力
    printf("%d %d %d\n", a, b, c);
    
    return 0;
}
