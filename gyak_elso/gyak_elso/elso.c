#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define CHOICE 2

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
	int temp = 0;

	printf("Ez a masodik gyakorlopelda\n\r");
	printf("Egyszeruen visszairja a kijelzore a beirt stringet integerkent, ha nem szam jött, hanem szoveg, akkor kilép.\n\r");

	while(1)
	{
		gets( str );
		num = atoi( str );

		if(num != 0)
		{
			temp = num;
			printf("A bejött adat: %d \n\r", num);
			(num == 1)? (printf("Nincs primtényezos felbontas")) : (printf("A primtenyezos felbontas"));
			
			while(temp != 1)
			{
				i = 2;

				while()
				{
					
				}
			}
			break;
		}

		else if(strcmp(str, "exit") == 0)
		{
			printf("Exit.\n\r");
			break;
		}

		else
		{
			printf("Butus!\n\r");
		}
	}

	printf("Press any key!\n\r");
	getchar();
}

#endif
