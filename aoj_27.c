#include<stdio.h>

#define MAX 101

int main() {
    //変数の宣言
    int r, c; //入力
    int hako[MAX][MAX];
    int i, j, a, b; //処理用
    
    //入力
    scanf("%d %d", &r, &c);
    for (i=0; i<r; i++) {
        for (j=0; j<c; j++) {
            scanf("%d", &hako[i][j]);
        }
    }
    
    //初期化
    hako[r][c] = 0;
    
    //右
    for (i=0; i<r; i++) {
        a = 0; //初期化
        for (j=0; j<c; j++) {
            a += hako[i][j];
        }
        hako[i][c] = a; //一番端のとこ
         hako[r][c] += a; //右下
    }
    
    
    //下
    for (i=0; i<c; i++) {
        b = 0; //初期化
        for (j=0; j<r; j++) {
            b += hako[j][i];
        }
        hako[r][i] = b; //一番端のとこ
        //hako[r][c] += b; //右下
    }
    


    
    //出力
    for (i=0; i<=r; i++) {
        for (j=0; j<=c; j++) {
            if (j != 0) {
                printf(" ");
            }
            printf("%d", hako[i][j]);
        }
        printf("\n");
    }
    
    
    
    return 0;
}
