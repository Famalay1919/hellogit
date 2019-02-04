#include <iostream>
#include <vector>
#include <string>
using namespace std;
main()
/*{
	vector <char>vcomp;
	vector<int> v;
	vector <int> v2 = {10,14,32,64,16};
	vcomp.push_back('p');
	v2.pop_back();
	vcomp.push_back('i');
	v2.pop_back();

	for(int i=0; i<4; i++)
	{
		v2.push_back(0);
	}

	for(auto v:v2)
	{
		cout << v << " ";	
	}
}*/
{
	string s0 = " nothing";
	string s1 = " hello";
	string s2 = s1 + " world";

	cout << "s0 =" << s0 << endl;
	cout << "s1 =" << s1 << endl;
	cout << "The 4th character of s1 is " << s1[3] << endl;
	cout << "s1 has " << s1.size() << " characters" << endl;
	
	if(s1=="hello")
	{
		cout << "hi there" << endl;
	}
	if (s2!= "world")
	{
		cout << "out of this world" << endl;
	}
}



















