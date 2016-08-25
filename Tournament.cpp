#include <iostream>

using namespace std;

int main()
{
    long long i,j,n,temp,c=0;
    cin>>n;
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
            c+=temp;
        }
    }
    cout<<c;
    return 0;
}
