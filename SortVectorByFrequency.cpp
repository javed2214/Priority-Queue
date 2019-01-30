// Sort Vector By Frequency using Priority Queue

#include<bits/stdc++.h>
using namespace std;

int main(){

	std::vector<int> v={1,2,3,1,1,1,3,4,4,5,5,3,4,3,3,3};
	std::map<int,int> Map;
	for(auto it:v) Map[it]++;
	priority_queue<pair<int,int>> pq;
	for(auto it:Map) pq.push(make_pair(it.second,it.first));
	v.clear();
	int siz=Map.size();
	while(siz--){
		int x=pq.top().first;
		while(x--)
			v.push_back(pq.top().second);
		pq.pop();
	}
	for(auto it:v) cout<<it<<" ";

	return 0;
}