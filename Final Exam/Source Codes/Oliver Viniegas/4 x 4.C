#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>

char ch[17];
int box;
int nextplayer = 1;
int gameover = 0;
char winner[50];
int cmd;
int exiton;

void mainscr()
{
clrscr();
	printf("ษอออออหอออออหอออออหอออออป\n");
	printf("บ     บ     บ     บ     บ\n");
	printf("บ  %c  บ  %c  บ  %c  บ  %c  บ\n",ch[13],ch[14],ch[15],ch[16]);
	
	printf("บ     บ     บ     บ     บ\n");
	
	printf("ฬอออออฮอออออฮอออออฮอออออน\n");
	
	printf("บ     บ     บ     บ     บ\n");
	
	printf("บ  %c  บ  %c  บ  %c  บ  %c  บ\n",ch[9],ch[10],ch[11],ch[12]);

	printf("บ     บ     บ     บ     บ\n");

	printf("ฬอออออฮอออออฮอออออฮอออออน\n");

	printf("บ     บ     บ     บ     บ\n");

	printf("บ  %c  บ  %c  บ  %c  บ  %c  บ\n",ch[5],ch[6],ch[7],ch[8]);

	printf("บ     บ     บ     บ     บ\n");

	printf("ฬอออออฮอออออฮอออออฮอออออน\n");

	printf("บ     บ     บ     บ     บ\n");

	printf("บ  %c  บ  %c  บ  %c  บ  %c  บ\n",ch[1],ch[2],ch[3],ch[4]);

	printf("บ     บ     บ     บ     บ\n");

	printf("ศอออออสอออออสอออออสอออออผ\n");

}

