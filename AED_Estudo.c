#include <stdio.h>
#include<stdlib.h>



//lista duplamente encadeada

typedef struct no{
	int valor;
	struct No* anterior;
	struct No* proximo;
}No;

No* inserir(int valor, No* atual){
	if(atual==NULL){
		No* novo= (No*)malloc(sizeof(No));
		return novo;
	}else{
		atual->proximo=inserir(valor,atual->proximo);
		atual->anterior->anterior=atual;
		return atual;
	}
}


//insere um valor em um nó depois de um valor especifico, se esse valor não existir, insere ao final da fila.
No* inserirEspecifico(int valor,int referencia, No* atual){
	if(atual==NULL){
		atual->valor=valor;
		atual->anterior=NULL;
		atual->proximo=NUll;
	}else{
		if(atual->valor==referencia){
			if(atual->proximo->proximo==NULL){
					No* novo= (No*)malloc(sizeof(No));
					atual->proximo=novo;
					atual->proximo->proximo=NULL;
					novo->valor=valor;
					novo->anterior=atual;
			}else{
				No* temp= (No*)malloc(sizeof(No));
				temp->anterior=atual;
				temp->proximo=atual->proximo;
				atual->proximo->anterior=temp;
				atual->proximo=temp;
			}
		
		}
	}
}

//arvore binária
