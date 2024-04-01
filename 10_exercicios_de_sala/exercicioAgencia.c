#include <stdio.h>
#include <string.h>

#define MAX_STRING 100

typedef struct
{
    int dia;
    int mes;
    int ano;
} tData;

typedef struct
{
    char nome[MAX_STRING];
    int cpf;
    tData dataDeNascimento;
    char endereco[MAX_STRING];
    int celular;
    char email[MAX_STRING];
    float saldo;
} tCliente;

tCliente LeCliente(int numCliente, tCliente cliente[])
{
    printf("Digite seu nome completo:\n");
    fgets(cliente[numCliente].nome, MAX_STRING, stdin);
    printf("Digite seu cpf (sem pontos e traços):\n");
    scanf("%d", &cliente[numCliente].cpf);
    printf("Digite sua data de nascimento no formato DIA MES ANO:\n");
    scanf("%d %d %d", &cliente[numCliente].dataDeNascimento.dia, &cliente[numCliente].dataDeNascimento.mes, &cliente[numCliente].dataDeNascimento.ano);
    printf("Digite seu endereco:\n");
    fgets(cliente[numCliente].endereco, MAX_STRING, stdin);
    printf("Digite seu numero de celular:\n");
    scanf("%d", &cliente[numCliente].celular);
    printf("Digite seu email:\n");
    fgets(cliente[numCliente].email, MAX_STRING, stdin);
    printf("Digite seu saldo:\n");
    scanf("%f", &cliente[numCliente].saldo);
}

void ImprimeCliente(tCliente cliente[], int numCliente)
{
    printf("%s\n", cliente[numCliente].nome);
    printf("%d\n", cliente[numCliente].cpf);
    printf("%d/%d/%d\n", cliente[numCliente].dataDeNascimento.dia, cliente[numCliente].dataDeNascimento.mes, cliente[numCliente].dataDeNascimento.dia);
    printf("%s\n", cliente[numCliente].endereco);
    printf("%d\n", cliente[numCliente].celular);
    printf("%s\n", cliente[numCliente].email);
    printf("%f\n", cliente[numCliente].saldo);
}

int main()
{
    int numCliente = 0;
    tCliente cliente[100];
    LeCliente(numCliente, cliente);
    ImprimeCliente(cliente, numCliente);
    return 0;
}