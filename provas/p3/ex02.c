/*
Considere o TAD TDLinkedList que serve para manipular uma lista duplamente
encadeada de alunos (a lista usada na prática 16 – copiar o código da 
SUA PRÁTICA)

Implemente uma função chamada concat3, cuja funcionalidade é concatenar 
(juntar) 3 listas. Seu cabeçalho é o seguinte:

int list_concat3(TDLinkedList *pre, TDLinkedList *in, TDLinkedList *pos)

pre  - lista a ser concatenada e que vai ficar no início (antes de /in/). 
      É também a lista de destino final (lista que receberá a concatenação 
      de todas as listas).  
in – lista a ser concatenada e que vai ficar entre as listas /pre/ e /pos/. 
pos – lista a ser concatenada no final (depois de /in/) 

Retorno da função: 0 para sucesso; -1 para qualquer tipo de erro
Na implementação do list_concat3, *nenhum elemento é copiado ou movido*,
somente os ponteiros internos das *três listas* são rearranjados.
Após a concatenação, as listas continuarão existindo, no entanto,
as listas in e pos ficarão sem elementos (vazia). 
O resultado final da concatenação ficará na lista /pre/.  

Saída concatenada (armazenada em \pre\):
pre <-> in <-> pos


int list_concat3(TDLinkedList *pre, TDLinkedList *in, TDLinkedList *pos){
      if(pre == NULL)
            return -1; //codigo de erro diferente só para saber qual ponteiro deu NULL;
      else if(in == NULL)
            return -2; //codigo de erro diferente só para saber qual ponteiro deu NULL;
      else if(pos == NULL)
            return -3; //codigo de erro diferente só para saber qual ponteiro deu NULL;
      else{// check:<<<erro: faltam testes para saber se as listas estao vazias>>>>
            DLNode *aux = pre->end;
            DLNone *aux1 = in->end;
            
            aux->next = in->begin;
            in->begin = NULL;
            in->end = NULL;
            aux1->next = pos->begin;  // quase cai na bobeira de rodar um for e setar posição por posicao na ultima posicao de "pre" kkk;
            pos->begin = NULL;        // se tiver certo como eu penso que está, o enunciado que faz parecer dificil kkk;
            pre->end = pos->end;
            pos->end = NULL;
            pre->size += in->size + pos->size;  //
            in->size = 0;                       // esqueci de fazer essas manipulações na prova;
            pos->size = 0;                      //// check:<<<erro: ok, acabei baixando essa versão mais nova e nao vou considerar esse trecho>>>>

            return SUCCESS;
      }
}
*/

      //SUB - Refazendo o exercicio

int list_concat3(TDLinkedList *pre, TDLinkedList *in, TDLinkedList *pos){
      if(pre == NULL || in == NULL || pos == NULL) // verificacao de lista nula;
            return -1; 
      else if(pre->size == 0 || in->size == 0 || pos->size == 0) // verificacao de lista vazia;
            return -1; 
      else{
            DLNode *aux = pre->end;
            DLNone *aux1 = in->end;
            
            aux->next = in->begin;
            in->begin = NULL;
            in->end = NULL;
            aux1->next = pos->begin;
            pos->begin = NULL;
            pre->end = pos->end;
            pos->end = NULL;
            pre->size += in->size + pos->size;  //
            in->size = 0;                       // esqueci de fazer essas manipulações na prova;
            pos->size = 0;                      //

            return SUCCESS;
      }
}