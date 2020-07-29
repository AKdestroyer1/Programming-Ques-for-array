#include <bits/stdc++.h>
using namespace std;
int Gap(int gap)
{
    if (gap <= 1)
        return 0;
    return (gap/2)+(gap%2);
}
void merge(int a[], int b[], int n, int m)
{ int i,j,gap=n+m;
  for(gap=Gap(gap);gap>0;gap=Gap(gap))
  {
      for(i=0;i+gap<n;i++)
      {
          if(a[i+gap]<a[i])
          swap(a[i],a[i+gap]);
      }
      for (j = gap > n ? gap-n : 0 ; i < n&&j < m; i++, j++)
            if (a[i] > b[j])
                swap(a[i], b[j]);

        if (j < m)
        {
            for (j = 0; j + gap < m; j++)
                if (b[j] > b[j + gap])
                    swap(b[j], b[j + gap]);
        }

  }
  for(int i=0;i<n;i++)
  cout<<a[i]<<" ";
  for(int i=0;i<m;i++)
  cout<<b[i]<<" ";

}


int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int x,y;
	    cin>>x>>y;
	    int p[x],q[y];
	    for(int i=0;i<x;i++)
	    cin>>p[i];
	    for(int i=0;i<y;i++)
	    cin>>q[i];
	    merge(p,q,x,y);
        cout<<endl;

	}
	return 0;
}
