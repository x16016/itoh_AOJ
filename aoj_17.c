#include<stdio.h>

#define MAX 300

int main() {
    //変数の宣言
    int h[MAX], w[MAX];
    int i = 0, j, a, b; //処理用
    
    //入力
    while(1) {
        scanf("%d %d", &h[i], &w[i]);
        if (h[i] == 0 && w[i] == 0) { //どちらも0の時
            break; //このループを終了
        }
        i++; //カウンター回しておく
    }
    
    for (j=0; j<i; j++) {
        for (a=0; a<h[j]; a++) {
            for (b=0; b<w[j]; b++) {
                printf("#");
            }
            printf("\n");
        }
        printf("\n");
    }
    
    //printf("確認");
    
    return 0;
}
