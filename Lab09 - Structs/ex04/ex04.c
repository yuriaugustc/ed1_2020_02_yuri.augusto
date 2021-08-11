#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct telefone{
    int ddd;
    char telefone[20];
};
struct data{
    int dia;
    char mes[50];
    int ano;
};
struct endereco {
    int numero;
    char rua[50];
    char complemento[50];
    char cidade[50];
    char estado[3];
    char cep[20];
};
struct cadastro {
    char nome[50];
    struct endereco comercial;
    int salario;
    int idade;
    char cpf[20];
    char rg[20];
    char est_civil[20];
    struct telefone social;
    struct data nascimento;
    char sexo[2];
    struct endereco residencial;
    struct telefone pessoal;
    struct data ingresso;
};

void lista_cadastro(struct cadastro users[], int data){
    int cont = 0;
    for(int i = 0; i < 5; i++){
        if(users[i].nascimento.ano > data){
        printf("Lista de usuários cadastrados: \n");
        printf("Posição: %d\n", i);
        printf("Informações Pessoais: \n");
        printf("Nome: %s, ",users[i].nome);
        printf("Idade: %d, ", users[i].idade);
        printf("CPF: %s, ", users[i].cpf);
        printf("Sexo: %s, ", users[i].sexo);
        printf("Estado civil: %s\n", users[i].est_civil);
        printf("Salário: %d, ", users[i].salario);
        printf("Identidade: %s\n", users[i].rg);
        printf("Telefone Residencial: (%d) %s\n", users[i].pessoal.ddd,users[i].pessoal.telefone);
        printf("Telefone: (%d) %s\n", users[i].social.ddd, users[i].social.telefone);
        printf("Data de Nascimento: %d de %s de %d\n", users[i].nascimento.dia, users[i].nascimento.mes, users[i].nascimento.ano);
        printf("Data de ingresso: %d de %s de %d\n\n", users[i].ingresso.dia, users[i].ingresso.mes, users[i].ingresso.ano);
        printf("Endereço Comercial:\n");
        printf("Rua: %s, N°: %d, ", users[i].comercial.rua, users[i].comercial.numero);
        printf("Complemento: %s, Cidade: %s\n", users[i].comercial.complemento, users[i].comercial.cidade);
        printf("Estado: %s,CEP: %s\n\n", users[i].comercial.estado,users[i].comercial.cep);
        printf("Endereço Residencial: \n");
        printf("Rua: %s, N°: %d, ", users[i].residencial.rua, users[i].residencial.numero);
        printf("Complemento: %s, Cidade: %s\n", users[i].residencial.complemento, users[i].residencial.cidade);
        printf("Estado: %s,CEP: %s\n\n", users[i].residencial.estado,users[i].residencial.cep);
        cont++;
        }
    }
    if(cont == 0){
        printf("No momento, o cadastro não possui pessoas com nascimento depois de 1990!\n");
    }
    printf("Pressione qualquer tecla para voltar ao menu principal.");
    setbuf(stdin, NULL);
    getchar();
    system("cls");
    return;
}

