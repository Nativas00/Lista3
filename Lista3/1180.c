#include<stdio.h>

int main(){
	int x[n], i;
	int menor, num, indicemenor;
	
	scanf("%d", &num);
	
	for(i=0; i<num; i++){
		scanf("%d", &x[i]);
	}
	
	menor = x[0];
	for(i=0; i<num; i++){
		if(x[i]< menor){
			menor= x[i];
			indicemenor = i;
		}
	}
	
	printf("Menor valor: %d\n", menor);
	printf("Posicao: %d\n", indicemenor);
	
	return 0;
}