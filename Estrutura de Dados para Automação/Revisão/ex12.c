#include <stdio.h>
int main()
{
 int i,a,cont;
 for (i=1;i<1000;i++){
	 cont=0;
		 for (a=1;a<=i;a++)
		 {
 			if (i%a==0)
 				cont++;
 		 }
	 if (cont==2)
		 printf("%d\n",i);
 }
 return 0;
}
