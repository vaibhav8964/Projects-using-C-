#include<fstream.h>
#include<conio.h>
#include<stdio.h>
#include<string.h>
#include<dos.h>

class Hotel
{
    int room_no;
    char name[25];
    char Gender[12];
    int Age;
    char address[50];
    char phone[11];
    int Period;
    int Check_in[3];

    public:
    void Getdata(int r);   //to input customer record
    void Putdata();        //to display customer record
    void modify();         //to modify customer record
    void Get_date();       //to get present date
    int Ret_Rno();         //to return roll no.
}H;

    void Hotel::Getdata(int r)
    {
     char Gnd;
     cout<<"\n Enter custumer details\n";
     cout<<" **********************\n";
     room_no=r;
     cout<<" Name: ";
     gets(name);

     while(1)
     {
      cout<<" Gender (M/F/T): ";
      cin>>Gnd;
       if(Gnd=='M'||Gnd=='m')
	 { strcpy(Gender,"Male");
	  break; }
	else if(Gnd=='F'||Gnd=='f')
	 { strcpy(Gender,"Female");
	  break; }
	else if(Gnd=='T'||Gnd=='t')
	 { strcpy(Gender,"Transgender");
	   break; }
	else
	cout<<" Incorrect option\n";
      }
     cout<<" Age: ";
     cin>>Age;
     cout<<" Address: ";
     gets(address);
     cout<<" Phone No: ";
     gets(phone);
     cout<<" Duration(days) : ";
     cin>>Period;
     Get_date();
    }
    void Hotel::Putdata()
     {
      clrscr();
      cout<<"\n Customer Details";
      cout<<"\n ****************\n";
      cout<<"\n Room no: "<<room_no;
      cout<<"\n Name: "<<name;
      cout<<"\n Gender: "<<Gender;
      cout<<"\n Age:  "<<Age;
      cout<<"\n Address: "<<address;
      cout<<"\n Phone no: "<<phone;
      cout<<"\n Duration(days): "<<Period;
      cout<<"\n Check in date is : ";
      for(int i=0;i<3;i++)
       {
	cout<<Check_in[i];
	if(i<2)
	cout<<"/";
       }
    }

   void Hotel::modify()
    {
      Putdata();
      char Gnd='.',nm[25],adrs[50],Ph_no[11];
      int prd,ag;
      cout<<"\n\n Enter New details\n";
      cout<<" **********************\n";
      cout<<" Name (press '.' to retain old one) :\t";
      gets(nm);
     while(1)
     {
      cout<<" Gender [M/F/T] (press '.' to retain old one): ";
      cin>>Gnd;
       if(Gnd=='M'||Gnd=='m')
	 { strcpy(Gender,"Male");
	  break; }
	else if(Gnd=='F'||Gnd=='f')
	 { strcpy(Gender,"Female");
	  break; }
	else if(Gnd=='T'||Gnd=='t')
	 { strcpy(Gender,"Transgender");
	   break; }
	else if(Gnd=='.')
	break;
	else
	cout<<" Incorrect option\n";

      }
      cout<<" Age (press '0' to retain old one) :\t   ";
      cin>>ag;
      cout<<" Address (press '.' to retain old one ) :  ";
      gets(adrs);
      cout<<" Phone no (press '0' to retain old one) :  ";
      gets(Ph_no);
      cout<<" Duration (press '0' to retain old one) :  ";
      cin>>prd;

      if(strcmp(nm,".")!=0)
       strcpy(name,nm);


      if(ag!=0)
       Age=ag;
      if(strcmp(adrs,".")!=0)
       strcpy(address,adrs);
      if(strcmp(Ph_no,"0")!=0)
       { strcpy(phone,Ph_no);
       }
      if(prd!=0)
       { Period=prd;
       }
    }

  void Hotel::Get_date()
   {
    struct date d;
    getdate(&d);
    Check_in[0]=d.da_day;
    Check_in[1]=d.da_mon;
    Check_in[2]=d.da_year;
   }


 int Hotel::Ret_Rno()
  {
   return room_no;
  }


class login

{
   char usname[10],pword[10],code[10];
   char c;
   public:
    int getdata();
    login()
    {
	 c=' ';
    }
};

int login::getdata()
{  int a=0,i;

  while(a<3)
  {
     clrscr();
     cout<<"\n  **************************  LOGIN PAGE  ************************** \n\n";
     cout<<" \n                       ENTER USERNAME:-";
     gets(usname);
	 cout<<" \n                       ENTER PASSWORD:-";
	 i=0;
	 while(i<10)
	 {
	    pword[i]=getch();
	    c=pword[i];
	    if(c==13)
	    break;
	    else
	    cout<<"*";
	    i++;
	 }

	pword[i]='\0';

	if(strcmpi(usname,"user")==0 && strcmp(pword,"matrix")==0)
	{
	   cout<<"  \n\n\n\t\t WELCOME TO OUR SYSTEM !!!! LOGIN IS SUCCESSFUL";
	   cout<<"\n\n\n\t\t\t Press any key to continue...";
	   getch();
	   return 1;

	}
	else
	{
	 cout<<"\n\n\n\t\t    Sorry !! Login is unsuccessful";
	 a++;
	 getch();
	}
 }
 cout<<"\n\n\t\t    You have entered wrong username or password 3 times.\n";
 cout<<"\n\t\t    Press any key to exit";
 getch();
 return 0;

}


 void Main_menu();     //to dispay the main menu
 int  Check(int);       //to check room status
 void Add();           //to book a room
 void Display();       //to display the customer record
 void Room_stat();     //to display alloted rooms
 void Edit();          //to edit the customer record
 void Modify(int);     //to modify the record
 void Delete(int);     //to Delete the record

