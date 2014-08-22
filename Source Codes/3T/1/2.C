#include<stdio.h>
#include<stdlib.h>

char ch[10];
int box;
int nextplayer = 1;
int gameover = 0;

main()
{
	while(gameover != 1)
	{
		if(nextplayer == 1)
		{
				clrscr();
	printf("ษอออออหอออออหอออออป\n");
	printf("บ     บ     บ     บ\n");
	printf("บ  %c  บ  %c  บ  %c  บ\n",ch[1],ch[2],ch[3]);
	printf("บ     บ     บ     บ\n");
	printf("ฬอออออฮอออออฮอออออน\n");
	printf("บ     บ     บ     บ\n");
	printf("บ  %c  บ  %c  บ  %c  บ\n",ch[4],ch[5],ch[6]);
	printf("บ     บ     บ     บ\n");
	printf("ฬอออออฮอออออฮอออออน\n");
	printf("บ     บ     บ     บ\n");
	printf("บ  %c  บ  %c  บ  %c  บ\n",ch[7],ch[8],ch[9]);
	printf("บ     บ     บ     บ\n");
	printf("ศอออออสอออออสอออออผ\n\n");
		
			printf("Player %d: What Box? ", nextplayer);
			scanf("%d", &box);
			ch[box] = 'x';
				nextplayer = 2;
	
		}
		if(nextplayer == 2)
		{
		clrscr();
	printf("ษอออออหอออออหอออออป\n");
	printf("บ     บ     บ     บ\n");
	printf("บ  %c  บ  %c  บ  %c  บ\n",ch[1],ch[2],ch[3]);
	printf("บ     บ     บ     บ\n");
	printf("ฬอออออฮอออออฮอออออน\n");
	printf("บ     บ     บ     บ\n");
	printf("บ  %c  บ  %c  บ  %c  บ\n",ch[4],ch[5],ch[6]);
	printf("บ     บ     บ     บ\n");
	printf("ฬอออออฮอออออฮอออออน\n");
	printf("บ     บ     บ     บ\n");
	printf("บ  %c  บ  %c  บ  %c  บ\n",ch[7],ch[8],ch[9]);
	printf("บ     บ     บ     บ\n");
	printf("ศอออออสอออออสอออออผ\n\n");
			printf("Player %d: What Box? ", nextplayer);
			scanf("%d", &box);
	
				ch[box] = 'o';
				nextplayer = 1;
			
		}
	}
	printf("Game Over!");
	getch();
}