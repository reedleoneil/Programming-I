#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<conio.h>

char ch[26];
int box;
int nextplayer;
int gameover = 0;
int newgame;
int cont;
int cheats;
int game;
int edition;

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
	printf("ฺฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฟ                                               ");
	printf("ณ          Tic Tac Toe          ณ     ฺฤฤฤScoreฤฤฤฤฤฤฤฟ   ฺฤฤฤStatusฤฤฤฤฤฤฟ     ");
	printf("รฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤด     ณ               ณ   ณ               ณ     ");
	printf("ณ                               ณ     ณ   %c           ณ   ณNew Game: %d    ณ     ",16,newgame);
	printf("ณ                               ณ     ณWins: %d        ณ   ณContinue: %d    ณ     ",wins[0],cont);
	printf("ณ                               ณ     ณLose: %d        ณ   ณGame: %d        ณ     ",lose[0],game);
	printf("ณ                               ณ     ณ               ณ   ณPlayer:        ณ     ",nextplayer);
	printf("ณ                               ณ     ณ   %c           ณ   ณCheats: %s    ณ     ",16,ce);
	printf("ณ                               ณ     ณWins: %d        ณ   ณHighScore: 619 ณ     ",wins[1]);
	printf("ณ                               ณ     ณLose: %d        ณ   ณ               ณ     ",lose[1]);
	printf("ณ                               ณ     ณ               ณ   ณVersion%c 2.13  ณ     ",16);
	printf("ณ                               ณ     ณDraw: %d        ณ   ณEdition%c       ณ     ",draw,16);
	printf("ณ                               ณ     ณ               ณ   ณ               ณ     ");
	printf("ณ                               ณ     ภฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤู   ภฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤู     ");
	printf("ณ                               ณ                                               ");
	printf("ณ                               ณ ฺฤฤฤConsoleฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฟ ");
	printf("ณ                               ณ ณ%c                                          ณ ",16);
	printf("ณ                               ณ ณ                                           ณ ");
	printf("ณ                               ณ ณ                                           ณ ");
	printf("ณ                               ณ ณ                                           ณ ");
	printf("ณ                               ณ ณ                                           ณ ");
	printf("ณ                               ณ ณ                                           ณ ");
	printf("ณ                               ณ ณ                                           ณ ");
	printf("ณ                               ณ ภฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤู ");
	printf("ภฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤฤู");
	gotoxy(45,4);
	printf("%s",name[0]);
	gotoxy(45,8);
	printf("%s",name[1]);
	if(edition == 1)
	{
		gotoxy(69,12);
		printf("3 x 3");
	}
	if(edition == 2)
	{
		gotoxy(69,12);
		printf("4 x 4");
	}
	if(edition == 3)
	{
		gotoxy(69,12);
		printf("5 x 5");
	}
}

void scr5x5()
{
	gotoxy(2,4);
	printf("ษอออออหอออออหอออออหอออออหอออออป");
	gotoxy(2,5);
	printf("บ     บ     บ     บ     บ     บ");
	gotoxy(2,6);
	printf("บ  %c  บ  %c  บ  %c  บ  %c  บ  %c  บ",ch[21],ch[22],ch[23],ch[24],ch[25]);
	gotoxy(2,7);
	printf("บ     บ     บ     บ     บ     บ");
	gotoxy(2,8);
	printf("ฬอออออฮอออออฮอออออฮอออออฮอออออน");
	gotoxy(2,9);
	printf("บ     บ     บ     บ     บ     บ");
	gotoxy(2,10);
	printf("บ  %c  บ  %c  บ  %c  บ  %c  บ  %c  บ",ch[16],ch[17],ch[18],ch[19],ch[20]);
	gotoxy(2,11);
	printf("บ     บ     บ     บ     บ     บ");
	gotoxy(2,12);
	printf("ฬอออออฮอออออฮอออออฮอออออฮอออออน");
	gotoxy(2,13);
	printf("บ     บ     บ     บ     บ     บ");
	gotoxy(2,14);
	printf("บ  %c  บ  %c  บ  %c  บ  %c  บ  %c  บ",ch[11],ch[12],ch[13],ch[14],ch[15]);
	gotoxy(2,15);
	printf("บ     บ     บ     บ     บ     บ");
	gotoxy(2,16);
	printf("ฬอออออฮอออออฮอออออฮอออออฮอออออน");
	gotoxy(2,17);
	printf("บ     บ     บ     บ     บ     บ");
	gotoxy(2,18);
	printf("บ  %c  บ  %c  บ  %c  บ  %c  บ  %c  บ",ch[6],ch[7],ch[8],ch[9],ch[10]);
	gotoxy(2,19);
	printf("บ     บ     บ     บ     บ     บ");
	gotoxy(2,20);
	printf("ฬอออออฮอออออฮอออออฮอออออฮอออออน");
	gotoxy(2,21);
	printf("บ     บ     บ     บ     บ     บ");
	gotoxy(2,22);
	printf("บ  %c  บ  %c  บ  %c  บ  %c  บ  %c  บ",ch[1],ch[2],ch[3],ch[4],ch[5]);
	gotoxy(2,23);
	printf("บ     บ     บ     บ     บ     บ");
	gotoxy(2,24);
	printf("ศอออออสอออออสอออออสอออออสอออออผ");
}

