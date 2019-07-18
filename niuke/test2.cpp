#include<iostream>
using namespace std;

int main(){
    long long n,k;
    cin>>n;
    cin>>k;
    int x,y;
    long long count=0;
    if(k!=0){
        for(y=k+1;y<n;y++)
        {
            int m= n/y;
            int i= n%y;
            count += (m)*(y-k)+max(0ll,i+1-k);
            
        }
        count+=(n-k);
    }  
    else
    {
        count = n * n;
    }
    
        
    cout<<count<<endl;
    return 0;
    
}