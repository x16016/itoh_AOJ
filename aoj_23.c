#include<stdio.h>

int main() {
    //変数の宣言
    //b棟f階のr番目の部屋にv人 vが負の数の時は退去者数を示す
    //入居者数　0 <= v <= 9
    int n; //情報の数
    int b, f, r, v;
    int hako[5][4][11];
    int i;//処理用
    
    for (b=1; b<=4; b++) {
        for (f=1; f<=3; f++) {
            for (r=1; r<=10; r++) {
                hako[b][f][r] = 0;
            }
        }
    }
    
    //入力
    scanf ("%d", &n);
    
    for (i=0; i<n; i++) {
        scanf("%d %d %d %d", &b, &f, &r, &v);
        hako[b][f][r] += v; //加える（負の数の場合あり）
    }
    
    for (b=1; b<=4; b++) {
        for (f=1; f<=3; f++) {
            for (r=1; r<=10; r++) {
                printf(" %d", hako[b][f][r]);
            }
            printf("\n");
        }
        if (b != 4) {
            printf("####################\n");
        }
    }
    
    
    return 0;
}
