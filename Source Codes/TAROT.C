#include <stdio.h>
#include <stdlib.h>
#include <conio.h>

char question[1], answer[50], dummypetition[1], petition[50] = "computer please answer", ch;
int nextp = 0, nexta = 0;
int percent;
int cmd;
char x;
int mainon = 1;



main()
{



		
		

	
			printf("Enter Petition: ");
			ch = getch();
			if(ch != ',')
			{
				printf("%c", ch);
				strcpy(answer, "Error");
			}
			if(ch == ',')
			{
				printf("%c", petition[nextp]);
				nextp = nextp + 1;
				while(ch != '.')
				{
					ch = getch();
					if(ch != '.')
					{
						answer[nexta] = ch;
						nexta = nexta + 1;
					}
					printf("%c", petition[nextp]);
					nextp = nextp + 1;
				}
			}
			gets(dummypetition);
			printf("Enter Question: ");
			gets(question);
			printf("\nAnswer: %s", answer);
			printf("\n\n\n\n\n\n\n\n\n\n\n\nPress Any key to continue...");
			getch();

		
	
}













