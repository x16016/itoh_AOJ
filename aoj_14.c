#include<stdio.h>
#include<math.h>

int main() {
    //変数の宣言
    double r;
    
    //入力
    scanf("%lf", &r);
    
    printf("%f %f\n", r*r*M_PI, 2.0*r*M_PI);
    
    return 0;
}
