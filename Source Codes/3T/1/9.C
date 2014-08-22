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
int game;

char winner[50];
int wins[2];
int lose[2];
int draw;

int loading;
int x[8], y;

int cmd;
int exiton = 0;

void mainscr()
{
	clrscr();
	printf("ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÂÄÄÄÄÄÄÄÄÄÄÄÄÄÂÄÄÄÄÄÄÄÄÄÄÄÄÄÂÄÄÂÄÄÄÄÄÄÄÄÄÄÄÄÄÂÄÄÄÄÄÄÄÄÄÄÄÄÄ¿");
	printf("³    Tic Tac Toe    ³%c1: New Game%c³%c2: Continue%c³  ³%c  3: Help  %c³%c  4: Exit  %c³",x[0],x[1],x[2],x[3],x[4],x[5],x[6],x[7]);
	printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÁÄÄÄÄÄÄÄÄÄÄÄÄÄÁÄÄÁÄÄÄÄÄÄÄÄÄÄÄÄÄÁÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
	printf("³ÉÍÍÍÍÍËÍÍÍÍÍËÍÍÍÍÍ»³ ÚÄÄÄScoreÄÄÄÄÄÄÄ¿ÚÄÄÄLogÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿ÚÄÄStatusÄÄÄÄÄÄÄ¿ ³");
	printf("³º     º     º     º³ ³               ³³                    ³³               ³ ³");
	printf("³º  %c  º  %c  º  %c  º³ ³   %c           ³³                    ³³New Game: %d    ³ ³",ch[7],ch[8],ch[9],16,newgame);
	printf("³º     º     º     º³ ³Wins: %d        ³³                    ³³Continue: %d    ³ ³",wins[0],cont);
	printf("³ÌÍÍÍÍÍÎÍÍÍÍÍÎÍÍÍÍÍ¹³ ³Lose: %d        ³³                    ³³Game: %d        ³ ³",lose[0],game);
	printf("³º     º     º     º³ ³               ³³                    ³³Player:        ³ ³",nextplayer);
	printf("³º  %c  º  %c  º  %c  º³ ³   %c           ³³                    ³³Cheats:        ³ ³",ch[4],ch[5],ch[6],16,cheats);
	printf("³º     º     º     º³ ³Wins: %d        ³³                    ³³               ³ ³",wins[1]);
	printf("³ÌÍÍÍÍÍÎÍÍÍÍÍÎÍÍÍÍÍ¹³ ³Lose: %d        ³³                    ³³%cHigh Score    ³ ³",lose[1],16);
	printf("³º     º     º     º³ ³               ³³                    ³³Name: Reed     ³ ³");
	printf("³º  %c  º  %c  º  %c  º³ ³Draw: %d        ³³                    ³³Score: 6919    ³ ³",ch[1],ch[2],ch[3],draw);
	printf("³º     º     º     º³ ³               ³³                    ³³               ³ ³");
	printf("³ÈÍÍÍÍÍÊÍÍÍÍÍÊÍÍÍÍÍ¼³ ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ ³");
	printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
	printf("³%c                  ³%c                                                         ³",16,16);
	printf("ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÁÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ");
}

