/* Algorithm 2.1 Exchanging the values of two variables
 * Vasanth 02 Septamper 2018
 */

#include <stdio.h>

int main(void)
{
	int val_a = 721, val_b = 463;
	int val_temp;

	printf ("Initial values val_a = %d and val_b = %d It will Exchanged>\n", val_a, val_b);
	val_temp = val_a;
	val_a = val_b;
	val_b = val_temp;
	printf ("Exchanged values val_a = %d and val_b = %d\n", val_a, val_b);

	return 0;
}

