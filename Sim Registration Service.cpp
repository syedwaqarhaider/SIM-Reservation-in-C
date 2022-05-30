#include<iostream>
#include<fstream>
#include<string.h>
#include<stdlib.h>
#include<stdio.h>

using namespace std;

struct id
{
	char u_name[50];
	char password[50];
	char u_id[50];
	
}i, v;
int logIn()
{
	int ch;
	char lgid[50],p[50];
	
	fstream logf;
	
	
	cout<<"Welcome to Sim Registration Program: "<<endl;
	
	rep:
	
				
	cout<<"\n\n\t\t\t 1. Sign up \t\t 2. Log in ";
	cout<<"\n\n\t\t\t -> ";
	cin>>ch;
	
	
		
	
	
	switch(ch)
	{
		
		
	case 1:
		
		
			
		{
		system("cls"); 
			char t;
		
		logf.open("login.txt",ios::app);
			if(!logf)
			{
		
				cout<<"1 error in opening file ";
				exit(1);
			}
			
			
		
			cout<<"\n\t\t\t Enter Your Name : ";
			cin>>i.u_name;
		
		    cout<<"\n\t\t\t Select your User Id:  ";
			cin>>i.u_id;
			
			
			cout<<"\n\t\t\t Enter Your Password: ";
			cin>>i.password;
			
			logf<<i.u_id<<"\t"<<i.password<<"\t"<<i.u_name<<"\n";	
			logf.close();
			cout<<"\n\n\t\t\t  Your Account Has Been Created\n";
			cout<<"\n\n\t\t\t  You Want to Log in Now\n ";
			cout<<"\n\n\t\t\t  Press 'y' or 'Y' : ";
			cin>>t;
			if ((t=='y') || (t=='Y'))
			{
				goto login;
			}
			break;
		
		}
	case 2:
		
		{
			system("cls"); 
			login:
			ifstream lf;
			
			lf.open("login.txt",ios::in);
			
			if(!lf)
			{
				cout<<"Error: ";
				exit(1);
			}
			cout<<"\n\n\t\t\tEnter Your id: ";
			cin>>i.u_id;
			cout<<"\n\n\t\t\tEnter Your Password: ";
			cin>>i.password;
			lf>>v.u_id>>v.password>>v.u_name;
			while (!lf.eof())
			{
			if( (strcmp(i.u_id,v.u_id)==0) && (strcmp(i.password, v.password))==0  )
			{
				goto main;
;				
			}
			lf>>v.u_id>>v.password>>v.u_name;
		   }
		
		cout<<"\n\n\t\t This id does not exist!!! First you have to sign up";
			
			goto rep;
			break;
		}
		main:
		logf.close();
	
	
	}
}



struct SIM{
	char name[100];
	
	char f_name[100];
	char number[14];
	char CNIC[13];
	
	
}s, n;


int store()
{
	ifstream fi;
	ofstream f;
	f.open("sim.txt",ios::app);
	if(!f)
	{
		cout<<"error in opening file ";
		exit(1);
	}
	fi.open("sim.txt",ios::in);
	if(!fi)
	{
		cout<<"error in opening file ";
		exit(1);
	}
	cout<<"\n\t.......FOR SIM REGISTERATION PLEASE ENTER YOUR DATA .......";	
	cout<<"\n\n\t\t\t.......ENTERING DATA.......";
	
	
	
		hi:
	cout<<"\n\n\n\t\t Your Desired Number  \t";
	cin>>s.number;
	int b=strlen(s.number);
	if(b!=11)
    {
	cout<<"\n\t\t\t Please enter the number having 11 digits\n\n ";
	goto hi;
    }
	else if(b == 11)
	{
	
	fi>>n.name>>n.f_name>>n.CNIC>>n.number;
	while(!fi.eof())
	{
	
	if(strcmp(s.number,n.number)==0)
	{
		cout<<"\n\t\t\tSorry this number is already reserved\t\n\n";
		goto hi;
	}
	fi>>n.name>>n.f_name>>n.CNIC>>n.number;
}
}
	cout<<"\n\t\t This number is valid and is available. \n\t\t\t Now please enter your information\n\n";
	cout<<"\n\t\t NAME \t\t\t";
	cin>>s.name;
	cout<<"\n\t\t FATHER's NAME \t\t";
	cin>>s.f_name;
	cn:		
	ag:
	cout<<"\n\t\t CNIC \t\t\t";
	cin>>s.CNIC;
	
	int c= strlen(s.CNIC);

if(c!=13)
	{
		cout<<"\n\t\t\t Please Check your CNIC !!  It Must Contain 13 Digits \n\n";
		goto cn;

}
 if(c==13)
{
	fi>>n.name>>n.f_name>>n.CNIC>>n.number;
	do
	{
		if((strcmp(s.name, n.name) !=0) && (strcmp(s.CNIC, n.CNIC)==0))
		{
			cout<<"\n\t\t\tNOT YOUR CNIC\n";
			goto ag;
		}
		fi>>n.name>>n.f_name>>n.CNIC>>n.number;
	}
	while(!fi.eof());
}
	
   
		
	
	
	cout<<"\n\n\t\t... YOUR SIM HAS BEEN REGISTERED ...\n\t\t\t\tPLEASE CHECK YOUR DATA";
	


	
	cout<<"\n\t\t YOUR NAME  \t\t\t ( "<<s.name<<" ) ";

	cout<<"\n\t\t FATHER's NAME \t\t ( "<<s.f_name<<" ) ";
	
	cout<<"\n\t\t YOUR CNIC \t\t\t ( "<<s.CNIC<<" ) ";
	
	cout<<"\n\t\t NUMBER ALLOTED TO YOU \t\t ( "<<s.number<<" ) \n\n\n";
f<<s.name<<"\t\t";
   f<<s.f_name<<"\t\t";
	f<<s.CNIC<<"\t\t";
	f<<"\t\t"<<s.number<<"\t\t\t";	
	f<<"\n";

	f.close();
	
	
}

