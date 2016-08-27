#include <iostream>

using namespace std;

int main()
{
    long long n,k,i,m=0,t,j,c=0;
    cin>>n>>k;
    long long a[n];

    for(i=0;i<n;i++)
    {
        cin>>t;
        if(t==0)
        {
            c++;
            continue;
        }
        if(t<k)
        {
            a[m]=t;
            m++;
        }
    }

    c=c*m;

    for(i=0;i<m-1;i++)
    {
        for(j=i+1;j<m;j++)
        {
            if((a[i]+a[j])<k)
                c++;
        }
    }

    cout<<c;
    return 0;
}
