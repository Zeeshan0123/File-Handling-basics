#include<iostream>
#include<fstream>
#include<conio.h>
using namespace std;
int main()
{
	ofstream file;
	int a;
	cout<<"Enter a number: ";
	cin>>a;
	file.open("D://PracticeFilehandling//new1.txt");
	file<<" "<<a<<"\n";
	file.close();
	getch();
	return 0;
}
