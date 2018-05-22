#include<stdio.h>


int main() {
    //変数の宣言
    int hako;
    int n, i, min = 10000000, max = -10000000;
    long long total=0;
    
    //入力
    scanf("%d", &n);
    for (i=0; i<n; i++) {
        scanf("%d", &hako);
        
        total += hako;
        
        if (min > hako) {
            min = hako;
        }
        
        if (max < hako) {
            max = hako;
        }
        
    }
    
    
    
    //出力
    printf("%d %d %lld\n", min, max, total);
    
    return 0;
}
