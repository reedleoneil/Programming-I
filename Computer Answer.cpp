#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
#include<strings.h>
#include<windows.h>

using namespace std;

int r;
char trigger;
char* output;
char petition_dummy[25], petition[25]="computer please answer", answer[25], question[100];

main()
{
	while(1)
	{		
	
		/*reset answer*/
		answer[0]='\0';
			
		/*get trigger*/
		cout<<"Press any key to continue...";
		trigger=getch();
		
		/*prompt user*/
		system("cls");
		cout<<"Enter Petition: ";
	
		/*check if trick is triggered to start*/
		if(trigger == '`')
		{
			/*reset trigger and r*/
			trigger=' ';
			r=0;
			
			/*while trick is not triggered to stop*/
			while(trigger!='`')
			{
				/*input answer and otput petition*/
				trigger=getch();
				cout<<petition[r];
				if(trigger!='`')
					answer[r]=trigger;
				else
					answer[r]='\0';
				r++;
			}
			/*input petition*/
			gets(petition_dummy);
		}
		else
		{
			/*if not triggered to start*/
			strcpy(answer,"Sorry, please try again...");
			gets(petition_dummy);
		}
		
		/*prompt user to input question*/
		cout<<"Enter Question: ";
		gets(question);
		
		/*output answer*/
		cout<<"Answer: ";
		for(r=0;r<strlen(answer);r++)
		{
			Sleep(100);
			cout<<answer[r];
		}
		cout<<endl;
	}
}
