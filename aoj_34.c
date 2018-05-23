#include<stdio.h>
#include<string.h>

int main() {
    //変数の宣言
    char T1[201], T2[201];
    int m, h; //シャッフルの回数, まとめて移動する分
    int i, j, k; //処理用
    
    while(1) {
        scanf("%s\n%d", T1, &m); //トランプの並びとシャッフルの回数の入力
        if (!strcmp(T1, "-")) { //ハイフンが入力されたら終了
            break;
        }
        
        for (i=0; i<m; i++) {//シャッフルの回数だけ
            scanf("%d", &h); //まとめて移動する分　入力
            for (j=h; T1[j] != '\0'; j++) { //移動する分の境からカードの終わりまで
                T2[j-h] = T1[j]; //入れ替える（残された側の再配置
            }
            for (k=0; k<h; k++) { //カードの最初から境まで
                T2[j-h+k] = T1[k]; //（後方に持っていく側
            }
            for (j=0; T1[j] != '\0'; j++) {
                T1[j] = T2[j]; //これらをT1に返す
            }
        }
        //出力
        printf("%s\n", T1);
    }
    
    return 0;
}
