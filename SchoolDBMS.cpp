// SchoolDBMS.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include<iostream>
#include<fstream>
#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<process.h>
#include<Windows.h>
#include<iomanip>
#include<ctime>
#include<ctype.h>

using namespace std;

class Student
{
	char name[30];
	int std;
	char section;
	int roll;
	int admno;
	char pass[30];
	char username[30];

public:
	void input()
	{
		cin.ignore();
		cout << "Enter Name : ";
		gets_s(name);
		//cin.ignore();
		cout << "Enter Standard : ";
		cin >> std;
		cin.ignore();
		cout << "Enter Section : ";
		cin >> section;
		cin.ignore();
		cout << "Enter Admission Number : ";
		cin >> admno;
		cin.ignore();
		cout << "Enter username:";
		gets_s(username);
		cout << "Enter password : ";
		gets_s(pass);
	}
	void log()
	{
		cin.ignore();
		cout << "Enter Username : ";
		gets_s(username);
		cin.ignore();
		cout << "Enter Password : ";
		gets_s(pass);

	}

	char* getpass()
	{
		return pass;
	}
	char* getuser()
	{
		return username;
	}
	char* getname()
	{
		return name;
	}
	void username_change(char newname[30])
	{
		strcpy_s(username, newname);
	}

	void password_change(char newpass[30])
	{
		strcpy_s(pass, newpass);
	}
	void name_change(char newname[30])
	{
		strcpy_s(name, newname);
	}
};

//-------------------------------------------X------------------------------------------------------------------------
//-------------------------------------------X------------------------------------------------------------------------


struct leaderboard {
	int sl_no;
	char name[30];
	int score;
} p1, p2;

void clrscr()//Declaring clearscreen 
{
	std::system("cls");
}

int zero = 0;
int &f = zero;
int tot = 0;
int &Tot = tot;
int tgt = 0;
int &Tgt = tot;


int Start_screen()
{
start:
	clrscr();
	char b;
	cout << "   _____________________________________________________________________________________   \n";
	cout << "  /  ________           _______                                                         \\\n";
	cout << "  |     |      |     |  |                                                               |\n";
	cout << "  |     |      |_____|  |______                                                         |\n";
	cout << "  |     |      |     |  |                                                               |\n";
	cout << "  |     |      |     |  |_______                                                        |\n";
	cout << "  |                           ______  ______                                            |\n";
	cout << "  |                  |     | |       |                                                  |\n";
	cout << "  |                  |_____| |       |   ___                                            |\n";
	cout << "  |                  |     | |       |  |   |                                           |\n";
	cout << "  |                  |     | |______ |______|                                           |\n";
	cout << "  |                                                      beta v2                        |\n";
	cout << "  |                                                                                     |\n";
	cout << "  |                                               By: Sarthak , Abhijit                 |\n";
	cout << "  |                                                                                     |\n";
	cout << "  |                                                                                     |\n";
	cout << "  |        Press 1 to Play SINGLE PLAYER (A.I)                                          |\n";
	cout << "  |        Press 2 to Play MULTIPLAYER (Friend)                                         |\n";
	cout << "  |        Press 3 to See Rules to play                                                 |\n";
	cout << "  |        Press 4 to View Creditis                                                     |\n";
	cout << "  |        Press 0 to exit                                                              |\n";
	cout << "  |                                                                                     |\n";
	cout << "  \\_____________________________________________________________________________________/\n ";
	b = _getch();

	switch (b)
	{
	default:
		goto start;
	case 48:
		clrscr();
		cout << "\n\n\n\n\n\n\n\n\n\n\t\t\t\t\t\tGOOD BYE . :)";
		Sleep(1500);
		exit(0);
		break;
	case 49:
		clrscr();
		return 1;
		break;
	case 50:
		clrscr();
		return 2;
		break;
	case 51:
		clrscr();
		return 3;
		break;
	case 52:
		clrscr();
		return 4;

	}
	clrscr();

	return 0;

}

int toss()
{
	int a, opp, tot, usr, opt, b, c;
	char ooe;//Odd or even


	srand((int)time(0));
	for (a = 0; a < 1; ++a)
		opp = rand() % 6 + 1;


	for (b = 0; b < 1; ++b)
		c = rand() % 2 + 1;


	srand((int)time(0));
	for (b = 0; b < 1; ++b)
		c = rand() % 2 + 1;

_1: cout << "\n\n" << "			(O)dd or (E)ven ?\n		";
	cin >> ooe;

	if (ooe == '1')
		ooe = 'o';
	if (ooe == '2')
		ooe = 'e';

	ooe = tolower(ooe);

	if (ooe != 'o' && ooe != 'e')
	{
		clrscr();
		cout << "			Please enter (o) or (e)";
		Sleep(500);
		goto _1;
	}

_2:	cout << "\n\n\n			Enter your number between(1-6) \n		";

	usr = _getch();
	usr -= 48;
	cout << usr;

	if (usr < 1 || usr > 6)
	{
		clrscr();
		goto _2;
	}

	tot = opp + usr;

	if (ooe == 'e' && tot % 2 == 0)

		_3:         {
		cout << "\n			The opponent has put		" << opp;
	_option:cout << "\n\n			You won the toss!\n\n			Press 1 to bat\n			Press 2 to bowl\n		";
		cin >> opt;
		if (opt == 1 || opt == 2)
			return opt;
		else
		{
			clrscr();
			goto _option;
		}
	}

	else if (ooe == 'e' && tot % 2 == 1)
	{
	_4:
		cout << "\n			The opponent has put			" << opp << endl << endl;
		cout << "			You have lost the toss ";

		if (c == 1)
		{
			cout << "and the computer has chose to bat ";
			_getch();
			return 3;
		}

		else if (c == 2)
		{
			cout << "and the computer has chosen to bowl ";
			_getch();
			return 4;
		}
	}
	else if (ooe == 'o' && tot % 2 != 0)
		goto _3;
	else if (ooe == 'o' && tot % 2 == 0)
		goto _4;

}

