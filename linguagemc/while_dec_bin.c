#include <stdio.h>

int main(){

    int dec = 24;
    int resto = 0;
    int pos = 10;
    int rs = 1;
    while( dec > 0){
        resto = dec % 2;
        dec = dec / 2;
        rs = rs + pos * resto;
        pos = pos * 10;
    }
    printf("%d\n",rs);
    return 0;
}