void substitui_cadastro(struct cadastro users[]){
    int op;

    printf("Qual a posição do usuário que você deseja cadastrar/sobrescrever?\n");
    scanf("%d", &op);
    printf("Posição: %d\n", op);
    printf("Informações Pessoais: \n");
    printf("Nome: "); fgets(users[op].nome, 50, stdin);
    printf("Idade: "); scanf("%d", &users[op].idade);
    printf("CPF: "); fgets(users[op].cpf, 20, stdin);
    printf("Sexo: "); fgets(users[op].sexo, 2, stdin);
    printf("Estado civil: "); fgets(users[op].est_civil, 20, stdin);
    printf("Salário: "); scanf("%d", &users[op].salario);
    printf("Identidade: "); fgets(users[op].rg, 15, stdin);
    printf("Telefone Residencial: (ddd) 9nnnn-nnnn: "); scanf("%d", &users[op].pessoal.ddd); fgets(users[op].pessoal.telefone, 20, stdin);
    printf("Telefone: (ddd) 9nnnn-nnnn: "); scanf("%d", &users[op].social.ddd); fgets(users[op].social.telefone, 20, stdin);
    printf("Data de Nascimento: "); scanf("%d", &users[op].nascimento.dia); fgets(users[op].nascimento.mes, 20, stdin); scanf("%d", &users[op].nascimento.ano);
    printf("Data de Ingresso: "); scanf("%d", &users[op].ingresso.dia); fgets(users[op].ingresso.mes, 20, stdin); scanf("%d", &users[op].ingresso.ano);
    printf("Endereço Comercial:\n");
    printf("Rua: "); fgets(users[op].comercial.rua,50,stdin); printf("N°: "); scanf("%d", &users[op].comercial.numero);
    printf("Complemento: "); fgets(users[op].comercial.complemento, 50, stdin); printf("Cidade: "); fgets(users[op].comercial.cidade, 50, stdin);
    printf("Estado: "); fgets(users[op].comercial.estado, 2, stdin); printf("CEP: "); fgets(users[op].comercial.cep, 15, stdin);
    printf("Endereço Residencial: \n");
    printf("Rua: "); fgets(users[op].residencial.rua,50,stdin); printf("N°: "); scanf("%d", &users[op].residencial.numero);
    printf("Complemento: "); fgets(users[op].residencial.complemento, 50, stdin); printf("Cidade: "); fgets(users[op].residencial.cidade, 50, stdin);
    printf("Estado: "); fgets(users[op].residencial.estado, 2, stdin); printf("CEP: "); fgets(users[op].residencial.cep, 15, stdin);

    printf("Pressione qualquer tecla para voltar ao menu principal.");
    setbuf(stdin, NULL);
    getchar();
    system("cls");
    return;
}

void lista_depois_1990(struct cadastro users[]){
    int data = 1990;
    printf("Listando todos os cadastros após a data de 1990: \n");
    lista_cadastro(users, data);
    system("cls");
}

void copia_cad_outro(struct cadastro users[]){
    int op, op2;
    printf("Digite a posição que deseja copiar: ");
    scanf("%d", &op);
    printf("Digite a posição que deseja inserir a posição copiada: ");
    scanf("%d", &op2);
    users[op2] = users[op];

    printf("Pressione qualquer tecla para voltar ao menu principal.");
    setbuf(stdin, NULL);
    getchar();
    system("cls");
    return;
}