void ldrbrd(int a)//Leaderboard
{
	int tempscr = 0;
	int highscr;
	p1.sl_no = 1;
	p2.sl_no = 2;
	p1.score = 0;
_nm:cout << "\n\n			Enter name   :    PLAYER 1\n[Only first five initials]\n		";
	cin.ignore();
	gets_s(p1.name);
	system("cls");
	if ((strlen(p1.name))>6 || (strlen(p1.name)<1))
	{
		cout << "\n			Invalid Input , please Enter again:\n\n\n\n";
		Sleep(1000);
		goto _nm;
	}
	cout << "\n			The details are being processed\n";

	for (int i = 0; i<3; ++i)
	{
		system("cls");
		cout << "\n			The details are being processed\n\n\n\n\n\n\n\n\n";
		cout << "                                  Loading.";
		Sleep(450);
		cout << ".";
		Sleep(450);
		cout << ".";
		Sleep(450);
	}
	system("cls");


	cout << "\n NUM  |    NAME     |     SCORE \n";
	if (1)
	{
		p1.score = a;
		fstream f1;
		f1.open("Blue.txt", ios::out);
		f1 >> highscr;
		if (highscr<p1.score)
		{
			highscr = p1.score;
			f1 << highscr;
		}
	}

	cout << setw(2) << "    " << p1.sl_no << setw(10) << p1.name << setw(15) << p1.score << "\n";

}

int bat(int tgt = 0, int m = 1)
{
	int scr = 1, opp = 0, a, tot = 0;
	clrscr();
	if (m != 0)
	{

		cout << "\t\t\t\t\t\t\t\t\t\t\t\t\t\t TARGET = " << tgt << " runs";
		cout << "\n";

	}
	cout << "\n";
	while (1)
	{
		scr = 0;
		cout << "\n			Enter your number between (1-6)(Ba)\n\n		";
	_1:		scr = _getch();
		scr -= 48;
		cout << scr;


		if (scr < 1 || scr > 6)
		{
			cout << "\n\n			Please enter a number within the range (1-6)\n		";
			goto _1;
		}

		srand((int)time(0));
		for (a = 0; a<1; ++a)
			opp = rand() % 6 + 1;

		cout << "\n			The opponent has put			" << opp;
		tgt = tgt - scr;

		if (m != 0)
		{

			if (opp != scr)
			{
				cout << "\n";
				//if (tot<tgt)
				tot += scr;
				cout << "\n\t\tYour total score is : " << tot << "\n";
				//_getch();
				continue;
			}
		}

		if (opp == scr)
		{
			cout << "\n\n			YOU'VE GOT OUT !!!\n			Your total score is : " << tot;
			_getch();
			break;
		}

		tot += scr;
		if (opp != scr)
			cout << "\n\n\n\t\t\tYour total score is : " << tot << "\n\n";

	}
	++f;
	return tot;
}

int bowl(int tgt = 0)
{
	clrscr();
	int opp = 0, scr = 0, tot = 0, a;

	while (1)
	{
		cout << "\n			Enter your number between (1-6)(Bo)\n\n		";
	_1:		scr = _getch();
		scr -= 48;
		if (scr > 6 || scr < 1)
		{
			cout << scr;
		}

		if (scr < 1 || scr > 6)
		{
			cout << "\n\n			Please enter a number within the range (1-6)\n		";
			goto _1;
		}

		srand((int)time(0));
		for (a = 0; a < 1; ++a)
			opp = rand() % 6 + 1;

		cout << "\n			The opponent has put		" << opp;

		if (opp != scr)
		{
			tot += opp;
			continue;
		}
		else
		{
			cout << "\n\n			BOWLED !\n			CPU's score is : " << tot;
			_getch();
			break;
		}
	}


	return tot;
}

void result(int f)
{

	int tgt, tot;
	if (f == 0)
	{
		tgt = bat(0, 0);
		Sleep(1500);
		tot = bowl();
		if (tot>tgt)
		{
			cout << " \n			Well Tried! You lost by " << tot - tgt << " runs ";
			ldrbrd(tgt - tot);
		}
		else if (tot < tgt)
		{
			cout << " \n			Well Played !!! You WON by " << tgt - tot << " runs ";
			ldrbrd(tgt - tot);
		}
		else
			cout << "\n			It's a draw";
	}
	else if (f == 1)
	{
		tgt = bowl();
		Sleep(1500);
		tot = bat(tgt);
		if (tot < tgt)
		{
			cout << " \n			Well Tried ! You lost by " << tgt - tot << " runs ";
			ldrbrd(tot - tgt);
		}
		else if (tot > tgt)
		{
			cout << " \n			Well Played !!! You WON by " << tot - tgt << " runs ";
			ldrbrd(tot - tgt);
		}
		else
			cout << "\n			It's a draw";
	}

}

int THEGAME(int F)
{
	int total1 = 0, total2 = 0;

	int h;
	if (F == 1)
		h = 2;
	else
		h = 1;
	int p1v = 1, p2v = 2;
	int p1v2 = 0, p2v2 = 1;


	for (int i = 0; p1v != p2v; i++)
	{
	_106:	cout << "\nPLAYER " << F << " BAT :\n";
		p1v = _getch();
		if (p1v < 49 || p1v > 54)
		{
			cout << endl;
			goto _106;
		}
		p1v -= 48;
	_107:	cout << "PLAYER " << h << " BOWL :\n";
		p2v = _getch();
		if (p2v < 49 || p2v > 54)
		{
			clrscr();
			goto _107;
		}
		p2v -= 48;
		if (p1v == p2v)
		{
			cout << "\n------------------------------------------------------\nOUTTT\n-------------------------------------------------------\n";
			cout << "PLAYER " << F << " has put " << p1v << endl << "PLAYER " << h << " has put " << p2v << endl << endl;
			cout << "Total score is : " << total1 << endl << endl;
		}
		else
		{
			cout << "PLAYER " << F << " has put " << p1v << endl << "PLAYER " << h << " has put " << p2v << endl << endl;
			total1 = total1 + p1v;
			cout << "Total score is : " << total1 << endl << endl;
		}
	}


	cout << "\nPLAYER " << F << " has scored " << total1++ << " runs \n";
	cout << "\nPLAYER " << h << " needs " << total1 << " runs to win\n";


	while (1)
	{
		if (total1 > total2)
		{
		_104:			cout << "\n\n\nPLAYER " << h << " BAT :\n";
			p2v2 = _getch();
			if (p2v2 < 49 || p2v2 > 54)
			{
				goto _104;
			}
			p2v2 -= 48;
			cout << "PLAYER " << F << " BOWL:\n";
			p1v2 = _getch();
		_105:		if (p1v2 < 49 || p1v2 > 54)
		{
			goto _105;
		}
					p1v2 -= 48;
					if (p2v2 == p1v2)
					{
						cout << "\n------------------------------------------------------\nOUTTT\n------------------------------------------------------\n";
						cout << "\nPLAYER " << F << " has put " << p2v2 << endl << "PLAYER " << h << " has put " << p1v2 << endl;
						cout << "\n---------------------------------------\n---------------------------------------\nPLAYER " << F << " HAS WON by " << total1 - total2 << " runs.\n---------------------------------------\n---------------------------------------\n";
						_getch();
						return(1);
						break;
					}
					else
					{
						total2 = total2 + p2v2;
						if (total1 <= total2)
						{
							cout << "\nPLAYER " << h << " has put " << p1v2 << endl << "PLAYER " << F << " has put " << p2v2 << endl;
							cout << "Total score is : " << total2 << "\n";
						}
						else
						{
							cout << "\nPLAYER " << h << " has put " << p1v2 << endl << "PLAYER " << F << " has put " << p2v2 << endl;
							cout << "Total score is : " << total2 << " \nYou need " << total1 - total2 << " runs to win \n";
						}

					}
		}
		else
		{
			cout << "\n---------------------------------------\n---------------------------------------\nPLAYER " << h << " HAS WON !!!!\n---------------------------------------\n---------------------------------------\n";
			_getch();
			return(2);
		}
	}
}



