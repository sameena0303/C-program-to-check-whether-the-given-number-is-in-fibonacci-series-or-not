#include<stdio.h>
int main()
{
     int n,a=0,b=1,c=0; 
     printf("Enter number: ");
     scanf("%d",&n);
     while(c<n)
     {
         c=a+b;
         a=b;
         b=c;   
     }
     if(c==n)
     printf("Yes");
     else
     printf("No");
     return 0;
}
