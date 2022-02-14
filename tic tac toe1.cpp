#include<iostream>
#include<conio.h>
#include<stdlib.h>
#include<stdio.h>
using namespace std;
char p1[10],p2[10],ch,check, pos[9]={' ',' ',' ',' ',' ',' ',' ',' ',' '};
int flag=0;
void intro();        		// THE INTRO OF THE GAME
void details();				//TO GET THE DETALS OF PLAYERS
void start();				//THE PLAYING PROCESS OF GAME
void tutorial();			//TO SEE HOW TO PLAY GAME
void exit();				// TO EXIT THE GAME AFTYER WINNING
void test_condition();		//TESTING THE CONDITION
void updation();			//TO UPDATE THE TIC TAC TOE TABLE


void tutorial()              //learn how to play
{
	system("cls");
	cout<<"                                            HOW TO PLAY?"<<endl;
    cout<<"                                           **************"<<endl<<endl<<endl;
    cout<<"           1.A TIC TAC TOE TABLE IS SHOWN BELOW."<<endl;
    cout<<"           2.JUST TYPE THE POSITION NUMBER TO WHICH YOU WANT TO ENTER YOUR SYMBOL"<<endl;
    cout<<"                           FOR EXAMPLe:- "<<endl;
    cout<<"                                          |      |    "<<endl;
    cout<<"                                       1  |   2  |  3 "<<endl;
    cout<<"                                    ______|______|______"<<endl;
    cout<<"                                          |      |    "<<endl;
    cout<<"                                       4  |   5  |  6 "<<endl;
    cout<<"                                    ______|______|______"<<endl;
    cout<<"                                          |      |    "<<endl;
    cout<<"                                       7  |   8  |  9 "<<endl;
    cout<<"                                          |      |     "<<endl;
    cout<<"         -> IF I WANT TO ENTER AT POSITION 3 I WILL TAP 3 AS MY INPUT."<<endl;
    cout<<"                                          |      |    "<<endl;
    cout<<"                                          |      |  *  "<<endl;
    cout<<"                                    ______|______|______"<<endl;
    cout<<"                                          |      |    "<<endl;
    cout<<"                                          |      |    "<<endl;
    cout<<"                                    ______|______|______"<<endl;
    cout<<"                                          |      |    "<<endl;
    cout<<"                                          |      |    "<<endl;
    cout<<"                                          |      |     "<<endl;
    cout<<"         -> IF I WANT TO ENTER AT POSITION 5 I WILL TAP 5 AS MY INPUT."<<endl;
    cout<<"                                          |      |    "<<endl;
    cout<<"                                          |      |  *  "<<endl;
    cout<<"                                    ______|______|______"<<endl;
    cout<<"                                          |      |    "<<endl;
    cout<<"                                          |   O  |    "<<endl;
    cout<<"                                    ______|______|______"<<endl;
    cout<<"                                          |      |    "<<endl;
    cout<<"                                          |      |    "<<endl;
    cout<<"                                          |      |     "<<endl;
    cout<<" 				PRESS ANY KEY TO RETURN MAIN MENU........"<<endl;
	cout<<"			       *******************************************"<<endl;
    getch();
    system("cls");
    intro();
    
}

void intro()
{
	int choice;
	cout<<"				       ************************"<<endl;
	cout<<" 				       *WELCOME TO TIC TAC TOE*"<<endl;
	cout<<"				       ************************"<<endl<<endl<<endl;
	cout<<"                              DEVELOPED BY :- VAIBHAV KUMAR TIWARI"<<endl;
	cout<<"                             **************************************"<<endl;
	cout<<endl<<endl<<"  		                       MENU"<<endl;
	cout<<"     		   	              ******"<<endl;
	cout<<"		1.TUTORIAL"<<endl;
	cout<<"   		2.NEW GAME"<<endl;
	cout<<" 	 choose the option(1/2) :- ";
	cin>>choice;
	switch(choice)
	{
		case 1 : tutorial();
		         break;
		case 2 :  system("cls");
                  cout<<"				       ************************"<<endl;
	              cout<<" 				       *WELCOME TO TIC TAC TOE*"<<endl;
	              cout<<"				       ************************"<<endl<<endl<<endl;
                  cout<<"                                            NEW GAME!!"<<endl;
                  cout<<"                                           ************"<<endl<<endl<<endl;
                  details();
                  start();
                  break;
	}
}

