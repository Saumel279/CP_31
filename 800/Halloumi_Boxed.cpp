#include<bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int t;
    cin >> t;
    while(t--)
    {
        int n,k;
        cin >> n >> k;
        int a[n];
        for(int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        if(is_sorted(a,a+n) || k > 1)
        cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
    }
    return 0;
}