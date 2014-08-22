#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>

char ch[17];
int box;
int nextplayer;
int gameover = 0;
int newgame;
int cont;
int cheats;
int game;
int version;

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

void scr4x4()
{
	gotoxy(10.5,6);
	printf("ÉÍÍÍÍÍËÍÍÍÍÍËÍÍÍÍÍËÍÍÍÍÍ»");
	gotoxy(10.5,7);
	printf("º     º     º     º     º");
	gotoxy(10.5,8);
	printf("º  %c  º  %c  º  %c  º  %c  º",ch[13],ch[14],ch[15],ch[16]);
	gotoxy(10.5,9);
	printf("º     º     º     º     º");
	gotoxy(10.5,10);
	printf("ÌÍÍÍÍÍÎÍÍÍÍÍÎÍÍÍÍÍÎÍÍÍÍÍ¹");
	gotoxy(10.5,11);
	printf("º     º     º     º     º");
	gotoxy(10.5,12);
	printf("º  %c  º  %c  º  %c  º  %c  º",ch[9],ch[10],ch[11],ch[12]);
	gotoxy(10.5,13);
	printf("º     º     º     º     º");
	gotoxy(10.5,14);
	printf("ÌÍÍÍÍÍÎÍÍÍÍÍÎÍÍÍÍÍÎÍÍÍÍÍ¹");
	gotoxy(10.5,15);
	printf("º     º     º     º     º");
	gotoxy(10.5,16);
	printf("º  %c  º  %c  º  %c  º  %c  º",ch[5],ch[6],ch[7],ch[8]);
	gotoxy(10.5,17);
	printf("º     º     º     º     º");
	gotoxy(10.5,18);
	printf("ÌÍÍÍÍÍÎÍÍÍÍÍÎÍÍÍÍÍÎÍÍÍÍÍ¹");
	gotoxy(10.5,19);
	printf("º     º     º     º     º");
	gotoxy(10.5,20);
	printf("º  %c  º  %c  º  %c  º  %c  º",ch[1],ch[2],ch[3],ch[4]);
	gotoxy(10.5,21);
	printf("º     º     º     º     º");
	gotoxy(10.5,22);
	printf("ÈÍÍÍÍÍÊÍÍÍÍÍÊÍÍÍÍÍÊÍÍÍÍÍ¼");
}

