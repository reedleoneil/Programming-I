#include<stdio.h>
#include<stdlib.h>

char ch[10];
int box;
int nextplayer = 1;
int gameover = 0;
int winner;

void mainscr()
{
	clrscr();
	printf("浜様様僕様様僕様様�\n");
	printf("�     �     �     �\n");
	printf("�  %c  �  %c  �  %c  �\n",ch[7],ch[8],ch[9]);
	printf("�     �     �     �\n");
	printf("麺様様陵様様陵様様�\n");
	printf("�     �     �     �\n");
	printf("�  %c  �  %c  �  %c  �\n",ch[4],ch[5],ch[6]);
	printf("�     �     �     �\n");
	printf("麺様様陵様様陵様様�\n");
	printf("�     �     �     �\n");
	printf("�  %c  �  %c  �  %c  �\n",ch[1],ch[2],ch[3]);
	printf("�     �     �     �\n");
	printf("藩様様瞥様様瞥様様�\n\n");
}

main()
{
	while(gameover != 1)
	{
		if((nextplayer == 1)&&(gameover == 0))
		{
			mainscr();
			printf("Player %d: What Box? ", nextplayer);
			{
				scanf("%d", &box);

				if((box < 1)||(box > 9))
				{
					printf("Input Error: Press Any Key To Continue...");
					getch();
					nextplayer = 1;
				}

				else

				if((box > 1)||(box < 9))
				{
					ch[box] = 'x';

					{
						if(ch[1] == 'x')
						{
							if((ch[2] == 'x') && (ch[3] == 'x'))
							{
								winner = 1;
								gameover = 1;
							}
						}

						if(ch[4] == 'x')
						{
							if((ch[5] == 'x')&&(ch[6] == 'x'))
							{
								winner = 1;
								gameover = 1;
							}
						}

						if(ch[7] == 'x')
						{
							if((ch[8] == 'x')&&(ch[9] == 'x'))
							{
								winner = 1;
								gameover = 1;
							}
						}

						if(ch[1] == 'x')
						{
							if((ch[4] == 'x')&&(ch[7] == 'x'))
							{
								winner = 1;
								gameover = 1;
							}
						}

							if(ch[2] == 'x')
						{
							if((ch[5] == 'x')&&(ch[8] == 'x'))
							{
								winner = 1;
								gameover = 1;
							}
						}

							if(ch[3] == 'x')
						{
							if((ch[6] == 'x')&&(ch[9] == 'x'))
							{
								winner = 1;
								gameover = 1;
							}
						}

						if(ch[5] == 'x')
						{
							if((ch[1] == 'x')&&(ch[9] == 'x'))
							{
								winner = 1;
								gameover = 1;
							}
						}

                                                if(ch[5] == 'x')
						{
							if((ch[3] == 'x')&&(ch[7] == 'x'))
							{
								winner = 1;
								gameover = 1;
							}
						}
					}

					nextplayer = 2;
				}
			}
		}

		if((nextplayer == 2)&&(gameover == 0))
		{
			mainscr();
			printf("Player %d: What Box? ", nextplayer);
			{
				scanf("%d", &box);

				if((box < 1)||(box > 9))
				{
					printf("Input Error: Press Any Key To Continue...");
					getch();
					nextplayer = 2;
				}

				else

				if((box < 9)||(box > 1))
				{
					ch[box] = 'o';

                                        {
						if(ch[1] == 'o')
						{
							if((ch[2] == 'o') && (ch[3] == 'o'))
							{
								winner = 2;
								gameover = 1;
							}
						}

						if(ch[4] == 'o')
						{
							if((ch[5] == 'o')&&(ch[6] == 'o'))
							{
								winner = 2;
								gameover = 1;
							}
						}

						if(ch[7] == 'o')
						{
							if((ch[8] == 'o')&&(ch[9] == 'o'))
							{
								winner = 2;
								gameover = 1;
							}
						}

						if(ch[1] == 'o')
						{
							if((ch[4] == 'o')&&(ch[7] == 'o'))
							{
								winner = 2;
								gameover = 1;
							}
						}

						if(ch[2] == 'o')
						{
							if((ch[5] == 'o')&&(ch[8] == 'o'))
							{
								winner = 2;
								gameover = 1;
							}
						}

						if(ch[3] == 'o')
						{
							if((ch[6] == 'o')&&(ch[9] == 'o'))
							{
								winner = 2;
								gameover = 1;
							}
						}

						if(ch[5] == 'o')
						{
							if((ch[1] == 'o')&&(ch[9] == 'o'))
							{
								winner = 2;
								gameover = 1;
							}
						}

						if(ch[5] == 'o')
						{
							if((ch[3] == 'o')&&(ch[7] == 'o'))
							{
								winner = 2;
								gameover = 1;
							}
						}
					}

					nextplayer = 1;
				}
			}
		}
	}
	mainscr();
	printf("Game Over!\n");
	printf("Winner: Player %d!\n\n", winner);
	printf("Press Any Key To Continue...");
	getch();
}