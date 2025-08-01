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

    int cnt=1;
    int l=s.size();

    bool dangerous=false;
    for (int i = 0; i < l; i++)
    {
        if(s[i]==s[i+1]){
            cnt++;
            if (cnt>=7)
            {
                cnt==7;
                dangerous=true;
                break;
            }
            
        }else{
            cnt=1;
        }
    }
    
    
    if(dangerous) cout<<"YES"<<endl;else cout<<"NO"<<endl;

    
    return 0;
}