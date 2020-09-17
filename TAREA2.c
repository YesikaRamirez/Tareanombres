/*TAREA#1 Segundo tercio Version 1
Integrantes: Yesika Ramirez-Ashley Romero*/
#include<stdio.h>
#include <string.h>


int main(void)
{ 
/*se incializa un vector por la primera palabra*/
char str1[7]="ASHLEY";
char str2[7];
printf("La palabra a cambiar es: %s\n", str1);		
str2[0]= str1[0]|56;
str2[1]= (str1[1]>>4)|96;
str2[2]= (str1[2]<<2)|83;
str2[3]= (str1[3]<<3)|9;
str2[4]= (str1[4]>>1)|73;
str2[5]= ((str1[5]<<2)&96)|1;		
printf("%s\n", str2);
} 