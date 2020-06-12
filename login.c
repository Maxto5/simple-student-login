#include <stdio.h>
int main()
{
printf("A simple student portal login program in C\n"); 
//variables
char fname[20];
char lname[20];
char reg[20];
double session;
char course[20];
//reg 
printf("Enter reg\t");
 scanf("%s",&reg);

//name 
printf("Enter name\t");
 scanf("%s %s",&fname,&lname);

//session
printf("Enter session\t");
scanf("%lf",&session);

//course
printf("Enter course\t");
scanf("%s",&course);
//output

printf("\t//////////////////////////\n");

printf("\tname\t%s\t%s\n\treg\t%s\n\tsession\t%f\n\tcourse\t%s\n",fname,lname,reg,session,course);

printf("\t//////////////////////////\n");
return 0;
}
