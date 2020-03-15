#define true 1
#define false 0
typedef int TIPOCHAVE;

typedef struct aux {
	TIPOCHAVE chave;
	struct aux *esq, *dir;
}NO;

typedef NO* PONT;

PONT adicionar(PONT raiz, PONT no);
PONT inicializar();
PONT criarNo(TIPOCHAVE ch);
PONT buscarNo(PONT raiz, TIPOCHAVE ch, PONT *pai);
PONT removerNo(PONT raiz, TIPOCHAVE ch);
PONT buscar(TIPOCHAVE ch, PONT raiz);
int contNo(PONT raiz);
int somaEle(PONT raiz);
double mediaEle(PONT raiz);
int contFilhos(PONT raiz);
int contFolhas(PONT raiz);
int maior(PONT raiz);
int menor(PONT raiz);
int altura(PONT raiz);
void preOrdem(PONT raiz);
void posOrdem(PONT raiz);
void emOrdem(PONT raiz);