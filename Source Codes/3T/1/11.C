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
char ce[3] = "Off";

int loading;
int x[8], y;

int cmd;
int exiton = 0;

void mainscr()
{
	clrscr();
	printf("旼컴컴컴컴컴컴컴컴컴쩡컴컴컴컴컴컴쩡컴컴컴컴컴컴쩡컫컴컴컴컴컴컴컫컴컴컴컴컴컴커");
	printf("�    Tic Tac Toe    �%c1: New Game%c�%c2: Continue%c�  �%c  3: Help  %c�%c  4: Exit  %c�",x[0],x[1],x[2],x[3],x[4],x[5],x[6],x[7]);
	printf("쳐컴컴컴컴컴컴컴컴컴탠컴컴컴컴컴컴좔컴컴컴컴컴컴좔컨컴컴컴컴컴컴컨컴컴컴컴컴컴캑");
	printf("냥袴袴藁袴袴藁袴袴敲� 旼컴Score컴컴컴커旼컴Log컴컴컴컴컴컴컴왯컴Status컴컴컴커 �");
	printf("낳     �     �     볐 �               납                    납               � �");
	printf("낳  %c  �  %c  �  %c  볐 �   %c           납                    납New Game: %d    � �",ch[7],ch[8],ch[9],16,newgame);
	printf("낳     �     �     볐 쿥ins: %d        납                    납Continue: %d    � �",wins[0],cont);
	printf("넋袴袴誥袴袴誥袴袴攷� 쿗ose: %d        납                    납Game: %d        � �",lose[0],game);
	printf("낳     �     �     볐 �               납                    납Player:        � �",nextplayer);
	printf("낳  %c  �  %c  �  %c  볐 �   %c           납                    납Cheats: %s    � �",ch[4],ch[5],ch[6],16,ce);
	printf("낳     �     �     볐 쿥ins: %d        납                    납               � �",wins[1]);
	printf("넋袴袴誥袴袴誥袴袴攷� 쿗ose: %d        납                    납%cHigh Score    � �",lose[1],16);
	printf("낳     �     �     볐 �               납                    납Name: Reed     � �");
	printf("낳  %c  �  %c  �  %c  볐 쿏raw: %d        납                    납Score: 6919    � �",ch[1],ch[2],ch[3],draw);
	printf("낳     �     �     볐 �               납                    납               � �");
	printf("냠袴袴菰袴袴菰袴袴暠� 읕컴컴컴컴컴컴컴牡컴컴컴컴컴컴컴컴컴컴牡컴컴컴컴컴컴컴켸 �");
	printf("쳐컴컴컴컴컴컴컴컴컴탠컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴캑");
	printf("�%c                  �%c                                                         �",16,16);
	printf("읕컴컴컴컴컴컴컴컴컴좔컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴컴켸");
	gotoxy(28,6);
	printf("%s",name[0]);
	gotoxy(28,10);
	printf("%s",name[1]);
}

maingame()
{
		while(gameover != 1)
		{
			if((nextplayer == 1)&&(gameover == 0))
			{
				mainscr();
				gotoxy(71,9);
				printf("%s", name[0]);
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
						if(((ch[box] == 'x')||(ch[box] == 'o'))&&(cheats == 0))
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
								if(((ch[1] == 'x')||(ch[1] == 'o'))&&((ch[2] == 'x')||(ch[2] == 'o'))&&((ch[3] == 'x')||(ch[3] == 'o'))&&((ch[4] == 'x')||(ch[4] == 'o'))&&((ch[5] == 'x')||(ch[5] == 'o'))&&((ch[6] == 'x')||(ch[6] == 'o'))&&((ch[7] == 'x')||(ch[7] == 'o'))&&((ch[8] == 'x')||(ch[8] == 'o'))&&((ch[9] == 'x')||(ch[9] == 'o')))
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
				gotoxy(71,9);
				printf("%s", name[1]);
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
						if(((ch[box] == 'x')||(ch[box] == 'o'))&&(cheats == 0))	
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
		gotoxy(41,5);
		printf("Winner: %s!",winner);
		if(stricmp(winner,"None") == 0)
		{
			gotoxy(41,6);
			printf("Game Draw!");
		}
		gotoxy(23,18);
		printf("Press Any Key...");
		getch();	
}

game()

{
	clrscr();


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
				strcpy(ce,"On ");
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
				strcpy(ce,"Off");
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

			strcpy(name[0],"P1");
			strcpy(name[1],"P2");

			mainscr();
			gotoxy(3,18);
			printf("Enter Name P1:");
			gotoxy(23,18);	
			scanf("%s",name[0]);
			mainscr();
			gotoxy(3,18);
			printf("Enter Name P2:");
			gotoxy(23,18);	
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
					gotoxy(41,5);
					printf("Game Over!");
					gotoxy(41, 6);
					printf("Winner: %s!",name[0]);
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
					strcpy(name[0],"P1");
					strcpy(name[1],"P2");
				}
		
				else	

				if(wins[1] == 3)
				{
					mainscr();
					gotoxy(41,5);
					printf("Game Over!");
					gotoxy(41, 6);
					printf("Winner: %s!",name[1]);
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
					strcpy(name[0],"P1");
					strcpy(name[1],"P2");
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
					strcpy(name[0],"P1");
					strcpy(name[1],"P2");
				}
			}
			
			else
			{
				mainscr();
				gotoxy(23,18);
				printf("Input Error: Cannot continue, try a new game...");
				getch();
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
			gotoxy(41,10);
			printf("You must score 3    ");
			gotoxy(41, 11);
			printf("points in 9 games  ");
			gotoxy(41, 12);
			printf("to win.");
			gotoxy(41,14);
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