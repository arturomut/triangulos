#include<stdio.h>
int main()
{
  int a,b,c;  

 printf("\programa de triangulos: ");
  printf("\nIntroduce el lado 1: ");
  scanf("%i",&a);
  printf("Introduce el lado 2: ");
  scanf("%i",&b);
  printf("Introduce el lado 3: ");
  scanf("%i",&c); 
 
  if(a==b && b==c) {
	  printf("Equilatero\n"); 
      }
  else if(a==b && b!=c || b==c && c!=a || c==a && a!=b)
   {
       if( b==c && c!=a){
	  printf("Isosceles\n"); 
      }
  else if(a==b && b!=c || b==c && c!=a || c==a && a!=b)
  {
       if(c==a && a!=b){
	  printf("Escaleno\n"); }
   } 
   }
}


