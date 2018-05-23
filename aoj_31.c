#include<stdio.h>

int main() {
    //変数の宣言
    char hako[1200];
    char mozi[26];  //アルファベットの数
    int i=0, j, k; //処理用
    
    //初期化
    for (j=0; j<26; j++) {
        mozi[j] = 0;
    }
    
    
    //入力
    while (scanf("%c", &hako[i]) != EOF) {
        
//        if (hako[i] == '\0') {
//            break;
//        }
        i++; //カウンター回す
    }
    
    
    //処理
    for (j=0; j<i; j++) {  //入力のi全部
        for (k=0; k<26; k++) {
            if (hako[j] >= 'a' && hako[j] <= 'z') {
                if (hako[j] == 'a' + k) {
                    mozi[k] ++; //+1
                }
            }else if (hako[j] >= 'A' && hako[j] <= 'Z') {
                if (hako[j] == 'A' + k) {
                    mozi[k] ++; //+1
                }
                
            }
        }
    }
    
    //出力
    for (j=0; j<26; j++) {
        printf("%c : %d\n", 'a'+j, mozi[j]);
    }
    
    
    return 0;
}
