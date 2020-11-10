// ConTest1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

#define ll long long

ll ucln(ll a, ll b)
{
	ll t;

	while (b > 0)
	{
		t = b;
		b = a % b;
		a = t;
	}

	return a;
}

ll bcnn(ll a, ll b)
{
	return (a * b) / ucln(a, b);
}
int main()
{
	int t;
	cin >> t;
	while (t--)
	{	
		ll a, b;
		cin >> a >> b;
		cout << ucln(a, b) << " " << bcnn(a, b) << endl;
	}
}


