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
        int n;
        cin>>n;

        vector <int> v(n);
        map <int,int> mp;
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
            mp[v[i]]++;
        }

        for (auto m:mp){
            cout<<m.first<<" : "<<m.second<<endl;
        }
        
        
    }
    


    
    return 0;
}