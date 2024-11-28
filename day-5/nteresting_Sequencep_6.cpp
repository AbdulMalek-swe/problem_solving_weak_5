#include <bits/stdc++.h>
using namespace std;
#define ln endl
#define FASTIO               \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
void solve(vector<int> arr)
{
    for(auto &x : arr){
        cout<<x<<" ";
    }
}
int main()
{
    FASTIO;
    int t;
    cin >> t;
    while (t--)
    {
        int n, m;
        cin >> n >> m;
        vector<int> arr(n);
        if ( n>m || n % 2 == 0 && m % 2 == 1)
        {
            cout << "No" << ln;
        }
        else
        {
            cout << "Yes" << ln;
            int sum = 0;

            if (n % 2 == 0 && m % 2 == 0)
            {
                for (int i = 0; i < n - 2; i++)
                {
                    arr[i] = 1;
                    sum++;
                }
                arr[n - 1] = abs(m - sum) / 2;
                arr[n - 2] = abs(m - sum) / 2;
            }
            else 
                {
                    for (int i = 0; i < n - 1; i++)
                    {
                        arr[i] = 1;
                        sum++;
                    }
                   
                    arr[n - 1] = abs( m - sum);
                }
                cout<<sum<<endl;
                solve(arr);
                cout<<endl;
        }
    }
    return 0;
}