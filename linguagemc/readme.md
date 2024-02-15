# Estudo da Linguagem C
## Este Repositório será publicado arquivos em C

<img src="https://upload.wikimedia.org/wikipedia/commons/thumb/1/18/C_Programming_Language.svg/695px-C_Programming_Language.svg.png" height="200">

### Abaixo é apresentado os arquivos deste repositório

#### hello.c

```c
#include <stdio.h>
int main(){
        printf("Hello,World\n");
        return 0;
}
```

#### Operações C

```c
#include<stdio.h>
 
int main(){
    int n1;
    int n2;
    int soma;
    int subtrair;
    int multiplicar;
    int dividir;
 
    printf("Digite um numero e tecle enter: \n");
    scanf("%d", &n1);
 
     printf("Digite um numero e tecle enter: \n");
    scanf("%d", &n2);
 
    soma = n1 + n2;
    subtrair = n1 - n2;
    multiplicar = n1 * n2;
    dividir = n1 / n2;
 
    printf("O resultado da soma é %d",soma);
    printf("O resultado da subtrair é %d",subtrair);
    printf("O resultado da multiplicar é %d",multiplicar);
    printf("O resultado da dividir é %d",dividir);
    return 0;
}
```

#### Desconto.c

```c
#include <stdio.h>
 
int main() {
  int n1, n2, n3, n4;
  float valor;
 
  printf("Digite a primeira nota e aperte enter");
  scanf("%d", &n1 );
 
  printf("Digite a segunda nota e aperte enter");
  scanf("%d", &n2  );
 
  printf("Digite a terceira nota e aperte enter");
  scanf("%d", &n3 );
 
  printf("Digite a quarta nota e aperte enter");
  scanf("%d", &n4 );
 
 
  valor = (n1 + n2 + n3 + n4) / 4;
 
  printf("A média das notas é %.2f.\n",valor);
 
  return 0;
}
```

#### Desvio de fluxo parimpar.c

```c
#include <stdio.h>
 
int main(){
 int num;
 printf( "Digite um numero: \n");
 scanf("%d",&num);
 
 if(num % 2 == 0){
    printf("Este numero é par \n");
 
 }
 else{
    printf("Este numero é impar \n");
 }
 return 0;
}
```