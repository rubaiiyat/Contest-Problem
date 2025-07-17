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
        int n;
        cin>>n;

        vector <int> v;
        while (n--)
        {
            int x;
            cin>>x;

            v.push_back(x);
        }

        int sum=0;
        int i=1;

        int notFail=true;
        for(auto v:v){
            sum+=v;

            int average=sum/i;

            if(average<40){
                notFail=false;
                break;
            }

            i++;
           
        }
        
        if(notFail) cout<<"Yes"<<endl;else cout<<"No"<<endl;
    
    }
    
    return 0;
}