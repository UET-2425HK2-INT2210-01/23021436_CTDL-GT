#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

bool trySum(vector<int>& a, int y) 
{
    for (int i = 0; i < a.size(); i++) 
    {
        if (y >= a[i]) 
	{
            y -= a[i];
        }
    }

    return y == 0;
}

void dequy(vector<int> a, int y) 
{
    if (a.empty()) 
    {
        cout << "NO" << endl;
        return;
    }

    if (y == 0 || trySum(a, y)) 
    {
        cout << "YES" << endl;
        return;
    }
    else
    {
	 a.erase(a.begin());
    }
    dequy(a, y);
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

    // Sắp xếp giảm dần để ưu tiên thử phần tử lớn trước
    sort(a.begin(), a.end(), greater<int>());

    dequy(a, x);

    return 0;
}
