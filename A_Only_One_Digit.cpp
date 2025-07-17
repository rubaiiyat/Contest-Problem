#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
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

        int mn=s[0];

        for(char c:s){
            int val=c-'0';
            mn=min(mn,val);
        }

        cout<<mn<<endl;
    }


    
    


    
    return 0;
}