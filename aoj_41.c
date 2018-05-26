#include <stdio.h>

int main(){
    int i,Dice[7];
    char order[101];
    
    for(i=1;i<7;i++) { // 1 ~ 6
        scanf("%d", &Dice[i]);
    }
    
    scanf("%s", order);
    
    for(i=0;order[i]!='\0';i++){ // 0 ~
        
        //tmp的なあれ
        Dice[0] = Dice[1];
        
        switch(order[i]){
                
            case 'E':
                Dice[1] = Dice[4];
                Dice[4] = Dice[6];
                Dice[6] = Dice[3];
                Dice[3] = Dice[0];
                break;
                
            case 'N':
                Dice[1] = Dice[2];
                Dice[2] = Dice[6];
                Dice[6] = Dice[5];
                Dice[5] = Dice[0];
                break;
                
            case 'S':
                Dice[1] = Dice[5];
                Dice[5] = Dice[6];
                Dice[6] = Dice[2];
                Dice[2] = Dice[0];
                break;
                
            case 'W':
                Dice[1] = Dice[3];
                Dice[3] = Dice[6];
                Dice[6] = Dice[4];
                Dice[4] = Dice[0];
                break;
                
        }
    }
    
    printf("%d\n", Dice[1]);
    
    return 0;
}


//#include<stdio.h>
//#include<string.h>

////strlenは文字列の長さを返す
//
////変数の宣言(ここ、mainより外です）
////入力
//int Dice[7]; //サイコロ
////処理用
//int i;
//int tmp; //一時
//
////入力
//void saikoro() {
//    for (i=0; i<6; i++) {// iは0 ~ 5
//        scanf("%d", &Dice[i+1]); //Dice[1] ~ Dice[6] に入力
//    }
//}
//
//
////サイコロを転がす-------------------------------
//
//void N () {
//    tmp = Dice[1];
//    Dice[1] = Dice[2];
//    Dice[2] = Dice[6];
//    Dice[6] = Dice[5];
//    Dice[5] = tmp;
//    //Dice[3]は変わらない
//    //Dice[4]は変わらない 以下似たような感じ
//}
//
//void W () {
//    tmp = Dice[1];
//    Dice[1] = Dice[3];
//    Dice[3] = Dice[6];
//    Dice[6] = Dice[4];
//    Dice[4] = tmp;
//}
//
//void S () {
//    tmp = Dice[1];
//    Dice[1] = Dice[5];
//    Dice[5] = Dice[6];
//    Dice[6] = Dice[2];
//    Dice[2] = tmp;
//}
//
//void E () {
//    tmp = Dice[1];
//    Dice[1] = Dice[4];
//    Dice[4] = Dice[6];
//    Dice[6] = Dice[3];
//    Dice[3] = tmp;
//}
//
////---------------------------------------------
//
//
//
//int main() {
//    char str[110]; //文字列
//    
//    //入力
//    saikoro(); //サイコロの目を入力する関数
//    scanf("%s", str); //転がす方向を入力、またその数を数えられるように
//    
//    for (i=0; i<strlen(str); i++) { //文字数の分だけ 0 ~
//        if (str[i] == 'N') {
//            N();
//        }else if (str[i] == 'W') {
//            W();
//        }else if (str[i] == 'S') {
//            S();
//        }else if (str[i] == 'E') {
//            E();
//        }
//    }
//    
//    //出力（関数によって上面はDice[1]に固定されている
//    printf("%d\n", Dice[1]);
//    
//    return 0;
//}
