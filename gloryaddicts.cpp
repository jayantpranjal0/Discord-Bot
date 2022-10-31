#include<bits/stdc++.h>
using namespace std;
#define int long long int
void solve(){
	int n;
	cin>>n;
	int arr[n];
	int powr[n];
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	for(int i=0;i<n;i++){
		cin>>powr[i];
	}
	vector<pair<int,int>> v1,v2,v3;
	for(int i=0;i<n;i++){
		if(arr[i]==0){
			v1.push_back({arr[i],powr[i]});
		}
		else{
			v2.push_back({arr[i],powr[i]});
		}
	}
	sort(v2.begin(),v2.end());
	reverse(v2.begin(),v2.end());
	sort(v1.begin(),v1.end());
	reverse(v1.begin(),v1.end());
	int n0=v1.size();
	int n1=v2.size();
	int ans=0;
	if(n0==n1){
		for(auto x:v1){
			ans=ans+(2*(x.second));
		}
		for(auto x:v2){
			ans=ans+(2*(x.second));
		}
		ans-=min(v1[n0-1].second,v2[n1-1].second);
		
		
	}
	if(n0>n1){
		for(int i=0;i<n1;i++){
			ans=2*(v1[i].second+v2[i].second);
		}
		for(int i=n1;i<n0;i++){
			ans+=v1[i].second;
		}
	}else if(n0<n1){
		for(int i=0;i<n0;i++){
			ans=2*(v1[i].second+v2[i].second);
		}
		for(int i=n0;i<n1;i++){
			ans+=v2[i].second;
		}
	}
	cout<<ans<<endl;
}	

int32_t main(){
	int t;
	cin>>t;
	while(t--){
	solve();
	}
	return 0;
}
