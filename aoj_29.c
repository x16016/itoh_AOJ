#include<stdio.h>

//アルファベットは +_３２でアスキーコード内で大文字小文字の変換ができる

int main() {
    //変数の宣言
    char hako[1200];
    int i=0, j; //処理用
    
    //入力（エンターで終わり
    while (1) {
        scanf("%c", &hako[i]);
        if (hako[i] == '\n') {
            break;
        }
        i++; //カウンター回す
    }
    
    //大→小変換
    for (j=0; j<i; j++) {
        if (hako[j] >= 'A' && hako[j] <= 'Z') {
            hako[j] += 32;
        }else if (hako[j] >= 'a' && hako[j] <= 'z') {
            hako[j] -= 32;
        }
        printf("%c", hako[j]);
    }
    printf("\n");
    
    
    
    
    
    return 0;
}
