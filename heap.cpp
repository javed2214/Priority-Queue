// Heap Implementation
// Program to Sort Charaters of String using Priority Queue

#include<bits/stdc++.h>
using namespace std;

int main(){

	string str="aggafadsdafsdadfadfs";
	string s;
	map<char,int> Map;
	for(auto it:str) Map[it]++;
	priority_queue<pair<char,int>>pq;
	for(auto it:Map) pq.push(make_pair(it.second,it.first));
	int siz=pq.size();
	while(siz--){
		int x=pq.top().first;
		while(x--)
			s+=pq.top().second;
		pq.pop();
	}
	cout<<s;

	return 0;
}