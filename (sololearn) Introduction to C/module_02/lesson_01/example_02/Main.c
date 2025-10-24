/**
 * MULTIPLE INPUTS
 * You can take multiple inuts throughout your program.
 * For example, let's take two integers as input and 
 * output their sum:
 */

#include <stdio.h>
int main()
{
  int x, y;
  scanf("%d %d", &x, &y);
  
  printf("%d", (x + y));
  
  return 0;
}

/**
 * Run the code to see how it works. The program will 
 * prompt for input and wait 'till the user 
 * provides the required inputs.
 * 
 * Note that when you run it in our Playground, 
 * you need to provide all the inputs in the popup,
 * separated by new lines.
 */