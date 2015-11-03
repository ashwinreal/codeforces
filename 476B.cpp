#include <iostream>
#include <iomanip>
using namespace std;

long long pas[1001][1001];
long long mod = 1000000007;
void pascal()
{
    pas[0][0]=1;
    pas[0][1]=0;
    pas[1][0]=1;
    pas[1][1]=1;
    pas[2][0]=1;
    pas[2][1]=2;
    pas[2][2]=1;
    for(long long i=3;i<=1000;i++)
    {
        for(long long j=0;j<=i;j++)
        {
            if(j==0||j==i)
            {
                pas[i][j]=1;
            }
            else
                pas[i][j]=(pas[i-1][j-1]+pas[i-1][j])%mod;
        }
    }
}
char s1[100],s2[100];
int main()
{
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    pascal();
    cin>>s1>>s2;
    
    long long fctr=0;
    for(long long i=0;s1[i]!='\0';i++)
    {
        if(s1[i]=='+')
        fctr++;
        else
        fctr--;
    }
    long long ctr=0;
    long long q=0;
    for(long long i=0;s2[i]!='\0';i++)
    {
        if(s2[i]=='+')
        ctr++;
        else if(s2[i]=='-')
        ctr--;
        else
        q++;
    }
     std::cout << std::setprecision(9);
    long long diff=fctr-ctr;
    if(diff<0)
    diff=-diff;
    long double ans=0;
    if((q<diff) || (q-diff)%2==1)
    cout<<ans;
    else
    {
        //cout<<"!";
        long long totp= (q+diff)/2;
        ans= (1.0*pas[q][totp])/(1<<q);
        //cout<<fctr<<" "<<ctr<<endl;
        //cout<<q<<" "<<diff<<" "<<pas[q][totp];
        cout<<ans;
    }
    
    return 0;
    
}
