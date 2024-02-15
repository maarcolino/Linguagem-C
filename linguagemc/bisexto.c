#include <stdio.h>

int main() {
    int num;

    printf("Digite o ano: ");
    scanf("%d",&num);

    if (num % 4 == 0) {
        printf("%d é um ano bissexto\n", num);
    } else {
        printf("%d não é um ano bissexto\n", num);
    }

    return 0;
}