int main()
{
    login L;
    textbackground(YELLOW);
    textcolor(BLACK);
    clrscr();
    int i,check=0;
    cout<<"\n";
    for(i=0;i<80;i++)
     cout<<"_";

    cout<<"\n\t\t\t****************************";
    cout<<"\n\t\t\t* HOTEL MANAGEMENT PROJECT *";
    cout<<"\n\t\t\t****************************";
    cout<<"\n\t";
    sleep(1);

    cout<<"\n\n\n\n\t\t\tMade By:";
    cout<<" 1.Bikash Ch. Nath\n\t\t\t\t 2.Vaibhav Kr. Tiwari\n\t\t\t\t 3.Pradeep Kr. Yadav\n\n\n\t";
    sleep(1);
    cout<<" Under guidance & technical support of Mr. Himanshu Khare sir.\n";
    for(i=0;i<80;i++)
    cout<<"_";

    sleep(1);
    cout<<"\n\n\n\t\t\t";
    cout<<"Press any key to continue\n";
    getch();
    check=L.getdata();

    if(check==1)
    Main_menu();
    return 0;
}


void Main_menu()
{
    int choice=0;

    while(choice!=5)
    {
	clrscr();
	cout<<"\n\n\t\t\t\t *************";
	cout<<"\n\t\t\t\t * MAIN MENU *";
	cout<<"\n\t\t\t\t *************\n\n";
	cout<<"\n\t\t\t\t1.Book A Room";
	cout<<"\n\t\t\t\t2.Customer Record";
	cout<<"\n\t\t\t\t3.Rooms Status";
	cout<<"\n\t\t\t\t4.Edit Record";
	cout<<"\n\t\t\t\t5.Exit";
	cout<<"\n\n\t\t\t\tEnter Your Choice: ";
	cin>>choice;

	switch(choice)
	{
	    case 1: Add();
		    break;
	    case 2: Display();
		    break;
	    case 3: Room_stat();
		    break;
	    case 4: Edit();
		    break;
	    case 5: break;

	    default: {
			cout<<"\n\n\t\t\tWrong choice!!!";
			cout<<"\n\t\t\tPress any key to continue!!";
			getch();
		     }
	}
    }
 }


void Add()
{
   int r,flag=0;
   char ch;
    ofstream Ofs("Record.txt",ios::app);
    ZX:
    clrscr();
    cout<<"\n Enter room no: ";
    cin>>r;
    if((r<=0)||(r>30))
    {  cout<<"\n The entered room no does not exist.\n";
       cout<<"\n Please enter a valid room no \n\t Or\n Press esc to exit";
       ch=getch();
       if((int)ch==27)
	return;
       else
	goto ZX;
    }
    flag=Check(r);
    if(flag!=0)
      cout<<"\n Sorry !. Room is already booked";
    else
    {
	H.Getdata(r);
	Ofs.write((char*)&H,sizeof(H));
	cout<<"\n\n Room is successfully booked!!!";
    }

    cout<<"\n\n Press any key to continue!!";
    getch();
    Ofs.close();
}

int Check(int r)
{
    int flag=0;
    ifstream Ifs("Record.txt",ios::in);
    while(!Ifs.eof())
    {
	Ifs.read((char*)&H,sizeof(H));
	if(H.Ret_Rno()==r)
	{
	    flag=1;
	    break;
	}
    }

    Ifs.close();
    return(flag);
}




void Display()
{

    ifstream Ifs("Record.txt",ios::in);
    int r,flag=0;
    char ch;
    ZX:
    clrscr();
     if(!Ifs)
      {
	cout<<"\n Sorry!! Cannot open the file";
	getch();
	return;
      }
    cout<<"\n Enter room no: ";
    cin>>r;
  if((r<=0)||(r>30))
    {  cout<<"\n The entered room no does not exist.\n";
       cout<<"\n Please enter a valid room no \n\t Or\n Press esc to exit";
       ch=getch();
       if((int)ch==27)
	return;
       else
	goto ZX;
    }

    while(!Ifs.eof())
    {
      while(Ifs.read((char*)&H,sizeof(H)))
      {
       if(H.Ret_Rno()==r)
	{   H.Putdata();
	    flag=1;
	    break;
	}
      }
    }

    if(flag==0)
	cout<<"\n Sorry the Room is vacant .";

    cout<<"\n\n Press any key to continue!!";
    getch();
    Ifs.close();
}


