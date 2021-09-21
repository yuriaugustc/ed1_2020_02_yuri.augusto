/*
2) Considerando o TAD ListaSequencial¹, implemente uma nova função
chamada remove_intervalo_lista, que retira da lista todos os elementos
de uma posição inicial até uma posição final.  Por exemplo,
na chamada abaixo, são retirados da lista os elementos das
posições 5,6,7,8 e 9. Não é permitido chamar outras funções do TAD Lista. 
Nas situações inválidas a função deverá retornar como código de erro
o número -1. Sucesso retornar 0. Mantenha o padrão pré-definido do
TAD, que diz que a posição 1 corresponde ao primeiro elemento da lista.

Exemplo de chamada da função:
remove_intervalo_lista(lista,5,9)

int remove_intervalo_lista(Lista *li, int pos1, int pos2){
    if(li == NULL)
        return -1;
    if (pos1 <=0 || pos1 > li->qtd)
        return -1;
    if (pos2 <=0 || pos2 > li->qtd)
        return -1;
    Lista *aux;
    int a = pos2; 
    int b = pos1;
    
    for (int i = pos2-1; i >= pos1; i--){ //este for faz o controle de quantas casas serão chegadas para frente
        for(int i = a; i >= b; i--)     //este for empurra posicao por posicao até a ultima vaga, pelo menos eu espero que faça isso;
            li->dados[i-1] = li->dados[i];
        a++; 
        b++;
        //if(b == pos2) // controle para saber se o buraco foi preenchido;
        //    break;    // acabei chegando a conclusao de que o primeiro for ja vai fazer esse controle, gostaria de saber se estou certo ou não quando corrigir;
    }
    
    int aux1 = pos2 - pos1;
    li->qtd -= aux1; // redefinindo a quantidade de alunos na lista;
    free(aux);
    return 0;
}

*/