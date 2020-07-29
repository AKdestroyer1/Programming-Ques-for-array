#include <iostream>
using namespace std;

int main() {
    int t;
	cin>>t;
	while(t--)
	{
	    int n;
	    cin>>n;
	    int A[n-1];
	    for(int i=0;i<n-1;i++)
	    cin>>A[i];
	    int sum=0;
	    for(int i=1;i<=n;i++)
	    {
	        sum+=i;
	    }
	    for(int i=0;i<n-1;i++)
	    {
	        sum-=A[i];
	    }
	    cout<<sum;

	}
	return 0;
}