void Room_stat()
{
  clrscr();
  ifstream ifs;
  ifs.open("Record.txt",ios::in);
  if(!ifs)
  {
   cout<<"\n Sorry!! Cannot open the file";
   getch();
   return;
  }

  int Room[30]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15,16,17,18,19,20,21,22,23,24,25,26,27,28,29,30};
  int Empty[30],Booked[30];

    int Count=0,i=0,k=0,flag=0;
    cout<<"\n\t\t\t Rooms Status";
    cout<<"\n\t\t\t**************\n\n";

  while(!ifs.eof())
  {
    while(ifs.read((char*)&H,sizeof(H)))
    {
	 Booked[i]=H.Ret_Rno();
     i++;
    }
  }
 Count=i;
 Booked[i]=0;

 for(int j=0;j<30;j++)
 {
   for(i=0;Booked[i]!=0;i++)
    {
      { if(Room[j]==Booked[i])
	flag=1;
      }
    }
  if(flag!=1)
     {  Empty[k]=Room[j];
	k++;
      }
  flag=0;
 }
 Empty[k]=0;
 ifs.close();


    cout<<"\t Total no of booked rooms are : "<<Count<<"\n";
    cout<<"\t Total no of empty rooms are  : "<<30-Count<<"\n";

    cout<<"\n\n\n \tList of Rooms booked is\n";

    for(i=0;i<80;i++)
    cout<<"_";

    for(i=0;Booked[i]!=0;i++)
    cout<<"   "<<Booked[i]<<"\t";

    cout<<"\n";
    for(i=0;i<80;i++)
    cout<<"_";

    cout<<"\n\n\tList of Empty roooms is\n";
    for(i=0;i<80;i++)
    cout<<"_";

     for(i=0;Empty[i]!=0;i++)
     cout<<"   "<<Empty[i]<<"\t";
     cout<<"\n";
    for(i=0;i<80;i++)
    cout<<"_";

    cout<<"\n\n\t\t\tPress any key to continue!!";
    getch();

}



void Edit()
{
    clrscr();
    int choice=0,r;
    char ch;

    cout<<"\n EDIT MENU";
    cout<<"\n *********";
    cout<<"\n\n 1.Modify Customer Record";
    cout<<"\n 2.Delete Customer Record";

    cout<<"\n\n Enter your choice: ";
    cin>>choice;

    if((choice!=1)&&(choice!=2))
    {    cout<<"\n Wrong Choice!!\n";
	 getch();
	 return;
    }
    ZX:
    clrscr();
    cout<<"\n Enter room no: ";
    cin>>r;
    if((r<=0)||(r>30))
    {  cout<<"\n The entered room no does not exist.\n";
       cout<<"\n Please enter a valid room no \n\t Or\n Press esc to exit";
       ch=getch();
       if((int)ch==27)
	return;
       else
	goto ZX;
    }

    switch(choice)
    {
	case 1: Modify(r);
		break;
	case 2: Delete(r);
		break;
    }
  getch();
}

void Modify(int r)
{
    long pos;
    int flag=0;
    fstream FS("Record.txt",ios::in|ios::out);
      if(!FS)
       {
	cout<<"\n Sorry!! Cannot open the file";
	getch();
	return;
       }

    while(!FS.eof())
    {
	    pos=FS.tellg();
	    FS.read((char*)&H,sizeof(H));
	    if(H.Ret_Rno()==r)
	    {
	      H.modify();

	      FS.seekg(pos);
	      FS.write((char*)&H,sizeof(H));
	      cout<<"\n Record of room no "<<H.Ret_Rno()<<" have been modified!!";
	      flag=1;
	      break;
	}
    }

    if(flag==0)
    cout<<"\n Sorry!. the Room is vacant!!\n";

    FS.close();
}

void Delete(int r)
{
    int flag=0,R_no=0;
    ifstream Ifs("Record.txt",ios::in);
    ofstream Ofs("temp.txt",ios::out);
     if(!Ifs)
       {
	cout<<"\n Sorry!! Cannot open the file";
	getch();
	return;
       }

    while(!Ifs.eof())
    {
	while(Ifs.read((char*)&H,sizeof(H)))

	if(H.Ret_Rno()==r)
	{
	    H.Putdata();
	    OP:
	     char ch='a';
	    cout<<"\n\n Do you want to delete this record(y/n):  ";
	    cin>>ch;

	    if((ch=='n')||(ch=='N'))
	    {
	     Ofs.write((char*)&H,sizeof(H));
	     flag=2;
	    }
	    else if((ch=='y')||(ch=='Y'))
	    { R_no=H.Ret_Rno();
	      flag=1;
	     }
	     else
	      { cout<<"\n Wrong choice\n Please enter correct option\n";
	       goto OP;
	      }
	}
	else
	Ofs.write((char*)&H,sizeof(H));
    }

    Ifs.close();
    Ofs.close();

    if(flag==0)
	cout<<"\n Sorry the room is vacant!!\n";
    else
    {	if(flag==1)
	cout<<"\n Data record of room no "<<R_no<<" have been successfully deleted\n";
	remove("Record.txt");
	rename("temp.txt","Record.txt");


    }
}