maingame()
{
		while(gameover != 1)
		{
			if((nextplayer == 1)&&(gameover == 0))
			{
				mainscr();
				gotoxy(3,18);
				printf("What Box?");
				{
					gotoxy(23,18);
					scanf("%d", &box);

					if((box < 1)||(box > 9))
					{
						gotoxy(23,18);
						printf("Input Error: Number must be from 1-9...");
						getch();
						nextplayer = 1;
					}

					else

					if((box > 1)||(box < 9))
					{
						if((ch[box] == 'x')||(ch[box] == 'o'))
						{
							gotoxy(23,18);
							printf("Input Error: Input in an empty box...");
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
									strcpy(winner,"Game Draw!");
									draw = draw + 1;
									gameover = 1;
								}
		
								if(ch[1] == 'x')
								{
									if((ch[2] == 'x') && (ch[3] == 'x'))
									{
										strcpy(winner,"Winner: Player 1");
										wins[0] = wins[0] + 1;
										lose[1] = lose[1] + 1;
										gameover = 1;
									}
								}
	
								if(ch[4] == 'x')
								{
									if((ch[5] == 'x')&&(ch[6] == 'x'))
									{
										strcpy(winner,"Winner: Player 1");
										wins[0] = wins[0] + 1;
										lose[1] = lose[1] + 1;
										gameover = 1;
									}
								}
	
								if(ch[7] == 'x')
								{
									if((ch[8] == 'x')&&(ch[9] == 'x'))
									{
										strcpy(winner,"Winner: Player 1");
										wins[0] = wins[0] + 1;
										lose[1] = lose[1] + 1;
										gameover = 1;
									}
								}
	
								if(ch[1] == 'x')
								{
									if((ch[4] == 'x')&&(ch[7] == 'x'))
									{
										strcpy(winner,"Winner: Player 1");
										wins[0] = wins[0] + 1;
										lose[1] = lose[1] + 1;
										gameover = 1;
									}
								}
	
								if(ch[2] == 'x')
								{
									if((ch[5] == 'x')&&(ch[8] == 'x'))
									{
										strcpy(winner,"Winner: Player 1");
										wins[0] = wins[0] + 1;
										lose[1] = lose[1] + 1;
										gameover = 1;
									}
								}

								if(ch[3] == 'x')
								{
									if((ch[6] == 'x')&&(ch[9] == 'x'))
									{
										strcpy(winner,"Winner: Player 1");
										wins[0] = wins[0] + 1;
										lose[1] = lose[1] + 1;
										gameover = 1;
									}
								}

								if(ch[5] == 'x')
								{
									if((ch[1] == 'x')&&(ch[9] == 'x'))
									{
										strcpy(winner,"Winner: Player 1");
										wins[0] = wins[0] + 1;
										lose[1] = lose[1] + 1;
										gameover = 1;
									}
								}

                                              			if(ch[5] == 'x')
								{
									if((ch[3] == 'x')&&(ch[7] == 'x'))
									{
										strcpy(winner,"Winner: Player 1");
										wins[0] = wins[0] + 1;
										lose[1] = lose[1] + 1;
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
				gotoxy(3,18);
				printf("What Box?");
				{
					gotoxy(23,18);
					scanf("%d", &box);
				
					if((box < 1)||(box > 9))
					{
						gotoxy(23,18);
						printf("Input Error: Number must be from 1-9...");
						getch();
						nextplayer = 2;
					}
						
					else
	
					if((box < 9)||(box > 1))
					{
						if((ch[box] == 'x')||(ch[box] == 'o'))	
						{
							gotoxy(23,18);
							printf("Input Error: Input in an empty box...");
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
									strcpy(winner,"Game Draw!");
									draw = draw + 1;
									gameover = 1;
								}

								if(ch[1] == 'o')
								{
									if((ch[2] == 'o') && (ch[3] == 'o'))
									{
										strcpy(winner,"Winner: Player 2");
										wins[1] = wins[1] + 1;
										lose[0] = lose[0] + 1;
										gameover = 1;
									}
								}	

								if(ch[4] == 'o')
								{
									if((ch[5] == 'o')&&(ch[6] == 'o'))
									{
										strcpy(winner,"Winner: Player 2");
										wins[1] = wins[1] + 1;
										lose[0] = lose[0] + 1;
										gameover = 1;
									}
								}
	
								if(ch[7] == 'o')
								{
									if((ch[8] == 'o')&&(ch[9] == 'o'))
									{
										strcpy(winner,"Winner: Player 2");
										wins[1] = wins[1] + 1;
										lose[0] = lose[0] + 1;
										gameover = 1;
									}
								}	
	
								if(ch[1] == 'o')
								{
									if((ch[4] == 'o')&&(ch[7] == 'o'))
									{
										strcpy(winner,"Winner: Player 2");
										wins[1] = wins[1] + 1;
										lose[0] = lose[0] + 1;
										gameover = 1;
									}
								}	

								if(ch[2] == 'o')
								{
									if((ch[5] == 'o')&&(ch[8] == 'o'))
									{
										strcpy(winner,"Winner: Player 2");
										wins[1] = wins[1] + 1;
										lose[0] = lose[0] + 1;
										gameover = 1;
									}
								}

								if(ch[3] == 'o')
								{
									if((ch[6] == 'o')&&(ch[9] == 'o'))
									{
										strcpy(winner,"Winner: Player 2");
										wins[1] = wins[1] + 1;
										lose[0] = lose[0] + 1;
										gameover = 1;
									}
								}

								if(ch[5] == 'o')
								{
									if((ch[1] == 'o')&&(ch[9] == 'o'))
									{
										strcpy(winner,"Winner: Player 2");
										wins[1] = wins[1] + 1;
										lose[0] = lose[0] + 1;
										gameover = 1;
									}
								}

								if(ch[5] == 'o')
								{
									if((ch[3] == 'o')&&(ch[7] == 'o'))
									{
										strcpy(winner,"Winner: Player 2");
										wins[1] = wins[1] + 1;
										lose[0] = lose[0] + 1;
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
		gotoxy(41,5);
		printf("%s",winner);
		gotoxy(23,18);
		printf("Press Any Key...");
		getch();	
}

main()

{
	clrscr();
	textbackground(BLACK);
	textcolor(LIGHTCYAN);

	for(loading = 0; loading <= 100; loading++)
	{
		delay(9999999);
		clrscr();
		printf("Loading TicTacToe %d%%...", loading);
	}

	delay(9999999);

	while(exiton != 1)
	{	
		for(y = 0; y < 8; y ++)
		{
			x[y] = 32;
		}

		for(y = 1; y < 10; y ++)
		{
			ch[y] = 32;
		}
		
		nextplayer = 0;
		mainscr();
		gotoxy(3,18);
		printf("Enter Command:");
		gotoxy(23,18);
		scanf("%d", &cmd);
		
		
		
		if(cmd == 0)
		{
			if(cheats == 0)
			{
				cheats = 1;
				mainscr();
				gotoxy(41,5);
				printf("Cheats Activated!");
				gotoxy(23,18);
				printf("Press Any Key...");
				getch();
			}

			else

			if(cheats == 1)
			{
				cheats = 0;
				mainscr();
				gotoxy(41,5);
				printf("Cheats Deactivated!");
				gotoxy(23,18);
				printf("Press Any Key...");
				getch();
			}
		}
		
		if(cmd == 1)
		{
			newgame = 1;
			cont = 0;
			gameover = 0;
			nextplayer = 1;
			game = 1;

			for(box = 1; box < 10; box++)
			{
				ch[box] = ' ';
			}
			
			wins[0] = 0;
			wins[1] = 0;
			lose[0] = 0;
			lose[1] = 0;
			draw = 0;
			
			x[0] = 16;
			x[1] = 17;
			maingame();
		}
		
		if(cmd ==2)
		{
			newgame = 0;
			cont = 1;
			gameover = 0;
			nextplayer = 1;
			game = game + 1;

			for(box = 1; box < 10; box++)
			{
				ch[box] = ' ';
			}

			x[2] = 16;
			x[3] = 17;
			
			if(((wins[0] != 3)||(wins[1] != 3))||(game < 10))
			{
				maingame();	
			}
			
			if(wins[0] == 3)
			{
				mainscr();
				gotoxy(41,5);
				printf("Game Over!");
				gotoxy(41, 6);
				printf("Winner: Player 1!");
				gotoxy(23,18);
				printf("Press Any Key...");
				getch();
				wins[0] = 0;
				wins[1] = 0;
				lose[0] = 0;
				lose[1] = 0;
				draw = 0;
				newgame = 0;
				cont = 0;
				game = 0;
				nextplayer = 0;
			}
	
			else

			if(wins[1] == 3)
			{
				mainscr();
				gotoxy(41,5);
				printf("Game Over!");
				gotoxy(41, 6);
				printf("Winner: Player 2!");
				gotoxy(23,18);
				printf("Press Any Key...");
				getch();
				wins[0] = 0;
				wins[1] = 0;
				lose[0] = 0;
				lose[1] = 0;
				draw = 0;
				newgame = 0;
				cont = 0;
				game = 0;
				nextplayer = 0;
			}
			
			else

			if((game == 9)&&((wins[0] != 3)||(wins[1] != 3)))
			{
				mainscr();
				gotoxy(41,5);
				printf("Game Over!");
				gotoxy(41, 6);
				printf("It's A Draw!");
				gotoxy(23,18);
				printf("Press Any Key...");
				getch();
				wins[0] = 0;
				wins[1] = 0;
				lose[0] = 0;
				lose[1] = 0;
				draw = 0;	
				newgame = 0;
				cont = 0;
				game = 0;
				nextplayer = 0;
			}
		
		}
		
		if(cmd == 3)
		{
			x[4] = 16;
			x[5] = 17;
			mainscr();
			gotoxy(41,5);
			printf("You need to match 3 ");
			gotoxy(41,6);
			printf("'x' (if player 1) or");
			gotoxy(41,7);
			printf("3 'o' (if player 2) ");
			gotoxy(41,8);
			printf("in a line.");
			gotoxy(41,9);
			printf("You must score 3    ");
			gotoxy(41, 10);
			printf("points in 9 games  ");
			gotoxy(41, 11);
			printf("to win.");
			gotoxy(41,12);
			printf("Help by: Reed");
			gotoxy(23,18);
			printf("Press Any Key...");
			getch();	
		}
		
		if(cmd == 4)
		{
			x[6] = 16;
			x[7] = 17;
			exiton = 1;
		}
		
		if((cmd > 4)||(cmd < 0))
		{
			mainscr();
			gotoxy(23,18);
			printf("Input Error: Enter Command  (1-4)");
			getch();
		}
	}	
		
	mainscr();
	gotoxy(23,18);
	printf("Press Any Key To Exit...");
	getch();
}