void maingame5x5()
{
		while(gameover != 1)
		{
			if((nextplayer == 1)&&(gameover == 0))
			{
				mainscr();
				scr5x5();
				gotoxy(68,7);
				printf("%s", name[0]);
				gotoxy(37,17);
				printf("What Box? ");
				{
					scanf("%d", &box);

					if((box < 1)||(box > 25))
					{
						mainscr();
						scr5x5();
						gotoxy(37,17);
						printf("Input Error");
						gotoxy(37,19);
						printf("Input Box 1-25.");
						gotoxy(37,20);
						printf("Press Any Key...");
						getch();
						nextplayer = 1;
					}

					else

					if((box > 1)||(box < 25))
					{
						if(((ch[box] == 'x')||(ch[box] == 'o'))&&(cheats == 0))
						{
							mainscr();
							scr5x5();
							gotoxy(37,17);
							printf("Input Error");
							gotoxy(37,19);
							printf("Input in an empty box.");
							gotoxy(37,20);
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
'x')||(ch[6] == 'o'))&&((ch[7] == 'x')||(ch[7] == 'o'))&&((ch[8] == 'x')||(ch[8] == 'o'))&&((ch[9] == 'x')||(ch[9] == 'o'))&&((ch[10] == 'x')||(ch[10] == 'o'))&&((ch[11] == 'x')||(ch[11] == 'o'))&&((ch[12] == 'x')||(ch[12] == 'o'))&&((ch[13] == 'x'
)||(ch[13] == 'o'))&&((ch[14] == 'x')||(ch[14] == 'o'))&&((ch[15] == 'x')||(ch[15] == 'o'))&&((ch[16] == 'x')||(ch[16] == 'o'))&&((ch[17] == 'x')||(ch[17] == 'o'))&&((ch[18] == 'x')||(ch[18] == 'o'))&&((ch[19] == 'x')||(ch[19] == 'o'))&&((ch[20] ==
 'x')||(ch[20] == 'o'))&&((ch[21] == 'x')||(ch[21] == 'o'))&&((ch[22] == 'x')||(ch[22] == 'o'))&&((ch[23] == 'x')||(ch[23] == 'o'))&&((ch[24] == 'x')||(ch[24] == 'o'))&&((ch[25] == 'x')||(ch[25] == 'o')))
								{
									strcpy(winner,"None");
									draw = draw + 1;
									gameover = 1;
								}

								if(ch[1] == 'x')
								{
									if((ch[2] == 'x')&&(ch[3] == 'x')&&(ch[4] == 'x')&&(ch[5] == 'x'))
									{
										strcpy(winner,name[0]);
										wins[0] = wins[0] + 1;
										lose[1] = lose[1] + 1;
										gameover = 1;
									}
								}

								if(ch[6] == 'x')
								{
									if((ch[7] == 'x')&&(ch[8] == 'x')&&(ch[9] == 'x')&&(ch[10] == 'x'))
									{
										strcpy(winner,name[0]);
										wins[0] = wins[0] + 1;
										lose[1] = lose[1] + 1;
										gameover = 1;
									}
								}

								if(ch[11] == 'x')
								{
									if((ch[12] == 'x')&&(ch[13] == 'x')&&(ch[14] == 'x')&&(ch[15] == 'x'))
									{
										strcpy(winner,name[0]);
										wins[0] = wins[0] + 1;
										lose[1] = lose[1] + 1;
										gameover = 1;
									}
								}

								if(ch[16] == 'x')
								{
									if((ch[17] == 'x')&&(ch[18] == 'x')&&(ch[19] == 'x')&&(ch[20] == 'x'))
									{
										strcpy(winner,name[0]);
										wins[0] = wins[0] + 1;
										lose[1] = lose[1] + 1;
										gameover = 1;
									}
								}

								if(ch[21] == 'x')
								{
									if((ch[22] == 'x')&&(ch[23] == 'x')&&(ch[24] == 'x')&&(ch[25] == 'x'))
									{
										strcpy(winner,name[0]);
										wins[0] = wins[0] + 1;
										lose[1] = lose[1] + 1;
										gameover = 1;
									}
								}

								if(ch[1] == 'x')
								{
									if((ch[6] == 'x')&&(ch[11] == 'x')&&(ch[16] == 'x')&&(ch[21] == 'x'))
									{
										strcpy(winner,name[0]);
										wins[0] = wins[0] + 1;
										lose[1] = lose[1] + 1;
										gameover = 1;
									}
								}

								if(ch[2] == 'x')
								{
									if((ch[7] == 'x')&&(ch[12] == 'x')&&(ch[17] == 'x')&&(ch[22] == 'x'))
									{
										strcpy(winner,name[0]);
										wins[0] = wins[0] + 1;
										lose[1] = lose[1] + 1;
										gameover = 1;
									}
								}

                                              			if(ch[3] == 'x')
								{
									if((ch[8] == 'x')&&(ch[13] == 'x')&&(ch[18] == 'x')&&(ch[23] == 'x'))
									{
										strcpy(winner,name[0]);
										wins[0] = wins[0] + 1;
										lose[1] = lose[1] + 1;
										gameover = 1;
									}
								}

								if(ch[4] == 'x')
								{
									if((ch[9] == 'x')&&(ch[14] == 'x')&&(ch[19] == 'x')&&(ch[24] == 'x'))
									{
										strcpy(winner,name[0]);
										wins[0] = wins[0] + 1;
										lose[1] = lose[1] + 1;
										gameover = 1;
									}
								}

								if(ch[5] == 'x')
								{
									if((ch[10] == 'x')&&(ch[15] == 'x')&&(ch[20] == 'x')&&(ch[25] == 'x'))
									{
										strcpy(winner,name[0]);
										wins[0] = wins[0] + 1;
										lose[1] = lose[1] + 1;
										gameover = 1;
									}
								}

								if(ch[5] == 'x')
								{
									if((ch[9] == 'x')&&(ch[13] == 'x')&&(ch[17] == 'x')&&(ch[21] == 'x'))
									{
										strcpy(winner,name[0]);
										wins[0] = wins[0] + 1;
										lose[1] = lose[1] + 1;
										gameover = 1;
									}
								}

								if(ch[1] == 'x')
								{
									if((ch[7] == 'x')&&(ch[13] == 'x')&&(ch[19] == 'x')&&(ch[25] == 'x'))
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
				scr5x5();
				gotoxy(68,7);
				printf("%s", name[1]);
				gotoxy(37,17);
				printf("What Box? ");
				{
					scanf("%d", &box);

					if((box < 1)||(box > 25))
					{
						mainscr();
						scr5x5();
						gotoxy(37,17);
						printf("Input Error");
						gotoxy(37,19);
						printf("Input Box 1-25.");
						gotoxy(37,20);
						printf("Press Any Key...");
						getch();
						nextplayer = 2;
					}

					else

					if((box < 25)||(box > 1))
					{
						if(((ch[box] == 'x')||(ch[box] == 'o'))&&(cheats == 0))
						{
							mainscr();
							scr5x5();
							gotoxy(37,17);
							printf("Input Error");
							gotoxy(37,19);
							printf("Input in an empty box.");
							gotoxy(37,20);
							printf("Press Any Key...");
							getch();
							nextplayer = 2;
						}

						else

						if((ch[box] != 'x')||(ch[box] != 'o'))
						{
							ch[box] = 'o';

	                                        	{if(((ch[1] == 'x')||(ch[1] == 'o'))&&((ch[2] == 'x')||(ch[2] == 'o'))&&((ch[3] == 'x')||(ch[3] == 'o'))&&((ch[4] == 'x')||(ch[4] == 'o'))&&((ch[5] == 'x')||(ch[5] == 'o'))&&((ch[6] ==
'x')||(ch[6] == 'o'))&&((ch[7] == 'x')||(ch[7] == 'o'))&&((ch[8] == 'x')||(ch[8] == 'o'))&&((ch[9] == 'x')||(ch[9] == 'o'))&&((ch[10] == 'x')||(ch[10] == 'o'))&&((ch[11] == 'x')||(ch[11] == 'o'))&&((ch[12] == 'x')||(ch[12] == 'o'))&&((ch[13] == 'x'
)||(ch[13] == 'o'))&&((ch[14] == 'x')||(ch[14] == 'o'))&&((ch[15] == 'x')||(ch[15] == 'o'))&&((ch[16] == 'x')||(ch[16] == 'o'))&&((ch[17] == 'x')||(ch[17] == 'o'))&&((ch[18] == 'x')||(ch[18] == 'o'))&&((ch[19] == 'x')||(ch[19] == 'o'))&&((ch[20] ==
 'x')||(ch[20] == 'o'))&&((ch[21] == 'x')||(ch[21] == 'o'))&&((ch[22] == 'x')||(ch[22] == 'o'))&&((ch[23] == 'x')||(ch[23] == 'o'))&&((ch[24] == 'x')||(ch[24] == 'o'))&&((ch[25] == 'x')||(ch[25] == 'o')))
								{
									strcpy(winner,"None");
									draw = draw + 1;
									gameover = 1;
								}



								if(ch[1] == 'o')
								{
									if((ch[2] == 'o')&&(ch[3] == 'o')&&(ch[4] == 'o')&&(ch[5] == 'o'))
									{
										strcpy(winner,name[1]);
										wins[1] = wins[1] + 1;
										lose[0] = lose[0] + 1;
										gameover = 1;
									}
								}

								if(ch[6] == 'o')
								{
									if((ch[7] == 'o')&&(ch[8] == 'o')&&(ch[9] == 'o')&&(ch[10] == 'o'))
									{
										strcpy(winner,name[1]);
										wins[1] = wins[1] + 1;
										lose[0] = lose[0] + 1;
										gameover = 1;
									}
								}

								if(ch[11] == 'o')
								{
									if((ch[12] == 'o')&&(ch[13] == 'o')&&(ch[14] == 'o')&&(ch[15] == 'o'))
									{strcpy(winner,name[1]);
										wins[1] = wins[1] + 1;
										lose[0] = lose[0] + 1;
										gameover = 1;
									}
								}

								if(ch[16] == 'o')
								{
									if((ch[17] == 'o')&&(ch[18] == 'o')&&(ch[19] == 'o')&&(ch[20] == 'o'))
									{
										strcpy(winner,name[1]);
										wins[1] = wins[1] + 1;
										lose[0] = lose[0] + 1;
										gameover = 1;
									}
								}

								if(ch[21] == 'o')
								{
									if((ch[22] == 'o')&&(ch[23] == 'o')&&(ch[24] == 'o')&&(ch[25] == 'o'))
									{
										strcpy(winner,name[1]);
										wins[1] = wins[1] + 1;
										lose[0] = lose[0] + 1;
										gameover = 1;
									}
								}

								if(ch[1] == 'o')
								{
									if((ch[6] == 'o')&&(ch[11] == 'o')&&(ch[16] == 'o')&&(ch[21] == 'o'))
									{
										strcpy(winner,name[1]);
										wins[1] = wins[1] + 1;
										lose[0] = lose[0] + 1;
										gameover = 1;
									}
								}

								if(ch[2] == 'o')
								{
									if((ch[7] == 'o')&&(ch[12] == 'o')&&(ch[17] == 'o')&&(ch[22] == 'o'))
									{
										strcpy(winner,name[1]);
										wins[1] = wins[1] + 1;
										lose[0] = lose[0] + 1;
										gameover = 1;
									}
								}

                                              			if(ch[3] == 'o')
								{
									if((ch[8] == 'o')&&(ch[13] == 'o')&&(ch[18] == 'o')&&(ch[23] == 'o'))
									{
										strcpy(winner,name[1]);
										wins[1] = wins[1] + 1;
										lose[0] = lose[0] + 1;
										gameover = 1;
									}
								}

								if(ch[4] == 'o')
								{
									if((ch[9] == 'o')&&(ch[14] == 'o')&&(ch[19] == 'o')&&(ch[24] == 'o'))
									{
										strcpy(winner,name[1]);
										wins[1] = wins[1] + 1;
										lose[0] = lose[0] + 1;
										gameover = 1;
									}
								}

								if(ch[5] == 'o')
								{
									if((ch[10] == 'o')&&(ch[15] == 'o')&&(ch[20] == 'o')&&(ch[25] == 'o'))
									{
										strcpy(winner,name[1]);
										wins[1] = wins[1] + 1;
										lose[0] = lose[0] + 1;
										gameover = 1;
									}
								}

								if(ch[5] == 'o')
								{
									if((ch[9] == 'o')&&(ch[13] == 'o')&&(ch[17] == 'o')&&(ch[21] == 'o'))
									{
										strcpy(winner,name[1]);
										wins[1] = wins[1] + 1;
										lose[0] = lose[0] + 1;
										gameover = 1;
									}
								}

								if(ch[1] == 'o')
								{
									if((ch[7] == 'o')&&(ch[13] == 'o')&&(ch[19] == 'o')&&(ch[25] == 'o'))
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
		scr5x5();
		gotoxy(37,17);
		printf("Winner: %s!",winner);
		if(stricmp(winner,"None") == 0)
		{
			mainscr();
			scr5x5();
			gotoxy(37,17);
			printf("Game Draw!");
		}
		gotoxy(37,19);
		printf("Press Any Key...");
		getch();
}

void scr4x4()
{
	gotoxy(5,6);
	printf("ษอออออหอออออหอออออหอออออป");
	gotoxy(5,7);
	printf("บ     บ     บ     บ     บ");
	gotoxy(5,8);
	printf("บ  %c  บ  %c  บ  %c  บ  %c  บ",ch[13],ch[14],ch[15],ch[16]);
	gotoxy(5,9);
	printf("บ     บ     บ     บ     บ");
	gotoxy(5,10);
	printf("ฬอออออฮอออออฮอออออฮอออออน");
	gotoxy(5,11);
	printf("บ     บ     บ     บ     บ");
	gotoxy(5,12);
	printf("บ  %c  บ  %c  บ  %c  บ  %c  บ",ch[9],ch[10],ch[11],ch[12]);
	gotoxy(5,13);
	printf("บ     บ     บ     บ     บ");
	gotoxy(5,14);
	printf("ฬอออออฮอออออฮอออออฮอออออน");
	gotoxy(5,15);
	printf("บ     บ     บ     บ     บ");
	gotoxy(5,16);
	printf("บ  %c  บ  %c  บ  %c  บ  %c  บ",ch[5],ch[6],ch[7],ch[8]);
	gotoxy(5,17);
	printf("บ     บ     บ     บ     บ");
	gotoxy(5,18);
	printf("ฬอออออฮอออออฮอออออฮอออออน");
	gotoxy(5,19);
	printf("บ     บ     บ     บ     บ");
	gotoxy(5,20);
	printf("บ  %c  บ  %c  บ  %c  บ  %c  บ",ch[1],ch[2],ch[3],ch[4]);
	gotoxy(5,21);
	printf("บ     บ     บ     บ     บ");
	gotoxy(5,22);
	printf("ศอออออสอออออสอออออสอออออผ");
}

void maingame4x4()
{
		while(gameover != 1)
		{
			if((nextplayer == 1)&&(gameover == 0))
			{
				mainscr();
				scr4x4();
				gotoxy(68,7);
				printf("%s", name[0]);
				gotoxy(37,17);
				printf("What Box? ");
				{
					scanf("%d", &box);

					if((box < 1)||(box > 16))
					{
						mainscr();
						scr4x4();
						gotoxy(37,17);
						printf("Input Error");
						gotoxy(37,19);
						printf("Input Box 1-16.");
						gotoxy(37,20);
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
							gotoxy(37,17);
							printf("Input Error");
							gotoxy(37,19);
							printf("Input in an empty box.");
							gotoxy(37,20);
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
'x')||(ch[6] == 'o'))&&((ch[7] == 'x')||(ch[7] == 'o'))&&((ch[8] == 'x')||(ch[8] == 'o'))&&((ch[9] == 'x')||(ch[9] == 'o'))&&((ch[10] == 'x')||(ch[10] == 'o'))&&((ch[11] == 'x')||(ch[11] == 'o'))&&((ch[12] == 'x')||(ch[12] == 'o'))&&((ch[13] == 'x'
)||(ch[13] == 'o'))&&((ch[14] == 'x')||(ch[14] == 'o'))&&((ch[15] == 'x')||(ch[15] == 'o'))&&((ch[16] == 'x')||(ch[16] == 'o')))
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
									if((ch[14] == 'x')&&(ch[15] == 'x')&&(ch[16] == 'x'))
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
				gotoxy(68,7);
				printf("%s", name[1]);
				gotoxy(37,17);
				printf("What Box? ");
				{
					scanf("%d", &box);

					if((box < 1)||(box > 16))
					{
						mainscr();
						scr4x4();
						gotoxy(37,17);
						printf("Input Error");
						gotoxy(37,19);
						printf("Input Box 1-16.");
						gotoxy(37,20);
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
							gotoxy(37,17);
							printf("Input Error");
							gotoxy(37,19);
							printf("Input in an empty box.");
							gotoxy(37,20);
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
'x')||(ch[6] == 'o'))&&((ch[7] == 'x')||(ch[7] == 'o'))&&((ch[8] == 'x')||(ch[8] == 'o'))&&((ch[9] == 'x')||(ch[9] == 'o'))&&((ch[10] == 'x')||(ch[10] == 'o'))&&((ch[11] == 'x')||(ch[11] == 'o'))&&((ch[12] == 'x')||(ch[12] == 'o'))&&((ch[13] == 'x'
)||(ch[13] == 'o'))&&((ch[14] == 'x')||(ch[14] == 'o'))&&((ch[15] == 'x')||(ch[15] == 'o'))&&((ch[16] == 'x')||(ch[16] == 'o')))
								{
									strcpy(winner,"None");
									draw = draw + 1;
									gameover = 1;
								}


								if(ch[1] == 'o')
								{
									if((ch[2] == 'o')&&(ch[3] == 'o')&&(ch[4] == 'o'))
									{
										strcpy(winner,name[1]);
										wins[1] = wins[1] + 1;
										lose[0] = lose[0] + 1;
										gameover = 1;
									}
								}

								if(ch[5] == 'o')
								{
									if((ch[6] == 'o')&&(ch[7] == 'o')&&(ch[8] == 'o'))
									{
										strcpy(winner,name[1]);
										wins[1] = wins[1] + 1;
										lose[0] = lose[0] + 1;
										gameover = 1;
									}
								}

								if(ch[9] == 'o')
								{
									if((ch[10] == 'o')&&(ch[11] == 'o')&&(ch[12] == 'o'))
									{
										strcpy(winner,name[1]);
										wins[1] = wins[1] + 1;
										lose[0] = lose[0] + 1;
										gameover = 1;
									}
								}

								if(ch[13] == 'o')
								{
									if((ch[14] == 'o')&&(ch[15] == 'o')&&(ch[16] == 'o'))
									{
										strcpy(winner,name[1]);
										wins[1] = wins[1] + 1;
										lose[0] = lose[0] + 1;
										gameover = 1;
									}
								}

								if(ch[1] == 'o')
								{
									if((ch[5] == 'o')&&(ch[9] == 'o')&&(ch[13] == 'o'))
									{
										strcpy(winner,name[1]);
										wins[1] = wins[1] + 1;
										lose[0] = lose[0] + 1;
										gameover = 1;
									}
								}

								if(ch[2] == 'o')
								{
									if((ch[6] == 'o')&&(ch[10] == 'o')&&(ch[14] == 'o'))
									{
										strcpy(winner,name[1]);
										wins[1] = wins[1] + 1;
										lose[0] = lose[0] + 1;
										gameover = 1;
									}
								}

								if(ch[3] == 'o')
								{
									if((ch[7] == 'o')&&(ch[11] == 'o')&&(ch[15] == 'o'))
									{
										strcpy(winner,name[1]);
										wins[1] = wins[1] + 1;
										lose[0] = lose[0] + 1;
										gameover = 1;
									}
								}

                                              			if(ch[4] == 'o')
								{
									if((ch[8] == 'o')&&(ch[12] == 'o')&&(ch[16] == 'o'))
									{
										strcpy(winner,name[1]);
										wins[1] = wins[1] + 1;
										lose[0] = lose[0] + 1;
										gameover = 1;
									}
								}

								if(ch[4] == 'o')
								{
									if((ch[7] == 'o')&&(ch[10] == 'o')&&(ch[13] == 'o'))
									{
										strcpy(winner,name[1]);
										wins[1] = wins[1] + 1;
										lose[0] = lose[0] + 1;
										gameover = 1;
									}
								}

								if(ch[1] == 'o')
								{
									if((ch[6] == 'o')&&(ch[11] == 'o')&&(ch[16] == 'o'))
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
		scr4x4();
		gotoxy(37,17);
		printf("Winner: %s!",winner);
		if(stricmp(winner,"None") == 0)
		{
			mainscr();
			scr4x4();
			gotoxy(37,17);
			printf("Game Draw!");
		}
		gotoxy(37,19);
		printf("Press Any Key...");
		getch();
}

void scr3x3()
{
	gotoxy(8,8);
	printf("ษอออออหอออออหอออออป");
	gotoxy(8,9);
	printf("บ     บ     บ     บ");
	gotoxy(8,10);
	printf("บ  %c  บ  %c  บ  %c  บ",ch[7],ch[8],ch[9]);
	gotoxy(8,11);
	printf("บ     บ     บ     บ");
	gotoxy(8,12);
	printf("ฬอออออฮอออออฮอออออน");
	gotoxy(8,13);
        printf("บ     บ     บ     บ");
	gotoxy(8,14);
	printf("บ  %c  บ  %c  บ  %c  บ",ch[4],ch[5],ch[6]);
	gotoxy(8,15);
	printf("บ     บ     บ     บ");
	gotoxy(8,16);
	printf("ฬอออออฮอออออฮอออออน");
	gotoxy(8,17);
        printf("บ     บ     บ     บ");
	gotoxy(8,18);
	printf("บ  %c  บ  %c  บ  %c  บ",ch[1],ch[2],ch[3]);
	gotoxy(8,19);
	printf("บ     บ     บ     บ");
	gotoxy(8,20);
	printf("ศอออออสอออออสอออออผ");
}

void maingame3x3()
{
		while(gameover != 1)
		{
			if((nextplayer == 1)&&(gameover == 0))
			{
				mainscr();
				scr3x3();
				gotoxy(68,7);
				printf("%s", name[0]);
				gotoxy(37,17);
				printf("What Box? ");
				{
					scanf("%d", &box);

					if((box < 1)||(box > 9))
					{
						mainscr();
						scr3x3();
						gotoxy(37,17);
						printf("Input Error");
						gotoxy(37,19);
						printf("Input Box 1-9.");
						gotoxy(37,20);
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
							gotoxy(37,17);
							printf("Input Error");
							gotoxy(37,19);
							printf("Input in an empty box.");
							gotoxy(37,20);
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
				gotoxy(68,7);
				printf("%s", name[1]);
				gotoxy(37,17);
				printf("What Box? ");
				{
					scanf("%d", &box);

					if((box < 1)||(box > 9))
					{
						mainscr();
						scr3x3();
						gotoxy(37,17);
						printf("Input Error");
						gotoxy(37,19);
						printf("Input Box 1-9.");
						gotoxy(37,20);
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
							gotoxy(37,17);
							printf("Input Error");
							gotoxy(37,19);
							printf("Input in an empty box.");
							gotoxy(37,20);
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
		gotoxy(37,17);
		printf("Winner: %s!",winner);
		if(stricmp(winner,"None") == 0)
		{
			mainscr();
			scr3x3();
			gotoxy(37,17);
			printf("Game Draw!");
		}
		gotoxy(37,19);
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

	strcpy(name[0],"P1");
	strcpy(name[1],"P2");
	delay(9999999);

	while(exiton != 1)
	{
		for(y = 0; y < 26; y ++)
		{
			ch[y] = 32;
		}

		mainscr();

		if(edition == 1)
		{
			scr3x3();
		}
		else
		if(edition == 2)
		{
			scr4x4();
		}
		else
		if(edition == 3)
		{
			scr5x5();
		}

		gotoxy(37,17);
		printf("Enter Command:");
		gotoxy(37,19);
		printf("1: New Game");
		gotoxy(37,20);
		printf("2: Continue");
		gotoxy(37,21);
		printf("3: Help");
		gotoxy(37,22);
		printf("4: Exit");
		gotoxy(52,17);
		scanf("%d", &cmd);

		if(cmd == 0)
		{
			if(cheats == 0)
			{
				cheats = 1;
				strcpy(ce,"On ");
				mainscr();

				if(edition == 1)
				{
					scr3x3();
				}
				else
				if(edition == 2)
				{
					scr4x4();
				}
				else
				if(edition == 3)
				{
					scr5x5();
				}


				gotoxy(37,17);
				printf("Cheats Activated!");
				gotoxy(37,19);
				printf("Press Any Key...");
				getch();
			}

			else

			if(cheats == 1)
			{
				cheats = 0;
				strcpy(ce,"Off");
				mainscr();

				if(edition == 1)
				{
					scr3x3();
				}
				else
				if(edition == 2)
				{
					scr4x4();
				}
				else
				if(edition == 3)
				{
					scr5x5();
				}

				gotoxy(37,17);
				printf("Cheats Deactivated!");
				gotoxy(37,19);
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
			gotoxy(37,17);
			printf("Enter Edition: ");
			gotoxy(37,19);
			printf("1: 3 by 3");
			gotoxy(37,20);
			printf("2: 4 by 4");
			gotoxy(37,21);
			printf("3: 5 by 5");
			gotoxy(52,17);
			scanf("%d", &edition);

			if((edition == 1)||(edition == 2)||(edition == 3))
			{
				game = 1;
				newgame = 1;
				mainscr();

				if(edition == 1)
				{
					scr3x3();
				}
				else
				if(edition == 2)
				{
					scr4x4();
				}
				else
				if(edition == 3)
				{
					scr5x5();
				}

				gotoxy(37,17);
				printf("Enter Name P1: ");
				scanf("%s",name[0]);
				mainscr();

				if(edition == 1)
				{
					scr3x3();
				}
				else
				if(edition == 2)
				{
					scr4x4();
				}
				else
				if(edition == 3)
				{
					scr5x5();
				}

				gotoxy(37,17);
				printf("Enter Name P2: ");
				scanf("%s",name[1]);

				if(edition == 1)
				{
					maingame3x3();
				}
				else
				if(edition == 2)
				{
					maingame4x4();
				}
				else
				if(edition == 3)
				{
					maingame5x5();
				}
			}

			else
			if((edition != 1)||(edition != 2)||(edition != 3))
			{
				mainscr();
				gotoxy(37,17);
				printf("Input Error");
				gotoxy(37,19);
				printf("Edition 1-3 only please.");
				gotoxy(37,20);
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

				x[2] = 16;
				x[3] = 17;

				if(((wins[0] != 3)||(wins[1] != 3))||(game < 10))
				{
					if(edition == 1)
					{
						maingame3x3();
					}
					else
					if(edition == 2)
					{
						maingame4x4();
					}
					else
					if(edition == 3)
					{
						maingame5x5();
					}
				}

				if(wins[0] == 3)
				{
					for(y = 0; y < 3; y++)
					{
						delay(99999);
						delay(99999);
						delay(99999);
						delay(99999);
						delay(99999);
						delay(99999);
						delay(99999);
						mainscr();
						delay(99999);
						delay(99999);
						delay(99999);
						delay(99999);
						delay(99999);
						delay(99999);
						delay(99999);

						if(edition == 1)
						{
							scr3x3();
						}
						else
						if(edition == 2)
						{
							scr4x4();
						}
						else
						if(edition == 3)
						{
							scr5x5();
						}

						delay(99999);
						delay(99999);
						delay(99999);
						delay(99999);
						delay(99999);
						delay(99999);
						delay(99999);
						mainscr();
						delay(99999);
						delay(99999);
						delay(99999);
						delay(99999);
						delay(99999);
						delay(99999);
						delay(99999);

						gotoxy(13,13);
						printf("GameOver!");
						gotoxy(11,14);
						printf("Winner: %s!",name[0]);
					}
					gotoxy(37,17);
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
					edition = 0;
				}

				else

				if(wins[1] == 3)
				{
					for(y = 0; y < 3; y++)
					{
						delay(99999);
						delay(99999);
						delay(99999);
						delay(99999);
						delay(99999);
						delay(99999);
						delay(99999);
						mainscr();
						delay(99999);
						delay(99999);
						delay(99999);
						delay(99999);
						delay(99999);
						delay(99999);
						delay(99999);

						if(edition == 1)
						{
							scr3x3();
						}
						else
						if(edition == 2)
						{
							scr4x4();
						}
						else
						if(edition == 3)
						{
							scr5x5();
						}

						delay(99999);
						delay(99999);
						delay(99999);
						delay(99999);
						delay(99999);
						delay(99999);
						delay(99999);
						mainscr();
						delay(99999);
						delay(99999);
						delay(99999);
						delay(99999);
						delay(99999);
						delay(99999);
						delay(99999);

						gotoxy(13,13);
						printf("GameOver!");
						gotoxy(11,14);
						printf("Winner: %s!",name[1]);
					}
					gotoxy(37,17);
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
					edition = 0;
				}

				else

				if((game == 9)&&((wins[0] != 3)||(wins[1] != 3)))
				{
					for(y = 0; y < 3; y++)
					{
						delay(99999);
						delay(99999);
						delay(99999);
						delay(99999);
						delay(99999);
						delay(99999);
						delay(99999);
						mainscr();
						delay(99999);
						delay(99999);
						delay(99999);
						delay(99999);
						delay(99999);
						delay(99999);
						delay(99999);

						if(edition == 1)
						{
							scr3x3();
						}
						else
						if(edition == 2)
						{
							scr4x4();
						}
						else
						if(edition == 3)
						{
							scr5x5();
						}

						delay(99999);
						delay(99999);
						delay(99999);
						delay(99999);
						delay(99999);
						delay(99999);
						delay(99999);
						mainscr();
						delay(99999);
						delay(99999);
						delay(99999);
						delay(99999);
						delay(99999);
						delay(99999);
						delay(99999);

						gotoxy(13,13);
						printf("GameOver!");
						gotoxy(11,14);
						printf("It's A Draw!");
					}
					gotoxy(37,17);
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
					edition = 0;
				}
			}

			else
			{
				mainscr();

				if(edition == 1)
				{
					scr3x3();
				}
				else
				if(edition == 2)
				{
					scr4x4();
				}
				else
				if(edition == 3)
				{
					scr5x5();
				}

				gotoxy(37,17);
				printf("Input Error");
				gotoxy(37,19);
				printf("Cannot continue, try a new game.");
				gotoxy(37,20);
				printf("Press Any Key...");
				getch();
			}

		}

		if(cmd == 3)
		{
			x[4] = 16;
			x[5] = 17;
			mainscr();
			gotoxy(37,19);
			printf("You need to match 'x' or 'o' in a line.");
			gotoxy(37,20);
			printf("You must score 3 points in 9 games to win.");
			gotoxy(2,4);
			printf("Tic Tac Toe Version 2.13");
			gotoxy(2,5);
			printf("-Fixed 'continue bug'.");
			gotoxy(2,6);
			printf("-Created a 4 by 4 Edition.");
			gotoxy(2,7);
			printf("-New Interface for 4 by 4.");
			gotoxy(2,8);
			printf("-Fixed 'No output 4 by 4 bug'.");
			gotoxy(2,9);
			printf("-Fixed 2.7 Bugs & Errors.");
			gotoxy(2,10);
			printf("-Created Gameover for 4 by 4.");
			gotoxy(2,11);
			printf("-Fixed '4 by 4 Draw bug'.");
			gotoxy(2,12);
			printf("-Fixed 2.9 Bugs & Errors.");
			gotoxy(2,13);
			printf("-Fixed 'Edition Bug'.");
			gotoxy(2,14);
			printf("-Fixed '4 by 4 Gameover bug'.");
			gotoxy(2,15);
			printf("-Created new 'Gameover'.");
			gotoxy(2,16);
			printf("-Created a 5 by 5 Edition.");
			gotoxy(2,17);
			printf("-Fixed '5 by 5 Bugs'.");
			gotoxy(2,18);
			printf("-New Interface for 5 by 5.");
			gotoxy(2,19);
			printf("-Fixed some 'Interface bugs'.");
			gotoxy(2,20);
			printf("-Tested 2.13 for final release.");
			gotoxy(2,22);
			printf("If you found bugs, e-mail me:");
			gotoxy(2,23);
			printf("reedleoneilpascual@yahoo.com");
			gotoxy(2,24);
			printf("reedleoneilpascual@gmail.com");
			gotoxy(37,17);
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

			if(edition == 1)
			{
				scr3x3();
			}
			else
			if(edition == 2)
			{
				scr4x4();
			}
			else
			if(edition == 3)
			{
				scr5x5();
			}

			gotoxy(37,17);
			printf("Input Error");
			gotoxy(37,19);
			printf("Enter Command  (1-4).");
			gotoxy(37,20);
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

	gotoxy(37,17);
	printf("Press Any Key To Exit...");
	getch();
}