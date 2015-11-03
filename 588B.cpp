#include <iostream>
#include <cmath>
#include <cstring>
#include <cstdio>
#include <algorithm>

using namespace std;


long long  primeFactors(long long  n)
{
    // Print the number of 2s that divide n
    long long ans=1;
    long long f=0;
    while(n%2 == 0)
    {
		if(f==0)
        {ans*=2;f=1;}
        n=n/2;
    }
 
    // n must be odd at this point.  So we can skip one element (Note i = i +2)
    for (int i = 3; i <= sqrt(n); i = i+2)
    {
        // While i divides n, print i and divide n
        f=0;
        while (n%i == 0)
        {
            //printf("%d ", i);
            if(f==0)
        {ans*=i;f=1;}
            n = n/i;
        }
    }
 
    // This condition is to handle the case whien n is a prime number
    // greater than 2
    if (n > 2)
       ans*=n;
       return ans;
}
int main(){
	long long n;
	cin>>n;
	cout<<primeFactors(n)<<"\n";
	
	
	return 0;
}
