#include<iostream>
using namespace std;

int main()
{
	int a,b;
	cout<<"Enter First Number : "<<endl;
	cin>>a;
	cout<<"Enter Second Number : "<<endl;
	cin>>b;

	int choice;
	cout<<endl;
	cout<<"**********************************"<<endl;
	cout<<"Main Menu  "<<endl;
	cout<<"1.Addition "<<endl;
	cout<<"2.Subtraction "<<endl;
	cout<<"3.Multiplication "<<endl;
	cout<<"4.Division "<<endl;
	cout<<"**********************************"<<endl;
	cout<<"Enter Any One Choice : "<<endl;
	cin>>choice;

	switch(choice)
	{
		case 1:
		cout<<"Addition Of Two Number is "<<a+b<<endl;
		break;
		case 2:
		cout<<"Subtraction Of Two Number is "<<a-b<<endl;
		break;
		case 3:
		cout<<"Multiplication Of Two Number is "<<a*b<<endl;
		break;
		case 4:
		cout<<"Division Of Two Number is "<<a/b<<endl;
		break;
	}
}