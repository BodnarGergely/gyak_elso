#include<stdio.h>

main()
{
	char str[100];

	int i = 0;
	while(i < 15)
	{
		gets( str );
		printf("Leirom, hogy: %s \n\r", str);
		i++;
	}
	while(1){}
}