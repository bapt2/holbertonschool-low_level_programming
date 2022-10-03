#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/*
 *main - Main function
 *
 * Return: Exit status code
 */

/*
 *betty-style.pl betty-doc.pl
*/
int main (void)
{
  int n;

  srand(time(0));
  n =rand () -RAND_MAX / 2;
  /* your code goes there */
  return(0);
}