void carrega_users(struct cadastro users[]){
    //user1
    strcpy(users[0].nome,"Cersei Lannister");
    users[0].idade = 100;
    users[0].nascimento.dia = 1;
    strcpy(users[0].nascimento.mes, "Janeiro");
    users[0].nascimento.ano = 262;
    strcpy(users[0].cpf, "111111111-11");
    strcpy(users[0].rg, "WE-11.111.111.111");
    strcpy(users[0].sexo, "F");
    strcpy(users[0].comercial.rua,"Colina de Aegon");
    users[0].comercial.numero = 1;
    strcpy(users[0].comercial.cidade, "Porto Real");
    strcpy(users[0].comercial.estado, "WE");
    strcpy(users[0].comercial.complemento, "Red Keep");
    strcpy(users[0].comercial.cep,"11111-11");
    strcpy(users[0].est_civil, "Viuva");
    strcpy(users[0].residencial.rua,"Colina de Aegon");
    users[0].residencial.numero = 1;
    strcpy(users[0].residencial.cidade, "Porto Real");
    strcpy(users[0].residencial.estado, "WE");
    strcpy(users[0].residencial.complemento, "Red Keep");
    strcpy(users[0].residencial.cep , "11111-11");
    users[0].salario = 111111;
    users[0].social.ddd = 11;
    strcpy(users[0].social.telefone, "91111-1111");
    users[0].pessoal.ddd = 11;
    strcpy(users[0].pessoal.telefone, "91111-1111");
    users[0].ingresso.dia = 1;
    strcpy(users[0].ingresso.mes, "Janeiro");
    users[0].ingresso.ano = 276;
    //user 2
    strcpy(users[1].nome,"John Snow");
    users[1].idade = 200;
    users[1].nascimento.dia = 2;
    strcpy(users[1].nascimento.mes, "Fevereiro");
    users[1].nascimento.ano = 281;
    strcpy(users[1].cpf, "222222222-22");
    strcpy(users[1].rg, "WE-22.222.222.222");
    strcpy(users[1].sexo, "M");
    strcpy(users[1].comercial.rua,"Norte dos 7 Reinos");
    users[1].comercial.numero = 2;
    strcpy(users[1].comercial.cidade, "A Muralha");
    strcpy(users[1].comercial.estado, "WE");
    strcpy(users[1].comercial.complemento, "Castelo Negro");
    strcpy(users[1].comercial.cep, "22222-22");
    strcpy(users[1].est_civil, "Solteiro");
    strcpy(users[1].residencial.rua,"Norte dos 7 Reinos");
    users[1].residencial.numero = 2;
    strcpy(users[1].residencial.cidade, "A Muralha");
    strcpy(users[1].residencial.estado, "WE");
    strcpy(users[1].residencial.complemento, "Castelo Negro");
    strcpy(users[1].residencial.cep,"22222-22");
    users[1].salario = 222222;
    users[1].social.ddd = 22;
    strcpy(users[1].social.telefone, "92222-2222");
    users[1].pessoal.ddd = 22;
    strcpy(users[1].pessoal.telefone, "92222-2222");
    users[1].ingresso.dia = 2;
    strcpy(users[1].ingresso.mes, "Fevereiro");
    users[1].ingresso.ano = 295;
    //user 3
    strcpy(users[2].nome,"Jaime Lannister");
    users[2].idade = 300;
    users[2].nascimento.dia = 3;
    strcpy(users[2].nascimento.mes, "Marco");
    users[2].nascimento.ano = 262;
    strcpy(users[2].cpf, "333333333-33");
    strcpy(users[2].rg, "WE-33.333.333.333");
    strcpy(users[2].sexo, "M");
    strcpy(users[2].comercial.rua,"Colina de Aegon");
    users[2].comercial.numero = 3;
    strcpy(users[2].comercial.cidade, "Porto Real");
    strcpy(users[2].comercial.estado, "WE");
    strcpy(users[2].comercial.complemento, "Red Keep");
    strcpy(users[2].comercial.cep,"33333-33");
    strcpy(users[2].est_civil, "Solteiro");
    strcpy(users[2].residencial.rua,"Colina de Aegon");
    users[2].residencial.numero = 3;
    strcpy(users[2].residencial.cidade, "Porto Real");
    strcpy(users[2].residencial.estado, "WE");
    strcpy(users[2].residencial.complemento, "Red Keep");
    strcpy(users[2].residencial.cep, "33333-33");
    users[2].salario = 333333;
    users[2].social.ddd = 33;
    strcpy(users[2].social.telefone, "93333-3333");
    users[2].pessoal.ddd = 33;
    strcpy(users[2].pessoal.telefone, "93333-3333");
    users[2].ingresso.dia = 3;
    strcpy(users[2].ingresso.mes, "Marco");
    users[2].ingresso.ano = 276;;
    //user 4
    strcpy(users[3].nome,"Samwell Tarly");
    users[3].idade = 400;
    users[3].nascimento.dia = 4;
    strcpy(users[3].nascimento.mes, "Abril");
    users[3].nascimento.ano = 283;
    strcpy(users[3].cpf, "444444444-44");
    strcpy(users[3].rg, "WE-44.444.444.444");
    strcpy(users[3].sexo, "M");
    strcpy(users[3].comercial.rua,"Norte dos 7 Reinos");
    users[3].comercial.numero = 4;
    strcpy(users[3].comercial.cidade, "A Muralha");
    strcpy(users[3].comercial.estado, "WE");
    strcpy(users[3].comercial.complemento, "Castelo Negro");
    strcpy(users[3].comercial.cep, "44444-44");
    strcpy(users[3].est_civil, "Solteiro");
    strcpy(users[3].residencial.rua,"Norte dos 7 Reinos");
    users[3].residencial.numero = 4;
    strcpy(users[3].residencial.cidade, "A Muralha");
    strcpy(users[3].residencial.estado, "WE");
    strcpy(users[3].residencial.complemento, "Castelo Negro");
    strcpy(users[3].residencial.cep, "44444-44");
    users[3].salario = 444444;
    users[3].social.ddd = 44;
    strcpy(users[3].social.telefone, "94444-4444");
    users[3].pessoal.ddd = 44;
    strcpy(users[3].pessoal.telefone, "94444-4444");
    users[3].ingresso.dia = 4;
    strcpy(users[3].ingresso.mes, "Abril");
    users[3].ingresso.ano = 295;
    //user 5
    strcpy(users[4].nome,"Cersei Lannister");
    users[4].idade = 500;
    users[4].nascimento.dia = 1;
    strcpy(users[4].nascimento.mes, "Janeiro");
    users[4].nascimento.ano = 262;
    strcpy(users[4].cpf, "111111111-11");
    strcpy(users[4].rg, "WE-11.111.111.111");
    strcpy(users[4].sexo, "F");
    strcpy(users[4].comercial.rua,"Colina de Aegon");
    users[4].comercial.numero = 1;
    strcpy(users[4].comercial.cidade, "Porto Real");
    strcpy(users[4].comercial.estado, "WE");
    strcpy(users[4].comercial.complemento, "Red Keep");
    strcpy(users[4].comercial.cep, "11111-11");
    strcpy(users[4].est_civil, "Viuva");
    strcpy(users[4].residencial.rua,"Colina de Aegon");
    users[4].residencial.numero = 1;
    strcpy(users[4].residencial.cidade, "Porto Real");
    strcpy(users[4].residencial.estado, "WE");
    strcpy(users[4].residencial.complemento, "Red Keep");
    strcpy(users[4].residencial.cep, "11111-11");
    users[4].salario = 111111;
    users[4].social.ddd = 11;
    strcpy(users[4].social.telefone, "1111-1111");
    users[4].pessoal.ddd = 11;
    strcpy(users[4].pessoal.telefone, "1111-1111");
    users[4].ingresso.dia = 1;
    strcpy(users[4].ingresso.mes, "Janeiro");
    users[4].ingresso.ano = 276;

}