int show()
{
	ifstream fs;
	fs.open("sim.txt",ios::app);
	if(!fs)
	{
		cout<<"error in opening file !!";
		exit(1);
	}
	
	fs>>s.name>>s.f_name>>s.CNIC>>s.number;
	
	while(!fs.eof())
	{
	
	
	cout<<"\n\t\t NAME \t\t\t< "<<s.name<<" >";
	cout<<"\n\t\t FATHER's NAME \t\t< "<<s.f_name<<" > ";
	cout<<"\n\t\t CNIC \t\t\t< "<<s.CNIC<<" > ";
    cout<<"\n\t\t YOUR NUMBER \t\t< "<<s.number<<" > ";
    cout<<"\n\n";
    
    fs>>s.name>>s.f_name>>s.CNIC>>s.number;
}

	fs.close();
}
void search()
{
	int t=0;
	
	ifstream fi;
	fi.open("sim.txt",ios::app);
	if(!fi)
	{
		cout<<"error in opening file !!";
		exit(1);
	}
	
		char n[50];
		char m[50];
		char yc;
		cout<<"\n\t 1. Want to search data of a number\n\t 2. want to check data of a person\n";		
		cout<<"\n\t\t Enter Your Choice  -> ";
		cin>>yc;
		switch(yc)
		{
			case '1':
			cout<<"\n\t\t Enter  Number to search \t\t"<<endl;
		cout<<"\n\n\t\t\t -> ";
		cin>>n;
		
		fi>>s.name>>s.f_name>>s.CNIC>>s.number;
		
		
	while(!fi.eof())
	{
		
		if(strcmp(n,s.number)==0 )
		{
				
				cout<<"\n\t\t NAME \t\t\t< "<<s.name<<" > ";
				cout<<"\n\t\t FATHER's NAME \t\t < "<<s.f_name<<" > ";
				cout<<"\n\t\t CNIC \t\t\t < "<<s.CNIC<<" > ";
   				cout<<"\n\t\t YOUR NUMBER \t\t < "<<s.number<<" > "; 
   				 cout<<"\n\n";
			goto end;
		}		
	fi>>s.name>>s.f_name>>s.CNIC>>s.number;
	}
	cout<<"\n\t\t \t\t SORRY NO USER FOUND";
	end:	
		break;
	
	case '2':
	cout<<"\n\t\t Enter  Name to search Data \t\t"<<endl;
		cout<<"\n\n\t\t\t -> ";
		cin>>m;
		fi>>s.name>>s.f_name>>s.CNIC>>s.number;
		
	while(!fi.eof())
	{
		
		if(strcmp(m,s.name)==0 )
		{
			    t++;
				
				cout<<"\n\t\t NAME \t\t\t< "<<s.name<<" > ";
				cout<<"\n\t\t FATHER's NAME \t\t < "<<s.f_name<<" > ";
				cout<<"\n\t\t CNIC \t\t\t < "<<s.CNIC<<" > ";
   				cout<<"\n\t\t YOUR NUMBER \t\t < "<<s.number<<" > "; 
   				 cout<<"\n\n";
			
		}
	fi>>s.name>>s.f_name>>s.CNIC>>s.number;
	}
	if(t==0)
	{
	cout<<"\n\t\t \t\t SORRY NO USER FOUND";
}
	break;
	default:
		{
		
	cout<<"\n\n\t\t Wrong Input\n\t\t";	
		}
		}
		
		
		
	fi.close();

}

int main()
{
	system("color F2");
	char op;
	char ch;
{

	cout<<"\t\t\t\t*\t*";
 
  cout<<"\t\t\t\t**\t**";
   cout<<"\t\t\t\t***\t***";
   cout<<"\t\t\t\t****\t****";
   cout<<"\t\t\t\t*****\t*****";
    cout<<"\t\t\t\t******\t******";
   cout<<"\t\t\t\t*******\t*******";
   cout<<"\t\t\t\t*******\t*******";
   cout<<"\t\t\t\t******\t******";
   cout<<"\t\t\t\t*****\t*****";
   cout<<"\t\t\t\t****\t****";
   cout<<"\t\t\t\t***\t***";
   cout<<"\t\t\t\t**\t**";
   cout<<"\t\t\t\t*\t*";
   cout<<"\n\n\t\t\t";
   logIn();
	
	do  
	{
	  system("cls"); 
   cout<<"\n\n\n\t\t\t     What do you want to do? \n\n\t ..*..*..*....*..*..*.. ENTER YOUR CHOICE  ..*..*..*....*..*..*.. ";
	cout<< "\n\n\t\t..*..*..*..*..    A: Sim Registeration     ..*..*..*..*..\n\t\t ..*..*..*..*..   B: Show Registered data     ..*..*..*..*.. \n\t\t..*..*..*..*..    C: Search Registered Data     ..*..*..*..*..\n\n\t\t\t\t   -> ";
	cin>>op;
	switch(op)
	{
		case 'A':
		store();
		break;
		case 'B':
		show();
		break;
		case 'C':
		search();
		break;
		
		default:
		cout<<"\n\t\t Please enter valid option\n\t ";					
	}
cout<<"\n\n\n\t\t do you want to continue ? \n\t\t press Y or y to continue \n\n\t\t";
cin>>ch;
system("cls");
	}
	while(ch=='Y'||ch=='y');
  

return 0;
}



}
