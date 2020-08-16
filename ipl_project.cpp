#include<iostream>
#include<cstdlib>
#include<string>
#include<fstream>


int main();
using namespace std;
class stats{
	public:
		void stats1(){
			
			char h;
			cout<<"-----press the followling to execute-----"<<endl<<endl;
			cout<<"1 > Most Runs"<<endl;
			cout<<"2 > Most fours"<<endl;
			cout<<"3 > Most sixes"<<endl;
			cout<<"4 > Most wickets"<<endl;
			cout<<"5 > Best bowling figures"<<endl;
			cout<<"6 > Most fifties"<<endl;
				cin>>h;
			switch(h)
			{
	case '1':
			mostruns();
	break;
	case '2':
			mostfours();
	break;
	case '3':
	        mostsixes();
	break;
	case '4':
	        mostwickets();
	break;
	case '5':
	        mostbowling();
	break;
	case '6':
	        mostfifties();
	break;									
			}	
		}
		void mostruns(){
			
			char str[10000];
	fstream obj1;
	obj1.open("mostruns.txt",ios::in);
	if(!obj1)
	{
		cout<<"\n file not opened";
		exit(1);
	}
	while(obj1)
	{
		obj1.getline(str,10000);
		cout<<str<<"\n";
	}
	obj1.close();
	char flag;
	cout<<endl<<endl<<"\t\tpress 'b' to move back";
	cout<<endl<<"\t\tpress 'e' to exit";
	cin>>flag;
	
	if(flag=='b')
	{
		stats1();
	}
	else if(flag=='e')
	{   char flag1;
		cout<<endl<<endl<<"\t\t\tAre you sure you want to exit IPL SIMULATOR - yes(y)  no(n)";
		cin>>flag1;
		if(flag1=='y')
		{
			exit(1);
		}
		else
		{
			mostruns();
		}
	}	
		}
	void mostfours()
	{
		char str[10000];
	fstream obj1;
	obj1.open("mostfours.txt",ios::in);
	if(!obj1)
	{
		cout<<"\n file not opened";
		exit(1);
	}
	while(obj1)
	{
		obj1.getline(str,10000);
		cout<<str<<"\n";
	}
	obj1.close();
	char flag;
	cout<<endl<<endl<<"\t\tpress 'b' to move back";
	cout<<endl<<"\t\tpress 'e' to exit";
	cin>>flag;
	
	if(flag=='b')
	{
		stats1();
	}
	else if(flag=='e')
	{   char flag1;
		cout<<endl<<endl<<"\t\t\tAre you sure you want to exit IPL SIMULATOR - yes(y)  no(n)";
		cin>>flag1;
		if(flag1=='y')
		{
			exit(1);
		}
		else
		{
			mostfours();
		}
	}	
	}
	void mostsixes()
	{
		char str[10000];
	fstream obj1;
	obj1.open("mostsixes.txt",ios::in);
	if(!obj1)
	{
		cout<<"\n file not opened";
		exit(1);
	}
	while(obj1)
	{
		obj1.getline(str,10000);
		cout<<str<<"\n";
	}
	obj1.close();
	char flag;
	cout<<endl<<endl<<"\t\tpress 'b' to move back";
	cout<<endl<<"\t\tpress 'e' to exit";
	cin>>flag;
	
	if(flag=='b')
	{
		stats1();
	}
	else if(flag=='e')
	{   char flag1;
		cout<<endl<<endl<<"\t\t\tAre you sure you want to exit IPL SIMULATOR - yes(y)  no(n)";
		cin>>flag1;
		if(flag1=='y')
		{
			exit(1);
		}
		else
		{
			mostsixes();
		}
	}	
	}
	void mostwickets()
	{
	char str[10000];
	fstream obj1;
	obj1.open("mostwickets.txt",ios::in);
	if(!obj1)
	{
		cout<<"\n file not opened";
		exit(1);
	}
	while(obj1)
	{
		obj1.getline(str,10000);
		cout<<str<<"\n";
	}
	obj1.close();
	char flag;
	cout<<endl<<endl<<"\t\tpress 'b' to move back";
	cout<<endl<<"\t\tpress 'e' to exit";
	cin>>flag;
	
	if(flag=='b')
	{
		stats();
	}
	else if(flag=='e')
	{   char flag1;
		cout<<endl<<endl<<"\t\t\tAre you sure you want to exit IPL SIMULATOR - yes(y)  no(n)";
		cin>>flag1;
		if(flag1=='y')
		{
			exit(1);
		}
		else
		{
			mostwickets();
		}
	}	
	}
	void mostbowling()
	{
		char str[10000];
	fstream obj1;
	obj1.open("mostbowling.txt",ios::in);
	if(!obj1)
	{
		cout<<"\n file not opened";
		exit(1);
	}
	while(obj1)
	{
		obj1.getline(str,10000);
		cout<<str<<"\n";
	}
	obj1.close();
	char flag;
	cout<<endl<<endl<<"\t\tpress 'b' to move back";
	cout<<endl<<"\t\tpress 'e' to exit";
	cin>>flag;
	
	if(flag=='b')
	{
		stats();
	}
	else if(flag=='e')
	{   char flag1;
		cout<<endl<<endl<<"\t\t\tAre you sure you want to exit IPL SIMULATOR - yes(y)  no(n)";
		cin>>flag1;
		if(flag1=='y')
		{
			exit(1);
		}
		else
		{
			mostbowling();
		}
	}	
	}
	void mostfifties()
	{
		char str[10000];
	fstream obj1;
	obj1.open("mostfifties.txt",ios::in);
	if(!obj1)
	{
		cout<<"\n file not opened";
		exit(1);
	}
	while(obj1)
	{
		obj1.getline(str,10000);
		cout<<str<<"\n";
	}
	obj1.close();
	char flag;
	cout<<endl<<endl<<"\t\tpress 'b' to move back";
	cout<<endl<<"\t\tpress 'e' to exit";
	cin>>flag;
	
	if(flag=='b')
	{
		stats();
	}
	else if(flag=='e')
	{   char flag1;
		cout<<endl<<endl<<"\t\t\tAre you sure you want to exit IPL SIMULATOR - yes(y)  no(n)";
		cin>>flag1;
		if(flag1=='y')
		{
			exit(1);
		}
		else
		{
			mostfifties();
		}
	}	
	}	
};
class squads{
	public:
		void squads1(){
			char i;
			cout<<"Enter your choice"<<endl<<endl;
			cout<<"1 > MI"<<endl<<endl;
			cout<<"2 > CSK"<<endl<<endl;
			cout<<"3 > SRH"<<endl<<endl;
			cout<<"4 > DC"<<endl<<endl;
			cout<<"5 > KKR"<<endl<<endl;
			cout<<"6 > KXIP"<<endl<<endl;
			cout<<"7 > RCB"<<endl<<endl;
			cout<<"8 > RR"<<endl<<endl;
			cin>>i;
			switch(i)
			{
				case '1':
					   mi();
					   break;
					   	   	   	          
				default:
				cout<<"Invalid input!!!"<<endl;	
			}
		}
		void mi()
		{
		char u;
		cout<<endl<<endl<<"1.) view complete squad"<<endl;
		cout<<"2.) Update, Rewrite, Search player , Display"<<endl;
		cin>>u;
		switch(u)
		{
			case '1':
				view_squad();
				break;
			case '2':
			    enter_player();
				break;
			default :
			    cout<<endl<<endl<<"Invalid input";			 
		}
		char flag;
	cout<<endl<<endl<<"\t\tpress 'b' to move back";
	cout<<endl<<"\t\tpress 'e' to exit";
	cin>>flag;
	
	if(flag=='b')
	{
		squads1();
	}
	else if(flag=='e')
	{   char flag1;
		cout<<endl<<endl<<"\t\t\tAre you sure you want to exit IPL SIMULATOR - yes(y)  no(n)";
		cin>>flag1;
		if(flag1=='y')
		{
			exit(1);
		}
		else
		{
			mi();
		}
	}	
	}
        void view_squad(){
			char str[10000];
	fstream obj1;
	obj1.open("mumbaisquad.txt",ios::in);
	if(!obj1)
	{
		cout<<"\n file not opened";
		exit(1);
	}
	while(obj1)
	{
		obj1.getline(str,10000);
		cout<<str<<"\n";
	}
	obj1.close();
	char flag;
	cout<<endl<<endl<<"\t\tpress 'b' to move back";
	cout<<endl<<"\t\tpress 'e' to exit";
	cin>>flag;
	
	if(flag=='b')
	{
		mi();
	}
	else if(flag=='e')
	{   char flag1;
		cout<<endl<<endl<<"\t\t\tAre you sure you want to exit IPL SIMULATOR - yes(y)  no(n)";
		cin>>flag1;
		if(flag1=='y')
		{
			exit(1);
		}
		else
		{
			view_squad();
		}
	}	
		}
		void enter_player(){
			
			char t;
			cout<<endl<<endl<<"1.) Display squad"<<endl;
			cout<<"2.) Update the player"<<endl;
			cout<<"3.) Rewrite the team"<<endl;
			cout<<"4.) Search player"<<endl;
		class miplayer{
		string name;
		int age;
		float average;
		float strikerate;
		int highest;
		int fifties;
		int hundreds;
		public:
			void read_data()
			{
				cout<<endl<<"\n Enter the name of the player: ";
				cin>>name;
				cout<<endl<<"\n Enter the age: ";
				cin>>age;
				cout<<endl<<"\n average : ";
				cin>>average;
				cout<<endl<<"\n Enter the strikerate: ";
				cin>>strikerate;
				cout<<endl<<"\n Enter the highest: ";
				cin>>highest;
				cout<<endl<<"\n Enter the fifties: ";
				cin>>fifties;
				cout<<endl<<"\n Enter the hundreds: ";
				cin>>hundreds;
			}
			void show_data()
			{
			cout<<"\n player name: "<<name;
			cout<<"\n plater age: "<<age;
			cout<<"\n player average: "<<average;
			cout<<"\n player strikerate: "<<strikerate;
			cout<<"\n player highest: "<<highest;
			cout<<"\n player fifties: "<<fifties;
			cout<<"\n player hundreds: "<<hundreds;	
			}
        };
        cin>>t;
	fstream FILE;
	miplayer f;
	miplayer e[6],b[6];
	if(t =='1'){
		for(int i=0;i<6;i++)
	{  	FILE.open("mumbaiplayers.txt",ios::ate|ios::in|ios::out|ios::binary);
		FILE.read((char*)&b[i],sizeof(b[i]));
		b[i].show_data();
	}
	}
	if(t =='2'){
	int no;
	FILE.open("mumbaiplayers.txt",ios::ate|ios::in|ios::out|ios::binary);
	int num_objects=FILE.tellp()/sizeof(f);
	cout<<"\n Enter the player whose record has to be updated: ";
	cin>>no;
	int location=(no-1)*sizeof(f);
	FILE.seekp(location);
	cout<<"\n Enter the new details :- ";
	f.read_data();
	FILE.write((char*)&f,sizeof(f));
	FILE.seekg(0);
	cout<<"\n\n FILE UPDATED.........";}
	else if(t=='3')
	{
	int i;
	FILE.open("mumbaiplayers.txt",ios::out|ios::binary);
	cout<<"\n Enter the data of eleven players";
	cout<<"\n---------------------------------";
	for(i=0;i<11;i++)
	{
	e[i].read_data();
		FILE.write((char*)&e[i],sizeof(e[i]));
	}
	FILE.close();
	for(i=0;i<6;i++){
	e[i].show_data();
	}
		}
		else if(t=='4')
		{
	int num;
	miplayer f;
    FILE.open("mumbaiplayers.txt",ios::in|ios::binary);
	cout<<"\n Enter the player whose data must be searched";
	cin>>num;
	int location=(num-1)*sizeof(f);
	FILE.seekg(location);
	FILE.read((char*)&f,sizeof(f));
	f.show_data();
		}			
			else{
				cout<<"Invalid input"<<endl;
			}
		}		
};
class pointstable{
	public:
	 void pointstable1(){
	 	
			char str[10000];
	fstream obj1;
	obj1.open("pointstable.txt",ios::in);
	if(!obj1)
	{
		cout<<"\n file not opened";
		exit(1);
	}
	while(obj1)
	{
		obj1.getline(str,10000);
		cout<<str<<"\n";
	}
	obj1.close();
		}
		
		
};
class schedule{
	public:
		void schedule1(){
			
			int i;
			cout<<"Enter your choice......"<<endl<<endl;
			cout<<"1. All Matches"<<endl;
			cout<<"2. sorted team wise"<<endl;
			cout<<"3. Random IPL schedule generator"<<endl;
			cin>>i;
			switch(i)
			{
				case 1:
					   allmatches();
					   break;
				case 2:
				       sort();
					   break;
				case 3:
				       sortall();
					   break;	   	   
				default:
				cout<<"Invalid input!!!"<<endl;	
			}
			}
		void sort()
		{
			int ch;
	string strr[9]={"TEAM","mumbai(MI)","chennai(CSK)","Rajastan(RR)","Bangalore(RCB)","Hyderabad(SRH)","Kolkata(KKR)","Delhi(DC)","Punjab(KXIP)"};
	cout<<"Enter the team you want to generate the schedule: "<<endl<<endl;
	cout<<"1. MI"<<endl;
	cout<<"2. CSK"<<endl;
	cout<<"3. RR"<<endl;
	cout<<"4. RCB"<<endl;
	cout<<"5. SRH"<<endl;
	cout<<"6. KKR"<<endl;
	cout<<"7. DC"<<endl;
	cout<<"8. KIXP"<<endl;
	cin>>ch;
		int i;
		for(i=1;i<9;i++)
		{   if(i!=ch)
			cout<<strr[ch]<<" VS "<<strr[i]<<endl;
		}
		}
		void sortall()
		{
			int ch;
	string strr[9]={"TEAM","mumbai(MI)","chennai(CSK)","Rajastan(RR)","Bangalore(RCB)","Hyderabad(SRH)","Kolkata(KKR)","Delhi(DC)","Punjab(KXIP)"};
	cout<<" generating a random schedule: ";
	for(int ch=1;ch<9;ch++)
	{
		for(int i=1;i<9;i++)
		{   if(i!=ch)
			cout<<strr[ch]<<" VS "<<strr[i]<<endl;
		}
	}
		}	
		void allmatches()
		{   
		    char str[10000];
	fstream obj1;
	obj1.open("schedule.txt",ios::in);
	if(!obj1)
	{
		cout<<"\n file not opened";
		exit(1);
	}
	while(obj1)
	{
		obj1.getline(str,10000);
		cout<<str<<"\n";
	}
	obj1.close();
	char flag;
	cout<<endl<<endl<<"\t\tpress 'b' to move back";
	cout<<endl<<"\t\tpress 'e' to exit";
	cin>>flag;
	if(flag=='b')
	{
		schedule1();
	}
	else if(flag=='e')
	{   char flag1;
		cout<<endl<<endl<<"\t\t\tAre you sure you want to exit IPL SIMULATOR - yes(y)  no(n)";
		cin>>flag1;
		if(flag1=='y')
		{
			exit(1);
		}
		else
		{
			allmatches();
		}
	}	
		}			
};
class umpire{
	public :
	void umpire1(){
		 char str[10000];
	fstream obj1;
	obj1.open("umpire_list.txt",ios::in);
	if(!obj1)
	{
		cout<<"\n file not opened";
		exit(1);
	}
	while(obj1)
	{
		obj1.getline(str,10000);
		cout<<str<<"\n";
	}
	obj1.close();
	char flag;
	cout<<endl<<endl<<"\t\tpress 'b' to move back";
	cout<<endl<<"\t\tpress 'e' to exit";
	cin>>flag;
	
	if(flag=='b')
	{
		main();
	}
	else if(flag=='e')
	{   char flag1;
		cout<<endl<<endl<<"\t\t\tAre you sure you want to exit IPL SIMULATOR - yes(y)  no(n)";
		cin>>flag1;
		if(flag1=='y')
		{
			exit(1);
		}
		else
		{
			umpire1();
		}
	}	
	}
};
class about{
	public:
		void about1()
		{
			char str[10000];
	fstream obj1;
	obj1.open("about.txt",ios::in);
	if(!obj1)
	{
		cout<<"\n file not opened";
		exit(1);
	}
	while(obj1)
	{
		obj1.getline(str,10000);
		cout<<str<<"\n";
	}
	obj1.close();
	char flag;
	cout<<endl<<endl<<"\t\tpress 'b' to move back";
	cout<<endl<<"\t\tpress 'e' to exit";
	cin>>flag;
	system("cls");
	if(flag=='b')
	{
		main();
	}
	else if(flag=='e')
	{   char flag1;
		cout<<endl<<endl<<"\t\t\tAre you sure you want to exit IPL SIMULATOR - yes(y)  no(n)";
		cin>>flag1;
		if(flag1=='y')
		{
			exit(1);
		}
		else
		{
			about1();
		}
	}	
		}
};
class strike_rate{
	private:
		char name[20];
		float strikerate;
		int runs;
		public:
			void strike_rate1()
			{
			
				char st;
				cout<<"1.) Rewrite the data"<<endl;
				cout<<"2.) search player"<<endl;
				cout<<"3.) update player"<<endl;
				cout<<"4.) display player"<<endl;
				cout<<"5.) Adding a player"<<endl;
				cin>>st;
				switch(st)
				{
					case '1':
						enter();
						break;
					case '2':
					searchplayer();
					break;
					case '3':
						update();
					break;
					case '4':
						display();
					break;
					case '5':
					    add();
						break;	
					default:
						
					cout<<"Invalid input!!!"<<endl;	
				}
			}
			void read_data()
			{
				cout<<"\n Enter the name of the player: ";
				cin>>name;
				cout<<"\n Enter the strike rate: ";
				cin>>strikerate;
				cout<<"\n Enter the runs scored : ";
				cin>>runs;
				
			}
			void show_data()
			{cout<<"\n name of the player: "<<name;
			cout<<"\n strikerate of the player: "<<strikerate;
			cout<<"\n runs scored: "<<runs;	
			}
void enter()
{
	fstream FILE;
	strike_rate e[10],b[10];
	int i;
	FILE.open("players.txt",ios::trunc|ios::out|ios::binary);
	cout<<"\n Enter the data of 10 players";
	cout<<"\n---------------------------------";
	for(i=0;i<10;i++)
	{e[i].read_data();
		FILE.write((char*)&e[i],sizeof(e[i]));
	}
	FILE.close();
	FILE.open("players.txt",ios::in|ios::binary);
	for(i=0;i<3;i++)
	{
		FILE.read((char*)&b[i],sizeof(b[i]));
		b[i].show_data();
	}
	FILE.close();
}
void searchplayer()
{

	strike_rate e;
	int no;
	fstream FILE("players.txt",ios::in|ios::binary);
	cout<<"\n Enter the player whose data must be searched";
	cin>>no;
	int location=(no-1)*sizeof(e);
	FILE.seekg(location);
	FILE.read((char*)&e,sizeof(e));
	e.show_data();
}
void update()
{int no;   
 strike_rate f;
	fstream FILE("players.txt",ios::ate|ios::in|ios::out|ios::binary);
	int num_objects=FILE.tellp()/sizeof(f);
	cout<<"\n Enter the player whose record has to be updated: ";
	cin>>no;
	int location=(no-1)*sizeof(f);
	FILE.seekp(location);
	cout<<"\n Enter the new details :- ";
	f.read_data();
	FILE.write((char*)&f,sizeof(f));
	FILE.seekg(0);
	cout<<"\n\n FILE UPDATED.........";
	FILE.close();
}
void add()
{
	int no;   
 strike_rate f;
	fstream FILE("players.txt",ios::app|ios::in|ios::out|ios::binary);
	int num_objects=FILE.tellp()/sizeof(f);
	cout<<"\n Enter the player whose record has to be updated: "<<endl;
	cout<<"\n Enter the new details :- ";
	f.read_data();
	FILE.write((char*)&f,sizeof(f));
	FILE.seekg(0);
	cout<<"\n\n FILE UPDATED.........";
	FILE.close();
}
void display()
{strike_rate b[10];
fstream FILE;
FILE.open("players.txt",ios::ate|ios::in|ios::out|ios::binary);
		for(int i=0;i<10;i++)
		{
		FILE.read((char*)&b[i],sizeof(b[i]));
		b[i].show_data();
	    }
}
void auction()
{
	
	cout<<"1 >> IPL 2019 auction Records"<<endl<<endl;
	cout<<"2 >> Auction simulator"<<endl<<endl;
	char top;
	cin>>top;
	switch(top)
	{
		case '1':
			auction1();
			break;
		case '2':
		    auction2();
			break;
		default:
		cout<<"Invalid input!!!"<<endl;	
	}
}
void auction1()
{
		char str[10000];
	fstream obj1;
	obj1.open("auction.txt",ios::in);
	if(!obj1)
	{
		cout<<"\n file not opened";
		exit(1);
	}
	while(obj1)
	{
		obj1.getline(str,10000);
		cout<<str<<"\n";
	}
	obj1.close();
}
void auction2()
{  strike_rate flag;
   strike_rate b[10];
	fstream FILE("players.txt",ios::in|ios::binary);
	for(int i=0;i<10;i++)
	{
		FILE.read((char*)&b[i],sizeof(b[i]));
	}
	FILE.close();
    for(int i=0;i<10;i++)
    {
    	cout<< b[i].name;
    	cout<< b[i].strikerate;
    	cout<< b[i].runs;
    }
}
};
int main()
{
char num;
strike_rate s3;
schedule s;
squads s1;
stats s2;
about a;
umpire u;
pointstable p;
    cout<<"\t\t\t\t\t"<<endl;
	cout<<"\t\t\t\t\t********* Welcome to IPL simulator **********"<<endl;
	cout<<"\t\t\t\t\t-----------"<<endl<<endl;
	cout<<"Enter your choice........."<<endl<<endl<<endl;
	cout<<"1. IPL schedule"<<endl<<endl;
	cout<<"2. Points Table"<<endl<<endl;
	cout<<"3. Statistics"<<endl<<endl;
	cout<<"4. player_databade"<<endl<<endl;
	cout<<"5. Squads"<<endl<<endl;
	cout<<"6. Umpire_statistics"<<endl<<endl;
	cout<<"7. Auction"<<endl<<endl;
	
	
	cin>>num;
	
	switch(num)
	{
		case '1':
			s.schedule1();
			break;
		case '2':
		    p.pointstable1();
		    break;
		case '3':
		    s2.stats1();
		    break;
		case '4':
		    s3.strike_rate1();
			break;    
		case '5':
	        s1.squads1();
			break;	      
		case '6':
		u.umpire1();	
		break;
		case'7':
			s3.auction();
			break;
		case '8':
			a.about1();
			break;
		default: 
		cout<<"Invalid input!!!"<<endl;	
	}

	return 0;
	}
