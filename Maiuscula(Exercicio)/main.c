#include <stdio.h>

char* vMaiuscula(char *palavra)
{
   int cont = 0;
   
   while (palavra[cont] != '\0') {
      if (palavra[cont] >= 'a' && palavra[cont] <= 'z') {
         palavra[cont] = palavra[cont] - 32;
      }
      cont++;
   }
   return palavra;
}

int contPalavra(char *otaPalavra){
	int cont;

	for(cont = 0; otaPalavra[cont] != '\0'; cont++){}
  
  cont = cont-1;
	return cont;
}

int vOcorre(char *str1, char *str2){
	int cont = 0,cont2 = 0,cont3 = 0, ocorre = 0;
  int p1 = contPalavra(str1);
	int p2 = contPalavra(str2);

	for(cont = 0; cont <= p1 ; cont++ ){

		if(str1[cont] == str2[cont3]){
			cont2 = cont;
			
			while(str1[cont2] == str2[cont3]){
				cont2++;
				cont3++;	
			}

			if(cont2 > p1){
				cont2--;
				cont3--;
			}

      cont3 = cont3-1;

			if(cont3 == p2){
				ocorre++;
			}			
			
			cont2 = 0;
			cont3 = 0;
		}
	}

	return ocorre;
}

int main(void) {
  int ocorrencia;
	char str1 [] ="a pracAa e noss";
	char str2 [] ="pa";

  ocorrencia = vOcorre(vMaiuscula(str1),vMaiuscula(str2));

  printf("str2 repete %d vezes dentro de str1\n", ocorrencia);

	return 0;
}