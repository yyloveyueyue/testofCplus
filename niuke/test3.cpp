#include <iostream>
#include <algorithm>
using namespace std;
 
int main()
{
    long long n,k;
    cin>>n>>k;
    long long ans=0;
    for(int y=max(1LL,k);y<=n;++y)
    {
        int res=0;
        res=n/y*(y-k);
        if(n%y>=k)
           { if(k)
                res+=n%y-k+1;}
        else {res+=n%y;}
        ans+=res;
    }
    cout<<ans<<endl;
}