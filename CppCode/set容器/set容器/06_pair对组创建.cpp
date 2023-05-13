#include<iostream>
#include<string>
using namespace std;

/*
pair<type, type> p ( value1, value2 );
pair<type, type> p = make_pair( value1, value2 );
*/

void test6()
{
	pair<string, int> p1(string("tom"), 18);
	cout << "p1name£º" << p1.first << " p1age£º" << p1.second << endl;

	pair<string, int> p2 = make_pair(string("lucy"), 18);
	cout << "p2name£º" << p2.first << " p2age£º" << p2.second << endl;
}

