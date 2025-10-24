/**
 * ELSE-IF STATEMENT
 * In case you need to check for multiple different values,
 * you can use 'else-if' statements.
 * 
 * For example, let's check the 'position' variable and 
 * output the corresponding medal:
 */


#include <stdio.h>
int main()
{
  int position = 2;
  
  if(position ==1){
    printf("Gold");
  }
  else if(position == 2){
    printf("Silver");
  }
  else{
    printf("Something else");
  }
  
  return 0;
}

/**
 * You can include as many 'else if' statements as you need.
 */