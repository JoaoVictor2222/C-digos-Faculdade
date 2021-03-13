#include<stdio.h>
void somaPar(int a[],int num,int soma);
main(){
    int i,v[100],num,soma=0;
    printf("Numero de elementos no vetor:\n");
   scanf("%d",&num);
   printf("Numeros: \n");
   for(i=0;i<num;i++){
    scanf("%d",&v[i]);
    }
   somaPar(v,num-1,soma);
}

void somaPar(int v[],int num,int soma){
 if(num>=0){

  if((v[num])%2==0){
   soma+=(v[num]);
  }
  somaPar(v,num-1,soma);
 }
 else{
    printf("soma dos numeros pares=%d\n",soma);
  return;
 }
}
