#include<stdio.h>
#include<limits.h>
#include <string.h>
#include<math.h>
#define lli long long int
int main()
{   
    lli n;
    scanf("%lld",&n);
    lli loc1,loc2;
    lli a[n];
  //  malloc(a,0,sizeof(a));
    lli max=INT_MIN;
    for (lli i = 0; i < n; i++)
    { //  printf("1");
        scanf("%lld",&a[i]);
        if (max<a[i])
        {
            max=a[i];
            loc1=i;
        }
    }
    max=INT_MIN;
    for (lli i = n-1; i >=0 ; i--)
    {  // printf("1");
     //   scanf("%lld",&a[i]);
        if (max<a[i])
        {
            max=a[i];
            loc2=i;
        }
    }
    
    lli sum=0;
    lli tpmx=INT_MIN;
    lli r= fabs((loc2-loc1))*max;
    sum=r;
   // printf("%lld %lld %lld\n", loc1,loc2,r);
    //printf("3");
    for (lli i = n-1; i > loc2; i--)
    {
        if (tpmx<a[i])
        {
            tpmx=a[i];
        }
        sum+=tpmx;
       // printf("%lld\n",sum);
    }
    //printf("5");
    tpmx=INT_MIN;
    for (lli i = 0; i < loc1; i++)
    {
        if (tpmx<a[i])
        {
            tpmx=a[i];
        }
        sum+=tpmx;
         //printf("/n% lld\n",sum);
         
    }
    //printf("9");
    printf("%lld\n",sum);
    

    return 0;
}