main()
{
	clrscr();

while(exiton != 1)	
{	
	for(box = 1; box < 16; box++)
		{
			ch[box] = ' ';
		}
	gameover = 0;
	printf("1 to Play\n2 to Exit\n\nEnter Command: ");
	scanf("%d", &cmd);
	if(cmd == 1)
	{

	while(gameover != 1)
	{
		if((nextplayer == 1)&&(gameover == 0))
		{
			mainscr();
			printf("Player %d: What Box? ", nextplayer);
			{
				scanf("%d", &box);

				if((box < 1)||(box > 16))
				{
					printf("Input Error: Number must be from 1-16...");
					getch();
					nextplayer = 1;
				}

				else

				if((box > 1)||(box < 16))
				{
					if((ch[box] == 'x')||(ch[box] == 'o'))
					{

						printf("Input Error: Input in an empty box...");
						getch();
						nextplayer = 1;
					}
					
					else

					if((ch[box] != 'x')||(ch[box] != 'o'))
					{
						ch[box] = 'x';

						{
							if(((ch[1] == 'x')||(ch[1] == 'o'))&&((ch[2] == 'x')||(ch[2] == 'o'))&&((ch[3] == 'x')||(ch[3] == 'o'))&&((ch[4] == 'x')||(ch[4] == 'o'))&&((ch[5] == 'x')||(ch[5] == 'o'))&&((ch[6] ==
'x')||(ch[6] == 'o'))&&((ch[7] == 'x')||(ch[7] == 'o'))&&((ch[8] == 'x')||(ch[8] == 'o'))&&((ch[9] == 'x')||(ch[9] == 'o'))&&((ch[10] == 'x')||(ch[10] == 'o'))&&((ch[11] == 'x')||(ch[11] == 'o'))&&((ch[12] == 'x')||(ch[12] == 'o'))&&((ch[13] == 'x')||(ch[13] == 'o'))&&((ch[14] == 'x')||(ch[14] == 'o'))&&((ch[15] == 'x')||(ch[15] == 'o'))&&((ch[16] == 'x')||(ch[16] == 'o')))
							{
								strcpy(winner,"None: Game Draw");
								gameover = 1;
							}

							if(ch[1] == 'x')
								{
									if((ch[2] == 'x')&&(ch[3] == 'x')&&(ch[4] == 'x'))
								{
									strcpy(winner,"Player 1");
									gameover = 1;
								}
							}

							if(ch[5] == 'x')
								{
									if((ch[6] == 'x')&&(ch[7] == 'x')&&(ch[8] == 'x'))
									{
										
										strcpy(winner,"Player 1");
										gameover = 1;
									}
								}

								if(ch[9] == 'x')
								{
									if((ch[10] == 'x')&&(ch[11] == 'x')&&(ch[12] == 'x'))
									{
										
										strcpy(winner,"Player 1");
										gameover = 1;;
									}
								}

								if(ch[13] == 'x')
								{
									if((ch[14] == 'x')&&(ch[15] == 'x')&&(ch[16] == 'x'))
									{
										strcpy(winner,"Player 1");
										gameover = 1;
									}
								}

								if(ch[1] == 'x')
								{
									if((ch[5] == 'x')&&(ch[9] == 'x')&&(ch[13] == 'x'))
									{
										strcpy(winner,"Player 1");
										gameover = 1;
									}
								}

								if(ch[2] == 'x')
								{
									if((ch[6] == 'x')&&(ch[10] == 'x')&&(ch[14] == 'x'))
									{
										strcpy(winner,"Player 1");
										gameover = 1;
									}
								}

								if(ch[3] == 'x')
								{
									if((ch[7] == 'x')&&(ch[11] == 'x')&&(ch[15] == 'x'))
									{
										strcpy(winner,"Player 1");
										gameover = 1;
									}
								}

                                              			if(ch[4] == 'x')
								{
									if((ch[8] == 'x')&&(ch[12] == 'x')&&(ch[16] == 'x'))
									{
										strcpy(winner,"Player 1");
										gameover = 1;
									}
								}
								
								if(ch[4] == 'x')
								{
									if((ch[7] == 'x')&&(ch[10] == 'x')&&(ch[13] == 'x'))
									{
										strcpy(winner,"Player 1");
										gameover = 1;
									}
								}
		
								if(ch[1] == 'x')
								{
									if((ch[6] == 'x')&&(ch[11] == 'x')&&(ch[16] == 'x'))
									{
										strcpy(winner,"Player 1");
										gameover = 1;
									}
								}
								
							}

							nextplayer = 2;
						}
					}
				}
			}
			
			
			if((nextplayer == 2)&&(gameover == 0))
			{
				mainscr();

				printf("Player %d: What Box? ",nextplayer);
				{
					scanf("%d", &box);

					if((box < 1)||(box > 16))
					{
						mainscr();
						
						
						printf("Input Error");
						
						printf("Input Box 1-16.");
					
						printf("Press Any Key...");
						getch();
						nextplayer = 2;
					}

					else

					if((box < 16)||(box > 1))
					{
						if((ch[box] == 'x')||(ch[box] == 'o'))
						{
							mainscr();
						
							
							printf("Input Error");
						
							printf("Input in an empty box.");
						
							printf("Press Any Key...");
							getch();
							nextplayer = 2;
						}

						else

						if((ch[box] != 'x')||(ch[box] != 'o'))
						{
							ch[box] = 'o';

	                                        	{
								if(((ch[1] == 'x')||(ch[1] == 'o'))&&((ch[2] == 'x')||(ch[2] == 'o'))&&((ch[3] == 'x')||(ch[3] == 'o'))&&((ch[4] == 'x')||(ch[4] == 'o'))&&((ch[5] == 'x')||(ch[5] == 'o'))&&((ch[6] ==
'x')||(ch[6] == 'o'))&&((ch[7] == 'x')||(ch[7] == 'o'))&&((ch[8] == 'x')||(ch[8] == 'o'))&&((ch[9] == 'x')||(ch[9] == 'o'))&&((ch[10] == 'x')||(ch[10] == 'o'))&&((ch[11] == 'x')||(ch[11] == 'o'))&&((ch[12] == 'x')||(ch[12] == 'o'))&&((ch[13] == 'x')||(ch[13] == 'o'))&&((ch[14] == 'x')||(ch[14] == 'o'))&&((ch[15] == 'x')||(ch[15] == 'o'))&&((ch[16] == 'x')||(ch[16] == 'o')))
								{
									strcpy(winner,"None: Game Draw");
									gameover = 1;
								}


								if(ch[1] == 'o')
								{
									if((ch[2] == 'o')&&(ch[3] == 'o')&&(ch[4] == 'o'))
									{
										strcpy(winner,"Player 2");
										gameover = 1;
									}
								}

								if(ch[5] == 'o')
								{
									if((ch[6] == 'o')&&(ch[7] == 'o')&&(ch[8] == 'o'))
									{
										strcpy(winner,"Player 2");
										gameover = 1;
									}
								}

								if(ch[9] == 'o')
								{
									if((ch[10] == 'o')&&(ch[11] == 'o')&&(ch[12] == 'o'))
									{
										strcpy(winner,"Player 2");
										gameover = 1;
									}
								}

								if(ch[13] == 'o')
								{
									if((ch[14] == 'o')&&(ch[15] == 'o')&&(ch[16] == 'o'))
									{
										strcpy(winner,"Player 2");
										gameover = 1;
									}
								}

								if(ch[1] == 'o')
								{
									if((ch[5] == 'o')&&(ch[9] == 'o')&&(ch[13] == 'o'))
									{
										strcpy(winner,"Player 2");
										gameover = 1;
									}
								}

								if(ch[2] == 'o')
								{
									if((ch[6] == 'o')&&(ch[10] == 'o')&&(ch[14] == 'o'))
									{
										strcpy(winner,"Player 2");
										gameover = 1;
									}
								}

								if(ch[3] == 'o')
								{
									if((ch[7] == 'o')&&(ch[11] == 'o')&&(ch[15] == 'o'))
									{
										strcpy(winner,"Player 2");
										gameover = 1;
									}
								}

                                              			if(ch[4] == 'o')
								{
									if((ch[8] == 'o')&&(ch[12] == 'o')&&(ch[16] == 'o'))
									{strcpy(winner,"Player 2");
										gameover = 1;
									}
								}
								
								if(ch[4] == 'o')
								{
									if((ch[7] == 'o')&&(ch[10] == 'o')&&(ch[13] == 'o'))
									{
										strcpy(winner,"Player 2");
										gameover = 1;
									}
								}
		
								if(ch[1] == 'o')
								{
									if((ch[6] == 'o')&&(ch[11] == 'o')&&(ch[16] == 'o'))
									{
										strcpy(winner,"Player 2");
										gameover = 1;
									}
								}	
							}

							nextplayer = 1;
						}
					}
				}
			}
		}
		mainscr();
	printf("Game Over!\n");
	printf("Winner: %s!\n\n", winner);
	printf("Press Any Key To Continue...");
	getch();
	clrscr();
	main();
	}
	if(cmd == 2)
	{
		exiton = 1;
	}
}
}