#include<stdio.h>
#include<limits.h>

int main() 
{
     
     long long int n,m,k;
     long long int ans;
     scanf("%lld %lld %lld", &n, &m, &k);
     if(n<m && n<k)
     {
        ans=n;
        n=n-ans;
        m=m-ans;
        k=k-ans;
       
     }
     else if(m<n && m<k)
     {
        ans = m;
        n=n-ans;
        m=m-ans;
        k=k-ans;
     }
     else{
        ans=k;
        n=n-ans;
        m=m-ans;
        k=k-ans;
     }
      if(k<=n/2){
     
     ans=ans+k;
     }
     else{
        ans=ans+n/2;
     }
      printf("%lld\n", ans);
    return 0;
}