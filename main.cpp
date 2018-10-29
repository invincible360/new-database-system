#include <iostream>
#include <windows.h>
#include <cstdlib>
#include <string>
#include <conio.h>
#include <fstream>
using namespace std;
string choice;
///class.................
class student
{
private:
	int r;
	char name[30];
	float p;
	char ch;
	int admn;
	char mob[15];
	char address[50];
	char dob[15];
public:
	void din();
	void pro();
	void dout();
	char g;
	int getrno()
	{
		return r;
	}
};
void student::din()
///input..................
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
	 PlaySoundA(("C:\\Users\\Rajdeep\\Music\\name.wav"), NULL, SND_FILENAME);
	cout << "ENTER YOUR NAME:" << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	cin.get(ch);
	gets(name);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
     PlaySoundA(("C:\\Users\\Rajdeep\\Music\\date.wav"), NULL, SND_FILENAME);
	cout << "ENTER THE DATE OF BIRTH:" << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	cin.get(ch);
	gets(dob);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
	PlaySoundA(("C:\\Users\\Rajdeep\\Music\\roll no.wav"), NULL, SND_FILENAME);
	cout << " ENTER YOUR ROLL NO." << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	cin >> r;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	PlaySoundA(("C:\\Users\\Rajdeep\\Music\\admission.wav"), NULL, SND_FILENAME);
	cout << "ENTER YOUR ADMISSION NO." << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	cin >> admn;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
	PlaySoundA(("C:\\Users\\Rajdeep\\Music\\mobile.wav"), NULL, SND_ASYNC);
	cout << "ENTER YOUR MOBILE NO." << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	cin.get(ch);
	gets(mob);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
	PlaySoundA(("C:\\Users\\Rajdeep\\Music\\address.wav"), NULL, SND_ASYNC);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
	cout << "ENTER YOUR ADDRESS:" << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	cin.get(ch);
	gets(address);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
	PlaySoundA(("C:\\Users\\Rajdeep\\Music\\percentage.wav"), NULL, SND_ASYNC);
	cout << "ENTER YOUR PERCENTAGE:" << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	cin >> p;
}
void student::pro()
///processing..............
{

	if (p >= 90)
		g = 'A';
	else if ((p <= 90) && (p>85))
		g = 'B';
	else if ((p <= 85) && (p>70))
		g = 'C';
	else if ((p <= 70) && (p>55))
		g = 'D';
	else if ((p <= 55) && (p>40))
		g = 'E';
	else
		g = 'F';
}
void student::dout()
///output....................
{
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 142);
	cout << "*************************************************************************" << endl;
	cout << "||||                                                                 ||||" << endl;
	cout << "||||                            RESULT                               ||||" << endl;
	cout << "||||                                                                 ||||" << endl;
	cout << "*************************************************************************" << endl << endl;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
	cout << "                               NAME :";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	puts(name);
	cout << endl << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
	cout << "                               ROLL NO. :";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	cout << r;
	cout << endl << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
	cout << "                                GRADE :";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	cout << g << endl << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
	cout << "                                DATE OF BIRTH :";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	puts(dob);
	cout << endl << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
	cout << "                                ADMISSION NO. :";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	cout << admn << endl << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
	cout << "                                MOBILE NO. :";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	puts(mob);
	cout << endl << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
	cout << "                                ADDRESS :";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	puts(address);
	cout << endl << endl;
	getch();
	system("cls");
}
void menudisp()
///display..................
{
	cout << endl << endl << endl;
	cout << "                           ";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 128);

	for (int i = 0; i<57; i++)
	{
		cout << static_cast <unsigned char> (127);
	}
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);

	cout << endl;
	cout << "                           ";
	cout << static_cast <unsigned char> (186);
	cout << "                                   ";
	cout << "                    ";
	cout << static_cast <unsigned char> (186);
	cout << endl;
	cout << "                           ";
	cout << static_cast <unsigned char> (186);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
	cout << "                         Menu      ";
	cout << "                    ";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	cout << static_cast <unsigned char> (186);
	cout << endl;
	cout << "                           ";
	cout << static_cast <unsigned char> (186);
	cout << "                                   ";
	cout << "                    ";
	cout << static_cast <unsigned char> (186);
	cout << endl;
	cout << "                           ";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 128);
	for (int i = 0; i<57; i++)
	{
		cout << static_cast <unsigned char> (127);
	}
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);

	cout << endl;
	///****************************************************
	cout << "                           ";
	cout << static_cast <unsigned char> (186);
	cout << "                              ";
	cout << "                         ";
	cout << static_cast <unsigned char> (186);
	cout << "                           ";
	cout << endl;
	cout << "                           ";
	cout << static_cast <unsigned char> (186);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
	cout << "                       1.Input";
	cout << "                         ";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	cout << static_cast <unsigned char> (186);
	cout << "                           ";
	cout << endl;
	cout << "                           ";
	cout << static_cast <unsigned char> (186);
	cout << "                              ";
	cout << "                         ";
	cout << static_cast <unsigned char> (186);
	cout << "                           ";
	cout << endl;
	///***************************************************
	cout << "                           ";
	cout << static_cast <unsigned char> (186);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6);
	cout << "                       2.Delete";
	cout << "                        ";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	cout << static_cast <unsigned char> (186);
	cout << endl;
	cout << "                           ";
	cout << static_cast <unsigned char> (186);
	cout << "                               ";
	cout << "                        ";
	cout << static_cast <unsigned char> (186);
	cout << endl;
	///*********************************************
	cout << "                           ";
	cout << static_cast <unsigned char> (186);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
	cout << "                       3.Modify";
	cout << "                        ";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	cout << static_cast <unsigned char> (186);
	cout << endl ;
	cout << "                           ";
	cout << static_cast <unsigned char> (186);
	cout << "                               ";
	cout << "                        ";
	cout << static_cast <unsigned char> (186);
	cout << endl;
	///************************************************
	cout << "                           ";
	cout << static_cast <unsigned char> (186);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
	cout << "                       4.Output";
	cout << "                        ";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	cout << static_cast <unsigned char> (186);
	cout << endl;
	cout << "                           ";
	cout << static_cast <unsigned char> (186);
	cout << "                               ";
	cout << "                        ";
	cout << static_cast <unsigned char> (186);
	cout << endl;
	///************************************************************
	cout << "                           ";
	cout << static_cast <unsigned char> (186);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
	cout << "                       5.Exit";
	cout << "                          ";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	cout << static_cast <unsigned char> (186);
	cout << endl;
	cout << "                           ";
	cout << static_cast <unsigned char> (186);
	cout << "                              ";
	cout << "                         ";
	cout << static_cast <unsigned char> (186);
	cout << "                           ";
	cout << endl;
	cout << "                           ";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 128);

	for (int j = 0; j<57; j++)
	{
		cout << static_cast < unsigned char> (127);
	}
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);

	cout << endl << endl << endl << endl << endl << endl;
}
void choose()
///menu choice................
{
	PlaySoundA(("C:\\Users\\Rajdeep\\Music\\menu.wav"), NULL, SND_ASYNC);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
	cout << "ENTER THE CHOICE YOU WANT:" << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	cin >> choice;
	cout << "ACCEPTING YOUR CHOICE ";
	for (int j = 1; j <= 10; j++)
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), j);
		cout << ".";
		Sleep(200);
	}
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	cout << endl;
}
void input()
{
	///input.................
	student s;
	ofstream o1;
	o1.open("student.dat", ios::binary | ios::out | ios::app);
	s.din();
	s.pro();
	o1.write((char*)&s, sizeof(s));
	o1.close();
}
void deletion()
{
	int z;
	///deletion..................
	student s;
	ifstream i1;
	ofstream o1;
	o1.open("temp.dat", ios::out | ios::binary);
	i1.open("student.dat", ios::in | ios::binary);
	if (!i1)
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
		cout << "File could not be opened !!"<<endl;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
		cout << "REDIRECTING TO MAIN MENU. "<<endl;
		for (int j = 1; j <= 6; j++)
		{
			cout << ".";
			Sleep(200);
		}
		cout << endl;
		system("cls");
		return;
	}
	cout << "ENTER THE ROLL NO. YOU WANT TO DELETE:" << endl;
	cin >> z;
	i1.read((char*)&s, sizeof(s));
	while (!i1.eof())
	{
		if (s.getrno() == z)
		{
			cout << "DELETING YOUR RECORD:";
			for (int j = 1; j <= 6; j++)
			{
				cout << ".";
				Sleep(200);
			}
			cout << endl;
		}
		else if (s.getrno() != z)
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
			cout << "ROLL NUMBER NOT FOUND:" << endl;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
		}
		else
			o1.write((char*)&s, sizeof(s));
		i1.read((char*)&s, sizeof(s));
	}
	o1.close();
	i1.close();
	remove("student.dat");
	rename("temp.dat", "student.dat");
}
void modify()
{
	int z;
	///modification.................
	student s;
	fstream f1;
	f1.open("student.dat",  ios::in | ios::out|ios::binary);
	if (!f1)
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
		cout << "File could not be opened !!"<<endl;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
		cout << "REDIRECTING TO MAIN MENU. "<<endl;
		for (int j = 1; j <= 6; j++)
		{
			cout << ".";
			Sleep(200);
		}
		cout << endl;
		system("cls");
		return;
	}
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
	cout << "ENTER THE ROLL NO. YOU WANT TO MODIFY:" << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	cin >> z;
	f1.read((char*)&s, sizeof(s));
	while (!f1.eof())
	{
		if (s.getrno()==z)
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
			cout << "ENTER THE NEW DETAILS OF STUDENT:" << endl;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
			s.din();
			s.pro();
			int pos = (-1 * static_cast<int>(sizeof(s)));
			f1.seekg(pos, ios::cur);
			f1.write((char*)&s, sizeof(s));
			f1.read((char*)&s, sizeof(s));
			break;
		}
		else if(s.getrno()!=z)
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
			cout << "ROLL NO. DOES NOT EXIST:" << endl;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
			break;
		}
	}
	cout << "WAIT MODIFYING:" << endl;
	for (int j=1; j<=130; j++)
    {
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 10);
    cout<< static_cast<char>(219);
    Sleep(10);
    SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
    }
    cout<<endl;

	f1.close();
}
void print()
{
	/// printing menu
	string o;
	cout<<endl<<endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout << "                           ";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 128);
	for (int i = 0; i<57; i++)
	{
		cout << static_cast <unsigned char> (127);
	}
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	cout << endl;
	cout << "                           ";
	cout << static_cast <unsigned char> (186);
	cout << "                                   ";
	cout << "                    ";
	cout << static_cast <unsigned char> (186);
	cout<<endl;
	cout << "                           ";
	cout << static_cast <unsigned char> (186);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
	cout << "                      Printing     ";
	cout << "                    ";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	cout << static_cast <unsigned char> (186);
	cout << endl;

	cout << "                           ";
	cout << static_cast <unsigned char> (186);
	cout << "                                   ";
	cout << "                    ";
	cout << static_cast <unsigned char> (186);
	cout<<endl;
	cout << "                           ";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 128);
	for (int i = 0; i<57; i++)
	{
		cout << static_cast <unsigned char> (127);
	}
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	cout << endl;
	cout << "                           ";
	cout << static_cast <unsigned char> (186);
	cout << "                                    ";
	cout << "                   ";
	cout << static_cast <unsigned char> (186);
	cout << "                           ";
	cout << endl;
	cout << "                           ";
	cout << static_cast <unsigned char> (186);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
	cout << "                     1.All Records";
	cout << "                     ";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	cout << static_cast <unsigned char> (186);
	cout << "                           ";
	cout << endl;
	cout << "                           ";
	cout << static_cast <unsigned char> (186);
	cout << "                                    ";
	cout << "                   ";
	cout << static_cast <unsigned char> (186);
	cout << "                           ";
	cout << endl;
	cout << "                           ";
	cout << static_cast <unsigned char> (186);
	cout << "                                        ";
	cout << "               ";
	cout << static_cast <unsigned char> (186);
	cout << endl;
	cout << "                           ";
	cout << static_cast <unsigned char> (186);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 6);
	cout << "                     2.Specific Record";
	cout << "                 ";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	cout << static_cast <unsigned char> (186);
	cout << endl;
	cout << "                           ";
	cout << static_cast <unsigned char> (186);
	cout << "                                        ";
	cout << "               ";
	cout << static_cast <unsigned char> (186);
	cout << endl;
	cout << "                           ";
	cout << static_cast <unsigned char> (186);
	cout << "                                        ";
	cout << "               ";
	cout << static_cast <unsigned char> (186);
	cout << endl;
	cout << "                           ";
	cout << static_cast <unsigned char> (186);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 13);
	cout << "                     3.SERIAL WISE";
	cout << "                     ";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	cout << static_cast <unsigned char> (186);
	cout << endl;
	cout << "                           ";
	cout << static_cast <unsigned char> (186);
	cout << "                                        ";
	cout << "               ";
	cout << static_cast <unsigned char> (186);
	cout << endl;

	cout << "                           ";
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 128);
	for (int j = 0; j<57; j++)
	{
		cout << static_cast < unsigned char> (127);
	}
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	cout << endl;
	cout << endl;
	cout << endl;
	///options menu......................
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
	cout << "ENTER YOUR OPTION FROM ABOVE MENU:" << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	cin >> o;
	system("cls");
	if (o == "first")
	{
		///printing all.................
		student s;
		ifstream i1;
		i1.open("student.dat", ios::binary | ios::out);
		if (!i1)
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
			cout << "File could not be open !!"<<endl;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
			return;
		}
		i1.read((char*)&s, sizeof(s));
		while (!i1.eof())
		{
			s.dout();
			i1.read((char*)&s, sizeof(s));
		}
		i1.close();
	}
	else if (o == "second")
	{
		///printing selected
		int a;
		student s;
		ifstream i1;
		i1.open("student.dat", ios::binary | ios::out);
		if (!i1)
		{
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
			cout << "File could not be opened !!"<<endl;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
			cout << "REDIRECTING TO MAIN MENU. "<<endl;
			for (int j = 1; j <= 6; j++)
			{
				cout << ".";
				Sleep(200);
			}
			cout << endl;
			system("cls");
			return;
		}
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
		cout << "ENTER THE ROLL NO YOU WANT TO PRINT:" << endl;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
		cin >> a;
		i1.read((char*)&s, sizeof(s));
		while (!i1.eof())
		{
			if (s.getrno() == a)
			{
				s.dout();
				return;
			}
			else
			{
                SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
			cout << "\n\n ROLL NUMBER DOES NOT EXIST:" << endl;
			SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
			break;
			}
		}
		i1.close();
	}
	else if (o == "third")
	{
      // student S;
       ifstream i1;
       i1.open("student.dat",ios::binary|ios::in);

       i1.close();
	}
	else
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
		cout << "YOU HAVE ENTERED A WRONG CHOICE:" << endl;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
		cout << "REDIRECTING TO MAIN MENU. "<<endl;
		for (int j = 1; j <= 6; j++)
		{
			cout << ".";
			Sleep(200);
		}
		cout << endl;
		system("cls");
		return;
	}
}
void leave()
{
	///exititng....................
	string e;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
	cout << "WANT TO EXIT(YES/NO):" << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	cin >> e;
	if ((e == "no")||(e=="NO"))
	{
		return;
	}
	else
	{
		system("cls");
		exit(0);
	}
}
void wrong()
{
	///warnings...........
	PlaySoundA(("C:\\Users\\Rajdeep\\Music\\choice.wav"), NULL, SND_ALIAS);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
	cout << "YOU HAVE ENTERED WRONG CHOICE:" << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	cout << "REDIRECTING TO MAIN MENU. "<<endl;
	for (int j = 1; j <= 6; j++)
	{
		cout << ".";
		Sleep(200);
	}
	cout << endl;
	system("cls");
	return;
}
void intro()
{
	///introduction.......................
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 206);
	cout << endl<<endl<<endl<<endl<<endl<<endl<<endl;
	cout << "\n\n\t                                            DATABASE ";
	cout << "\n\n\t                                           MANAGEMENT ";
	cout << "\n\n\t                                             SYSTEM ";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	getch();
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 169);
	cout << endl<<endl;
	cout << "\n\n\n\n                                             MADE BY : Offensive Geeks";
	cout << "\n\n                                  COLLEGE : Sardar Vallabhbhai National Institute Of Technology";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	cin.get();
}
void instructions()
{
	///instuctions....................................
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 128);
	cout << endl << endl << endl << endl << endl << endl;
	cout << "\n\n\t                                        INSTRUCTIONS "<<endl<<endl<<endl<<endl<<endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 110);
	cout << "                                             For 1. type first "<<endl<<endl;
	cout << "                                             For 2. type second " << endl<<endl;
	cout << "                                             For 3. type third " << endl<<endl;
	cout << "                                             For 4. type fourth " << endl<<endl;
	cout << "                                             For 5. type fifth " << endl<<endl;
	cout << "                                             For 6. type sixth " << endl<<endl;
	cout << endl;
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	cin.get();
}
int main()
{
	intro();
	system("cls");
	instructions();
	system("cls");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 11);
	cout << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl << endl;
	cout << "                                       WELCOME TO THE DATABASE MANAGEMENT SYSTEM " << endl;
	cout << "                                     ";
	for (int w = 0; w<15; w++)
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), w);
		cout << "_";
	}
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	for (int w = 0; w<15; w++)
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), w);
		cout << "_";
	}
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	for (int w = 0; w<13; w++)
	{
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), w);
		cout << "_";
	}
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	cout << endl << endl << endl;
	cin.get();
	system("cls");
	string x;
	do
	{
		menudisp();
		choose();
		Sleep(100);
		system("cls");
		if (choice == "first")
		{
			input();
		}
		else if (choice == "second")
		{
			deletion();
		}
		else if (choice == "third")
		{
			modify();
		}
		else if (choice == "fourth")
		{
			print();
		}
		else if (choice == "fifth")
		{
			leave();
		}
		else
		{
			wrong();
		}
		PlaySoundA(("C:\\Users\\Rajdeep\\Music\\option.wav"), NULL, SND_ASYNC);
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
		cout << endl << "WANT TO ENTER MORE (yes/no)" << endl;
		SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
		cin >> x;
		system("cls");
	} while ((x == "yes") || (x == "YES"));
	//credits..........
	cout << "                           ";
	for (int i = 0; i<57; i++)
	{
		cout << static_cast <unsigned char> (127);
	}
	cout << endl;
	cout << "                           ";
	cout << static_cast <unsigned char> (186);
	cout << "                                        ";
	cout << "               ";
	cout << static_cast <unsigned char> (186);
	cout << endl;
	cout << "                           ";
	cout << static_cast <unsigned char> (186);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 14);
	cout << "                        CREDITS    ";
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
	cout << "                    ";
	cout << static_cast <unsigned char> (186);
	cout << endl;
	cout << "                           ";
	cout << static_cast <unsigned char> (186);
	cout << "                                        ";
	cout << "               ";
	cout << static_cast <unsigned char> (186);
	cout << endl;
	cout << "                           ";
	for (int i = 0; i<57; i++)
	{
		cout << static_cast <unsigned char> (127);
	}
	cout << endl;
	PlaySoundA(("C:\\Users\\Rajdeep\\Music\\credits.wav"), NULL, SND_ASYNC);
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 12);
	system("Pause");
	SetConsoleTextAttribute(GetStdHandle(STD_OUTPUT_HANDLE), 15);
    return 0;
}