void thegame(int f)
{
	char p;
_103:cout << "PLAYER: " << f << " \n\n----> Press 1. to Bat \n----> Press 2. to Bowl\n";
	cin >> p;
	if (p == '1')
	{
		if (f == 1)
			THEGAME(1);

	}
	else if (p == '2')
	{
		if (f == 2)
			THEGAME(1);
	}
	else
	{
		clrscr();
		goto _103;
	}
	if (p == '1')
	{
		if (f == 2)
			THEGAME(2);

	}
	else if (p == '2')
	{
		if (f == 1)
			THEGAME(2);
	}
	else
	{
		clrscr();
		goto _103;
	}

}



int _2p()
{
	char p, p1v, p2v, c = 'a';
_100:cout << "PLAYER 1: ODD OR EVEN ? (o/e) \n";
	cin >> p;
	p = tolower(p);
	if (p != 'o' && p != 'e')
	{
		clrscr(); goto _100;
	}
_101:cout << "PLAYER 1: ENTER DIGIT:(1-6)\n";
	p1v = _getch();
	if (p1v < 49 || p1v > 54)
	{
		goto _101;
	}
_102:cout << "PLAYER 2: ENTER DIGIT:(1-6)\n\n";
	p2v = _getch();
	if (p2v < 49 || p2v > 54)
	{
		goto _102;
	}
	cout << "PLAYER 1 has entered : " << p1v << endl << "PLAYER 2 has entered : " << p2v << endl << endl;
	if ((p1v + p2v) % 2 != 0)
		c = 'o';
	else
		c = 'e';
	if (p == c)
	{
		cout << "PLAYER 1 WINS THE TOSS\n\n";
		thegame(1);
	}
	else
	{
		cout << "PLAYER 2 WINS THE TOSS\n";
		thegame(2);
	}
	return 0;
}

void credz()

{
	cout << "\n\t\t\t\t\t Project done by :\n\n\n\t\t\t\t\tSarthak Sharma |  XI 'B' | 24 | \n\t\t\t\t\tAbhijit Sethi  |  XI 'B' | 2  | \n\t\t\t\t\tAryan Malothra |  XI 'B' |\n\n";
	//cout
}

void htp()
{

	cout << "\t\t\t\t\t HOW TO PLAY HAND CRICKET ???\n";
	cout << " \n\n\n\tSTEP 1 : How to start the game .\n\nSo we just need 2 players for this: you and someone else.\nOne of you should ask \"Odd or Even ? \" and the other should reply with either one of the choices. \nOdd means an odd number whereas Even means an even number.\nLet's say that your friend chose odd.\nThen you get even, and vice versa. \nAfter this, move on to the next step.";
	cout << " \n\n\n\tSTEP 2 : The toss .\n\n\nSo your friend is odd and you're even. \nNow, you need to \"throw\" your hands (like you do in rock paper scissors) with any finger(s) extended. \nBoth of you should do this at the same time (just like rock paper scissors). \nSo let's say that your friend threw a five and you threw a two. \nFive+two=7 which is an odd number. \nSo, your friend won the toss since he chose odd. \nSame thing goes if he chose even and the sum of the two numbers are even. \nI hope you get it.";
	cout << " \n\n\n\tStep 3 : Numbers .\n\n\nThe most inportant part. Name says it all. So here is how you should represent each number\nFor 1, just throw your hand with ONLY your index finger extended, and the others clenched into a fist.\nFor 2, just throw 'scissors'.\nFor 3, just extend your middle, ring and little fingers.\nFor 4, just add your index finger to the three.\nFor 5, throw 'paper'.\nFor 6, throw a clenched fist with your thumb extended.\nAnd finally, for 'stok' (it is how the move is called, you will learn about it later on), just throw a clenched fist.\nThat is all";
	cout << " \n\n\n\tSTEP 4 : Bat or Bowl ? \n\n\nSo since your friend won the toss, ask him \"bat or bowl\". \nShould he respond with \"bat\", you bowl and should he respond with \"bowl\" you bat.";
	cout << " \n\n\n\tSTEP 5 : Batting .\n\n\nLet's say he won the toss and chose to bowl. \nYou are now batting. \nAnd don't worry, I'm not gonna ask you to hold your hand like a bat and hit your friend like hitting a ball. \nBatting is pretty simple. \nIt is just like the \"toss\" section,but this time, you get runs. \nSo you and your friend just throw your hands at the same time like playing rock paper scissors, \nand you should throw a number and he should also throw a number. \nLet's say he threw a 6 and you threw a 4, then you get 4 runs(the number of the bowler is just simply \"let go\" for now).\nAnd if you throw a \"stok\" and he throws a 5, you get his run (meaning you get 5 runs). \nGet it? It's thaaaat simple.";
	cout << " \n\n\n\tSTEP 6 : Wickets .\n\n\nNow you can't just simply keep scoring runs, then the game will be infinite (unless your friends slaps you out of boredom). \nThis is basically like Temple Run. You just keep running. \nBut you have to add the Ape. \nLet's say that you scored about 23 runs. \nYou want to score a 6. \nSo you throw a 6-but unfortunately, your friend also threw a 6. \nAnd boom, you're out.\nNow the bowler gets to bat and you get to bowl, and the batter's target is the previous score+1\nso in this case, 24 (23+1).\nAnd if he scored about 20 and he thinks of placing a 2 and you also place a 2, \nthen he is out and you win the match!\nNow you can just start all over by asking \"Odd or even\".\n\n\n\n";
}

