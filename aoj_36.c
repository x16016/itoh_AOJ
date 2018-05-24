#include<stdio.h>
#include<string.h>

//こっち
char t1[1510];
char t2[1510];
char t3[1510];

int main() {
    int n, a, b, i, j;
    char t;
    
    //文字列入力
    scanf("%s", &t1);
    //命令の数の入力
    scanf("%d", &n);
    
    for (i=0; i<n; i++) {//命令の数の分だけ
        scanf("%s", &t3); //具体的に入力
        if (strcmp(t3, "replace") == 0) { //replaceと一致
            scanf("%d %d %s", &a, &b, &t2); //条件
            for (j=0; j<b-a+1; j++) {
                t1[a+j] = t2[j]; //場所を指定して入れ替え
            }
        }else if (strcmp(t3, "reverse") == 0) { //reverseと一致
            scanf("%d %d", &a, &b); //条件
            while (a<b) { //aがbより小さい間
                t = t1[a]; //tmp的な扱い
                t1[a] = t1[b];
                t1[b] = t;
                a++;//進める
                b--;
            }
        }else if (strcmp(t3, "print") == 0) { //printと一致
            scanf("%d %d", &a, &b);//条件
            for (j=a; j<b+1; j++) {
                printf("%c", t1[j]);//そのまま印字
            }
            puts("");
        }
    }
    
    return 0;
}


