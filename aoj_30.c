#include<stdio.h>

int main() {
    char num[1001];
    int i, sum;
    
    while(1) {
        scanf("%s", num);
        if (num[0] == '0') {
            break;
        }
        sum = 0;
        
        for (i=0; num[i] !='\0'; i++) { //\0はnullの部分
            sum += num[i] - '0';
        }
        printf("%d\n", sum);

    }
    
    return 0;
}

    
    
    
    
    
    
    
//    //変数の宣言
//    char x[MAX];
//    int n=0, i, xhako, total; //処理用
//    int amari; //処理用２
//    
//    
//    //入力
//    while (1) {
//        scanf("%c", &x[n]);
//        if (x[n] == 0) {
//            break;
//        }
//        n++;
//    }
//    
//    
//    
//    //１０で割って余りをtotal+=してく。
//    //整数部分が１に満たなくなるまで繰り返す
//    for (i=0; i<n; i++) {
//        total = 0; //初期化
//        xhako = x[i];
//        
//        while (1) {
//            //余りを管理する方
//            amari = xhako % 10;
//            //商を管理する方
//            xhako = xhako / 10;
//            
//            total += amari; //足してく
//            
//            //printf("%lld\n", amari);
//            
//            if (xhako < 1) {
//                break;
//            }
//        }
//        printf("%d\n", total);
//        //printf("%ld\n", 9999999999 % 10);
//    }
    
    
    
    
