/* Chapter-2 Algorithms-2.1 Exchanging the values of two variables
 * vasanth [19 Septembr 2017] 
 */

#include <stdio.h>

int main(void)
{
	int a = 721;
	int b = 463;
	int t;
	
	printf("Current Value of A = %i, B = %i\n", a, b);
	
	t = a;
	a = b;
	b = t;

	printf("Exchange Value of A = %i, B = %i", a, b);
	
	return 0;
}
