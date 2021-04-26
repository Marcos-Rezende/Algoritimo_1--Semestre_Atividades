//Nome completo: Marcos Rezende dos Santos Matrícula: UC21106205 Curso: Ciência da Computação

#include<stdio.h>//Declarar uma biblioteca que faz a leitura e processamento de dados escritos no programa.
#include<math.h>//Declarar uma biblioteca que faz o processamento de expressões matemáticas.
#include<string.h>//Declarar uma biblioteca que faz a leitura de springs com "espaços".
#include<stdlib.h>//Declarar uma biblioteca que faz a alocação de memória.
#include<ctype.h>//Declara uma biblioteca que faz a leitura de letras maisculas e minuscula.

int main(){//Inicialização do algoritmo. 
int sessoesDeFilmes, quantidadeDeUsuarios, idadeUsuario;//Declaração de variavéis inteiras.
char nomeFilme[50], sexoUsuario;//Inicialização de variavéis de caractéres.
int crianca, adolescente, adulto, idoso, homem, mulher, homemMaiorDeIdade, mulherMaiorDeIdade;//Declaração de variavéis inteiras.
int i;//Declaração de variavel inteira.
crianca=0;//Inicialização de variável.
adolescente=0;//Inicialização de variável.
adulto=0;//Inicialização de variável.
idoso=0;//Inicialização de variável.
homem=0;//Inicialização de variável.
mulher=0;//Inicialização de variável.
homemMaiorDeIdade=0;//Inicialização de variável.
mulherMaiorDeIdade=0;//Inicialização de variável.



do{//Inicializaçao de uma função, que tem como objetivo criar repetição.
    printf("Caro gerente de vendas informe a quantidade de sessoes: \n");//Pedir ao algaritmo para escrever uma mensagagem na tela.
    scanf("%d", &sessoesDeFilmes);//Alocar uma informação em uma variável que não seja carácter.
    fflush(stdin);//Limpar buffer de memória.
    if(sessoesDeFilmes <2 || sessoesDeFilmes >2)//Função "If...Else", ajudar a escolher entre duas ou mais opções.
    printf("A quantidade de sessoes nao e aceita.\n");//Pedir ao algaritmo para escrever uma mensagagem na tela.
    else//Função "If...Else", ajudar a escolher entre duas ou mais opções.
    printf("A quantidade de sessoes e uma quantidade aceita.\n");//Pedir ao algaritmo para escrever uma mensagagem na tela.
}
    while (sessoesDeFilmes <2 || sessoesDeFilmes >2);//Função de repetição.

do{//Inicializaçao de uma função, que tem como objetivo criar repetição.
    printf("Gerente de vendas, por favor, nos informe em qual filme foi feita a pesquisa: \n");//Pedir ao algaritmo para escrever uma mensagagem na tela.
    fgets(nomeFilme, 50, stdin);//Alocar uma informação em uma variável carácter.
    fflush(stdin);//Limpar buffer de memória.
    if (strlen(nomeFilme) <=2 )//Função "If", ajuda à caracterizar uma variável.
    {printf("Este filme nao esta em nosso cartaz, no momento, favor nos apresentar o filme certo! \n");//Pedir ao algaritmo para escrever uma mensagagem na tela.
    }
    
}
    while (strlen(nomeFilme) <=2 );//Função de repetição.

do{//Inicializaçao de uma função, que tem como objetivo criar repetição.
    printf("Favor senhor gerente de vendas agora nos informe quantas pessoas assistiram ao filme das pesquisas: \n");//Pedir ao algaritmo para escrever uma mensagagem na tela.
scanf("%d", &quantidadeDeUsuarios);//Alocar uma informação em uma variável que não seja carácter.
fflush(stdin);//Limpar buffer de memória.
if (quantidadeDeUsuarios <10)//Função "If...Else", ajudar a escolher entre duas ou mais opções.
printf("Quantidade invalida\n ");//Pedir ao algaritmo para escrever uma mensagagem na tela.
else//Função "If...Else", ajudar a escolher entre duas ou mais opções.
printf("Quantidade valida. \n");//Pedir ao algaritmo para escrever uma mensagagem na tela.
} 
while (quantidadeDeUsuarios <10);//Função de repetição.
fflush(stdin);//Limpar buffer de memória.
for(i=0;i < quantidadeDeUsuarios;i++){//Ínicio de uma função. Função "For" é uma função que faz a repetição de uma ou mais variáveis alocando diversos valores nelas e "criando" novas informações de acordo com o autoincremento.
do{//Inicializaçao de uma função, que tem como objetivo criar repetição.
    printf("Digite a idade da pessoa %d: \n", i+1);//Pedir ao algaritmo para escrever uma mensagagem na tela.
    scanf("%i", &idadeUsuario);//Alocar uma informação em uma variável que não seja carácter.
    fflush(stdin);//Limpar buffer de memória.
    if(idadeUsuario <3 || idadeUsuario >100)//Função "If", ajuda à caracterizar uma variável.
    printf("Nao aceitamos este perfil de usuarios. \n");//Pedir ao algaritmo para escrever uma mensagagem na tela.

    if(idadeUsuario >= 3 && idadeUsuario <=13)//Função "If", ajuda à caracterizar uma variável.
       {
           crianca = crianca + 1;//Variável recebendo valores distintos.
           }
    if(idadeUsuario >= 14 && idadeUsuario <= 17)//Função "If", ajuda à caracterizar uma variável.
        {
            adolescente = adolescente +1 ;//Variável recebendo valores distintos.
            }
    if(idadeUsuario >= 18 && idadeUsuario <= 64)//Função "If", ajuda à caracterizar uma variável.
        {
            adulto = adulto + 1;//Variável recebendo valores distintos.
            }
    if(idadeUsuario >= 65 && idadeUsuario <= 100)//Função "If", ajuda à caracterizar uma variável.
        {
            idoso = idoso + 1;//Variável recebendo valores distintos.
            }
}
    while(idadeUsuario <3 || idadeUsuario >100);//Função de repetição.
do{//Inicializaçao de uma função, que tem como objetivo criar repetição.
    fflush(stdin);//Limpar buffer de memória.
    printf("Informe o sexo: \n");//Pedir ao algaritmo para escrever uma mensagagem na tela.
    scanf("%c", &sexoUsuario);//Alocar uma informação em uma variável que não seja carácter.
    sexoUsuario =toupper(sexoUsuario);//Toupper aceita uma informação em letra minúscula que deveria ser maiscúla.
    if(sexoUsuario != 'M' && sexoUsuario != 'F')//Função "If", ajuda à caracterizar uma variável.
    {printf("Sexo invalido. \n");}//Pedir ao algaritmo para escrever uma mensagagem na tela.
    if ('F' == sexoUsuario)//Função "If", ajuda à caracterizar uma variável.
    {
        mulher = mulher + 1;//Variável recebendo valores distintos.
        }
    if('M' == sexoUsuario)//Função "If", ajuda à caracterizar uma variável.
    {
        homem = homem + 1;//Variável recebendo valores distintos.
        }
}
    while (sexoUsuario != 'F' && sexoUsuario !='M');//Função de repetição.
    
if ((idadeUsuario >= 18) && (sexoUsuario =='M'))//Função "If", ajuda à caracterizar uma variável.
    {
        homemMaiorDeIdade++;//Variável recebendo valores distintos.
    }
if ((idadeUsuario >= 18) && (sexoUsuario =='F'))//Função "If", ajuda à caracterizar uma variável.
    {
        mulherMaiorDeIdade++;//Variável recebendo valores distintos.
    }

}

system("pause");//fazer com que o algaritmo não finalize o processamento sem ordens prêvias.
system("cls");//Limpar, na tela de propt, as mensagens.
printf("Filme: %s homem: %d\n mulher: %d \n idoso: %d\n adulto: %d\n adolescente: %d\n crianca: %d\n", nomeFilme, homem, mulher, idoso, adulto, adolescente, crianca);//Pedir ao algaritmo para escrever uma mensagagem na tela.
system("pause");//fazer com que o algaritmo não finalize o processamento sem ordens prêvias.
system("cls");//Limpar, na tela de propt, as mensagens.
printf("A quantidade de homem(ns) adulto(s) e: %d \n", homemMaiorDeIdade);//Pedir ao algaritmo para escrever uma mensagagem na tela.
printf("A quantidade de mulher(es) adulta(s) e: %d \n", mulherMaiorDeIdade);//Pedir ao algaritmo para escrever uma mensagagem na tela.
system("pause");//fazer com que o algaritmo não finalize o processamento sem ordens prêvias.


return 0;//retornar à zero.
}