void maingame4x4()
{
		while(gameover != 1)
		{
			if((nextplayer == 1)&&(gameover == 0))
			{
				mainscr();
				scr4x4();
				gotoxy(72,11);
				printf("%s", name[0]);
				gotoxy(46,19);
				printf("What Box? ");
				{
					scanf("%d", &box);

					if((box < 1)||(box > 16))
					{
						mainscr();
						scr4x4();
						gotoxy(46,19);
						printf("Input Error");
						gotoxy(45,20);
						printf("Input Box 1-16.");
						gotoxy(45,21);
						printf("Press Any Key...");
						getch();
						nextplayer = 1;
					}

					else

					if((box > 1)||(box < 16))
					{
						if(((ch[box] == 'x')||(ch[box] == 'o'))&&(cheats == 0))
						{
							mainscr();
							scr4x4();
							gotoxy(46,19);
							printf("Input Error");
							gotoxy(45,20);
							printf("Input in an empty box.");
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
'x')||(ch[6] == 'o'))&&((ch[7] == 'x')||(ch[7] == 'o'))&&((ch[8] == 'x')||(ch[8] == 'o'))&&((ch[9] == 'x')||(ch[9] == 'o'))&&((ch[10] == 'x')||(ch[10] == 'o'))&&((ch[11] == 'x')||(ch[11] == 'o'))&&((ch[12] == 'x')||(ch[12] == 'o'))&&((ch[13] == 'x')||(ch[13] == 'o'))&&((ch[14] == 'x')||(ch[14] == 'o'))&&((ch[15] == 'x')||(ch[15] == 'o'))&&((ch[16] == 'x')||(ch[16] == 'o')))
								{
									strcpy(winner,"None");
									draw = draw + 1;
									gameover = 1;
								}
								
								if(ch[1] == 'x')
								{
									if((ch[2] == 'x')&&(ch[3] == 'x')&&(ch[4] == 'x'))
									{
										strcpy(winner,name[0]);
										wins[0] = wins[0] + 1;
										lose[1] = lose[1] + 1;
										gameover = 1;
									}
								}

								if(ch[5] == 'x')
								{
									if((ch[6] == 'x')&&(ch[7] == 'x')&&(ch[8] == 'x'))
									{
										strcpy(winner,name[0]);
										wins[0] = wins[0] + 1;
										lose[1] = lose[1] + 1;
										gameover = 1;
									}
								}

								if(ch[9] == 'x')
								{
									if((ch[10] == 'x')&&(ch[11] == 'x')&&(ch[12] == 'x'))
									{
										strcpy(winner,name[0]);
										wins[0] = wins[0] + 1;
										lose[1] = lose[1] + 1;
										gameover = 1;
									}
								}

								if(ch[13] == 'x')
								{
									if((ch[44] == 'x')&&(ch[15] == 'x')&&(ch[16] == 'x'))
									{
										strcpy(winner,name[0]);
										wins[0] = wins[0] + 1;
										lose[1] = lose[1] + 1;
										gameover = 1;
									}
								}

								if(ch[1] == 'x')
								{
									if((ch[5] == 'x')&&(ch[9] == 'x')&&(ch[13] == 'x'))
									{
										strcpy(winner,name[0]);
										wins[0] = wins[0] + 1;
										lose[1] = lose[1] + 1;
										gameover = 1;
									}
								}

								if(ch[2] == 'x')
								{
									if((ch[6] == 'x')&&(ch[10] == 'x')&&(ch[14] == 'x'))
									{
										strcpy(winner,name[0]);
										wins[0] = wins[0] + 1;
										lose[1] = lose[1] + 1;
										gameover = 1;
									}
								}

								if(ch[3] == 'x')
								{
									if((ch[7] == 'x')&&(ch[11] == 'x')&&(ch[15] == 'x'))
									{
										strcpy(winner,name[0]);
										wins[0] = wins[0] + 1;
										lose[1] = lose[1] + 1;
										gameover = 1;
									}
								}

                                              			if(ch[4] == 'x')
								{
									if((ch[8] == 'x')&&(ch[12] == 'x')&&(ch[16] == 'x'))
									{
										strcpy(winner,name[0]);
										wins[0] = wins[0] + 1;
										lose[1] = lose[1] + 1;
										gameover = 1;
									}
								}
								
								if(ch[4] == 'x')
								{
									if((ch[7] == 'x')&&(ch[10] == 'x')&&(ch[13] == 'x'))
									{
										strcpy(winner,name[0]);
										wins[0] = wins[0] + 1;
										lose[1] = lose[1] + 1;
										gameover = 1;
									}
								}
		
								if(ch[1] == 'x')
								{
									if((ch[6] == 'x')&&(ch[11] == 'x')&&(ch[16] == 'x'))
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
				scr4x4();
				gotoxy(72,11);
				printf("%s", name[1]);
				gotoxy(46,19);
				printf("What Box? ");
				{
					scanf("%d", &box);

					if((box < 1)||(box > 16))
					{
						mainscr();
						scr4x4();
						gotoxy(46,19);
						printf("Input Error");
						gotoxy(45,20);
						printf("Input Box 1-16.");
						gotoxy(45,21);
						printf("Press Any Key...");
						getch();
						nextplayer = 2;
					}

					else

					if((box < 16)||(box > 1))
					{
						if(((ch[box] == 'x')||(ch[box] == 'o'))&&(cheats == 0))
						{
							mainscr();
							scr4x4();
							gotoxy(46,19);
							printf("Input Error");
							gotoxy(45,20);
							printf("Input in an empty box.");
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
'x')||(ch[6] == 'o'))&&((ch[7] == 'x')||(ch[7] == 'o'))&&((ch[8] == 'x')||(ch[8] == 'o'))&&((ch[9] == 'x')||(ch[9] == 'o'))&&((ch[10] == 'x')||(ch[10] == 'o'))&&((ch[11] == 'x')||(ch[11] == 'o'))&&((ch[12] == 'x')||(ch[12] == 'o'))&&((ch[13] == 'x')||(ch[13] == 'o'))&&((ch[14] == 'x')||(ch[14] == 'o'))&&((ch[15] == 'x')||(ch[15] == 'o'))&&((ch[16] == 'x')||(ch[16] == 'o')))
								{
									strcpy(winner,"None");
									draw = draw + 1;
									gameover = 1;
								}


								if(ch[1] == 'o')
								{
									if((ch[2] == 'o')&&(ch[3] == 'o')&&(ch[4] == 'o'))
									{
										strcpy(winner,name[0]);
										wins[0] = wins[0] + 1;
										lose[1] = lose[1] + 1;
										gameover = 1;
									}
								}

								if(ch[5] == 'o')
								{
									if((ch[6] == 'o')&&(ch[7] == 'o')&&(ch[8] == 'o'))
									{
										strcpy(winner,name[0]);
										wins[0] = wins[0] + 1;
										lose[1] = lose[1] + 1;
										gameover = 1;
									}
								}

								if(ch[9] == 'o')
								{
									if((ch[10] == 'o')&&(ch[11] == 'o')&&(ch[12] == 'o'))
									{
										strcpy(winner,name[0]);
										wins[0] = wins[0] + 1;
										lose[1] = lose[1] + 1;
										gameover = 1;
									}
								}

								if(ch[13] == 'o')
								{
									if((ch[44] == 'o')&&(ch[15] == 'o')&&(ch[16] == 'o'))
									{
										strcpy(winner,name[0]);
										wins[0] = wins[0] + 1;
										lose[1] = lose[1] + 1;
										gameover = 1;
									}
								}

								if(ch[1] == 'o')
								{
									if((ch[5] == 'o')&&(ch[9] == 'o')&&(ch[13] == 'o'))
									{
										strcpy(winner,name[0]);
										wins[0] = wins[0] + 1;
										lose[1] = lose[1] + 1;
										gameover = 1;
									}
								}

								if(ch[2] == 'o')
								{
									if((ch[6] == 'o')&&(ch[10] == 'o')&&(ch[14] == 'o'))
									{
										strcpy(winner,name[0]);
										wins[0] = wins[0] + 1;
										lose[1] = lose[1] + 1;
										gameover = 1;
									}
								}

								if(ch[3] == 'o')
								{
									if((ch[7] == 'o')&&(ch[11] == 'o')&&(ch[15] == 'o'))
									{
										strcpy(winner,name[0]);
										wins[0] = wins[0] + 1;
										lose[1] = lose[1] + 1;
										gameover = 1;
									}
								}

                                              			if(ch[4] == 'o')
								{
									if((ch[8] == 'o')&&(ch[12] == 'o')&&(ch[16] == 'o'))
									{
										strcpy(winner,name[0]);
										wins[0] = wins[0] + 1;
										lose[1] = lose[1] + 1;
										gameover = 1;
									}
								}
								
								if(ch[4] == 'o')
								{
									if((ch[7] == 'o')&&(ch[10] == 'o')&&(ch[13] == 'o'))
									{
										strcpy(winner,name[0]);
										wins[0] = wins[0] + 1;
										lose[1] = lose[1] + 1;
										gameover = 1;
									}
								}
		
								if(ch[1] == 'o')
								{
									if((ch[6] == 'o')&&(ch[11] == 'o')&&(ch[16] == 'o'))
									{
										strcpy(winner,name[0]);
										wins[0] = wins[0] + 1;
										lose[1] = lose[1] + 1;
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
		scr4x4();
		gotoxy(46,19);
		printf("Winner: %s!",winner);
		if(stricmp(winner,"None") == 0)
		{
			mainscr();
			scr4x4();
			gotoxy(46,19);
			printf("Game Draw!");
		}
		gotoxy(45,20);
		printf("Press Any Key...");
		getch();
}

void scr3x3()
{
	gotoxy(13.5,8);
	printf("ÉÍÍÍÍÍËÍÍÍÍÍËÍÍÍÍÍ»");
	gotoxy(13.5,9);
	printf("º     º     º     º");
	gotoxy(13.5,10);
	printf("º  %c  º  %c  º  %c  º",ch[7],ch[8],ch[9]);
	gotoxy(13.5,11);
	printf("º     º     º     º");
	gotoxy(13.5,12);
	printf("ÌÍÍÍÍÍÎÍÍÍÍÍÎÍÍÍÍÍ¹");
	gotoxy(13.5,13);
        printf("º     º     º     º");
	gotoxy(13.5,14);
	printf("º  %c  º  %c  º  %c  º",ch[4],ch[5],ch[6]);
	gotoxy(13.5,15);
	printf("º     º     º     º");
	gotoxy(13.5,16);
	printf("ÌÍÍÍÍÍÎÍÍÍÍÍÎÍÍÍÍÍ¹");
	gotoxy(13.5,17);
        printf("º     º     º     º");
	gotoxy(13.5,18);
	printf("º  %c  º  %c  º  %c  º",ch[1],ch[2],ch[3]);
	gotoxy(13.5,19);
	printf("º     º     º     º");
	gotoxy(13.5,20);
	printf("ÈÍÍÍÍÍÊÍÍÍÍÍÊÍÍÍÍÍ¼");
}

void maingame3x3()
{
		while(gameover != 1)
		{
			if((nextplayer == 1)&&(gameover == 0))
			{
				mainscr();
				scr3x3();
				gotoxy(72,11);
				printf("%s", name[0]);
				gotoxy(46,19);
				printf("What Box? ");
				{
					scanf("%d", &box);

					if((box < 1)||(box > 9))
					{
						mainscr();
						scr3x3();
						gotoxy(46,19);
						printf("Input Error");
						gotoxy(45,20);
						printf("Input Box 1-9.");
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
							scr3x3();
							gotoxy(46,19);
							printf("Input Error");
							gotoxy(45,20);
							printf("Input in an empty box.");
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
				scr3x3();
				gotoxy(72,11);
				printf("%s", name[1]);
				gotoxy(46,19);
				printf("What Box? ");
				{
					scanf("%d", &box);

					if((box < 1)||(box > 9))
					{
						mainscr();
						scr3x3();
						gotoxy(46,19);
						printf("Input Error");
						gotoxy(45,20);
						printf("Input Box 1-9.");
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
							scr3x3();
							gotoxy(46,19);
							printf("Input Error");
							gotoxy(45,20);
							printf("Input in an empty box.");
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
		scr3x3();
		gotoxy(46,19);
		printf("Winner: %s!",winner);
		if(stricmp(winner,"None") == 0)
		{
			mainscr();
			scr3x3();
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

		for(y = 1; y < 17; y ++)
		{
			ch[y] = 32;
		}
		
		mainscr();

		if(version == 1)
		{
			scr3x3();
		}
		else
		if(version == 2)
		{
			scr4x4();
		}

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

				if(version == 1)
				{
					scr3x3();
				}
				else
				if(version == 2)
				{
					scr4x4();
				}

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

				if(version == 1)
				{
					scr3x3();
				}
				else
				if(version == 2)
				{
					scr4x4();
				}

				gotoxy(46,19);
				printf("Cheats Deactivated!");
				gotoxy(45,20);
				printf("Press Any Key...");
				getch();
			}
		}
		
		if(cmd == 1)
		{	
			game = 0;
			newgame = 0;
			cont = 0;
			gameover = 0;
			nextplayer = 1;

			for(box = 1; box < 17; box++)
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
			printf("Enter Version: ");
			gotoxy(45,21);
			printf("Version 1: 3 by 3");
			gotoxy(45,22);
			printf("Version 2: 4 by 4");
			gotoxy(61,19);
			scanf("%d", &version);

			if((version == 1)||(version == 2))
			{
				game = 1;
				newgame = 1;
				mainscr();

				if(version == 1)
				{
					scr3x3();
				}
				else
				if(version == 2)
				{
					scr4x4();
				}		

				gotoxy(46,19);
				printf("Enter Name P1: ");	
				scanf("%s",name[0]);
				mainscr();

				if(version == 1)
				{
					scr3x3();
				}
				else
				if(version == 2)
				{
					scr4x4();
				}

				gotoxy(46,19);
				printf("Enter Name P2: ");	
				scanf("%s",name[1]);		
		
				if(version == 1)
				{
					maingame3x3();
				}
				else
				if(version == 2)
				{
					maingame4x4();
				}
			}
		
			else
			{
				mainscr();
				gotoxy(46,19);
				printf("Input Error");
				gotoxy(45,20);
				printf("Version 1 or 2 only please.");
				gotoxy(45,21);
				printf("Press Any Key...");
				getch();
			}
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

				for(box = 1; box < 17; box++)
				{
					ch[box] = ' ';
				}

				x[2] = 16;
				x[3] = 17;
			
				if(((wins[0] != 3)||(wins[1] != 3))||(game < 10))
				{
					if(version == 1)
					{
						maingame3x3();
					}
					else
					if(version == 2)
					{
						maingame4x4();
					}	
				}
			
				if(wins[0] == 3)
				{
					mainscr();

					if(version == 1)
					{
						scr3x3();
					}
					else
					if(version == 2)
					{
						scr4x4();
					}

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

					if(version == 1)
					{
						scr3x3();
					}
					else
					if(version == 2)
					{
						scr4x4();
					}

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

					if(version == 1)
					{
						scr3x3();
					}
					else
					if(version == 2)
					{
						scr4x4();
					}

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

				if(version == 1)
				{
					scr3x3();
				}
				else
				if(version == 2)
				{
					scr4x4();
				}

				gotoxy(46,19);
				printf("Input Error");
				gotoxy(45,20);
				printf("Cannot continue, try a new game.");
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
			gotoxy(2,7);
			printf("Tic Tac Toe Version 2.8");
			gotoxy(2,8);
			printf("-Fixed 'continue bug'.");
			gotoxy(2,9);
			printf("-Created new 4 by 4 Tic Tac Toe.");
			gotoxy(2,10);
			printf("-New Interface");
			gotoxy(2,11);
			printf("-Fixed 'no output 4 by 4 bug'.");
			gotoxy(2,12);
			printf("-Fixed 2.7 Bugs & Errors.");
			gotoxy(2,13);
			printf("-Created condition for '4 by 4 game over'.");
			gotoxy(2,14);
			printf("-Fixed '4 by 4 draw bug.");
			gotoxy(2,16);
			printf("Beta Testers:");
			gotoxy(2,17);
			printf("-Reed");
			gotoxy(2,18);
			printf("-Byn");
			gotoxy(2,20);
			printf("If you found bugs:");
			gotoxy(2,21);
			printf("E-mail me @ reedleoneilpascual@yahoo.com");
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

			if(version == 1)
			{
				scr3x3();
			}
			else
			if(version == 2)
			{
				scr4x4();
			}

			gotoxy(46,19);
			printf("Input Error");
			gotoxy(46,20);
			printf("Enter Command  (1-4).");
			gotoxy(46,21);
			printf("Press Any Key...");
			getch();
		}
	}	
	
	wins[0] = 0;
	wins[1] = 0;
	lose[0] = 0;
	lose[1] = 0;
	draw = 0;
	strcpy(name[0],"P1");
	strcpy(name[1],"P2");	
	game = 0;
	newgame = 0;
	cont = 0;
	mainscr();

	gotoxy(46,19);
	printf("Press Any Key To Exit...");
	getch();
}