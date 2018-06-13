#include <stdio.h>
#include <stdlib.h>
#include <locale.h>
#include <math.h>
#include <ctype.h> //biblioteca adicionada para nao aceitar letras.
#include "Derivadas.h"
#include "Integral.h"
#include "Zero.h"


int main()
{

    setlocale(LC_ALL, "Portuguese");

    char op;
    int opf;
    double k,x;// variáveis usadas na opção Derivadas
    double a,b; //variáveis usadas na opção Integral
    double x0; //Variável usada na opção Zero da Função
    double  result;
    double  *resultzero;
    char final;

 do{
 do{
 do{
    printf("\n-------- CALCULADORA DE DERIVADAS, INTEGRAIS E ZERO DA FUNCAO ----------\n");
    printf("\n Escolha uma das opções abaixo: ");
    printf("\n 1 - Derivadas");
    printf("\n 2 - Integral");
    printf("\n 3 - Zero da função.");
    printf("\n 4 - Sair (Encerrar o programa)\n");
    printf("\nEscolha a opcao: ");
        scanf(" %c",&op);
            system("cls");
            fflush(stdin);

{

if (op > '4')
{
  printf("\nOpção inválida. Digite um valor valido (numero) ou aperte 4 para encerrar o programa!\n");
}

}

    {
        //verifica se um caractere é alfabético ou não
        if (isalpha(op))//se sim

        {

            printf("\nVocê entrou com uma letra, por favor digite um número\n");

        }

    }

 }while(!(op == '1' || op == '2' || op == '3' || op == '4'));


                    {
                        if (op == '4') {
                            printf("\n-----------------Obrigado por utilizar nossa calculadora! -------------------\n");
                            exit(0);
                        };
                    }

 }while(isalpha(op));

 if (op == '1' || op == '2')
 {
  do{
    printf("\n Escolha a Função abaixo: ");
    printf("\n 1 - f(x) = k");
    printf("\n 2 - f(x) = x^k");
    printf("\n 3 - f(x) = k^x");
    printf("\n 4 - f(x) = e^x");
    printf("\n 5 - f(x) = logk(x)");
    printf("\n 6 - f(x) = ln(x)");
    printf("\n 7 - f(x) = sen(x)");
    printf("\n 8 - f(x) = cos(x)");
    printf("\n 9 - f(x) = tg(x)");
    printf("\n 10 - f(x) = sqrt(x)");
    printf("\n 11 - f(x) = 1/x");
    printf("\n 12 - Voltar ao menu de escolha (Menu inicial ou sair).");
    printf("\n 13 - Encerrar o programa.");
    printf("\n ");
    printf("\nEscolha sua opcao: ");
        scanf(" %d", &opf);
            system("cls");
            fflush(stdin);


                if (opf == 13)  {
                                    printf("\n-----------------Obrigado por utilizar nossa calculadora! -------------------\n");
                                    exit(0);
                                }


{

    if (opf > 13)
    {

        printf("\nOpção inválida. Digite um valor valido ou aperte 13 para sair!\n");
    }

}
}while (opf > 13);

 }

if (op == '1')
{


{

        if(opf == 4 || opf == 6 || opf == 7 || opf == 8 || opf == 9 || opf == 10 || opf == 11 || opf == 12)
    {
        printf("\n Digite o valor de X:\n ");
           scanf("%lf", &x);
            fflush(stdin);
                result = Derivada(x,opf,k);
                    printf("\n Derivada = %.2lf \n", result);

    }

        if(opf == 1 || opf == 2 || opf == 3 || opf == 5)
        {
        printf("\n Digite o valor de X:\n ");
            scanf("%lf", &x);
                fflush(stdin);
                    printf("\n Digite o valor de K:\n ");
                        scanf("%lf", &k);
                            fflush(stdin);
        result = Derivada(x,opf,k);
        printf("\n Derivada = %.2lf \n", result);

        }

}
}

    if(op == '2')
    {

        printf("\nDigite o valor de A: ");
            scanf("%lf", &a);
            fflush(stdin);
        printf("\nDigite o valor de B: ");
            scanf("%lf", &b);
            fflush(stdin);

        result = Integral(opf, k, a, b);
        printf("\nIntegral = %.2lf\n", result);
    }

    if(op == '3')
    {
        printf("\nDigite o valor de X0 in R: ");
            scanf("%lf", &x0);
                fflush(stdin);


        printf("\nEscolha a Função abaixo:\n");
        printf("\n 1 - f(x) = x^2 - 2");
        printf("\n 2 - f(x) = 2x - cos(x)");
        printf("\n 3 - f(x) = x . ln(x) - 1\n");
        printf("\nSua escolha: ");
            scanf("%d", &op);
            fflush(stdin);

    resultzero = Zero(x0,op);
    printf("\n Solução = %.2lf\n", resultzero);
    printf("\n Erro = %.2lf\n", resultzero);
    }

    printf("\nO que deseja fazer?\n");
    printf("\nS - Para voltar ao menu inicial\n");
    printf("\nN - Para sair \n");
    printf("\nEscolha a opcao: ");
    fflush(stdin);
    final = getchar();
    system("cls");
    system("PAUSE");

  }while(final == 'N' || final == 'n' && final == 'S' || final == 's');

    return 0;
}
