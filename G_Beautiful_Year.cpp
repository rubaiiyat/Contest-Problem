#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long
using namespace std;

int main()
{
    optimize();


    int y;
    cin>>y;

    while (true)
    {
        y++;
        string s=to_string(y);
        set <char> st;
        for (int i = 0; i < s.length(); i++)
        {
            st.insert(s[i]);
        }

        if(st.size()==s.size()){
            cout<<s<<endl;
            break;
        }
        
    }
    


    
    return 0;
}