#include<bits/stdc++.h>
using namespace std;
int main()
{
    
    int t;
    cin >> t;
    while(t--)
    {
        int m,n;
        cin >> m >> n;
        int ans = 0;
        for(int i = m;i>n;i--){
            ans += i;
        }
        cout << ans << endl;
    }
    return 0;
}