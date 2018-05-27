#include<stdio.h>
#include<string.h>

//ここmainやない
char str[110]; //回転方向の指示で使うやつ
//処理用
int i, j, k, l, m, n, e, s, w;
int a[105][7], b[105][7];
int tmp;

//入力関数
void input () {
    scanf("%d", &n); //個数　入力
    
    for (j=0; j<n; j++) { //個数分だけ
        for (i=0; i<6; i++) { //面の数の入力　0~5
            scanf("%d", &a[j][i+1]); //[1] ~ [6]にはいる jは個数
            b[j][i+1] = a[j][i+1]; //おんなじ
        }
    }
}

//前作ってたやつ　41
void N () {
    tmp = a[m][1];
    a[m][1] = a[m][2];
    a[m][2] = a[m][6];
    a[m][6] = a[m][5];
    a[m][5] = tmp;
    //Dice[3]は変わらない
    //Dice[4]は変わらない 以下似たような感じ
}

void W () {
    tmp = a[m][1];
    a[m][1] = a[m][3];
    a[m][3] = a[m][6];
    a[m][6] = a[m][4];
    a[m][4] = tmp;
}

void S () {
    tmp = a[m][1];
    a[m][1] = a[m][5];
    a[m][5] = a[m][6];
    a[m][6] = a[m][2];
    a[m][2] = tmp;
}

void E () {
    tmp = a[m][1];
    a[m][1] = a[m][4];
    a[m][4] = a[m][6];
    a[m][6] = a[m][3];
    a[m][3] = tmp;
}




//判定いっぱいする
void UF () {
    
    //どこの面がa[k][1]と一致するか６面全て確認するのが最初の
    if (a[k][1] == a[m][1]) {
        if (a[k][2] == a[m][3]) {
            strcpy (str, "NWS");
        }else if (a[k][2] == a[m][5]) {
            strcpy (str, "NEES");
        }else if (a[k][2] == a[m][4]) {
            strcpy (str, "NES");
        }
    }else if (a[k][1] == a[m][2]) {
        if (a[k][2] == a[m][3]) {
            strcpy (str, "NWS");
        }else if (a[k][2] == a[m][1]) {
            strcpy (str, "NEES");
        }else if (a[k][2] == a[m][4]) {
            strcpy (str, "NES");
        }
        N(); //転がす
    }else if (a[k][1] == a[m][3]) {
        if (a[k][2] == a[m][6]) {
            strcpy (str, "NWS");
        }else if (a[k][2] == a[m][5]) {
            strcpy (str, "NEES");
        }else if (a[k][2] == a[m][1]) {
            strcpy (str, "NES");
        }
        W(); //転がす
    }else if (a[k][1] == a[m][4]) {
        if (a[k][2] == a[m][1]) {
            strcpy (str, "NWS");
        }
        if (a[k][2] == a[m][5]) {
            strcpy (str, "NEES");
        }
        if (a[k][2] == a[m][6]) {
            strcpy (str, "NES");
        }
        E(); //転がす
    }else if (a[k][1] == a[m][5]) {
        if (a[k][2] == a[m][3]) {
            strcpy (str, "NWS");
        }else if (a[k][2] == a[m][6]) {
            strcpy (str, "NEES");
        }else if (a[k][2] == a[m][4]) {
            strcpy (str, "NES");
        }
        S(); //転がす
    }else if (a[k][1] == a[m][6]) {
        if (a[k][2] == a[m][3]) {
            strcpy (str, "NWS");
        }else if (a[k][2] == a[m][2]) {
            strcpy (str, "NEES");
        }else if (a[k][2] == a[m][4]) {
            strcpy (str, "NES");
        }
        N();//
        N();//２回
    }
    
}


//出力するやつ
void output () {
    
    if (l == 6) {
        printf("No\n");
    }else{
        printf("Yes\n");
    }
}


void IF () {
    for (i=0; i<strlen(str); i++) {
        if (str[i] == 'N') {
            N();
        }else if (str[i] == 'S') {
            S();
        }else if (str[i] == 'W') {
            W();
        }else if (str[i] == 'E') {
            E();
        }
    }
}


int main() {
    input ();
    
    for (k=0; k<n; k++) {
        for (m=0; m<n; m++) {
            UF();//もらう
            IF();//もらったやつ使う
            
            l = 0; //L 初期化
            
            if (k != m) { //違うサイコロ
                for (i=1; i<=6; i++) { //1 ~ 6
                    if (a[k][i] == a[m][i]) {
                        l ++;
                    }
                }
            }
            if (l == 6) {
                break; //次のサイコロ（？）
            }

        }
        if (l == 6) {
            break;
        }
        
    }
    
    //出力
    output();
    
    return 0;
}
