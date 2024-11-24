#include <bits/stdc++.h>
using namespace std;
#define ln endl
#define FASTIO               \
    ios::sync_with_stdio(0); \
    cin.tie(0);              \
    cout.tie(0);
int main()
{
    FASTIO;
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        if (n % 2 != 0)
        {
            cout << "NO" << endl;
        }
        else
        {
            int count = 0;
            vector<char>v; 
            int d = (n/2);
            while (d--)
            {
                  
                if (count % 2 == 0)
                {
                    // st[ind] += 'A';
                    // st[++ind] += 'A';
                    v.push_back('A');
                    v.push_back('A');
                }else{
                     v.push_back('B');
                    v.push_back('B');
                }
                // cout<<st<<endl<<n/2<<d;
                count++;
            }
            cout<<"YES"<<endl;
             for (auto vl:v)
             {
               cout<<vl;
             }
             cout<<endl;
             
        }
    }

    return 0;
}