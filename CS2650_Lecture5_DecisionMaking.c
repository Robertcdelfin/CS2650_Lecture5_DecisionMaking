/*
 ============================================================================
 Name        : CS2650_Lecture5_DecisionMaking.c
 Author      : Robert Delfin
 Version     :
 Copyright   : 
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
//IF, ELSE IF, ELSE - Decision Making
#include <stdio.h>
int main () {
   /* local variable definition */
   int a = 100;
   /* check the boolean condition */
   if( a == 10 ) {
      /* if condition is true then print the following */
      printf("Value of a is 10\n" );
   } else if( a == 20 ) {
      /* if else if condition is true */
      printf("Value of a is 20\n" );
   } else if( a == 30 ) {
      /* if else if condition is true  */
      printf("Value of a is 30\n" );
   } else {
      /* if none of the conditions is true */
      printf("None of the values is matching\n" );
   }
   printf("Exact value of a is: %d\n", a );
   return 0;
}
