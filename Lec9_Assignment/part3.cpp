#include <iostream>
#include <vector>
using namespace std;

int main() 
{
    int n, X;
    cin >> n >> X;

    vector<int> weight(n), value(n);
    for (int i = 0; i < n; i++) 
    {
        cin >> weight[i] >> value[i];
    }

    // dp[i][j]: giá trị lớn nhất khi xét i đồ vật đầu tiên với sức chứa j
    vector<vector<int>> dp(n + 1, vector<int>(X + 1, 0));

    // Tính dp
    for (int i = 1; i <= n; i++) 
    {
        for (int j = 0; j <= X; j++) 
        {
            // Không chọn vật thứ i
            dp[i][j] = dp[i - 1][j];
            // Nếu chọn được vật i
            if (j >= weight[i - 1]) 
            {
                dp[i][j] = max(dp[i][j], dp[i - 1][j - weight[i - 1]] + value[i - 1]);
            }
        }
    }

    cout << dp[n][X] << endl;

    return 0;
}
