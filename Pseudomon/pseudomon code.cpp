#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

string arg1, arg2, arg3;
int argint;
int p1current=1;
int p2current=1;

struct pokemon
{
	int health = 100;
	string conditions;
};

struct Team
{	
	pokemon pk1;
	pokemon pk2;
	pokemon pk3;
	pokemon pk4;
	pokemon pk5;
	pokemon pk6;
};

Team t1;
Team t2;

void printhealth(int health)
{
	for (int i=0; i<(health/2); i++)
	{
		cout <<'|';
	}
}

void damage()
{
	cin >> arg2;
	cin >> argint;
	if (arg1=="heal")
	argint=argint*(-1);
	if(arg2=="p1"||arg2=="P1"||arg2=="1")
	{
		switch (p1current)
		{
		case 1:
			t1.pk1.health-=argint;
			break;
		case 2:
			t1.pk2.health-=argint;
			break;
		case 3:
			t1.pk3.health-=argint;
			break;
		case 4:
			t1.pk4.health-=argint;
			break;
		case 5:
			t1.pk5.health-=argint;
			break;
		case 6:
			t1.pk6.health-=argint;
			break;
		}	
	}
	
	else if(arg2=="p2"||arg2=="P2"||arg2=="2")
	{
		switch (p1current)
		{
		case 1:
			t2.pk1.health-=argint;
			break;
		case 2:
			t2.pk2.health-=argint;
			break;
		case 3:
			t2.pk3.health-=argint;
			break;
		case 4:
			t2.pk4.health-=argint;
			break;
		case 5:
			t2.pk5.health-=argint;
			break;
		case 6:
			t2.pk6.health-=argint;
			break;
		}	
	}
}

void switchout()
{
	cin >> arg2;
	if (arg2=="p1"||arg2=="P2")
	{
		system("cls");
		cout << endl <<endl <<"Pokemon 1: " << endl;
		printhealth(t1.pk1.health);
		cout << endl <<endl <<"Pokemon 2: " << endl;
		printhealth(t1.pk2.health);
		cout << endl <<endl <<"Pokemon 3: " << endl;
		printhealth(t1.pk3.health);
		cout << endl <<endl <<"Pokemon 4: " << endl;
		printhealth(t1.pk4.health);
		cout << endl <<endl <<"Pokemon 5: " << endl;
		printhealth(t1.pk5.health);
		cout << endl <<endl <<"Pokemon 6: " << endl;
		printhealth(t1.pk6.health);
		
		cin >> argint;
		p1current=argint;
	}
	else if (arg2=="p1"||arg2=="P2")
	{
		system("cls");
		cout << endl <<endl <<"Pokemon 1: " << endl;
		printhealth(t1.pk1.health);
		cout << endl <<endl <<"Pokemon 2: " << endl;
		printhealth(t1.pk2.health);
		cout << endl <<endl <<"Pokemon 3: " << endl;
		printhealth(t1.pk3.health);
		cout << endl <<endl <<"Pokemon 4: " << endl;
		printhealth(t1.pk4.health);
		cout << endl <<endl <<"Pokemon 5: " << endl;
		printhealth(t1.pk5.health);
		cout << endl <<endl <<"Pokemon 6: " << endl;
		printhealth(t1.pk6.health);
		
		cin >> argint;
		p1current=argint;
	}
}

void display(int whichteam)
{
	switch(whichteam)
	{
	case 1:
		{
			switch (p1current)
			{
			case 1:
				printhealth(t1.pk1.health);
				break;
			case 2:
				printhealth(t1.pk2.health);
				break;
			case 3:
				printhealth(t1.pk3.health);
				break;
			case 4:
				printhealth(t1.pk4.health);
				break;
			case 5:
				printhealth(t1.pk5.health);
				break;
			case 6:
				printhealth(t1.pk6.health);
				break;
			}	
			break;
		}
		
	case 2:
		{
			switch (p2current)
			{
			case 1:
				printhealth(t2.pk1.health);
				break;
			case 2:
				printhealth(t2.pk2.health);
				break;
			case 3:
				printhealth(t2.pk3.health);
				break;
			case 4:
				printhealth(t2.pk4.health);
				break;
			case 5:
				printhealth(t2.pk5.health);
				break;
			case 6:
				printhealth(t2.pk6.health);
				break;
			}		
		}

	}
}

void print()
{
	cout << endl << "P1: " << t1.pk1.health <<endl;
	display(1);
	
	cout << "\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n\n";
	
	display(2);
	cout << endl << "P2: " << t2.pk1.health <<endl;
}




int main()
{
	do
	{
		system("cls");
		arg1.clear();
		arg2.clear();
		arg3.clear();
		argint=0;
		
		print();
		
		cin >> arg1;
		
		if (arg1=="hurt"||arg1=="damage"||arg1=="heal")
		{damage();}
		
		if (arg1=="switch")
		{
			switchout();
		}
		
	}while(true);
}