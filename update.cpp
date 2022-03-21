#include<iostream>
#include<string>
#include<stdio.h>
#include<conio.h>
#include<fstream>
using namespace std;
int main()
{
	fstream file,file1;
	int roll,age,roll1; //roll1 for comparing
	string name;
	cout<<"\n\n Roll No.For update: ";
	cin>>roll1;

	file1.open("D://Handal1.txt",ios::in); //already created file
	if(!file1)
	{
		cout<<"\n\n File Opening Error...";
		file1.close();
		goto p;
	}
	
	file.open("D://Handal1U-P.txt",ios::out|ios::app);  //new file
	file1>>roll>>name>>age;
	while(!file1.eof())
	{
	  if(roll1==roll)
	  {
	  	cout<<"\n\n New Roll no: ";
	  	cin>>roll;
	  	cout<<"\n\nName : ";
	  	cin>>name;
	  	cout<<"\n\nAge";
	  	cin>>age;
	  	file<<" "<<roll<<" "<<name<<" "<<age<<"\n";
	  	cout<<"\n\nRecord in updated....";
	  }	
	  else
	  {
	    file<<" "<<roll<<" "<<name<<" "<<age<<"\n";	
	  }
	  file1>>roll>>name>>age;
	}
	file1.close();
	file.close();
	remove("D://Handal1.txt");
	rename("D://Handle1U-P.txt","D://Handle1.txt");                 //stdio.h
	p:
	getch();
	return 0;
}
