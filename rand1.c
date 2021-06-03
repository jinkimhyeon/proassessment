#include<stdio.h> 
#include<stdlib.h> 
#include<time.h> 
int main(void)
{
	int a;
	srand((unsigned)time(NULL));

	for (a = 0; a < 6; a++)

		printf("%d  ", 1 + rand() % 45);
	return 0;
}
