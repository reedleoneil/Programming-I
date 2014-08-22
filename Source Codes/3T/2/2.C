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
char name[2][8];

char winner[50];
int wins[2];
int lose[2];
int draw;
char ce[0] = "Off";

int loading;
int x[8], y;

int cmd;
int exiton = 0;

void mainscr()
{
	clrscr();
	printf("ÚÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÂÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÂÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ¿");
	printf("³     Tic Tac Toe                          ³%c  1: New Game  %c³%c  2: Continue  %c³",x[0],x[1],x[2],x[3]);
	printf("ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÅÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
	printf("³                                          ³%c    3: Help    %c³%c    4: Exit    %c³",x[4],x[5],x[6],x[7]);
	printf("³                                          ÃÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÁÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄ´");
	printf("³                                          ³ÚÄÄÄScoreÄÄÄÄÄÄÄ¿ ÚÄÄÄStatusÄÄÄÄÄÄ¿³");
	printf("³                                          ³³               ³ ³               ³³");
	printf("³                                          ³³   %c           ³ ³New Game: %d    ³³",16,newgame);
	printf("³                                          ³³Wins: %d        ³ ³Continue: %d    ³³",wins[0],cont);
	printf("³                                          ³³Lose: %d        ³ ³Game: %d        ³³",lose[0],game);
	printf("³                                          ³³               ³ ³Player:        ³³",nextplayer);
	printf("³                                          ³³   %c           ³ ³Cheats: %s    ³³",16,ce);
	printf("³                                          ³³Wins: %d        ³ ³               ³³",wins[1]);
	printf("³                                          ³³Lose: %d        ³ ³%cHigh Score    ³³",lose[1],16);
	printf("³                                          ³³               ³ ³Name: Reed     ³³");
	printf("³                                          ³³Draw: %d        ³ ³Score: 6919    ³³",draw);
	printf("³                                          ³³               ³ ³               ³³");
	printf("³                                          ³ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ³");
	printf("³                                          ³%c                                  ³",16);
	printf("³                                          ³                                   ³");
	printf("³                                          ³                                   ³");
	printf("³                                          ³                                   ³");
	printf("³                                          ³                                   ³");
	printf("ÀÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÁÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÄÙ");
	printf("          Copyright 2012          CpE Reed          All Rights Reserved");
	gotoxy(50,8);
	printf("%s",name[0]);
	gotoxy(50,12);
	printf("%s",name[1]);
}

void maingame()
{
		while(gameover != 1)
		{
			if((nextplayer == 1)&&(gameover == 0))
			{
				mainscr();
				gotoxy(72,11);
				printf("%s", name[0]);
				gotoxy(46,19);
				printf("What Box? ");
				{
					scanf("%d", &box);

					if((box < 1)||(box > 9))
					{
						mainscr();
						gotoxy(46,19);
						printf("Input Error");
						gotoxy(45,20);
						printf("Input Box 1-9");
						gotoxy(45,21);
						printf("Press Any Key...");
						getch();
						nextplayer = 1;
					}

					else

					if((box > 1)||(box < 9))
					{
						if(((ch[box] == 'x')||(ch[box] == 'o'))&&(cheats == 0))
						{
							mainscr();
							gotoxy(46,19);
							printf("Input Error");
							gotoxy(45,20);
							printf("Input in an empty box");
							gotoxy(45,21);
							printf("Press Any Key...");
							getch();
							nextplayer = 1;
						}

						else

						if((ch[box] != 'x')||(ch[box] != 'o'))
						{
							ch[box] = 'x';

							{
								if(((ch[1] == 'x')||(ch[1] == 'o'))&&((ch[2] == 'x')||(ch[2] == 'o'))&&((ch[3] == 'x')||(ch[3] == 'o'))&&((ch[4] == 'x')||(ch[4] == 'o'))&&((ch[5] == 'x')||(ch[5] == 'o'))&&((ch[6] ==
'x')||(ch[6] == 'o'))&&((ch[7] == 'x')||(ch[7] == 'o'))&&((ch[8] == 'x')||(ch[8] == 'o'))&&((ch[9] == 'x')||(ch[9] == 'o')))
								{
									strcpy(winner,"None");
									draw = draw + 1;
									gameover = 1;
								}


								if(ch[1] == 'x')
								{
									if((ch[2] == 'x') && (ch[3] == 'x'))
									{
										strcpy(winner,name[0]);
										wins[0] = wins[0] + 1;
										lose[1] = lose[1] + 1;
										gameover = 1;
									}
								}

								if(ch[4] == 'x')
								{
									if((ch[5] == 'x')&&(ch[6] == 'x'))
									{
										strcpy(winner,name[0]);
										wins[0] = wins[0] + 1;
										lose[1] = lose[1] + 1;
										gameover = 1;
									}
								}

								if(ch[7] == 'x')
								{
									if((ch[8] == 'x')&&(ch[9] == 'x'))
									{
										strcpy(winner,name[0]);
										wins[0] = wins[0] + 1;
										lose[1] = lose[1] + 1;
										gameover = 1;
									}
								}

								if(ch[1] == 'x')
								{
									if((ch[4] == 'x')&&(ch[7] == 'x'))
									{
										strcpy(winner,name[0]);
										wins[0] = wins[0] + 1;
										lose[1] = lose[1] + 1;
										gameover = 1;
									}
								}

								if(ch[2] == 'x')
								{
									if((ch[5] == 'x')&&(ch[8] == 'x'))
									{
										strcpy(winner,name[0]);
										wins[0] = wins[0] + 1;
										lose[1] = lose[1] + 1;
										gameover = 1;
									}
								}

								if(ch[3] == 'x')
								{
									if((ch[6] == 'x')&&(ch[9] == 'x'))
									{
										strcpy(winner,name[0]);
										wins[0] = wins[0] + 1;
										lose[1] = lose[1] + 1;
										gameover = 1;
									}
								}

								if(ch[5] == 'x')
								{
									if((ch[1] == 'x')&&(ch[9] == 'x'))
									{
										strcpy(winner,name[0]);
										wins[0] = wins[0] + 1;
										lose[1] = lose[1] + 1;
										gameover = 1;
									}
								}

                                              			if(ch[5] == 'x')
								{
									if((ch[3] == 'x')&&(ch[7] == 'x'))
									{
										strcpy(winner,name[0]);
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
				gotoxy(72,11);
				printf("%s", name[1]);
				gotoxy(46,19);
				printf("What Box? ");
				{
					scanf("%d", &box);

					if((box < 1)||(box > 9))
					{
						mainscr();
						gotoxy(46,19);
						printf("Input Error");
						gotoxy(45,20);
						printf("Input Box 1-9");
						gotoxy(45,21);
						printf("Press Any Key...");
						getch();
						nextplayer = 2;
					}

					else

					if((box < 9)||(box > 1))
					{
						if(((ch[box] == 'x')||(ch[box] == 'o'))&&(cheats == 0))
						{
							mainscr();
							gotoxy(46,19);
							printf("Input Error");
							gotoxy(45,20);
							printf("Input in an empty box");
							gotoxy(45,21);
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
'x')||(ch[6] == 'o'))&&((ch[7] == 'x')||(ch[7] == 'o'))&&((ch[8] == 'x')||(ch[8] == 'o'))&&((ch[9] == 'x')||(ch[9] == 'o')))
								{
									strcpy(winner,"None");
									draw = draw + 1;
									gameover = 1;
								}


								if(ch[1] == 'o')
								{
									if((ch[2] == 'o') && (ch[3] == 'o'))
									{
										strcpy(winner,name[1]);
										wins[1] = wins[1] + 1;
										lose[0] = lose[0] + 1;
										gameover = 1;
									}
								}

								if(ch[4] == 'o')
								{
									if((ch[5] == 'o')&&(ch[6] == 'o'))
									{
										strcpy(winner,name[1]);
										wins[1] = wins[1] + 1;
										lose[0] = lose[0] + 1;
										gameover = 1;
									}
								}

								if(ch[7] == 'o')
								{
									if((ch[8] == 'o')&&(ch[9] == 'o'))
									{
										strcpy(winner,name[1]);
										wins[1] = wins[1] + 1;
										lose[0] = lose[0] + 1;
										gameover = 1;
									}
								}

								if(ch[1] == 'o')
								{
									if((ch[4] == 'o')&&(ch[7] == 'o'))
									{
										strcpy(winner,name[1]);
										wins[1] = wins[1] + 1;
										lose[0] = lose[0] + 1;
										gameover = 1;
									}
								}

								if(ch[2] == 'o')
								{
									if((ch[5] == 'o')&&(ch[8] == 'o'))
									{
										strcpy(winner,name[1]);
										wins[1] = wins[1] + 1;
										lose[0] = lose[0] + 1;
										gameover = 1;
									}
								}

								if(ch[3] == 'o')
								{
									if((ch[6] == 'o')&&(ch[9] == 'o'))
									{
										strcpy(winner,name[1]);
										wins[1] = wins[1] + 1;
										lose[0] = lose[0] + 1;
										gameover = 1;
									}
								}

								if(ch[5] == 'o')
								{
									if((ch[1] == 'o')&&(ch[9] == 'o'))
									{
										strcpy(winner,name[1]);
										wins[1] = wins[1] + 1;
										lose[0] = lose[0] + 1;
										gameover = 1;
									}
								}

								if(ch[5] == 'o')
								{
									if((ch[3] == 'o')&&(ch[7] == 'o'))
									{
										strcpy(winner,name[1]);
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
		gotoxy(46,19);
		printf("Winner: %s!",winner);
		if(stricmp(winner,"None") == 0)
		{	
			mainscr();
			gotoxy(46,19);
			printf("Game Draw!");
		}
		gotoxy(45,20);
		printf("Press Any Key...");
		getch();
}

main()

{
	clrscr();
	textbackground(BLACK);
	textcolor(LIGHTCYAN);

	for(loading = 0; loading <= 0; loading++)
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
		
		mainscr();

		gotoxy(46,19);
		printf("Enter Command: ");
		scanf("%d", &cmd);
		
		
		
		if(cmd == 0)
		{
			if(cheats == 0)
			{
				cheats = 1;
				strcpy(ce,"On ");
				mainscr();
				gotoxy(46,19);
				printf("Cheats Activated!");
				gotoxy(45,20);
				printf("Press Any Key...");
				getch();
			}

			else

			if(cheats == 1)
			{
				cheats = 0;
				strcpy(ce,"Off");
				mainscr();
				gotoxy(46,19);
				printf("Cheats Deactivated!");
				gotoxy(45,20);
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

			strcpy(name[0],"P1");
			strcpy(name[1],"P2");

			mainscr();
			gotoxy(46,19);
			printf("Enter Name P1: ");	
			scanf("%s",name[0]);
			mainscr();
			gotoxy(46,19);
			printf("Enter Name P2: ");	
			scanf("%s",name[1]);		
		

			maingame();
		}
		
		if(cmd ==2)
		{
			if(game != 0)
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
					gotoxy(2,4);
					printf("Game Over!");
					gotoxy(2,5);
					printf("Winner: %s!",name[0]);
					gotoxy(46,19);
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
					strcpy(name[0],"P1");
					strcpy(name[1],"P2");
				}
		
				else	

				if(wins[1] == 3)
				{
					mainscr();
					gotoxy(2,4);
					printf("Game Over!");
					gotoxy(2,5);
					printf("Winner: %s!",name[1]);
					gotoxy(46,19);
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
					strcpy(name[0],"P1");
					strcpy(name[1],"P2");
				}
			
				else

				if((game == 9)&&((wins[0] != 3)||(wins[1] != 3)))
				{
					mainscr();
					gotoxy(2,4);
					printf("Game Over!");
					gotoxy(2,5);
					printf("It's A Draw!");
					gotoxy(45,19);
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
					strcpy(name[0],"P1");
					strcpy(name[1],"P2");
				}
			}
			
			else
			{
				mainscr();
				gotoxy(46,19);
				printf("Input Error");
				gotoxy(45,20);
				printf("Cannot continue, try a new game");
				gotoxy(45,21);
				printf("Press Any Key...");
				getch();
			}
		
		}
		
		if(cmd == 3)
		{
			x[4] = 16;
			x[5] = 17;
			mainscr();
			gotoxy(2,4);
			printf("You need to match 'x' or 'o' in a line.");
			gotoxy(2,5);
			printf("You must score 3 points in 9 games to win.");
			gotoxy(2,6);
			printf("Help by: Reed");
			gotoxy(46,19);
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
			gotoxy(46,19);
			printf("Input Error");
			gotoxy(46,20);
			printf("Enter Command  (1-4)");
			gotoxy(46,21);
			printf("Press Any Key...");
			getch();
		}
	}	
		
	mainscr();
	gotoxy(46,19);
	printf("Press Any Key To Exit...");
	getch();
}