void hcg()
{
	int z, f;
	int choice;
	char a;
	do {
		choice = Start_screen();
		switch (choice)
		{
		case 1:
		{
			z = toss();
			switch (z)
			{
			case 1:
				result(f = 0);
				break;
			case 4:
				result(f = 0);
				break;
			case 3:
				result(f = 1);
				break;
			case 2:
				result(f = 1);
				break;
			}
			//	Sleep(1500);
			break;
		}
		case 2:
		{
			_2p();
			break;
		}
		case 3:
		{
			htp();
			break;
		}
		case 4:
		{
			credz();
			break;
		}
		}

		cout << "\n			Do you want to continue ?(y/n)\n			";
		cin >> a;
		clrscr();
		a = tolower(a);

	} while (a == 'y' || a == '1');
	_getch();
}


//-------------------------------------------X-------------------------------------------------------------------------------------------------------------------
//-------------------------------------------X-------------------------------------------------------------------------------------------------------------------


void scorepredicrtor()
{
	char sub[15];
	int m;
	int tot = 0;
	cin.ignore();
	cout << "Enter Subject to calculate predicted score for : ";
	gets_s(sub);
	for (int i = 1; i <= 4; ++i)
	{
	c1:		if (i == 1)
		cout << "Enter marks for unit test :(on 30 )  ";
		c2:		if (i == 2)
			cout << "Enter marks for preterm :(on 70 )  ";
			c3:		if (i == 3)
				cout << "Enter marks for Mid Tern :(on 70 )  ";

				c4:		if (i == 4)
					cout << "Enter marks for preboard :( on 70 ) ";

						cin >> m;

						/*if (i == 1 && (int)m > 30)
						{
						cout << "Invalid , Please Enter Again ! \n\n";
						goto c1;
						}
						else if (i == 2 && (int)m > 70)
						{
						cout << "Invalid , Please Enter Again ! \n\n";

						goto c2;
						}
						else if (i == 3 && (int)m > 70)
						{
						cout << "Invalid , Please Enter Again ! \n\n";

						goto c3;
						}
						else if (i == 4 && (int)m > 70)
						{
						cout << "Invalid , Please Enter Again ! \n\n";

						goto c4;
						}*/
						tot += m;
	}
	float avg;
	avg = (tot * 100 / 240);
	if ((avg + 3) > 100)
	{
		cout << "\nIf all goes well , you should get between " << (avg - 3) << " to " << "100" << " percentage in " << sub;
	}
	else
	{
		cout << "\nIf all goes well , you should get between " << (avg - 3) << " to " << avg + 3 << " percentage in " << sub;
	}
	cout << "\n\nBut keep in mind , it is only your projected score , Hard work always pays off and you can achieve 100% if u work hard \n";
}


