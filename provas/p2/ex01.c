/*
1) Considerando o TAD ListaSequencial¹, implemente uma nova 
função chamada troca_pos_lista, que troca dois elementos da
lista de posição. Na chamada da função o usuário deverá informar
os dois elementos que devem ser trocados. Por exemplo, na chamada
abaixo, é feita a troca dos elementos na posição 4 e 10, isto é,
o elemento da posição 4 vai para a posição 10, e o da  posição 10
vai para a posição 4. Nas situações inválidas a função deverá
retornar como código de erro o número -1. Sucesso retornar 0. 
Mantenha o padrão pré-definido do TAD, que diz que a
posição 1 corresponde ao primeiro elemento da lista.

Exemplo da chamada da função
troca_pos_lista( lista, 4, 10)


¹struct lista
 {
    int qtd;
    struct aluno dados[MAX];
 };

int troca_pos_lista(Lista *li, int pos1, int pos2){
    if(li == NULL)
        return -1;
    if (pos1 <=0 || pos1 > li->qtd)
        return -1;
    if (pos2 <=0 || pos2 > li->qtd)
        return -1;
    Lista *aux;

    aux->dados[0] = li->dados[pos1-1];
    li->dados[pos1-1] = li->dados[pos2-1];
    li->dados[pos2-1] = aux->dados[0];
    
    free(aux);
    return 0;
}

*/