#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long
using namespace std;

int main()
{
    optimize();


    string s;
    cin>>s;

    int cnt=0;
    for(auto c:s){
        if(c=='4' || c=='7') cnt++;
    }

    if(cnt==4|| cnt==7) cout<<"YES"<<endl;else cout<<"NO"<<endl;


    
    return 0;
}