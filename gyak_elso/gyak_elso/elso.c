#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define CHOICE 1

#if (CHOICE == 1)

void main()
{
	char str[100];

	printf("Ez az elso gyakorlopelda\n\r");
	printf("Egyszeruen visszairja a kijelzore a beirt stringet. 'exit'-et begépelve kilép. \n\r");

	gets( str );

	while(strcmp(str, "exit") != 0)
	{
		printf("Leirom, hogy: %s \n\r", str);
		gets( str );
	}
	printf("Press any key!");
	getchar();
}

#elif CHOICE == 2
void main()
{
	char str[100];
	int i   = 0;
	int num = 0;

	printf("Ez a masodik gyakorlopelda\n\r");
	printf("Egyszeruen visszairja a kijelzore a beirt stringet integerkent, ha nem szam jött, hanem szoveg, akkor kilép.\n\r");

	while(1)
	{
		gets( str );
		num = atoi( str );

		if(num == 0)
		{
			printf("Exit.");
			break;
		}

		else
		{
			printf("A bejött adat: %d \n\r", num);
		}
	}
	printf("Press any key!");
	getchar();
}

#endif
