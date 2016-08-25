#include <iostream>

using namespace std;

int main()
{
    long long n,i,j,c,m=0,t;
    cin>>n;
    long long a[n];
    for(i=0;i<n;i++)
    {
        cin>>a[i];
        for(j=0;j<i;j++)
        {
            if(a[i]<a[j])
            {
                c=a[i];
                a[i]=a[j];
                a[j]=c;
            }

        }
    }

    for(i=0;i<n;i++)
    {
        t=a[i]*(n-i);
        if(t>m)
            m=t;
    }
    cout<<m;

    return 0;
}
