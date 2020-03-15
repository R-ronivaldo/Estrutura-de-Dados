// Aluno: Ronivaldo Ferreira Silva Júnior
//Aluno: Von Harrison Tadasky


#include <stdio.h>
#include <stdlib.h>
#include <arvore.h>

int main(int argc, char *argv[]) {

	PONT r = inicializar();

	PONT no = criarNo(86);
	r = adicionar(r,no);
	
	no = criarNo(11);
	r = adicionar(r,no);
	
	no = criarNo(7);
	r = adicionar(r,no);
	
	no = criarNo(35);
	r = adicionar(r,no);
	
	no = criarNo(170);
	r = adicionar(r,no);
	
	no = criarNo(2);
	r = adicionar(r,no);
	
	no = criarNo(120);
	r = adicionar(r,no);
	
	no = criarNo(21);
	r = adicionar(r,no);
	
	no = criarNo(88);
	r = adicionar(r,no);
	
	no = criarNo(152);
	r = adicionar(r,no);
	
	no = criarNo(31);
	r = adicionar(r,no);
	
	no = criarNo(12);
	r = adicionar(r,no);
	
	no = criarNo(181);
	r = adicionar(r,no); 
	
	no = criarNo(28);
	r = adicionar(r,no);
	
	no = criarNo(134);
	r = adicionar(r,no);
	
	no = criarNo(70);
	r = adicionar(r,no);
	
	no = criarNo(1);
	r = adicionar(r,no);
	
	no = criarNo(85);
	r = adicionar(r,no);	
	
	no = criarNo(25);
	r = adicionar(r,no);
	
	no = criarNo(77);
	r = adicionar(r,no);
	
	no = criarNo(10);
	r = adicionar(r,no);
	
	no = criarNo(128);
	r = adicionar(r,no);
	
	no = criarNo(198);
	r = adicionar(r,no);
	
	
	//PONT p = buscar(5,r);
	//printf ("%d\n",contNo(r));

	printf ("EmOrdem :");
	emOrdem(r);
	printf("\n");

	printf ("PreOrdem: ");
	preOrdem(r);
	printf("\n");
	
	printf ("PosOrdem: ");
	posOrdem(r);
	printf("\n");
	
	/*removerNo(r,44);
	
	removerNo(r,15);

	printf ("\n");
	printf ("***Depois de apagar***");
	printf ("\n");

	printf ("EmOrdem :");
	emOrdem(r);
	printf("\n");

	printf ("PreOrdem: ");
	preOrdem(r);
	printf("\n");
	
	printf ("PosOrdem: ");
	posOrdem(r);
	printf("\n");
	*/
	
	mediaEle(r);
	int cont = contFilhos(r);
	printf ("Existem %i NOS com 2 filhos",cont);
	
  int nma = maior(r);
  printf("\nO maior numero e %i",nma);
 
  int nme = menor(r);
  printf("\nO maior numero e %i",nme);

  int contF = contFolhas(r);
	printf ("\nExistem %i folhas",contF);

  int al = altura(r);
  printf("\nA altura da arvore e %i",al);

}