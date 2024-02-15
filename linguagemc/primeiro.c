/* Este programa pede o usuário um numero qualquer e depois exibe o
numero na tela
*/

#include <stdio.h> // Importa uma biblioteca para trabalhar com entrada e saida de dados.
int main(){
    int idade; // declaração da variável idade do tipo inteiro
    printf("Digite a sua idade e tecle enter\n");
    scanf("%d",&idade); // para pegar o numero digitado pelo usuario
                        // estamos usnado o comando scanf e adicionando
                        // o valor digitado ao endereço de memória
                        // da variável idade. Usamos o e-commercial para 
                        // referenciar o endereço de memória da variavel
                        // idade
    printf("A idade digitada é %d\nendereço da variável idade %x \n",idade,&idade);
    return 0;
}