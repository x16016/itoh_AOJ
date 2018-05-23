#include<stdio.h>
#include<string.h>

int main () {
    int tp=0, hp=0;//ポイント（初期化しておく
    int n; //ターン数
    int res;
    char t[101], h[101];
    
    //ターン数入力
    scanf("%d", &n);
    
    while (n--) { //n--する間
        scanf("%s %s", t, h); //具体的なカード名
        
        res = strcmp(t, h); //文字列を比較して値を返す
        if (res > 0) {
            tp += 3;
        }else if (res < 0) {
            hp += 3;
        }else{
            tp++;
            hp++;
        }
    }
    
    printf("%d %d\n", tp, hp);
    
    return 0;
}
