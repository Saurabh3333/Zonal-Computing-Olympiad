#include <iostream>

using namespace std;

int main()
{
    long long n,p=0,i,h,t,cond=0; // 1= picked
    cin>>n>>h;
    long long a[n];

    for(i=0;i<n;i++)
        cin>>a[i];

    while(1)
    {
        cin>>t;
        if(t==0)
            break;

        if(t==1)  //left
        {
            if(p!=0)
                p--;
        }
        if(t==2)  //right
        {
            if(p!=(n-1))
                p++;
        }
        if(t==3 && cond==0) // pick
        {
            if(a[p]!=0)
                { a[p]--; cond=1; }
        }
        if(t==4 && cond==1)  // Drop
        {
            if(a[p]!=h)
                { a[p]++; cond=0; }
        }
    }

    for(i=0;i<n;i++)
        cout<<a[i]<<" ";
    return 0;
}
