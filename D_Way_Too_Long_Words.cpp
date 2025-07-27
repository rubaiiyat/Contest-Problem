#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long
using namespace std;

int main()
{
    optimize();


    int t;
    cin>>t;

    while (t--)
    {
        string s;
        cin>>s;

        int sz=s.size();
        if (sz>10)
        {
            cout<<s[0]<<sz-2<<s[sz-1]<<endl;
        }else{
            cout<<s<<endl;
        }
        
    }
    


    
    return 0;
}