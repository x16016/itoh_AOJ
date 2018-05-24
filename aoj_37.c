#include<stdio.h>
#include<math.h>

int main() {
    //変数の宣言
    double x1, y1, x2, y2;//入力
    double i; //処理用
    double a; //答え用
    
    //入力
    scanf("%lf %lf %lf %lf ", &x1, &y1, &x2, &y2);
    
    //処理
    i = ((x2 - x1) * (x2 - x1)) + ((y2 - y1) * (y2 - y1));
    a = sqrt(i);
    
    printf("%f\n", a);
    
    return 0;
}
