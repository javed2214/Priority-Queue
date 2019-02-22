// You've given Multiple Coordinates, Find out That Coordinate which have Maximum Distance from Origin

#include<bits/stdc++.h>
using namespace std;

double calDistance(int p, int q){

	double x=sqrt(pow(abs(p),2)+pow(abs(q),2));
	return x;
}

int main(){

	vector <pair<int,int>> vp;
	vp={{2,4},{6,1},{12,5},{3,4},{-2,10},{-3,-5},{-5,-7}};
	int n=vp.size();

	int p,q;
	double dis;

	priority_queue <pair<double,int>> pq;

	for(int i=0;i<n;i++){
		p=vp[i].first;
		q=vp[i].second;
		dis=calDistance(p,q);
		pq.push(make_pair(dis,i));
	}
	cout<<"Distance From Origin: "<<pq.top().first;
	cout<<"\nCoordinate: ("<<vp[pq.top().second].first<<","<<vp[pq.top().second].second<<")";

	return 0;
}