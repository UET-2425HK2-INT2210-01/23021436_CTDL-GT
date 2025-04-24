#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool trySum( vector<int>& a, int x, int y)
{
	for (int i = 0; i < x ; i++)
	{
		if (y >= a[i])
		{
			y = y - a[i];
		}
		else
		{
			y = y;
		}
	}
	
	if (y == 0)
	{
		cout << "YES" << endl;
		return true;
	}
	else
	{
		cout << "NO" << endl;
		return false;
	}
}

int main()
{
	int n, x;
	cin >> n >> x;
	vector<int> a(n);
	
	for (int i = 0; i < n; i++)
	{
		cin >> a[i];
	}

	sort(a.begin(), a.end(), greater<int>());
	trySum(a, n, x);
  
	return 0;
}
