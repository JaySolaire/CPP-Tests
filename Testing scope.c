#include <stdio.h>
#include <stdlib.h>


int i = 1;
int main()
{
	int j=i;
	printf("%d\n", j);
	int i = 2;
	j=i;
	printf("%d\n", j);
}