void details()					//TO GET THE DETAILS OF PLAYERS
{	
	cout<<"ENTER NAME OF PLAYER 1 :- ";
    cin>>p1;
    cout<<endl;
    cout<<"ENTER NAME OF PLAYER 2 :- ";
    cin>>p2;
    cout<<endl<<endl<<"ENTER YOUR SYMBOL(*/O)  :- ";
    cin>>ch;
    cout<<endl<<endl;
    if(ch=='*')
    {
	     cout<<" THE SYMBOL OF "<<p1<<" is "<<ch<<endl;
	     cout<<" THE SYMBOL OF "<<p2<<" is "<<"O"<<endl;
    }
    else
    { 
        cout<<" THE SYMBOL OF "<<p1<<" is "<<"O"<<endl;
        cout<<" THE SYMBOL OF "<<p2<<" is "<<"*"<<endl;
	}
	
}

void exit()   							//TO EXIT THE GAME
{
	int u;
	cout<<endl<<" PLAYED WELLL!!!!!!!!! THANKS FOR PLAYING......"<<endl<<endl;
	cout<<"************************************************"<<endl;
	cout<<"WANT TO PLAY AGAIN (Y/N) :- ";
	cin>>check;
	if(check=='Y'||check=='y')
	{
		while(u<9)
		{
			pos[u]=' ';
			u++;
		}
		system("cls");
		intro();
	}
	else
	{
		exit ( 3)	;	
	}
	
}

void test_condition()    				//WINNING TESTING CONDITION 
{
	if((((pos[0]==pos[1]&&pos[0]==pos[2]) ||(pos[0]==pos[3]&&pos[0]==pos[6]))|| (pos[0]==pos[4]&&pos[0]==pos[8]))==1)
		{
			if(ch=='*')
			{
				
			  if(pos[0]=='*')
		     	{
			       cout<<"          "<<p1<<" WIN THE GAME...";
			       exit();
	    	    }
			  else
			    {
			       if(pos[0]=='O')
			       { 
			          cout<<"          "<<p2<<" WIN THE GAME...";
			          exit();
				   }
			    }
		    }
		    else
		    {
			  if(pos[0]=='*')
		      	{
			       cout<<"          "<<p2<<" WIN THE GAME...";
			       exit();
	    	    }
			  else
			    {
			       if(pos[0]=='O')
			       { 
			          cout<<"          "<<p1<<" WIN THE GAME...";
			          exit();
				   }
			    }
		    }
		}
		else if((((pos[6]==pos[7]&&pos[6]==pos[8]) ||(pos[6]==pos[4]&&pos[6]==pos[2]))|| (pos[6]==pos[3]&&pos[6]==pos[0]))==1)
		{
			if(ch=='*')
			{
				
			  if(pos[6]=='*')
		     	{
			       cout<<"          "<<p1<<" WIN THE GAME...";
			       exit();
	    	    }
			  else
			    {
			       if(pos[6]=='O')
			       { 
			          cout<<"          "<<p2<<" WIN THE GAME...";
			          exit();
				   }
			    }
		    }
		    else
		    {
			  if(pos[6]=='*')
		      	{
			       cout<<"          "<<p2<<" WIN THE GAME...";
			       exit();
	    	    }
			  else
			    {
			       if(pos[6]=='O')
			       { 
			          cout<<"          "<<p1<<" WIN THE GAME...";
			          exit();
				   }
			    }
		    }
		}
		else if(((pos[2]==pos[5]&&pos[2]==pos[8]))==1)
		{ 
		   	if(ch=='*')
			{				
			  if(pos[2]=='*')
		     	{
			       cout<<"          "<<p1<<" WIN THE GAME...";
			       exit();
	    	    }
			  else
			    {
			       if(pos[2]=='O')
			       { 
			          cout<<"          "<<p2<<" WIN THE GAME...";
			          exit();
				   }
			    }
		    }
		    else
		    {
			  if(pos[2]=='*')
		      	{
			       cout<<"          "<<p2<<" WIN THE GAME...";
			       exit();
	    	    }
			  else
			    {
			       if(pos[2]=='O')
			       { 
			          cout<<"          "<<p1<<" WIN THE GAME...";
			          exit();
				   }
			    }
		    }
	    }
	    else if(((pos[1]==pos[4]&&pos[1]==pos[7]))==1)
		{ 
		   	if(ch=='*')
			{				
			  if(pos[1]=='*')
		     	{
			       cout<<"          "<<p1<<" WIN THE GAME...";
			       exit();
	    	    }
			  else
			    {
			       if(pos[1]=='O')
			       { 
			          cout<<"          "<<p2<<" WIN THE GAME...";
			          exit();
				   }
			    }
		    }
		    else
		    {
			  if(pos[1]=='*')
		      	{
			       cout<<"          "<<p2<<" WIN THE GAME...";
			       exit();
	    	    }
			  else
			    {
			       if(pos[1]=='O')
			       { 
			          cout<<"          "<<p1<<" WIN THE GAME...";
			          exit();
				   }
			    }
		    }
	    }	    
		else if(((pos[3]==pos[4]&&pos[3]==pos[5]))==1)
		{ 
		   	if(ch=='*')
			{				
			  if(pos[3]=='*')
		     	{
			       cout<<"          "<<p1<<" WIN THE GAME...";
			       exit();
	    	    }
			  else
			    {
			       if(pos[3]=='O')
			       { 
			          cout<<"          "<<p2<<" WIN THE GAME...";
			          exit();
				   }
			    }
		    }
		    else
		    {
			  if(pos[3]=='*')
		      	{
			       cout<<"          "<<p2<<" WIN THE GAME...";
			       exit();
	    	    }
			  else
			    {
			       if(pos[3]=='O')
			       { 
			          cout<<"          "<<p1<<" WIN THE GAME...";
			          exit();
				   }
			    }
		    }
	    }   
}

