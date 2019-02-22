// Program to Find 'k' Closest Points to the Origin

#include<bits/stdc++.h>
using namespace std;

double calDistance(int x, int y){

	double z=sqrt(pow(x,2)+pow(y,2));
	return z;
}

int main(){

	vector <pair<int,int>> vp;
	vp={{3,3},{5,-1},{-2,4}};
	int k=2;

	int n=vp.size();

	typedef pair <double,int> pi;
	priority_queue <pi,vector<pi>,greater<pi>> pq;

	int x,y;
	double z;

	for(int i=0;i<n;i++){
		x=vp[i].first;
		y=vp[i].second;
		z=calDistance(x,y);
		pq.push(make_pair(z,i));
	}
	while(k--){
		cout<<"("<<vp[pq.top().second].first<<","<<vp[pq.top().second].second<<")\n";
		pq.pop();
	}

	return 0;
}
