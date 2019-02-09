// Min Heap Implementation

#include<bits/stdc++.h>
using namespace std;

int main(){

	int a[]={4,2,4,6,7,9,7,19,15};
	int n=sizeof(a)/sizeof(int);

	priority_queue<int, vector<int>, greater<int>>pq;

	for(int i=0;i<n;i++)
		pq.push(a[i]);

	while(!pq.empty()){
		cout<<pq.top()<<" ";
		pq.pop();
	}
	return 0;
}