void updation() 							//TIC TAC TOE TABLE UPDATE AS PER INSTRUCTION
{
		cout<<"                                          |      |    "<<endl;
        cout<<"                                      "<<pos[0]<<"   |  "<<pos[1]<<"   |  "<<pos[2]<<"  "<<endl;
        cout<<"                                    ______|______|______"<<endl;
        cout<<"                                          |      |    "<<endl;
        cout<<"                                      "<<pos[3]<<"   |  "<<pos[4]<<"   |  "<<pos[5]<<" "<<endl;
        cout<<"                                    ______|______|______"<<endl;
        cout<<"                                          |      |    "<<endl;
        cout<<"                                      "<<pos[6]<<"   |  "<<pos[7]<<"   |  "<<pos[8]<<"  "<<endl;
        cout<<"                                          |      |     "<<endl<<endl<<endl;  
		test_condition();
}
		

void start()       							//REAL STARTER OF GAME
{
	p:		
	int num,i;
	cout<<endl<<endl<<"THE MATRIX IS :"<<endl;
    cout<<"                                          |      |    "<<endl;
    cout<<"                                       1  |   2  |  3 "<<endl;
    cout<<"                                    ______|______|______"<<endl;
    cout<<"                                          |      |    "<<endl;
    cout<<"                                       4  |   5  |  6 "<<endl;
    cout<<"                                    ______|______|______"<<endl;
    cout<<"                                          |      |    "<<endl;
    cout<<"                                       7  |   8  |  9 "<<endl;
    cout<<"                                          |      |     "<<endl<<endl<<endl;
    if(flag>0)
    {
    	cout<<endl<<"THE PREVIOUS STEP UPDATED MATRIX IS :-"<<endl;
    	updation();
	}
    cout<<"  AVAILABLE SPACES ARE :- ";
    for(i=0;i<9;i++)
    {
    	if(pos[i]==' ')
    	{
    		 cout<<i+1<<"  ";
		}
	}
	cout<<endl;
	cout<<p1<<" ENTER YOUR POSITION NUMBER :- ";
	cin>>num;
	if(ch=='*')
	{
	   	pos[num-1]={'*'};
	   	updation();
	   	cout<<"  AVAILABLE SPACES ARE :- ";
        for(i=0;i<9;i++)
        {
    	 if(pos[i]==' ')
    	 {
    		 cout<<i+1<<"  ";
		 }
	    }
	    cout<<endl;
	    cout<<p2<<" ENTER YOUR POSITION NUMBER :- ";
        cin>>num;
    	pos[num-1]={'O'};
    	updation();
	}	   
	else
	{
	    pos[num-1]={'O'};		
		updation();
		cout<<"  AVAILABLE SPACES ARE :- ";
        for(i=0;i<9;i++)
        {
    	  if(pos[i]==' ')
    	  {
    	   	 cout<<i+1<<"  ";
		  }
	    }
	    cout<<endl;
		cout<<p2<<" ENTER YOUR POSITION NUMBER :- ";
    	cin>>num;
    	pos[num-1]={'*'};
    	updation();
	}
	flag++;
	sleep(3);
    system("cls");
	cout<<"				       ************************"<<endl;
	cout<<" 				       *WELCOME TO TIC TAC TOE*"<<endl;
	cout<<"				       ************************"<<endl<<endl<<endl;
    cout<<"                                            NEW GAME!!"<<endl;
    cout<<"                                           ************"<<endl<<endl<<endl;
	goto p;
	
}

int main()                   //MAIN FUNCTION
{ 
    intro();
   return 0;	
}


