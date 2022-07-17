#include <stdio.h>
#include <stdlib.h>
#include <conio.h>
#include <time.h>


int main(void){
void ordem (int dez[], int n);
	
	int dez[15];
	int n;
	int i;
	int a, b, temp;

do{
	system("cls");
	printf("Quantas dezenas deseja apostar? ");
	scanf("%i", &n);
	if(n < 6 || n > 15){
	
		printf("Escolha valores entre 6 e 15!\n");
		printf("\nPressione uma tecla...\n");
		getch();

	}
}while(n < 6 || n > 15);

	system("cls");
	

	srand ((unsigned)time(NULL));
	

	for (i = 1; i <= n; ++i){
			
		printf("%i  ", dez[i] = 1 + (rand () %60), dez[i]);
	}
	
	
	printf("\n\nQUE A SORTE ESTEJA AO SEU LADO!!!\n");
	
	
return 0;
}



