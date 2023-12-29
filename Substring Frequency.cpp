#include <bits/stdc++.h>
using namespace std;
#define ll long long int
int sub_fre(string a, string b)
{
    ll n = a.size();
    ll m = b.size();
    int coun=0;
    for(ll i=0; i<=n-m; i++)
    {
        int flag=0;
        for(ll j=0; j<m; j++)
        {
            if(a[j+i]==b[j])
            {
                flag++;
            }
        }
        if(flag==m)coun++;
    }
   // cout<<coun<<'\n';
    return coun;
}
int main()
{
    int t;
    cin>>t;
    for(int i=1; i<=t; i++)
    {
        string a,b;
        cin>>a>>b;
        int total = sub_fre(a,b);
        cout<<"Case "<<i<<": "<<total<<'\n';
    }

}