void Update()
{
	int scr[5] = { 0 }, f = 0;
	fstream f1;
	Student ob;
	char st[30], usr[30], pass[30], name[30];
	f1.open("Details.dat", ios::binary | ios::in | ios::out);
	int ch;
	int choice;
	cout << "\nWhat would you like to update?";
	cout << "\n1.Username\n2.Password\n3.Name(If any correction required)\n";
	cin >> ch;
	while (1)
	{
	start:

		if (f1.eof() == 0)
		{
			int p = f1.tellg(); //Store start pos of object
			f1.read((char*)&ob, sizeof(ob));

			if (ch == 1)
			{
				system("cls");
				cin.ignore();
				cout << "\nEnter Current Username : ";
				gets_s(usr);
				if (_strcmpi((ob.getuser()), usr) == 0)
				{
					cout << "\nEnter New User Name : ";
					gets_s(st);
					ob.username_change(st);
					cout << "\nName Successfully Updated";
					f = 1;
					int m = sizeof(ob);
					f1.seekg(-m, ios::cur);
					f1.write((char*)&ob, sizeof(ob));
				}
				if (f == 1)
					break;
				else
					goto start;
			}
			else if (ch == 2)
			{
				cin.ignore();
				cout << "\nEnter Existing Password : ";

				gets_s(st);
				if (!strcmp((ob.getpass()), st))
				{
					cout << "\nEnter New Password : ";
					gets_s(pass);
					ob.password_change(pass);
					cout << "\nPassword Successfully Updated";
					f = 1;
					int m = sizeof(ob);
					f1.seekg(-m, ios::cur);
					f1.write((char*)&ob, sizeof(ob));
				}
				if (f == 1)
					break;
				else
					continue;
			}
			else if (ch == 3)
			{
				cout << "\nEnter Existing Name(If any error) : ";
				gets_s(st);
				if (!strcmp((ob.getname()), st))
					cout << "\nEnter Name : ";
				gets_s(name);
				ob.name_change(name);
				cout << "\nYour Name has been Successfully Updated";
				f = 1;
				int m = sizeof(ob);
				f1.seekg(-m, ios::cur);
				f1.write((char*)&ob, sizeof(ob));
			}
			if (f == 1)
				break;
			else
				continue;
		}
		else
			break;
	}
	f1.close();

}
/*
void update1()
{
int scr[5] = { 0 }, f = 0;
fstream f1;
Student ob;
char st[30], usr[30], pass[30], name[30];
f1.open("Details.dat", ios::binary | ios::in | ios::app);
int ch;
int choice;
cout << "\nWhat would you like to update?";
cout << "\n1.Username\n2.Password\n3.Name(If any correction required)\n";
cin >> ch;
switch (ch)
{
case 1:
system("cls");
cin.ignore();
cout << "\nEnter Current Username : ";
gets_s(usr);
break;
case 2:
system("cls");
cin.ignore();
cout << "\nEnter Existing Password : ";
gets_s(st);
break;
case 3:
system("cls");
cin.ignore();
cout << "\nEnter Existing Name(If any error) : ";
gets_s(st);
}

while (1)
{
start:		f1.read((char*)&ob, sizeof(ob));
switch (ch)
{
case 1:
if (strcmp(ob.getuser(), usr) == 0)
{
ob.username_change(usr);
int m = sizeof(ob);
f1.seekg(-m, ios::cur);
f1.write((char*)&ob, sizeof(ob));
f = 1;
}
else
goto start;
break;
}
if (f == 1)
break;
}
_getch();

}*/
/*
void swap(int *xp, int *yp)
{
int temp = *xp;
*xp = *yp;
*yp = temp;
}*/
void career()
{
	//int a = 0, b = 0, c = 0, d = 0, e = 0, f = 0, g = 0, h = 0, i = 0, j = 0, k = 0, l = 0, m = 0, n = 0, o = 0, p = 0, q = 0, r = 0;
	int val[30] = { 0 };

	cout << " Choose any one of the following , based on which we will decide your carrer :\n\n -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  -  - \n\n ";

	cout << "\n\n1  -  Operate a printing press\n2  -  Study the causes of earthquake\n3 - Plant and harvest crops\n4  -  Replace a car window and fender\n5  -  Analyse reports and records\n6  -  Operate a machine\n7  -  Work in an office\n8 - Answer customer requests\n\n";
	int ch;
	cin >> ch;
	switch (ch)
	{
	case 1:val[0]++; break;
	case 2:val[1]++; break;
	case 3:val[2]++; break;
	case 4:val[17]++; break;
	case 5:val[4]++; break;
	case 6:val[5]++; break;
	case 7:val[6]++; break;
	case 8:val[7]++; break;

	}

	cout << "1  -  Write reports\n2  -  help former prison inmates find work\n3  -  Design a freeway\n4  -  Plan educational lessons\n5  -  Balance a check book\n6  -  Take an X - ray\n7  -  Write computer programme\n8  -  Train animals \n\n";
	cin >> ch;
	switch (ch)
	{
	case 1:val[3]++; break;
	case 2:val[9]++; break;
	case 3:val[11]++; break;
	case 4:val[12]++; break;
	case 5:val[13]++; break;
	case 6:val[14]++; break;
	case 7:val[15]++; break;
	case 8:val[16]++; break;

	}

	cout << "1  -  Be in charge of replanting forests\n2  -  Act in a TV show or movie\n3  -  Solve burglary\n4  -  Check products of quality\n5  -  Build an airport\n6  -  Keep company business record\n7  -  Put together small tools\n8  -  Design a website\n\n";
	cin >> ch;
	switch (ch)
	{
	case 1:val[2]++; break;
	case 2:val[0]++; break;
	case 3:val[3]++; break;
	case 4:val[5]++; break;
	case 5:val[4]++; break;
	case 6:val[6]++; break;
	case 7:val[5]++; break;
	case 8:val[15]++; break;

	}

	cout << "1  -  Tutor students\n2  -  Work at a zoo\n3  -  Take care of children\n4  -  Plan special diet\n5  -  Choreograph a dance\n6  -  Lobby or show support to a cause\n7  -  Sell clothes\n8  -  Work with your hands\n\n";
	cin >> ch;
	switch (ch)
	{
	case 1:val[2]++; break;
	case 2:val[0]++; break;
	case 3:val[3]++; break;
	case 4:val[5]++; break;
	case 5:val[4]++; break;
	case 6:val[6]++; break;
	case 7:val[5]++; break;
	case 8:val[15]++; break;

	}

	cout << "1  -  Work at an amusement park\n2  -  Sell insurance\n3  -  Learn about ethnic groups\n4  -  Manage an information system\n5  -  Appraise the value of a house\n6  -  File books at the library\n7  -  Make three dimensional items\n8  -  Analyse hand writing\n\n";
	cin >> ch;
	switch (ch)
	{
	case 1:val[8]++; break;
	case 2:val[13]++; break;
	case 3:val[8]++; break;
	case 4:val[15]++; break;
	case 5:val[13]++; break;
	case 6:val[12]++; break;
	case 7:val[4]++; break;
	case 8:val[3]++; break;

	}

	cout << "1  -  Design indoor sprinkler system\n2  -  Run a factory sewing machine\n3  -  Develop Personal Policies\n4  -  Train racehorses\n5  -  Guard an office building\n6  -  Run a departmental store\n7  -  Write for a newspaper\n8  -  Use a calculator\n\n";

	cin >> ch;
	switch (ch)
	{
	case 1:val[1]++; break;
	case 2:val[5]++; break;
	case 3:val[6]++; break;
	case 4:val[16]++; break;
	case 5:val[3]++; break;
	case 6:val[7]++; break;
	case 7:val[0]++; break;
	case 8:val[6]++; break;

	}

	cout << "1  -  Help people at a mental health clinic\n2  -  Remodel old house\n3  -  Care for young children\n4  -  Locate a missing person\n5  -  Plan estate disbursements/payments\n6  -  Enter data\n7  -  Design a book cover\n8  -  Build toys with written instructions\n\n";
	cin >> ch;
	switch (ch)
	{
	case 1:val[14]++; break;
	case 2:val[11]++; break;
	case 3:val[12]++; break;
	case 4:val[3]++; break;
	case 5:val[13]++; break;
	case 6:val[15]++; break;
	case 7:val[0]++; break;
	case 8:val[4]++; break;

	}

	cout << "\n1  -  Figure out why someone is sick\n2  -  Fly an airplane\n3  -  Learn how things grow\n4  -  Sell Cars\n5  -  Work as a restaurant host\n6  -  Fight fire\n7  -  Keep payroll records for a company\n8  -  Work in a nursing home\n\n";
	cin >> ch;
	switch (ch)
	{
	case 1:val[1]++; break;
	case 2:val[17]++; break;
	case 3:val[2]++; break;
	case 4:val[7]++; break;
	case 5:val[8]++; break;
	case 6:val[3]++; break;
	case 7:val[6]++; break;
	case 8:val[9]++; break;

	}
	cout << "\n1.Hire New staff\n2.Run ventilators\n3.Drive a taxi\n4.Broadcast the news\n5.Audit taxes for the government\n6.Sort and date dinosaur bones\n7.Give shots\n8.Design landscaping\n\n";
	cin >> ch;
	switch (ch)
	{
	case 1:val[6]++; break;
	case 2:val[14]++; break;
	case 3:val[17]++; break;
	case 4:val[0]++; break;
	case 5:val[10]++; break;
	case 6:val[1]++; break;
	case 7:val[14]++; break;
	case 8:val[2]++; break;
	}
	cout << "\n1 - Give tech support to computer users\n2 - Work in a courtroom\n3 - Care for injured animals\n4 - Serve meals to customer\n5 - Build kitchen cabinets\n6 - Refine a mortgage\n7 - Sing in a concert\n8 - Direct the take - off / landing of planes\n\n";
	cin >> ch;
	switch (ch)
	{
	case 1:val[15]++; break;
	case 2:val[3]++; break;
	case 3:val[16]++; break;
	case 4:val[8]++; break;
	case 5:val[11]++; break;
	case 6:val[12]++; break;
	case 7:val[0]++; break;
	case 8:val[17]++; break;
	}
	cout << "1 - Operate a cash register\n2 - Collect rocks\n3 - Start a business\n4 - Draft a blueprint\n5 - Assess student progress\n6 - Design a plane\n7 - Wrap a sprained ankle\n8 - Guide an international tour group\n\n";
	cin >> ch;
	switch (ch)
	{
	case 1:val[6]++; break;
	case 2:val[1]++; break;
	case 3:val[6]++; break;
	case 4:val[11]++; break;
	case 5:val[12]++; break;
	case 6:val[11]++; break;
	case 7:val[14]++; break;
	case 8:val[8]++; break;
	}
	cout << "\n1 - Solve technical problems\n2 - provide spiritual guidance to others\n3 - Manage a veterinary clinic \n4 - Lead others\n5 - Operate heavy equipment\n6 - Manage a fish hatchery\n7 - Assemble cars\n8 - Protect our boarders\n\n";
	cin >> ch;
	switch (ch)
	{
	case 1:val[15]++; break;
	case 2:val[9]++; break;
	case 3:val[16]++; break;
	case 4:val[10]++; break;
	case 5:val[4]++; break;
	case 6:val[16]++; break;
	case 7:val[5]++; break;
	case 8:val[10]++; break;
	}

	cout << "\n1 - Play an instrument\n2 - Plan activities for adult day care\n3 - Research soybean use in paint\n4 - Provide consumer information\n5 - Guard money in an armoured car\n6 - Study human behavior\n7 - Fix a television set\n8  -  Run a school\n\n";
	cin >> ch;
	switch (ch)
	{
	case 1:val[0]++; break;
	case 2:val[9]++; break;
	case 3:val[2]++; break;
	case 4:val[9]++; break;
	case 5:val[3]++; break;
	case 6:val[1]++; break;
	case 7:val[4]++; break;
	case 8:val[12]++; break;
	}
	cout << "\n1  -  Fix a control panel  \n2 -  - Help a friend with personal problems\n3  -  Oversee a logging crew\n4  -  Study weather conditions\n5  -  Pack boxes at a warehouse\n6  -  Teach dancing\n7  -  Sterilize surgical instruments\n8  -  Study soil conditions\n\n";
	cin >> ch;
	switch (ch)
	{
	case 1:val[5]++; break;
	case 2:val[9]++; break;
	case 3:val[2]++; break;
	case 4:val[1]++; break;
	case 5:val[17]++; break;
	case 6:val[0]++; break;
	case 7:val[14]++; break;
	case 8:val[1]++; break;
	}
	cout << "\n1  -  Play the stock market\n2  -  Protect the environment\n3  -  grade paper\n4  -  operate a train\n5  -  order building supplier\n6  -  paint motors\n7  -  develop new computer games\n8  -  buy merchandise for a store\n\n";
	cin >> ch;
	switch (ch)
	{
	case 1:val[13]++; break;
	case 2:val[2]++; break;
	case 3:val[12]++; break;
	case 4:val[17]++; break;
	case 5:val[11]++; break;
	case 6:val[4]++; break;
	case 7:val[15]++; break;
	case 8:val[7]++; break;
	}
	cout << "1  - Work to get someone elected\n2  -  Identify plants in forest\n3  -  Guard inmates in prison\n4  -  blueprints\n5  -  line  -  up concerts for a band\n6  -  Ask people to survey questions\n7  -  Manage a factory\n8  -  Work as a nurse in a hospital\n\n";
	cin >> ch;
	switch (ch)
	{
	case 1:val[10]++; break;
	case 2:val[2]++; break;
	case 3:val[3]++; break;
	case 4:val[11]++; break;
	case 5:val[7]++; break;
	case 6:val[10]++; break;
	case 7:val[4]++; break;
	case 8:val[14]++; break;
	}
	cout << " 1  -  Paint a portrait\n2  -  Testify before congress\n3  -  Work with a microscope\n4  -  Schedule tea times at golf courses\n5  -  Classify plants\n6  -  Transcribe medical records\n7  -  Install rivets\n8  -  Raise worms\n\n";
	cin >> ch;
	switch (ch)
	{
	case 1:val[0]++; break;
	case 2:val[10]++; break;
	case 3:val[1]++; break;
	case 4:val[8]++; break;
	case 5:val[2]++; break;
	case 6:val[14]++; break;
	case 7:val[5]++; break;
	case 8:val[16]++; break;
	}
	cout << " 1  -  Balance accounts\n2  -  Develop learning games\n3  -  Read to sick people\n4  -  Repair computers\n5  -  Compare sizes and shapes of objects\n6  -  Fish\n7  -  Repair bicycle\n8  -  Deliver mails\n\n";
	cin >> ch;
	switch (ch)
	{
	case 1:val[13]++; break;
	case 2:val[12]++; break;
	case 3:val[9]++; break;
	case 4:val[15]++; break;
	case 5:val[5]++; break;
	case 6:val[16]++; break;
	case 7:val[17]++; break;
	case 8:val[10]++; break;
	}
	cout << "1  -  Teach special education\n2  -  Set up a tracking system\n3  -  Manage store\n4  -  Advertise goods and services\n5  -  Distribute supplies to dentist\n6  -  Compete I sports events\n7  -  Check guests into a hotel\n8  -  Teach adults to read\n\n";
	cin >> ch;
	switch (ch)
	{
	case 1:val[12]++; break;
	case 2:val[15]++; break;
	case 3:val[6]++; break;
	case 4:val[7]++; break;
	case 5:val[17]++; break;
	case 6:val[8]++; break;
	case 7:val[8]++; break;
	case 8:val[12]++; break;
	}
	cout << "1  -  Follow step by step instructions\n2  -  Collect past due bills\n3  -  Inspect cargo containers\n4  -  Work in a cannery\n5  -  Coach a school sports team\n6  -  Update a website\n7  -  Hunt\n8  -  Enlist in a branch of the military\n\n";
	cin >> ch;
	switch (ch)
	{
	case 1:val[11]++; break;
	case 2:val[13]++; break;
	case 3:val[17]++; break;
	case 4:val[5]++; break;
	case 5:val[8]++; break;
	case 6:val[15]++; break;
	case 7:val[16]++; break;
	case 8:val[10]++; break;
	}

	cout << "1  -  Sell sporting goods\n2  -  Cut and style hair\n3  -  Experiment to find new metals\n4  -  Work in a bank work\n5  -  Work with computer programs\n6  -  Loan money\n7  -  Hang wallpaper\n8  -  Make an arrest\n\n";
	cin >> ch;
	switch (ch)
	{
	case 1:val[7]++; break;
	case 2:val[9]++; break;
	case 3:val[1]++; break;
	case 4:val[13]++; break;
	case 5:val[6]++; break;
	case 6:val[13]++; break;
	case 7:val[11]++; break;
	case 8:val[3]++; break;
	}
	cout << "1  -  Deliver babies\n2  -  Persuade people to buy something\n3  -  Stock shelves\n4  -  Serve concessions stand drinks\n\n";
	cin >> ch;
	switch (ch)
	{
	case 1:val[14]++; break;
	case 2:val[7]++; break;
	case 3:val[7]++; break;
	case 4:val[8]++; break;
	}

	int in;
	int max;

	for (int j = 0; j < 20; ++j)
	{
		cout << val[j] << ' ';
	}

	int j;



	int a[2];
	a[0] = val[0]; a[1] = 0;
	for (int i = 1; i < 18; ++i)
	{
		if (val[i] > a[0])
		{
			a[0] = val[i];
			a[1] = i;
		}
	}

	max = a[1];
	//cout << endl << max << endl;

	cout << "\n\n----------------------------------------------------------------------\n\n";

	switch (max)
	{
	case 0:
		cout << "\nArts, A/V technology and communication will be the most appropriate field of work for you \n";
		cout << "\nCareer: \n\nActor\nArt Director\nBroadcast Technician\nCamera Operator\nComposer and Music Arranger\nFilm and Video Editor\nCartographer\nNews Reporter\nPhotographer\nProducer and Director\nSet and Exhibit Designer\nTechnical Writer\nGraphic Designer\n";
		break;
	case 1:
		cout << "\nScience, technology, engineering and mathematics will be the most appropriate field of work for you \n";
		cout << "\nCareer: \nAerospace Engineer\n Biologist\n Chemist\n Electrical and Electronics Engineer\nGeographer\n Petroleum Engineer\n Mechanical Engineer\n Meteorologist\n Physicist\nSafety Engineer ";
		break;
	case 2:
		cout << "\nPlants and agriculture, natural resources will be the most appropriate field of work for you \n";
		cout << "\nCareer:  \nAgricultural Engineer\n Agricultural Scientist\n Animal Trainer\n Chef\n Conservation scientist\n Farm Equipment Mechanic\n Fish and Game Warden \n Forester\n Veterinarian\n Zoologist ";
		break;
	case 3:
		cout << "\nLaw, public safety, corrections and security will be the most appropriate field of work for you ";
		cout << "\n\nCareer:  \nCoroner\n Corrections Officer\n Court Clerk\n Detective and Investigator\n Firefighter\nJudge\n Lawyer\n Life Guard and Ski Patrolman\n Police Patrol Officer\n";
		break;
	case 4:
		cout << "\nMechanical manufacturing will be the most appropriate field of work for you ";
		cout << "\n\nCareer: \nChemical Engineer\nForklift Operator\nGas and Oil Plant Operator\nJeweller\nLocksmith\nMetal / Plastic Processing Worker\nOffice Machine Repairer\nPower Plant Operator\nShoe and Leather Worker\nWelder\n";
		break;
	case 5:
		cout << "\nIndustrial manufacturing will be the most appropriate field of work for you ";
		cout << "\n\nCareer: \nChemical Engineer\nForklift Operator\nGas and Oil Plant Operator\nJeweller\nLocksmith\nMetal / Plastic Processing Worker\nOffice Machine Repairer\nPower Plant Operator\nShoe and Leather Worker\nWelder\n";
		break;
	case 6:
		cout << "\nBusiness, management and administration will be the most appropriate field of work for you ";
		cout << "\n\nCareer: \nAccountant\n Advertising Manager\n Computer Operator\n Court Reporter\n Management Analyst\n Meeting and Convention Planner\n Payroll Clerk\n Property and Real Estate Manager\n Shipping and Receiving Clerk\n Statistician\n";
		break;
	case 7:
		cout << "\nMarketing, sales and services will be the most appropriate field of work for you ";
		cout << "\n\nCareer:  \nAdvertising Salesperson\n Buyer and Purchasing Agent\n Customer Service Representative\nFloral Designer\n Market Research Analyst\n Public Relations Specialist\n Real Estate Agent\n Sales Manager\n Telemarketer\n";
		break;
	case 8:
		cout << "\nHospitality and tourism  will be the most appropriate field of work for you ";
		cout << "\n\nCareer : \nBaggage Porter and Bellhop\n Chef and Dinner Cook\n Food Service Worker\n Hotel Manager\n Janitor/Housekeeper Supervisor\n Reservation and Ticket Agent\n Restaurant Manager\n Tour Guide\n Travel Agent\n Umpire and Referee\n";
		break;
	case 9:
		cout << "\nHuman services  will be the most appropriate field of work for you ";
		cout << "\n\nCareer :  \nChild Care Worker\n Clergy\n Cosmetologist\n Counsellor\n Funeral Director\n Manicurist\n Professional Makeup Artist\n Financial Adviser\n Psychologist\n Residential counsellor\nSocial Worker";
		break;
	case 10:
		cout << "\nGovernment and public administration will be the most appropriate field of work for you ";
		cout << "\n\nCareer : \nCity Planning Aide \n Construction/Building Inspector\n Interpreter and Translator\n License Clerk\n Occupational Health Specialist\n Tax Examiner\n";
		break;
	case 11:
		cout << "\nArchitecture, design and construction will be the most appropriate field of work for you ";
		cout << "\n\nCareer :  \nArchitect\n Cabinetmaker\n Carpenter\n Construction Manager\n Electrician\nCivil Engineer\n General Construction Worker\n Highway Maintenance Worker\n Interior Designer\n Sheet Metal Worker\n Surveying and Mapping Technician \n";
		break;
	case 12:
		cout << "\nEducation and training finance will be the most appropriate field of work for you";
		cout << "\n\nCareer :  \nAudio/Visual Specialist\n Coach and Sports Instructor\n College/University Administrator\n Teacher/Professor\nLibrarian\n Public Health Educator\n Special Education Teacher Speech\n Pathologist\n";
		break;
	case 13:
		cout << "\nFinance, Banking, Investments and Insurance will be the most appropriate field of work for you";
		cout << "\n\nCareer : \nAccounting Clerk\n Appraiser\n Credit Analyst\n Credit Checker\n Economist\n Financial Counsellor\n Insurance Adjuster and Examiner\n Insurance Agent\n Loan Officer\n Tax Preparer \n";
		break;
	case 14:
		cout << "\nHealth Sciences, Care and Prevention will be the most appropriate field of your work for you ";
		cout << "\n\nCarrer : \nAnesthesiologist\nAthletic\nTrainer\nChiropracton\nDentist\nEmergency\nMedical Technician \nPhysical Therapist\nOccupational Therapist\nPharmacist\nPhysician\nRegistered Nurse";
		break;
	case 15:
		cout << "\nInformation Technology (IT) will be the most appropriate field of your work for you ";
		cout << "\n\nCarrer : \nComputer/Information Systems Manager\n Computer Engineer\n Computer Programmer\n Computer Security Specialist Computer Support Specialist\n Computer Systems Analyst \nData Communications Analyst \nIT Mechanic";
		break;
	case 16:
		cout << "\nAnimals, Agriculture and Natural Resources will be the most appropriate field of your work for you ";
		cout << "\n\nCarrer : \nAgricultural Engineer \nAgricultural Scientist\n Animal Trainer\n Chef\n Conservation Scientist\n Farm Equipment Mechanic\n Fish and Game Warden \nForester\n Veterinarian\n Zoologist";
		break;
	case 17:
		cout << "\nTransportation, Distribution and Logistics will be the most appropriate field of your work for you ";
		cout << "\n\nCarrer : \nAir Traffic Controller \nAirplane Pilot \nAutomobile Mechanic \nFlight Attendant\n Motorboat Mechanic\n School Bus Driver\n Subway and Streetcar Operator\n Traffic Technician \nTransportation Agent";
		break;
	}
}


