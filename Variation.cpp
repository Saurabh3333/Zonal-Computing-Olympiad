#include <iostream>

using namespace std;

int main()
{
    long long n,k,i,j,temp,c=0;
    cin>>n>>k;
    long long a[n];
    for(i=0;i<n;i++)
        cin>>a[i];

    for(i=0;i<(n-1);i++)
    {
        for(j=(i+1);j<n;j++)
        {
            temp=a[j]-a[i];
            if(temp<0)
                temp=-1*temp;
            if(temp>=k)
            {
                c++;
            }
        }
    }
    cout<<c;

    return 0;
}
