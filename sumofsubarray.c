#include <stdio.h>

void subarray(int a[],int N,int S)
{
int i,j,temp;
for(i=0;i<N;i++)
{
temp=a[i];

for(j=i+1;j<=N;j++)
{
if(temp==S)
{printf("%d %d \n",i,j-1);
return;}
if(temp>S||j==N)
break;
temp+=a[j];

}
}
printf("-1\n");
return;
}
int main()
{
int t,n,s,i,j;
printf("enter no.of test cases \n");
scanf("%d",&t);
for(i=0;i<t;i++)
{printf("enter size of array and sum required \n");
scanf("%d %d",&n,&s);
int A[n];
printf("enter elements for array \n");
for(j=0;j<n;j++)
scanf("%d",&A[j]);
subarray(A,n,s);
}
return 0;
}
