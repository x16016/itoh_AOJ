#include<stdio.h>

#define MAX 300

int main() {
    //変数の宣言
    int h[MAX], w[MAX];
    int count = 0; //箱用
    int i, a, b, c; //処理用
    
    //入力
    while (1) {
        scanf("%d %d", &h[count], &w[count]);
        
        if (h[count] == 0 && w[count] == 0) { //どちらも0だった場合
            break;  //ループ終了
        }
        
        count++; //カウンター増やす
    }
    
    for (i=0; i<count; i++) { //箱を回す
        for (a=0; a<h[i]; a++) { //縦
            for (b=0; b<w[i]; b++) { //横
                if (a == 0 || a == h[i] - 1 || b == 0 || b == w[i] - 1) { //最初または最後の列：全部#
                    printf("#");
                }else{          //それ以外（間）
                    printf(".");
                }
            }
            printf("\n");
        }
        printf("\n");
    }

    return 0;
}
