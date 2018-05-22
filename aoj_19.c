#include<stdio.h>

#define MAX 300

int main() {
    //変数の宣言
    int h[MAX], w[MAX];
    int count = 0; //箱用
    int i, a, b; //処理用
    int flag; //偶数の時、奇数の時
    
    //入力
    while (1) {
        scanf("%d %d", &h[count], &w[count]);
        
        if (h[count] == 0 && w[count] == 0) {
            break;
        }
        
        count ++; //カウンター回す
    }
    
    for (i=0; i<count; i++) { //箱を回す
        for (a=0; a<h[i]; a++) {
            if (a%2 == 0) {
                flag = 1;
            }else{
                flag = 0;
            }
            for (b=0; b<w[i]; b++) {
                if (flag == 1) {
                    printf("#");
                    flag = 0;
                }else if (flag == 0) {
                    printf(".");
                    flag = 1;
                }
                
            }
            printf("\n");
        }
        printf("\n");
    }
    
    
    
    //wが偶数の時に#が先頭
    
    return 0;
}
