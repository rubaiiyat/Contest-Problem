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
    cin.ignore();
    while (t--)
    {
        string s;
        getline(cin,s);

        stringstream ss(s);

        string word;

        while(ss >> word) cout<<word[0];

        cout<<endl;
        

       
        
    }


    
    return 0;
}