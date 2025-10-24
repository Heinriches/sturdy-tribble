/**
 * The scanf() function is used to take user input based on the given
 * format-specifier. It works similar to the printf() function.
 * For example, let's take an integer from input:
 */

#include <stdio.h>
int main()
{
  int num;
  scanf("%d", &num);
  
  printf("You entered: %d", num);
  
  return 0;
}


/**
 * We first declare the variable that will hold our input value.
 * Then we use it in the scanf() function.
 */
 
 /**
  * NOTE
  * Note the sintax: the '&' sign before the variable name is the address
  * operator. It gives the address, or location in memory, of a variable.
  * We will learn more about this in future lessons, for now, just remember
  * that the scanf() function needs to use the variable name with the '&' sign.
  */