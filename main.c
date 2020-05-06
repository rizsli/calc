#include <stdio.h>
#include "input.h"
#include "calc.h"

int main(int argc, char *argv[])
{
	int a,b;

	input(&a,&b);
	printf("%d + %d = %d \r\n",a,b,calc(a,b));


}

