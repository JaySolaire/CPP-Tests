#include <iostream>
#include <fstream>
#include <string>
#include<stdio.h>

using namespace std;
int main()
{
	
	ifstream infile("thefile.txt");
	string a, b;
	while (infile >> a >> b)
	{
		cout<<a<<"  "<<b<<endl;
	}
	infile.close();
}
