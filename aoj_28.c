#include<stdio.h>



int main() {
    //変数の宣言
    int n, m, l;
    int A[101][101], B[101][101];
    long long C[101][101], total;
    int i, j, k; //処理用
    
    
    //初期化
//    for (i=0; i<101; i++) {
//        for (j=0; j<101; j++) {
//            A[i][j] = 0;
//            B[i][j] = 0;
//            C[i][j] = 0;
//        }
//    }
    
    
    
    //入力
    scanf("%d %d %d", &n, &m, &l);
    //A n*m
    for (i=0; i<n; i++) {
        for (j=0; j<m; j++) {
            scanf("%d", &A[i][j]);
        }
    }
    //B m*l
    for (i=0; i<m; i++) {
        for (j=0; j<l; j++) {
            scanf("%d", &B[i][j]);
        }
    }
    
    //Cは n * l
    for (i=0; i<n; i++) {
        for (j=0; j<l; j++) {
            total = 0; //初期化
            for (k=0; k<m; k++) { //こんなけぶん回数totalに突っ込む
                total += A[i][k] * B[k][j];
            }
            //終わったらCに回収
            C[i][j] = total;
        }
    }
    
//    //Cを出力
//    for (i=0; i<n; i++) {
//        for (j=0; j<l; j++) {
//            if (j != 0) {
//                printf(" ");
//            }
//            printf("%d", C[i][j]);
//        }
//        printf("\n"); //改行
//    }
    
    for (i = 0; i < n; i++) {
        printf("%lld", C[i][0]);
        for (j = 1; j < l; j++) printf(" %lld", C[i][j]);
        putchar('\n');
    }
    
    
    return 0;
}
