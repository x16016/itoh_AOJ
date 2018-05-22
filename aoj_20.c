#include <stdio.h>

int main() {
    int n;
    int i, x;//処理用
    
    //入力
    scanf("%d", &n);
    
    //処理と出力
    for (i=1; i<=n; i++) {
        x = i; //避難
        
        if (x%3 == 0) {
            printf(" %d", x);
        }else{
            while (x) {
                if (x%10 == 3) {
                    printf(" %d", i); //xではなくiじゃないといっぱい出てくる
                    break;
                }
                x = x / 10;
            }
        }
    }
    printf("\n");
    
    return 0;
}
