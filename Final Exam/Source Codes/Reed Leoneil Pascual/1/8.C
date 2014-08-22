#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>

char ch[10];
int box;
int nextplayer;
int gameover = 0;
int newgame;
int cont;
int cheats;

char winner[10];
int wins[2];
int lose[2];
int draw;

int loading;
int x[8];

int cmd;
int exiton = 0;

void mainscr()
{
	textcolor(LIGHTCYAN);
	clrscr();
	printf("ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÂÄÄÄÄÄÄÄÄÄÄÄÄÄÂÄÄÄÄÄÄÄÄÄÄÄÄÄÂÄÄÄÄÄÄÄÄÄÄÄÄÄÂÄÄÂÄÄÄÄÄÄÄÄÄÄÄÄÄ¿");
	printf("³    Tic Tac Toe    ³%c1: New Game%c³%c2: Continue%c³%c  3: Help  %c³CE³%c  4: Exit  %c³",x[0],x[1],x[2],x[3],x[4],x[5],x[6],x[7]);
	printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÁÄÄÄÄÄÄÄÄÄÄÄÄÄÁÄÄÄÄÄÄÄÄÄÄÄÄÄÁÄÄÁÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
	printf("³ÉÍÍÍÍÍËÍÍÍÍÍËÍÍÍÍÍ»³ÚÄÄÄScoreÄÄÄÄÄÄÄ¿                        ÚÄÄStatusÄÄÄÄÄÄÄ¿³");
	printf("³º     º     º     º³³               ³                        ³               ³³");
	printf("³º  %c  º  %c  º  %c  º³³   %cPlayer 1   ³                        ³New Game: %d    ³³",ch[7],ch[8],ch[9],16,newgame);
	printf("³º     º     º     º³³Wins: %d        ³                        ³Continue: %d    ³³",wins[0],cont);
	printf("³ÌÍÍÍÍÍÎÍÍÍÍÍÎÍÍÍÍÍ¹³³Lose: %d        ³                        ³Game Over: %d   ³³",lose[1],gameover);
	printf("³º     º     º     º³³               ³                        ³Player: %d      ³³",nextplayer);
	printf("³º  %c  º  %c  º  %c  º³³   %cPlayer 2   ³                        ³Cheats: %d      ³³",ch[4],ch[5],ch[6],16,cheats);
	printf("³º     º     º     º³³Wins: %d        ³                        ³               ³³",wins[1]);
	printf("³ÌÍÍÍÍÍÎÍÍÍÍÍÎÍÍÍÍÍ¹³³Lose: %d        ³                        ³%cHigh Score    ³³",lose[1],16);
	printf("³º     º     º     º³³               ³                        ³Name: Reed     ³³");
	printf("³º  %c  º  %c  º  %c  º³³Draw: %d        ³                        ³Score: 6919    ³³",ch[1],ch[2],ch[3],draw);
	printf("³º     º     º     º³³               ³                        ³               ³³");
	printf("³ÈÍÍÍÍÍÊÍÍÍÍÍÊÍÍÍÍÍ¼³ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ                        ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ³");
	printf("ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÁÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ");
	printf("\n");
}

main()

