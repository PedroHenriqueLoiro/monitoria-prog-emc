#include <stdio.h>
/*
O parâmetro argc representa o número de argumentos da linha de comando, 
e char * argv [] é uma matriz de strings (ponteiros de caracteres) que representam os 
argumentos individuais fornecidos na linha de comando. A função principal pode ter dois parâmetros, argc e argv .

*/
int main(int argc,char *argv[]){
    /*---------------------------------------------------Declarando variaveis em c-----------------------------------------------*/
    /* Vetor de caracteres (char) */
    char nome[30] ="";
    /* Inteiro */
    int idade = 25 ;
    /*Flutuante, com casas decimais*/
    float altura = 1.70;
    /*Double -> um ponto flutuante com mais capacidade de casa decimais*/
    double pi = 3.1416141614;

    /*especificação de tipos*/
    printf("meu nome e: %s, tenho: %d anos de idade, altura: %.2f e estudei que pi e um numero aproximado de: %lf ...",nome,idade,altura,pi);
    /*--------------------------------------------------- Lendo valores do teclado -----------------------------------------------*/
    printf("meu nome e: %s, tenho: %d anos de idade, altura: %.2f e estudei que pi e um numero aproximado de: %lf ...",nome,idade,altura,pi);
  /*--------------------------------------------------- DIgite um numero -----------------------------------------------*/
    /*--------------------------------------------------- DIgite um numero -----------------------------------------------*/
    /*--------------------------------------------------- DIgite um numero -----------------------------------------------*/
    return 0;
}
