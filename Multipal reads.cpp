#include<iostream>
#include<fstream>
#include<conio.h>
using namespace std;
int main()
{
	int roll,marks;
	string name;
	fstream file;
	file.open("D://PracticeFilehandling//new1.txt",ios::in);
	file>>roll>>name>>marks;
	while(!file.eof())
	{
	cout<<"\n\nRoll no: "<<roll<<"\t Name: "<<name<<"\t Marks: "<<marks;
	file>>roll>>name>>marks;
	}
	file.close();
	getch();
	return 0;
}
