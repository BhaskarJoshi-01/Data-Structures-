#include <stdio.h>
#include<string.h>
#include<stdio.h>
#include<limits.h>
#define lli long long int
lli s[108];
lli top=0;
void push(int a)
{
    if(top==0)
    {
        s[0]=a;
        top=1;
    }
    else
    {
    s[top]=a;
    top++;
    }
}
void printstack()
{
    for(lli i=0;i<top;i++)
    printf("%lld",s[i]);
    printf("#\n");
}
int main()
{
    lli t;
    scanf("%lld",&t);
    while (t--)
    {
        top=0;
        memset(s,0,sizeof(s));
         lli f=0;
        lli n;
        scanf("%lld",&n);
        lli a[n];
        for (lli i = 0; i < n; i++)
        {
            scanf("%lld",&a[i]);
        }
        lli k=1;
        lli count=0;
   
        lli val=0;
    for (lli i = 0; i < n; i++)
        {
 //           printf("@%lld, k=%lld, val=%lld\n", a[i],k,val);
    //        printstack();
            while(s[top-1]==k && top != 0)
            
            {
   ///             printf("!");
                top--;
                count--;
                val=k;
                ++k;
            //    printstack();
                continue;
            }
            if(a[i]==k)
            {   val=k;
                ++k;
               // printstack();
              //
                continue;
            }
            
            if (a[i]>k)
            {
                push (a[i]);
                count++;
                //val=k;
            }
            else if (a[i]<k)
            {
                f=1;
                break;
              //  printstack();
            }
          //  printf("---");
         // val=k;

        }
        lli num=0;
    //
//    printstack();
  //      printf("%lld %lld %lld\n", num, count, val);
     while (num<count && f!=1)
     {
        // printf("%lld %lld %lld %lld\n", num, count, val,top);
        if (s[top-1]!=val+1)
        {
    //        printstack();
           // printf("77");
            f=1;
            break;
        }
        
        while (s[top-1]==val+1)
        {
            top--;
            ++val;
            num++;
        }
       // printf("-)))-");
      //  printstack();
    }
//     printstack();
    if (f==0)
    printf("Yes\n");
    if (f==1)
    {
        printf("No\n");
    }
        


    }
    return 0;
}