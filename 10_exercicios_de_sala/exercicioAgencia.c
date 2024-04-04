#include <stdio.h>
#include <string.h>

typedef struct tCliente
{
    int codigo;
    char nome[100];
    char dataNascimento[11];
    char cpf[12];
    char endereco[100];
    char celular[15];
    char email[50];
    float saldo;
} tCliente;

void cadastrarCliente(tCliente *clientes, int *nClientes)
{
    int codigoGerado;

    printf("Nome completo: ");
    scanf(" %[^\n]%*c", clientes[*nClientes].nome);
    printf("Data de nascimento (DD/MM/AAAA): ");
    scanf(" %[^\n]%*c", clientes[*nClientes].dataNascimento);
    printf("CPF (apenas numeros): ");
    scanf(" %[^\n]%*c", clientes[*nClientes].cpf);
    printf("Endereço: ");
    scanf(" %[^\n]%*c", clientes[*nClientes].endereco);
    printf("Celular: ");
    scanf(" %[^\n]%*c", clientes[*nClientes].celular);
    printf("Email: ");
    scanf(" %[^\n]%*c", clientes[*nClientes].email);
    printf("Saldo inicial: R$ ");
    scanf("%f", &clientes[*nClientes].saldo);

    codigoGerado = *nClientes + 1;

    clientes[*nClientes].codigo = codigoGerado;

    (*nClientes)++;
}

void removerCadastro(tCliente *clientes, int *nClientes)
{
    int codigoCliente, i;

    printf("Digite o código do cliente: ");
    scanf("%d", &codigoCliente);
    for (i = 0; i < *nClientes; i++)
    {
        if (clientes[i].codigo == codigoCliente)
        {
            break;
        }
    }
    if (i == *nClientes)
    {
        printf("Cliente não encontrado!\n");
        return;
    }
    for (; i < *nClientes - 1; i++)
    {
        clientes[i] = clientes[i + 1];
    }

    (*nClientes)--;
}

void aumentarSaldo(tCliente *clientes, int nClientes)
{
    int i;
    int codigoCliente;
    float valor;

    printf("Digite o código do cliente: ");
    scanf("%d", &codigoCliente);
    printf("Digite o valor a ser adicionado/retirado: R$ ");
    scanf("%f", &valor);

    for (i = 0; i < nClientes; i++)
    {
        if (clientes[i].codigo == codigoCliente)
        {
            break;
        }
    }

    if (i < nClientes)
    {
        clientes[i].saldo += valor;
        printf("Saldo do cliente atualizado: R$ %.2f\n", clientes[i].saldo);
    }
    else
    {
        printf("Cliente não encontrado!\n");
    }
}

void diminuirSaldo(tCliente *clientes, int nClientes)
{
    int i;
    int codigoCliente;
    float valor;

    printf("Digite o código do cliente: ");
    scanf("%d", &codigoCliente);
    printf("Digite o valor a ser adicionado/retirado: R$ ");
    scanf("%f", &valor);

    for (i = 0; i < nClientes; i++)
    {
        if (clientes[i].codigo == codigoCliente)
        {
            break;
        }
    }

    if (i < nClientes)
    {
        if (valor <= clientes[i].saldo)
        {
            clientes[i].saldo -= valor;
            printf("Saldo do cliente atualizado: R$ %.2f\n", clientes[i].saldo);
        }
        else
        {
            printf("Saldo insuficiente!\n");
        }
    }
    else
    {
        printf("Cliente não encontrado!\n");
    }
}

void listarClientes(tCliente *clientes, int nClientes)
{
    int i;

    if (nClientes == 0)
    {
        return;
    }

    for (i = 0; i < nClientes; i++)
    {
        printf("\n**Cliente %d**\n", i + 1);
        printf("Nome: %s\n", clientes[i].nome);
        printf("Data de nascimento: %s\n", clientes[i].dataNascimento);
        printf("CPF: %s\n", clientes[i].cpf);
        printf("Endereço: %s\n", clientes[i].endereco);
        printf("Celular: %s\n", clientes[i].celular);
        printf("Email: %s\n", clientes[i].email);
        printf("Saldo: R$ %.2f\n", clientes[i].saldo);
        printf("Codigo: %d", clientes[i].codigo);
    }
}

int main()
{
    tCliente clientes[100];
    int nClientes = 0;
    int opcao;
    do
    {
        printf("\n**Menu de Cadastro de Clientes**\n");
        printf("1. Cadastrar cliente\n");
        printf("2. Remover cliente\n");
        printf("3. Aumentar saldo\n");
        printf("4. Diminuir saldo\n");
        printf("5. Listar clientes\n");
        printf("6. Sair\n");
        printf("Digite a opção desejada: ");
        scanf("%d", &opcao);
        switch (opcao)
        {
        case 1:
            cadastrarCliente(clientes, &nClientes);
            break;
        case 2:
            removerCadastro(clientes, &nClientes);
            break;
        case 3:
            aumentarSaldo(clientes, nClientes);
            break;
        case 4:
            diminuirSaldo(clientes, nClientes);
            break;
        case 5:
            listarClientes(clientes, nClientes);
            break;
        }
    } while (opcao != 6);
    return 0;
}
