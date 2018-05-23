#include<stdio.h>

int main() {
    //変数の宣言
    char m1[101], m2[101];
    int i, j, n1=0, n2=0, t;
    
    //入力
    scanf("%s %s", m1, m2);
    
    //処理
    while (m1[n1] != '\0') {
        n1++;
    }
    while (m2[n2] != '\0') {
        n2++;
    }
    
    for (i=0; i<n1; i++) {
        t = 1;
        for (j=0; j<n2; j++) { //ここで回すのは２回目に入力した文字列の分だけ
            if (m1[(i+j)%n1] != m2[j]) {//１ずつズレてる
                t = 0;
            }
        }
        if (t) { //forで回した後でもt=1のままだったらyes
            printf("Yes\n");
            return 0;
        }
    }
    
    printf("No\n");
    
    return 0;
//    //変数の宣言
//    char m1[100], m2[100], tmp;
//    int a=0, b=0, i, j; //処理用
//    
//    //入力
//    while (1) {
//        scanf("%c", &m1[a]);
//        if (m1[a] == '\n') {
//            break;
//        }
//        a++;
//    }
//    
//    while (1) {
//        scanf("%c", &m2[b]);
//        if (m2[b] == '\n') {
//            break;
//        }
//        b++;
//    }
//    
//
//    //処理
//    for (i=0; i<a; i++) { //１回目に入力した文字数の数だけ
//        for (j=0; j<b; j++) { //2回目に入力した文字数の数だけ
//            if (m1[i] != m2[j]) {
//                break;
//            }
//            if (j == b-1 && m1[i] == m2[j]) {
//                printf("Yes\n");
//                return 0;
//            }
//        }
//        tmp = m1[a-1];
//        for (j=0; j<a; j++) { //１個づつずらす
//            if (j == 0) {
//                m1[a-1] = m1[0];
//            }else if (j == a-1) {
//                m1[j-1] = tmp;
//            }else{
//                m1[j-1] = m1[j];
//            }
//        }
//    }
//    
//    printf("No\n");
//    
//    
//    return 0;
}
