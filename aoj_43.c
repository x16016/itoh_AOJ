#include<stdio.h>

int main() {
    int Dice[2][7]; //サイコロ２個、６面体
    //int side[5] = {2, 3, 5, 4, 2};
    //処理用
    int i, j, k;
    
    //入力
    for (i=0; i<2; i++) { //２回 0 ~ 1
        for (j=1; j<7; j++) {  //６面 1 ~ 6
            scanf("%d", &Dice[i][j]);
        }
    }
    
    //処理
    for (i=0; i<6; i++) { // i 0 ~ 5 （６面分）
        
        //1の1面　== 2の1面 の場合 (最初っから1面が同じ)
        if (Dice[0][1] == Dice[1][1]) {
            for (j=0; j<4; j++) { //１面が一致した前提　0 ~ 3 回すのは４回
                
                //判定
                for (k=1; k<7; k++) { // 1 ~ 6
                    if (Dice[0][k] != Dice[1][k]) {
                        break;
                    }
                }
                
                if (k == 7) { //kが終了まで回ったらおk
                    printf("Yes\n");
                    return 0;
                }
                
                //回す（[1]以外）
                Dice[1][0] = Dice[1][2];
                Dice[1][2] = Dice[1][3];
                Dice[1][3] = Dice[1][5];
                Dice[1][5] = Dice[1][4];
                Dice[1][4] = Dice[1][0];
                
            }//for
        } //if
        
        //回す
        Dice[1][0] = Dice[1][1]; //tmp
        
        switch(i) { //iで判定
            case 2: //iが2の時だけこっち
                Dice[1][1] = Dice[1][3];
                Dice[1][3] = Dice[1][6];
                Dice[1][6] = Dice[1][4];
                Dice[1][4] = Dice[1][0];
                break;
            
            default: //その他
                Dice[1][1] = Dice[1][2];
                Dice[1][2] = Dice[1][6];
                Dice[1][6] = Dice[1][5];
                Dice[1][5] = Dice[1][0];
                break;
        }
    }
    
    //ここまできたらアウト
    printf("No\n");
    
    return 0;
}
