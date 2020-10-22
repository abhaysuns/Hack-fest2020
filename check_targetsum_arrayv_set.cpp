#include<bits/stdc++.h> 
using namespace std;

void check_pair(vector<int> arr, int n, int x){
	unordered_set<int> s;
	for(int i=0;i<n;i++){
		int temp = x-arr[i];
		if(s.find(temp)!=s.end())
		cout<<"Sum of "<<x<<" in pair exists as "<<x-arr[i]<<","<<arr[i]<<endl;
		
		s.insert(arr[i]);
	}
}

int main(){
	int t;
	cin>>t;
	while(t--){
		int n,x;
		cin>>n;
		vector<int> arr(n);
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		cin>>x;
		check_pair(arr,n,x);
	}
	return 0;
}
