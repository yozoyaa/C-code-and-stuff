#include<stdio.h>
int main(){
   
   // Variable = Allocated space in memory to store a value
   //            we refer to a variable's name to access the stored value.
   //            That Variable now behaves as if it was the value it contains.
   //            but we need to declare what type of data we are storing 
   
   int x;         // declaration
   x = 123;       // initialization
   int y = 321;   // declaration + initialization

   int age = 21;           // integer
   float ipk = 3.69;
   char grade = 'B';
   char name[] = "Fickry Imamsyah";
   
   printf("Your name is %s\n",name);
   printf("You are %d Years old\n",age);
   printf("Your average grade is %c\n",grade);
   printf("And your average ipk is %f\n",ipk);

   return 0;
}