#include <stdio.h>
#include <stdlib.h>

static void my_exit1(void);
static void my_exit2(void);


int main(void)
{
	if (atexit(my_exit2))
	{
		printf("can't register my_exit2\n");
	}
	if (atexit(my_exit1))
	{
		printf("can't register my_exit2\n");
	}
	if (atexit(my_exit1))
	{
		printf("can't register my_exit2\n");
	}

	printf("main function is done\n");
	return 0;
}

static void my_exit1(void){
	printf("first exit handler\n");
}

static void my_exit2(void){
	printf("second exit handler\n");
}