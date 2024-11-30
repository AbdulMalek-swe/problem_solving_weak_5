#include <bits/stdc++.h>
#define IO                            \
    ios_base::sync_with_stdio(false); \
    cin.tie(NULL);                    \
    cout.tie(NULL)
typedef long long int ll;
typedef long double LD;
  
using namespace std;
 
 
int main()
{
    IO;
     int t;       
    cin >> t;    
    while (t--)  
    {            
     int n; cin >> n;
    int m = (n * n - n) / 2, b[m], a[n];
    for (int i = 0; i < m; i++) cin >> b[i];
    sort(b, b + m);
    int x = 1, ind = 0;
    int x1 = n - x;
    while(n - x > 0)
    {
        a[ind++] = b[x1- 1];
        x++;
       x1 += n - x;
    }
    a[n - 1] = 1000000000;
    for (int i = 0; i < n; i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
    }
    return 0;
}
 