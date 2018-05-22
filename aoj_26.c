#include<stdio.h>

int main() {
    //変数の宣言
    int x,y; //入力
    int i, j, k, total;
    int count; //カウンター
    
    while (1) {
        scanf("%d %d", &x, &y);
        
        count = 0; //空にする
        
        //ループ終了
        if (x==0 && y==0) {
            break;
        }
        
        for (i=1; i<=x; i++) {
            for (j=1; j<=x; j++) {
                for (k=1; k<=x; k++) {
                    if (i == j || j == k || k == i) {
                        //１つも被ったらダメ
                    }else{
                        total = i + j + k;
                        if (total == y) {
                            count++;
                        }
                    }
                }
            }
        }
        
        printf("%d\n", count/6); //3のバラバラのものを並べるとき、その数の組み合わせがかぶるのは６通り
        
    }
    
    
    
    return 0;
}
