#include<stdio.h>
#include<string.h>

int main() {
    //変数の宣言
    char T[2000]; //入力１
    char W [11]; //入力２
    int i, n=0;; //処理用
    
    scanf("%s", W);
    
    do{
        scanf("%s", T);
        if (!strcmp (T, "END_OF_TEXT")) { //0が帰ってきたらbreak
            break;
        }
        
        for (i=0; T[i] != '\0'; i++) { //入力２の文字数
            if (T[i] < 91) { //アスキーで大文字以上の
                T[i] += 32; //小文字にする
            }
        }
        if (!strcmp(W,T)) { //同じだったら数える
                n++; //カウント
        }
    }while(1);
    
    printf("%d\n", n);
    
    
    
    return 0;
}
