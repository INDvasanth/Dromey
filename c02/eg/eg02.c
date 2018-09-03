/* Algorithm 2.2 Count the number of students passed the examination
 * Vasanth 03 Septamber 18
 */

#include <stdio.h>
#include <assert.h>

int main (void)
{
	int marks[100], no_marks;
	int pass_mark, count, i;

	printf("count number of students passed exam>\n");
	printf("enter numer of marks ");
	scanf("%d", &no_marks);
	printf("number of marks: %d\nenter students mark>\n", no_marks);

	assert(no_marks >= 0);
	pass_mark = 50;
	count = 0;
	i = 0;
	while(i < no_marks)
	{
		assert((0 <= i) && (100 > i));
		scanf("%d", &marks[i]);
		printf("%d\n", marks[i]);

		if (pass_mark <= marks[i])
		{
			count = count + 1;
		}

		i = i + 1;
	}
	printf("passed students count = %d\n", count);

	return 0;
}

