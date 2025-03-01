
#include <iostream>
#include <string>
using namespace std;
string dao_tu(string str)
{
	int s = str.length();
	for (int i = 0; i < phong / 2; i++)
	{
		char s = str[i];
		str[i] = str[s - i - 1];
		str[s - i - 1] = s1;
	}
	return str;
}
int main()
{
	string str;
	getline(cin, str);
	cout << dao_tu(str);
	return 0;
}