{
	clrscr();

	for(loading = 0; loading <= 1; loading++)
	{
		delay(9999999);
		clrscr();
		printf("Loading TicTacToe %d%%...", loading);
	}

	delay(9999999);

	while(exiton != 1)
	{	
		mainscr();
		printf("Enter Command: ");
		scanf("%d", &cmd);
		
		
		
		if(cmd == 0)
		{
			cheats = 1;
			mainscr();
			printf("Cheats Activated");
			printf("\n\n\n\n\nPress Any Key...");
			getch();
		}
		
		if(cmd == 1)
		{
			newgame = 1;
			cont = 0;
			gameover = 0;
			nextplayer = 1;

			for(box = 1; box < 10; box++)
			{
				ch[box] = ' ';
			}
			
			wins[0] = 0;
			wins[1] = 0;
			lose[0] = 0;
			lose[1] = 0;
			draw = 0;			
		}
		
		if(cmd ==2)
		{
			newgame = 0;
			cont = 1;
			nextplayer = 1;

			for(box = 1; box < 10; box++)
			{
				ch[box] = ' ';
			}
		}

		
		while((wins[0] != 9)||(wins[1] != 9))
		{
			if((nextplayer == 1)&&((wins[0] != 9)||(wins[1] != 9)))
			{
				mainscr();
				printf("What Box? ");
				{
					scanf("%d", &box);

					if((box < 1)||(box > 9))
					{
						printf("\n\n\n\n\nInput Error: Number must be from 1-9...");
						getch();
						nextplayer = 1;
					}

					else

					if((box > 1)||(box < 9))
					{
						if((ch[box] == 'x')||(ch[box] == 'o'))
						{

							printf("\n\n\n\n\nInput Error: Input in an empty box...");
							getch();
							nextplayer = 1;
						}

						else

						if((ch[box] != 'x')||(ch[box] != 'o'))
						{
							ch[box] = 'x';

							{
								if(((ch[1] == 'x')||(ch[1] == 'o'))&&((ch[2] == 'x')||(ch[2] == 'o'))&&((ch[3] == 'x')||(ch[3] == 'o'))&&((ch[4] == 'x')||(ch[4] == 'o'))&&((ch[5] == 'x')||(ch[5] == 'o'))&&((ch[6] =='x')||(ch[6] == 'o'))&&((ch[7] == 'x')||(ch[7] == 'o'))&&((ch[8] == 'x')||(ch[8] == 'o'))&&((ch[9] == 'x')||(ch[9] == 'o')))
								{
									strcpy(winner,"None: Game Draw");
									wins[0] = wins[0] + 1;
								}
		
								if(ch[1] == 'x')
								{
									if((ch[2] == 'x') && (ch[3] == 'x'))
									{
										strcpy(winner,"Player 1");
										wins[0] = wins[0] + 1;
									}
								}
	
								if(ch[4] == 'x')
								{
									if((ch[5] == 'x')&&(ch[6] == 'x'))
									{
										strcpy(winner,"Player 1");
										wins[0] = wins[0] + 1;
									}
								}
	
								if(ch[7] == 'x')
								{
									if((ch[8] == 'x')&&(ch[9] == 'x'))
									{
										strcpy(winner,"Player 1");
										wins[0] = wins[0] + 1;
									}
								}
	
								if(ch[1] == 'x')
								{
									if((ch[4] == 'x')&&(ch[7] == 'x'))
									{
										strcpy(winner,"Player 1");
										wins[0] = wins[0] + 1;
									}
								}
	
								if(ch[2] == 'x')
								{
									if((ch[5] == 'x')&&(ch[8] == 'x'))
									{
										strcpy(winner,"Player 1");
										wins[0] = wins[0] + 1;
									}
								}

								if(ch[3] == 'x')
								{
									if((ch[6] == 'x')&&(ch[9] == 'x'))
									{
										strcpy(winner,"Player 1");
										wins[0] = wins[0] + 1;
									}
								}

								if(ch[5] == 'x')
								{
									if((ch[1] == 'x')&&(ch[9] == 'x'))
									{
										strcpy(winner,"Player 1");
										wins[0] = wins[0] + 1;
									}
								}

                                              			if(ch[5] == 'x')
								{
									if((ch[3] == 'x')&&(ch[7] == 'x'))
									{
										strcpy(winner,"Player 1");
										wins[0] = wins[0] + 1;
									}
								}
							}
	
							nextplayer = 2;
						}
					}
				}
			}

			if((nextplayer == 2)&&((wins[0] < 9)||(wins[1] < 9)))
			{
				mainscr();
				printf("What Box? ");
				{
					scanf("%d", &box);
				
					if((box < 1)||(box > 9))
					{
						printf("\n\n\n\n\nInput Error: Number must be from 1-9...");
						getch();
						nextplayer = 2;
					}
						
					else
	
					if((box < 9)||(box > 1))
					{
						if((ch[box] == 'x')||(ch[box] == 'o'))	
						{
						
							printf("\n\n\n\n\nInput Error: Input in an empty box...");
							getch();
							nextplayer = 2;
						}
						
						else
	
						if((ch[box] != 'x')||(ch[box] != 'o'))
						{
							ch[box] = 'o';	

	                                        	{
								if(((ch[1] == 'x')||(ch[1] == 'o'))&&((ch[2] == 'x')||(ch[2] == 'o'))&&((ch[3] == 'x')||(ch[3] == 'o'))&&((ch[4] == 'x')||(ch[4] == 'o'))&&((ch[5] == 'x')||(ch[5] == 'o'))&&((ch[6] == 'x')||(ch[6] == 'o'))&&((ch[7] == 'x')||(ch[7] == 'o'))&&((ch[8] == 'x')||(ch[8] == 'o'))&&((ch[9] == 'x')||(ch[9] == 'o')))
								{
									strcpy(winner,"None: Game Draw");
									wins[1] = wins[0] + 1;
								}

								if(ch[1] == 'o')
								{
									if((ch[2] == 'o') && (ch[3] == 'o'))
									{
										strcpy(winner,"Player 2");
										wins[1] = wins[0] + 1;
									}
								}	

								if(ch[4] == 'o')
								{
									if((ch[5] == 'o')&&(ch[6] == 'o'))
									{
										strcpy(winner,"Player 2");
										wins[1] = wins[0] + 1;
									}
								}
	
								if(ch[7] == 'o')
								{
									if((ch[8] == 'o')&&(ch[9] == 'o'))
									{
										strcpy(winner,"Player 2");
										wins[1] = wins[0] + 1;
									}
								}	
	
								if(ch[1] == 'o')
								{
									if((ch[4] == 'o')&&(ch[7] == 'o'))
									{
										strcpy(winner,"Player 2");
										wins[1] = wins[0] + 1;
									}
								}	

								if(ch[2] == 'o')
								{
									if((ch[5] == 'o')&&(ch[8] == 'o'))
									{
										strcpy(winner,"Player 2");
										wins[1] = wins[0] + 1;
									}
								}

								if(ch[3] == 'o')
								{
									if((ch[6] == 'o')&&(ch[9] == 'o'))
									{
										strcpy(winner,"Player 2");
										wins[1] = wins[0] + 1;
									}
								}

								if(ch[5] == 'o')
								{
									if((ch[1] == 'o')&&(ch[9] == 'o'))
									{
										strcpy(winner,"Player 2");
										wins[1] = wins[0] + 1;
									}
								}

								if(ch[5] == 'o')
								{
									if((ch[3] == 'o')&&(ch[7] == 'o'))
									{
										strcpy(winner,"Player 2");
										wins[1] = wins[0] + 1;
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
		printf("Winner: %s",winner);
		printf("\n\n\n\n\nPress Any Key...");
		getch();		
		

		if(cmd == 3)
		{
			mainscr();
			printf("You need to match 3 x(if player 1) or o(if player 2).\nYou must score 9 points to win.\nHelp by: Reed");
			printf("\n\n\nPress Any Key...");
			getch();	
		}
		
		if(cmd == 4)
		{
			exiton = 1;
		}
		
		if((cmd > 4)||(cmd < 0))
		{
			mainscr();
			printf("\n\n\n\n\n\nInput Error: Enter Command  (1-4)");
			getch();
		}
	}	
	
	mainscr();
	printf("Press Any Key To Exit...");
	getch();
}