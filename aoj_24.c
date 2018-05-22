#include<stdio.h>

int main() {
    int a[101][101], b[101], c[101];
    int i, j, n, m;
    
    //入力
    scanf("%d%d", &n, &m);
    
    for (i=0; i<n; i++) {
        for (j=0; j<m; j++) {
            scanf("%d", &a[i][j]);
        }
    }
    for (j=0; j<m; j++) {
        scanf("%d", &b[j]);
    }
    
    //処理cに入れる
    for (i=0; i<n; i++) {
        c[i] = 0; //全部0にする
        for (j=0; j<m; j++) {
            c[i] = c[i] + a[i][j] * b[j];
        }
    }
    
    //出力
    for (i=0; i<n; i++) {
        printf("%d\n", c[i]);
    }
    
    return 0;
}
