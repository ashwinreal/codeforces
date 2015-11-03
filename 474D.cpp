#include <iostream>
#include <iomanip>
using namespace std;
long long mod  = 1000000007;
long long f[100001];
int main()
{
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long t,k;
    cin>>t>>k;
    for(long long i=0;i<k;i++)
        f[i]=1;
    for(long long i=k;i<100001;i++)
        f[i]=(f[i-1]+f[i-k])%mod;
    for(long long i=1;i<100001;i++)
    f[i]=(f[i]+f[i-1])%mod;
    while(t--)
    {
        long long a,b;
        cin>>a>>b;
        if(f[b]-f[a-1] >=0)
        cout<<f[b]-f[a-1]<<endl;
        else
        cout<<f[b]-f[a-1]+mod<<endl;
        
    }
    
    return 0;
    
}
