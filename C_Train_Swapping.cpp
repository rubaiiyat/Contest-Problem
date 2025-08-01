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

        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin>>arr[i];
        }

        int cnt=0;
        for (int i = 0; i < n; i++)
        {
            for (int j = i+1; j < n; j++)
            {
                if(arr[i]>arr[j]){
                    swap(arr[i],arr[j]);
                    cnt++;
                }
            }
            
        }

        cout<<"Optimal train swapping takes "<<cnt<<" swaps."<<endl;
        cnt=0;


        
        
    }
    
    


    
    return 0;
}