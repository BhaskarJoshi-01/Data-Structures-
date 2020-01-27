#include <stdio.h>
#include<string.h>
#include<stdio.h>
#include<limits.h>
#define ld long double
#define lli long long int

int main()
{
    
    int t;
    scanf("%d",&t);
    while (t--)
    {
        lli j=0;k=0;
        char a[30005];
        ld s1[10005];
        char s2[10005];
        scanf("%[^\n]%*c", a);
        int len=strlen(a);
        for(int i=0;i<len;i++ )
        {
            if(a[i]>='0'&&a[i]<='9')
            {
                s1[j]=a[i];
                j++;
            }
            if(a[i]=='+'||a[i]=='-'||a[i]=='*'||a[i]=='/')
            {
                s2[k]=a[i];
                k++;
            }

        }
        lli len1=strlen(s1);
        lli len2=strlen(s2);
        for(lli i=0;i<len1/2;i++)
        {
            ld var1=s1[i];
            s1[i]=s1[len1-i];
            s1[len-i]=var;
        }
         for(lli i=0;i<len2/2;i++)
        {
            char var2=s2[i];
            s2[i]=s2[len1-i];
            s2[len-i]=var2;
        }
        ld temp=0.0;
        
        for (lli i = 0; i < len2; i++)
        {
            
        }
        


    }
    
    return 0;
}

