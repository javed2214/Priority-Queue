// Program to Merge k Sorted Arrays
// Using Min Heap

#include<bits/stdc++.h>
using namespace std;

vector<int> mergeArrays(vector<vector<int>> &v){

	priority_queue<int,vector<int>,greater<int>>pq;
	vector<int> x;

	for(auto it:v){
		for(auto ptr:it)
			pq.push(ptr);
	}
	while(!pq.empty()){
		x.push_back(pq.top());
		pq.pop();
	}
	return x;
}

int main(){

	vector<vector<int>> v={{2,6,12},{1,9},{23,34,90,2000}};

	vector<int> x;
	x=mergeArrays(v);

	for(auto it:x) cout<<it<<" ";

	return 0;
}