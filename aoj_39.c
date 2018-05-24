#include<stdio.h>
#include<math.h>

int main() {
    //変数の宣言
    int i, n, hako[1000];
    double h, sum;
    
    while (1) {
        //入力
        scanf("%d", &n);
        if (n == 0) {
            break;
        }
        
        //初期化
        sum = 0;
        h = 0;
        
        for (i=0; i<n; i++) {//nの分だけ
            scanf("%d", &hako[i]);
            sum += hako[i]; //足してく
        }
        
        sum = sum / n;
        
        for (i=0; i<n; i++) {
            h = h + pow (hako[i] - sum, 2.0); //(hako[i] - sum)^2.0 ←double
        }
        
        h = h / n;
        
        //出力
        printf("%lf\n", pow(h, 1.0/2.0));
    }
    
    return 0;
}
