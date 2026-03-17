//queues and stacks

#include <stdio.h> //entrada e saída (printf, scanf)
#include <stdlib.h> //utilidades gerais (malloc, free, etc)
#include <string.h> //manipulação de strings
 
#define MAX 50
 
typedef struct {
    char nome[30];
    int idade;
} Pessoa;
 
//Queue FIFO (First in, first out)
typedef struct {
    Pessoa dados[MAX];
    int inicio, fim;
} Fila;
 
//Stack LIFO (Last in, first out)
typedef struct {
    Pessoa dados[MAX];
    int topo;
} Pilha;
 
void inicializarFila(Fila *f) {
    f->inicio = 0;
    f->fim = 0;
}
 
//topo = -1 significa topo vazio
void inicializarPilha(Pilha *p) {
    p->topo = -1;
}
 
void inserir(Fila *f, Pessoa p) {
    if (f->fim < MAX) {
        f->dados[f->fim++] = p;
    }
}
 
Pessoa remover(Fila *f) {
    return f->dados[f->inicio++];
}

//empilha
void push(Pilha *p, Pessoa pes) {
    if (p->topo < MAX - 1) {
        p->dados[++p->topo] = pes;
    }
}

//remove do topo
Pessoa pop(Pilha *p) {
    return p->dados[p->topo--];
}

//olha o topo
Pessoa peek(Pilha *p) {
    return p->dados[p->topo];
}
 
void exibirPilha(Pilha p) {
    while (p.topo >= 0) {
        Pessoa atual = pop(&p);
        printf("Nome: %s | Idade: %d\n", atual.nome, atual.idade);
    }
}
 
int main() {
    Fila fila;
    Pilha pilhaPrioridade;
 
    inicializarFila(&fila);
    inicializarPilha(&pilhaPrioridade);
 
    Pessoa pessoas[] = {
        {"Carlos", 45}, {"Joana", 62}, {"Lucas", 30}, {"Maria", 75}
    };
 
    for (int i = 0; i < 4; i++) {
        inserir(&fila, pessoas[i]);
    }
 
    while (fila.inicio < fila.fim) {
        Pessoa atual = remover(&fila);
        if (atual.idade > 60) {
            push(&pilhaPrioridade, atual);
        }
    }
 
    printf("Pessoas com prioridade:\n");
    exibirPilha(pilhaPrioridade);
 
    return 0;
}