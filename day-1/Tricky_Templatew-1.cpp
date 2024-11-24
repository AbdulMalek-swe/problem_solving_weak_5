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
       string st1,st2,st3;
        cin >> st1 >> st2 >> st3;
        bool isTrue = true;
        for(int i=0;i<n;i++){
            if(st1[i]!=st3[i] && st2[i]!=st3[i]){
                 isTrue = false;
                break;
            }
        }
        if(!isTrue){
            cout << "YES\n";
        }
        else{
            cout << "NO\n";
        }
    }

    return 0;
}