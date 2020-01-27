#include <stdio.h>
#include<string.h>
#include<stdio.h>
#include<limits.h>
#define lli long long int

/*struct node
{
    int data;
    struct node *link;
};
struct node *top = NULL;
*/
lli top =-1;

void push(lli val,lli index,lli s1[],lli s2[])
{
    top++;
    s1[top]=val;
    s2[top]=index;
    
}

int main()
{
    lli n;
    
    scanf("%lld",&n);
    lli a[n][3];
    lli s1[n];
    lli s2[n];
    memset(a,0,sizeof(a));
    for (lli i = 0; i < n; i++)
    {
        scanf("%lld",&a[i][0]);
    }
    
    for (lli i = 0; i < n; i++)
    {
        if (top ==-1)
        {
            push(a[i][0],i,s1,s2);
        }
        else if(a[i][0]>s1[top])
        {
        while (a[i][0]>s1[top]&&top!=-1)
        {
            
             //pop
            a[s2[top]][1]=a[i][0];
            --top;
        }
        push(a[i][0],i,s1,s2);
        }
        if(a[i][0]<=s1[top])
        {
            push(a[i][0],i,s1,s2);
        }

    }
    top=-1;

    for (lli i = n-1; i >= 0; i--)
    {
        if (top ==-1)
        {
            push(a[i][0],i,s1,s2);
        }
        else if(a[i][0]>s1[top])
        {
        while (a[i][0]>s1[top] && top !=-1)
        {
            
           
            a[s2[top]][2]=a[i][0];
            --top;
        }
        push(a[i][0],i,s1,s2);
        }
        if(a[i][0]<=s1[top])
        {
            push(a[i][0],i,s1,s2);
        }

    }

    lli max=INT_MIN;
    for (int i = 0; i < n; i++)
    {
       // printf("%lld %lld \n", a[i][1], a[i][2]);
        lli c=a[i][1]*a[i][2];
        if( max<c)
        {
            max=c;
        }

    }
   /* for(int i=0;i<n;i++)
    {
        printf("%lld",a[i][1]);
    }
    printf("\n");
    for(int i=0;i<n;i++)
    {
        printf("%lld",a[i][2]);
    } */
    printf("%Ld\n",max);

    return 0;
}