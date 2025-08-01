#include <bits/stdc++.h>
#define optimize() ios_base::sync_with_stdio(0);cin.tie(0);cout.tie(0);
#define endl "\n"
#define ll long long
using namespace std;

int main()
{
    optimize();


    string s;
    getline(cin,s);

    int l=s.size();

    
    string s2="";
    for (int i = 0; i < l; i++)
    {   
        char c=toupper(s[i]);
        if(c>='A' && c<='Z'){
            s2+=c;
        }

        
    }

    int l2=s2.size();

    if(s2[l2-1]=='A' || s2[l2-1]=='E' || s2[l2-1]=='I' || s2[l2-1]=='O' || s2[l2-1]=='U' || s2[l2-1]=='Y'){
        cout<<"YES"<<endl;
    }else{
        cout<<"NO"<<endl;
    }
    

    
    return 0;
}