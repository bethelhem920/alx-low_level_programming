#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/* main function ="displays whether a number is 
 *                  postive or negative"
 * Returns: Always 0
 */
int main(void)
{
		int n;

		srand(time(0));
				n = rand() - RAND_MAX / 2;
				printf("%d",n);
					if (n>0)
                                           printf(" is postive");
                                        else if(n==0)
	                                   printf(" is zero");
                                        else 
	                                   printf(" is negative");					
					return (0);
}
