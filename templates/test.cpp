#include<bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        long long int n,m,k;
        int count=0;
        cin>>n>>m>>k;
        long long int arr[n][m];
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                cin>>arr[i][j];
            }
        }
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m;j++)
            {
                if(arr[i][j]>=k)
                {
                    count++;
                }
            }
        }
        int sum=0,avg=0;
        if(n>m)
        {
            while(m>1)
            {
                for(int i=0;i<m;i++)
                {
                    for(int j=0;j<m;j++)
                    {
                        sum+=arr[i][j];
                    }
                }
                if(sum/m>=k)
                {
                    count++;
                }
                m--;
            }
        }
        else
        {
            while(n>1)
            {
                for(int i=0;i<n;i++)
                {
                    for(int j=0;j<n;j++)
                    {
                        sum+=arr[i][j];
                    }
                }
                if(sum/n>=k)
                {
                    count++;
                }
                m--;
            }
        }
        cout<<count<<endl;
    }
   return 0;
}