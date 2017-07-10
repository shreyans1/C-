#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
 {
	//code
	int T,n,i,x;
	cin>>T;
	//vector<int>iterator::it;
	while(T--)
	{
	    cin>>n;
	    vector<int>v;
	    for(i=0;i<n;i++)
	    {
	        cin>>x;
	        v.push_back(x);
	    }
	    sort(v.begin(),v.end());
	    if(n%2)
	    cout<<v[n/2];
	    else
	    cout<<(v[n/2]+v[n/2-1])/2;
	    cout<<endl;
	}
	return 0;
}