int main(){
    int op, data = 0;
    struct cadastro usuarios[5];
    carrega_users(usuarios);
    do{
        printf("\n<< Cadastro de Usuários >>\n");
        printf("1 - Listar todos os cadastros\n");
        printf("2 - Cadastrar/Sobrescrever nova pessoa\n");
        printf("3 - Listar as pessoas que nasceram depois de 1990\n");
        printf("4 - Copiar dados de um cadastro para outro\n");
        printf("0 - Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &op);
        if(op == 1){ lista_cadastro(usuarios, data);}
        if(op == 2){ substitui_cadastro(usuarios);}
        if(op == 3){ lista_depois_1990(usuarios);}
        if(op == 4){ copia_cad_outro(usuarios);}
    }while(op != 0);
    return 0;
}

/*
1) 4.Define a estrutura necessária para armazenar os dados a seguir. 
Use as subestruturas dos   exercícios   anteriores para definir os tipos
dos campos com asterisco. Dê suporte para o cadastro de 5 pessoas:  

Cadastro
+------------+---------------------+--------------------------+------------------------+
| Nome       | Endereço comercial* |         Salário          |       Idade            | 
+------------+---------------------+--------------------------+--------+---------------+
| CPF        | Estado civil        |        Telefone**        | Data de nascimento *** |   
+------------+---------------------+--------------------------+--------+---------------+
| Sexo       |Endereço residencial*|  Telefone residencial ** | Data de ingresso ***   | 
+------------+---------------------+--------------------------+--------+---------------+

(a)Cadastre 5 usuários no seu código (não pedir para digitar – cadastre no próprio código
fonte, utilizando comandos de atribuição). A ideia disso é evitar digitação excessiva
durante o teste do programa.

(b)Crie um menu com as seguintes opções:
    a.Listar todos os cadastros
    b.Cadastrar/Sobrescrever nova pessoa (pedir em qual posição do vetor ela será cadastrada 0,1,2,3, ou 4)
    c.Listar as pessoas que nasceram depois de 1990.
    d.Copiar dados de um cadastro para outro


-------------------------------------------------------------------------------
Exemplo de saída:

=======Exemplo do menu=======

<< Cadastro de Usuários >> 

1 - Listar todos os cadastros  
2 - Cadastrar/Sobrescrever nova pessoa  
3 - Listar as pessoas que nasceram depois de 1990  
4 - Copiar dados de um cadastro para outro   
0 - Sair 
Escolha uma opção: 1

Lista de usuários cadastrados: 

Posição: 0 
Informacoes Pessoais: 
Nome: Cersei Lannister, CPF: 111111111-11, Sexo: F, Estado Civil: Viuva 
Salario: 111111, Identidade:  WE-11.111.111 
Telefone residencial: (11) 11111-1111 
Telefone: (11) 91111-1111 
Data de Nascimento:  1 de janeiro de 262 
Data de Ingresso: 1 de janeiro de 276 

Endereço comercial: 
Rua:  Colina de Aegon, Nº: 1, Complemento: Red Keep, Cidade: Porto Real  
Estado: WE, CEP: 11111-111 

Endereço residencial: 
Rua:  Colina de Aegon, Nº: 1, Complemento: Red Keep, Cidade: Porto Real  
Estado: WE, CEP: 11111-111 

Posição: 1 
Informacoes Pessoais: 
Nome:  John Snow, CPF: 222222222-22, Sexo: M, Estado Civil: Solteiro 
Salario: 111111, Identidade:  WE-22.222.222 
Telefone residencial: (11) 22222-2222 
Telefone: (11) 92222-2222 
Data de Nascimento:  2 de fevereiro de 281 
Data de Ingresso: 2 de fevereiro de 295 

Endereço comercial: 
Rua:  Norte dos 7 Reinos, Nº: 1, Complemento: Castelo Negro, Cidade: A Muralha  
Estado: WE, CEP: 11111-111 

Endereço residencial: 
Rua:  Norte dos 7 Reinos, Nº: 1, Complemento: Castelo Negro, Cidade: A Muralha  
Estado: WE, CEP: 11111-111 

Posição: 2 
Informacoes Pessoais: 
Nome: Jaime Lannister, CPF: 333333333-33, Sexo: M, Estado Civil: Solteiro 
Salario: 111111, Identidade:  WE-33.333.333 
Telefone residencial: (11) 11111-1111 
Telefone: (11) 91111-1111 
Data de Nascimento:  1 de janeiro de 262 
Data de Ingresso: 1 de janeiro de 276 

Endereço comercial: 
Rua:  Colina de Aegon, Nº: 1, Complemento: Red Keep, Cidade: Porto Real  
Estado: WE, CEP: 11111-111 

Endereço residencial: 
Rua:  Colina de Aegon, Nº: 1, Complemento: Red Keep, Cidade: Porto Real  
Estado: WE, CEP: 11111-111 

Posição: 3 
Informacoes Pessoais: 
Nome: Samwell Tarly, CPF: 444444444-44, Sexo: M, Estado Civil: Solteiro 
Salario: 111111, Identidade:  WE-44.444.444 
Telefone residencial: (11) 22222-2222 
Telefone: (11) 92222-2222 
Data de Nascimento:  2 de fevereiro de 283 
Data de Ingresso: 2 de fevereiro de 295 

Endereço comercial: 
Rua:  Norte dos 7 Reinos, Nº: 1, Complemento: Castelo Negro, Cidade: A Muralha  
Estado: WE, CEP: 11111-111 

Endereço residencial: 
Rua:  Norte dos 7 Reinos, Nº: 1, Complemento: Castelo Negro, Cidade: A Muralha  
Estado: WE, CEP: 11111-111 

-------------------------------------------------------------------------------
*/