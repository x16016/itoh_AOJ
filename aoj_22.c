#include<stdio.h>

int main() {
    //変数の宣言
    int hako[4][14]; //入力用
    int n; //手元にあるカード
    char mark[52]; //カードのマークの入力
    int num[52]; //カードの数字の入力
    int i, j; //処理用
    
    //全部０にする
    for(j=0; j<4; j++) {
        for(i=0; i<14 ;i++){
            hako[j][i] = 0;
        }
    }
    
    //入力
    scanf ("%d ", &n);
    for (i=0; i<n; i++) {
        scanf ("%c %d ", &mark[i], &num[i]);
        
        if (mark[i] == 'S') {
            hako[0][num[i]] = 1;
        }else if (mark[i] == 'H') {
            hako[1][num[i]] = 1;
        }else if (mark[i] == 'C') {
            hako[2][num[i]] = 1;
        }else if (mark[i] == 'D') {
            hako[3][num[i]] = 1;
        }
    }
    
    //出力
    for (j=1; j<=13; j++) {
        if (hako[0][j] != 1) {
            printf ("S %d\n", j);
        }
    }
    
    for (j=1; j<=13; j++) {
        if (hako[1][j] != 1) {
            printf ("H %d\n", j);
        }
    }
    
    for (j=1; j<=13; j++) {
        if (hako[2][j] != 1) {
            printf ("C %d\n", j);
        }
    }
    
    for (j=1; j<=13; j++) {
        if (hako[3][j] != 1) {
            printf ("D %d\n", j);
        }
    }
    
    
    
    return 0;
}
