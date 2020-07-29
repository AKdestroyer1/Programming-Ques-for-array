#include <iostream>
#include <climits>
using namespace std;

int subarray(int a[],int N)
{
    int max=INT_MIN, maxh=0,maxe=a[0];
    for(int i=0;i<N;i++)
    {
        maxh+=a[i];
        if(maxh<0)
        maxh=0;
        if(max<maxh)
        max=maxh;
        if(a[i]>maxe)
        maxe=a[i];
    }
    if(max==0)
    return maxe;
    else
    return max;
}

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int A[n];
	    for(int i=0;i<n;i++)
	    cin>>A[i];
	    int m = subarray(A,n);
	    cout<<m<<endl;
	}
	return 0;
}