void homescreen()
{
	int scr[5] = { 0 }, f = 0;
	fstream f1;
	Student ob;
	char st[30], usr[30], pass[30], name[30];
	f1.open("Details.dat", ios::binary | ios::in | ios::app);
	int ch;
	int choice;
start:	clrscr();
	cout << "----------------------------------------------------------------------------\n----------------------------------------------------------------------------";
	cout << "\n\t\tWelcome to MulitRecords™ \n\n";
	cout << "\t1.Score Predictor\n\t2.Hand Cricket Game\n\t3.Career Guider\n\t4.Sign Out";
	cout << "\n\nEnter your choice(1 - 4)\n";
	cout << "----------------------------------------------------------------------------\n----------------------------------------------------------------------------";

	cout << "\n\n\t---> ";
	cin >> choice;
	/*if (isalpha(choice))
	{
		goto start;
	}*/
	switch (choice)
	{
	case 1:
		scorepredicrtor();
		break;
	case 2:
		hcg();
		break;
	case 21:
		Update();
		break;
	case 3:
		career();
		break;
	case 4:
		break;
	default:
		system("cls");
		cout << "\nEnter a valid choice";
		goto start;
	}
}


void signup()
{
	fstream f1;
	Student ob;
	ob.input();
	f1.open("Details.Dat", ios::binary | ios::app);
	f1.write((char*)&ob, sizeof(ob));
	f1.close();
}

