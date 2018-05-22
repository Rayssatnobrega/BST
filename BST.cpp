#include <stdio.h>
#include <stdlib.h>

static int cont = 0;

typedef struct no{
	
	int conteudo;
	struct no *esq; 
	struct no *dir; 
		
}tNo;  


void  insere (tNo **T, int dado){
	tNo *novoNo, *aux, *p;

	novoNo = (tNo*)malloc(sizeof (tNo));

	if (*T == NULL){	
	novoNo ->conteudo = dado;
	novoNo ->esq = NULL;
	novoNo ->dir = NULL;
	*T = novoNo;
}
else if ((*T )-> conteudo < dado) {
       cont++;
	   insere (&(*T )-> esq, dado);
	   
}
else if ((*T )->conteudo > dado) {
	cont++;
	insere (&(*T ) -> dir, dado);
	
}
}

int main(){
	
	int qtd; 
	
	tNo *arvore = NULL;
	scanf("%d", &qtd);
	
	while(qtd--){
		int temp;
		
		scanf("%d", &temp);
	    insere (&arvore, temp);
	    printf("%d\n",cont);
	}
	
	return 0;	
}

