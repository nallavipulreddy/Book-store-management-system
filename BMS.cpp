#include<iostream>
#include<fstream>
#include<conio.h>
#include<string.h>
#include<windows.h>
using namespace std;
struct book 
{
	char name[10];
	int idno;
	int price;
	int pages;
}p[10];
void index();
void search();
void display();
void del();
void append();
void update();
void bill();
int main()
{
	char password[10],username[10],ch,y;
	int i,a,n,h,total;	
	 cout<<"\n \t\t                    :::::::::::::::::::::::::::::::::::::";
   cout<<"\n   \t\t                    ::                                 ::";
   cout<<"\n   \t\t                    ::     @@@@@@@@@@@@@@@@@@@@@@@     ::";
   cout<<"\n   \t\t                    ::     @                     @     ::";
   cout<<"\n   \t\t                    ::     @      WELCOME TO     @     ::";
   cout<<"\n   \t\t                    ::     @                     @     ::";
   cout<<"\n   \t\t                    ::     @    JUST BOOK SHOP   @     ::";
   cout<<"\n   \t\t                    ::     @                     @     ::";
   cout<<"\n   \t\t                    ::     @@@@@@@@@@@@@@@@@@@@@@@     ::";
   cout<<"\n   \t\t                    ::                                 ::";
   cout<<"\n   \t\t                    :::::::::::::::::::::::::::::::::::::\n\n";
	cout<<"\n\n\t\t\t\t\t\t\t\t\t\t ENTER ANY KEY TO CONTINUE....";
	getch();
	system("cls");
	cout<<"\n HERE YOU GO....";
	getch();
	cout<<"\n\n\n\n\n\t\t\t ENTER USER NAME:";
	cin>>username;
	cout<<"\n\t\t\t ENTER PASSWORD:";
	for(i=0;i<5;i++)
	{
		password[i]=getch();
		cout<<"*";
		if(i==4)
		getch();
	}
	password[i]='\0';
	if((strcmp(username,"1161")==0)&&(strcmp(password,"vipul")==0))
	{
		index();
	}
	else
	{
	cout<<" user name or password wrong";
    }
getch();
}
int y;
void index ()
	{
		char choice;
		char key[10];
	    system("cls");	
	    cout<<"\n\n\n\n\t\t\t login succes full";
	    cout<<"\n\t\t_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_";
	    cout<<"\n\n\t\t\t 1) ADD BOOKS";
	    cout<<"\n\t\t\t 2) DISPLAY ALL BOOKS";
	    cout<<"\n\t\t\t 3) SEARCH FOR BOOKS";
	    cout<<"\n\t\t\t 4) DELETE BOOKS";
	    cout<<"\n\t\t\t 5) UPDATE BOOKS PRICE";
		cout<<"\n\t\t\t 6) GENERATE BILL";
		cout<<"\n\t\t\t 7) EXIT";
		cout<<"\n\n\n\n\n\t\t\t\t Enter your choice (1-7) :.......";
		choice=getche();
		switch(choice)
		{
		
			case '1':
				system("cls");
				append();
				break;
			case '2':			
				display();
				break;
		    case '3':
				search();
				break;
			case '4':
				del();
				break;
				case '5':
					update();
					break;
			case '6':
			bill();	
			break;
			case '7':
		cout<<("\n                       :::::::::::::::::::::::::::::::::::::");
    	cout<<("\n                       ::                                 ::");
    	cout<<("\n                       ::     @@@@@@@@@@@@@@@@@@@@@@@     ::");
    	cout<<("\n                       ::     @                     @     ::");
    	cout<<("\n                       ::     @       THANK U       @     ::");
    	cout<<("\n                       ::     @                     @     ::");
    	cout<<("\n                       ::     @     :VISIT AGAIN:   @     ::");
    	cout<<("\n                       ::     @                     @     ::");
    	cout<<("\n                       ::     @@@@@@@@@@@@@@@@@@@@@@@     ::");
    	cout<<("\n                       ::                                 ::");
    	cout<<("\n                       :::::::::::::::::::::::::::::::::::::\n\n");
	break;
			default:
				cout<<"\n\n INVALID OPTION ";
				
				
 		}
}
void search()
{
	char key[10];
	system("cls");
	cout<<"\n ENTER THE NAME OF THE BOOK U WANT TO SEARCH:";
	cin>>key;
    ifstream o("123a.txt");
    cout<<"\t"<<"id"<<"\t"<<"name"<<"\t"<<"pages"<<"\t"<<"price"<<endl;
 	cout<<"-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_"<<endl;
	for(int i=0;i<2;i++)
	{
	o>>p[i].name;
	o>>p[i].pages;
	o>>p[i].price;
	o>>p[i].idno;
	if(strcmp(key,p[i].name)==0)
		{
			cout<<"\t"<<p[i].idno<<"\t"<<p[i].name<<"\t"<<p[i].pages<<"\t"<<p[i].price<<endl;
		}
	}
	o.close();
}
void display()
{
	system("cls");
	ifstream b("123a.txt");
    			system("cls");
				cout<<"\t"<<"id"<<"\t"<<"name"<<"\t\t"<<"pages"<<"\t"<<"price"<<endl;
 				cout<<"-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_"<<endl;
				int i=0;
				while(!b.eof())
				{
				    b>>p[i].idno;	
    				b>>p[i].name;
    				b>>p[i].pages;
    				b>>p[i].price;
    				int c=b.tellg();
    				if(c==-1)
    				break;
    				cout<<"\t"<<p[i].idno<<"\t"<<p[i].name<<"\t\t"<<p[i].pages<<"\t"<<p[i].price<<endl;
				}
				b.close();
}
void append()
{
	system("cls");
	char s;
	 ofstream o("123a.txt",ios::app);
    for(int i=0;s!='.';i++)
	{
	    cout<<"Entering details of book number:"<<(i+1)<<endl;
    	cout << "Enter Full name: ";
    	cin>>p[i].name;
    	o<<"\t"<<p[i].name<<"\t";
    	cout << "Enter pages: ";
    	cin >> p[i].pages;
    	o<<"\t"<<p[i].pages;
    	cout << "Enter price: ";
    	cin >> p[i].price;
    	o<<"\t"<<p[i].price;
    	cout<<"Enter id number:";
    	cin>>p[i].idno;
    	o<<"\t"<<p[i].idno<<endl;
    	s=getch();
    	
    }
o.close();
}
void del()
{
	system("cls");
	char key[10];
	int i=0;
		cout<<("\n ENTER THE NAME OF THE BOOK U WANT TO DELETE:");
	cin>>key;
     ofstream o("123ab.txt"); 
    ifstream B("123a.txt");
    cout<<"AFTER DELETING:"<<endl;
	cout<<"\t"<<"id"<<"\t"<<"name"<<"\t\t"<<"pages"<<"\t"<<"price"<<endl;
 	cout<<"-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_"<<endl;
	while(!B.eof())
	{
    	B>>p[i].name;
    	B>>p[i].pages;
    	B>>p[i].price;
    	B>>p[i].idno;
    	int c=B.tellg();
    	if(c==-1)
    	break;
		if(strcmp(key,p[i].name)!=0)
    	{
    	cout<<"\t"<<p[i].idno<<"\t"<<p[i].name<<"\t\t"<<p[i].pages<<"\t"<<p[i].price<<endl;
	    o<<p[i].idno<<"\t";
	    o<<p[i].name<<"\t";
	    o<<p[i].pages<<"\t";
	    o<<p[i].price<<"\t";
	    o<<endl;
	   	}
	}
	
B.close();
o.close();
ifstream n("123ab.txt");
ofstream m("123a.txt");
	while(!n.eof())
		{
		n>>p[i].idno;
    	n>>p[i].name;
    	n>>p[i].pages;
    	n>>p[i].price;	
    	int c=n.tellg();
    	if(c==-1)
    	 break;
		m<<p[i].idno<<"\t";
    	m<<p[i].name<<"\t";
    	m<<p[i].pages<<"\t";
    	m<<p[i].price<<"\t";
    	m<<endl;
	}
m.close();
n.close();
}
void bill()
{
	system("cls");
	int total,h,i=0;
	char key[10];
	system("cls");
	cout<<"\n ENTER THE NAME OF THE BOOK U WANT TO SEARCH:";
	cin>>key;
    ifstream o("123a.txt");
    cout<<"\t"<<"id"<<"\t"<<"name"<<"\t\t"<<"pages"<<"\t"<<"price"<<endl;
 	cout<<"-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_"<<endl;
	while(!o.eof())
	{
	o>>p[i].idno;	
	o>>p[i].name;
	o>>p[i].pages;
	o>>p[i].price;
	if(strcmp(key,p[i].name)==0)
		{
			cout<<"\t"<<p[i].idno<<"\t"<<p[i].name<<"\t\t"<<p[i].pages<<"\t"<<p[i].price<<endl;
		cout<<("\n enter how many u want to buy:");
		cin>>(h);
		total=p[i].price*h;
		cout<<"total bill:"<<total<<"\\- only";
		}
	}
	o.close();
}
void update()
{
	system("cls");
	int i=0,n;
	char key[10];	
		cout<<("\n ENTER THE NAME OF THE BOOK U WANT TO DELETE:");
	cin>>key;
	cout<<"enter new price:";
    	cin>>n;
    	cout<<"AFTER UPDATING:";
     ofstream o("123ab.txt"); 
    ifstream B("123a.txt");
    cout<<"\t"<<"id"<<"\t"<<"name"<<"\t\t"<<"pages"<<"\t"<<"price"<<endl;
 	cout<<"-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_-_"<<endl;
	while(!B.eof())
	{
		B>>p[i].idno;
    	B>>p[i].name;
    	B>>p[i].pages;
    	B>>p[i].price;
    	int c=B.tellg();
    	if(c==-1)
    	break;
		if(strcmp(key,p[i].name)==0)
    	{
	   	cout<<"\t"<<p[i].idno<<"\t"<<p[i].name<<"\t\t"<<p[i].pages<<"\t"<<n<<endl;
		o<<p[i].idno<<"\t";
	    o<<p[i].name<<"\t";
	    o<<p[i].pages<<"\t";
	    o<<n<<"\t";
	    o<<endl;
		}
		   else
		   {
	   		cout<<"\t"<<p[i].idno<<"\t"<<p[i].name<<"\t\t"<<p[i].pages<<"\t"<<p[i].price<<endl;	    
			o<<p[i].idno<<"\t";
	    	o<<p[i].name<<"\t";
	    	o<<p[i].pages<<"\t";
	    	o<<p[i].price<<"\t";
			o<<endl;
			}
	}
	
B.close();
o.close();
ifstream k("123ab.txt");
ofstream l("123a.txt");
while(!k.eof())
{
	k>>p[i].idno;
	k>>p[i].name;
	k>>p[i].pages;
	k>>p[i].price;
	int c=k.tellg();
	if(c==-1)
	break;
	l<<p[i].idno<<"\t";
	l<<p[i].name<<"\t";
	l<<p[i].pages<<"\t";
	l<<p[i].price<<endl;
}
k.close();
l.close();
}

