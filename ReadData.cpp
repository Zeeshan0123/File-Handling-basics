#include<iostream>
#include<conio.h>
#include<fstream>
using namespace std;
int main()
{
  int a;
  ifstream file;
  file.open("D://PracticeFilehandling//new1.txt");
  file>>a;
  cout<<"Value of a is: "<<a;
  file.close();
  getch();
  return 0;
	
}
