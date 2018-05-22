#include<stdio.h>

int main() {
    int w, h, x, y, r; //横、縦、x座標、y座標、半径
    
    //入力
    scanf("%d %d %d %d %d", &w, &h, &x, &y, &r);
    
    //出力
    if (x + r <= w && x - r >= 0) {
        if (y + r <= h && y - r >= 0) {
            printf("Yes\n");
        }else{
            printf("No\n");
        }
    }else{
        printf("No\n");
    }
    
    return 0;
}
