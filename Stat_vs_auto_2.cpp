#include<iostream>

using namespace std;

void stat_say()
{
	static int say;
	cout << say << "\t";
	say++;
}

void oto_say()
{
	int norsay = 0;
	cout << norsay << "\t";
	norsay++;
}

void main()
{
	int i,m;
	m = 0;
	static int s;
	cout << "Count with a function which has static variable" << endl;
	for (i = 0; i < 5; i++)
	{
		stat_say();
	}
	cout << endl;
	cout << "Count with a function which has automatic variable" << endl;
	for (i = 0; i < 5; i++)
	{
		oto_say();
	}
	cout << endl << "Count with a loop in main whose variable is automatic without function" << endl;
	for(i=0;i<5;i++)
	{
		cout << m << "\t";
		m++;
	}
	cout << endl << "Count with a loop in main whose variable is static without function " << endl;
	for (i = 0; i < 5; i++)
	{
		cout << s << "\t";
		s++;
	}
	system("pause");
}