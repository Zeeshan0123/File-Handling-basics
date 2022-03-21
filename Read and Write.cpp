#include<iostream>
#include<fstream>
#include<conio.h>
using namespace std;
int main()
{
	int roll,marks;
	string name;
	cout<<"\n\nEnter your Rollno: ";
	cin>>roll;
	cout<<"\n\nEnter your Name: ";
	cin>>name;
	cout<<"\n\nEnter your Marks: ";
	cin>>marks;
	fstream file;
	file.open("D://PracticeFilehandling//new1.txt",ios::out|ios::app);
	file<<" "<<roll<<" "<<name<<" "<<marks<<"\n";
	file>>roll>>name>>marks;
	cout<<"\n\nRoll no: "<<roll<<"\t Name: "<<name<<"\t Marks: "<<marks;
	file.close();
	getch();
	return 0;
	
}
