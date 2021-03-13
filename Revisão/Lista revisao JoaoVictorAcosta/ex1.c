#include <stdio.h>

void main(void){
	
	float base,altura;
	float area;
int i;	
for(i=0;i<50;i++){
	printf("\nbase: ");
	scanf("%f",&base);
	printf("altura: ");
	scanf("%f",&altura);
	area=(base*altura)/2;
	printf("\n%f",area);
	}	
}