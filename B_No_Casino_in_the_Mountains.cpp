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
        int n,k;
        cin>>n>>k;

        vector <int> v(n);
        for (int i = 0; i < n; i++)
        {
            cin>>v[i];
        }

        int cnt=0;
        int cnt2=0;

        while (cnt2<=n-k)
        {   
            bool isGood=true;
            for (int j = cnt2; j < cnt2+k; j++)
            {
                if(v[j]!=0){
                    isGood=false;
                    break;
                }
            }
            
            if(isGood){
                cnt++;
                cnt2+=k+1;
            }else{
                cnt2++;
            }
            
        }
        


        cout<<cnt<<endl;
        
        
    }
    


    
    return 0;
}