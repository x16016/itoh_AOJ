#include<stdio.h>
#include<math.h>

int main() {
    //変数の宣言
    double a, b, c;//入力
    double S, L, h;//出力
    
    //入力
    scanf("%lf %lf %lf", &a, &b, &c);
    
    //処理
    //面積
    S = 0.5 * a * b * sin(c * M_PI / 180);
    L = a + b + sqrt(a * a + b * b - 2 * a * b * cos(c * M_PI / 180));
    h = b * sin(c * M_PI / 180);
    
    //出力
    printf("%f\n%f\n%f\n", S, L, h);
    
    
    return 0;
}