void login()
{

	int f = 0;
	fstream f1;
	f1.open("Details.Dat", ios::binary | ios::in);
	Student ob;
	cin.ignore();
	cout << "Enter Username : ";
	char usr[30];
	char pass[30];
	gets_s(usr);
	cout << "Enter Password : ";
	char ch;
	gets_s(pass);
	/*for (int i = 0; ch = '\n'; ++i)
	{
	ch = _getch();
	if (ch = '\n')
	break;
	else
	{
	pass[i] = ch;
	cout << '*';
	}

	}*/
	while (f1.read((char*)&ob, sizeof(ob)))
	{
		if (!_strcmpi(ob.getuser(), usr))
			if (!strcmp(ob.getpass(), pass))
				f = 1;
			else
				f = 0;
	}


	if (f == 1)
	{
		cout << "\nWelcome " << ob.getname();
		homescreen();
	}
	else
		cout << "\nUsername or password incorrect \n";
	_getch();
}

void main()
{

_1:	system("CLS");
	cout << "----------------------------------------------------------------------------\n----------------------------------------------------------------------------";
	cout << "\n\n\t\tWelcome to MultiRecords \n\n";
	cout << " 1.) SignUP\n 2.) Login\n 3.) Exit\n\n";
	cout << "----------------------------------------------------------------------------\n----------------------------------------------------------------------------\n\n\t--> ";
	char inp;
	inp = _getch();
	cout << inp;
	/*cout << inp;
	_getch();*/
	switch (inp)
	{
	case 49:signup();
		cout << "Successfully singned up ! ";
		_getch();
		goto _1;
	case 50: login();
		break;
	case 51: exit(0);
	default:
		goto _1;

	}
	goto _1;
}
