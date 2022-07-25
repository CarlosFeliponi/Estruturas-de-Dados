#include <stdio.h>
#include <stdlib.h>
#include "LIFO_Vetorial_lib.h"

int main()
{
    int opcao;
    int ValorDigitado;
    int sair = 7;

    do{
    printf("1 - Adicionar um elemento\n");
    printf("2 - Remover um elemento\n");
    printf("3 - Verificar o tamanho atual da pilha\n");
    printf("4 - Listar todos os elementos\n");
    printf("5 - Verificar o ultimo elemento\n");
    printf("6 - Limpar todos os elementos\n");
    printf("7 - Sair\n");

    scanf("%d",&opcao);

    switch(opcao){
        case 1:
            if(topo == TAM_MAX_PILHA){
                printf("ERRO : Pilha Cheia\n");
            }else{
                printf("Digite o Valor Inteiro a Adicionar: \n");
                scanf("%d",&ValorDigitado);
                Push(ValorDigitado);
                printf("Valor Adicionado com Sucesso!\n");
            }
            break;

        case 2:
            if(topo == PILHA_VAZIA){
                printf("ERRO : Pilha Vazia!\n");
            }else{
                printf("Elemento Removido: %d\n",Pop());
            }

            break;

        case 3:
            printf("Tamanho Atual da Pilha: %d\n", Size());
            break;

        case 4:
            if(topo == PILHA_VAZIA){
                printf("ERRO : Pilha Vazia!\n");
            }else{
                printf("Todos Valores Atuais na Pilha:\n");
                List();
            }

            break;

        case 5:
            printf("Ultimo Elemento Adicionado: %d\n", Peek());
            break;

        case 6:
            Clear();
            printf("Pilha Limpada com Sucesso\n");
            break;

        case 7:
            printf("Saindo...\n");
            break;

        default:
            printf("ERRO : Opcao Invalida, Tente Novamente\n");
            break;
        }

    system("Pause");
    system("cls");

    }while(opcao != sair);

    return 0;
}
