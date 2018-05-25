#include<stdio.h>
#include<math.h>

//しぐまがわからん

int main() {
    //処理用
    double d1, d2, d3, d4;
    int i, j, k, l, n;
    double x[1020] = {0};
    double y[1020] = {0};
    double z[1020] = {0};
    double o, p, q, max;
    max = -1;
    o = 0;
    p = 0;
    q = 0;
    d1 = 0;
    d2 = 0;
    d3 = 0;
    d4 = 0;
    
    scanf("%d", &n);
    
    for (i=0; i<n; i++) {
        scanf("%lf", &x[i]);
    }
    
    for (i=0; i<n; i++) {
        scanf("%lf", &y[i]);
    }
    
    for (i=0; i<n; i++) {
        o = (x[i] - y[i]) * (x[i] - y[i]);
        p = (x[i] - y[i]) * (x[i] - y[i]) * (x[i] - y[i]);
        p = p * p;
        p = sqrt(p); //
        
        d3 = d3 + p;
        d2 = d2 + o;
        d1 = d1 + sqrt(o); //
        
        if (max < sqrt(o)) { //ルートで壊したこんなけ
            max = sqrt(o);
        }
    }
    
    d2 = pow(d2, 1.0/2);
    d3 = pow(d3, 1.0/3);
    d4 = max;
    
    printf("%lf\n%lf\n%lf\n%lf\n", d1, d2, d3, d4);
    
    return 0;
}
