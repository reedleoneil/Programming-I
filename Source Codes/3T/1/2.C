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
	printf("浜様様僕様様僕様様�\n");
	printf("�     �     �     �\n");
	printf("�  %c  �  %c  �  %c  �\n",ch[1],ch[2],ch[3]);
	printf("�     �     �     �\n");
	printf("麺様様陵様様陵様様�\n");
	printf("�     �     �     �\n");
	printf("�  %c  �  %c  �  %c  �\n",ch[4],ch[5],ch[6]);
	printf("�     �     �     �\n");
	printf("麺様様陵様様陵様様�\n");
	printf("�     �     �     �\n");
	printf("�  %c  �  %c  �  %c  �\n",ch[7],ch[8],ch[9]);
	printf("�     �     �     �\n");
	printf("藩様様瞥様様瞥様様�\n\n");
		
			printf("Player %d: What Box? ", nextplayer);
			scanf("%d", &box);
			ch[box] = 'x';
				nextplayer = 2;
	
		}
		if(nextplayer == 2)
		{
		clrscr();
	printf("浜様様僕様様僕様様�\n");
	printf("�     �     �     �\n");
	printf("�  %c  �  %c  �  %c  �\n",ch[1],ch[2],ch[3]);
	printf("�     �     �     �\n");
	printf("麺様様陵様様陵様様�\n");
	printf("�     �     �     �\n");
	printf("�  %c  �  %c  �  %c  �\n",ch[4],ch[5],ch[6]);
	printf("�     �     �     �\n");
	printf("麺様様陵様様陵様様�\n");
	printf("�     �     �     �\n");
	printf("�  %c  �  %c  �  %c  �\n",ch[7],ch[8],ch[9]);
	printf("�     �     �     �\n");
	printf("藩様様瞥様様瞥様様�\n\n");
			printf("Player %d: What Box? ", nextplayer);
			scanf("%d", &box);
	
				ch[box] = 'o';
				nextplayer = 1;
			
		}
	}
	printf("Game Over!");
	getch();
}