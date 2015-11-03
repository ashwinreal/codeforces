#include <iostream>
using namespace std;
char s[100001];
int f[100001];
int main()
{
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cin>>s;
    long long n=0;
    while(s[n]!='\0')
    {
        if(s[n]==s[n+1])
        f[n]=1;
        else
        f[n]=0;
        n++;
    }
    //cout<<f[0]<<" ";
    for(long long i=1;i<n;i++)
    {
        
        f[i]=f[i]+f[i-1];
        //cout<<f[i]<<" ";
    }
    //cout<<endl;
    /*for(int i=0;i<n;i++)
    cout<<f[i]<<" ";
    cout<<endl;*/
    long long m;
    cin>>m;
    while(m--)
    {
        long long l,r;
        cin>>l>>r;
        l--;
        r--;
        if(l!=0)
        cout<<f[r-1]-f[l-1]<<endl;
        else
        cout<<f[r-1]<<endl;
    }
    
}
