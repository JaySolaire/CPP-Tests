#include <stdio.h>
#include <iostream>
using namespace std;

class Account
{
	public:
	virtual void print(){cout<<a;};
	int a;
};

class Client : public Account
{
	public:
	void print(){cout<<"test"<<a;};
};

int main()
{
	Account *acc;
	Client cl;
	cl.a = 5;
	acc = &cl;
	cl.a = 6;
//	acc->print();

	
	Account *acc2;
	Client *cl2 = new Client;
	cl2->a = 5;
//	cout<<"bye";
	acc2 = cl2;
//	cout<<"hi";
	cl2->a = 6;
	acc2->print();
	return 0; 
}





