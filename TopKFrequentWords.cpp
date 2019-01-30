// https://leetcode.com/problems/top-k-frequent-words/

class Solution {
public:
    
    static bool Compare(pair<string,int>&p1, pair<string,int>&p2){
        
        if(p1.second==p2.second)
            return p1.first<p2.first;
        return p1.second>p2.second;
    }
    
    vector<string> topKFrequent(vector<string>& words, int k) {
        
        if(words.size()==0) return {};
        map<string,int>Map;
        vector<string>v;
        for(auto it:words) Map[it]++;
        int siz=Map.size();
        pair<string,int>Pair[siz];
        int i=0;
        for(auto it:Map) Pair[i++]=make_pair(it.first,it.second);
        sort(Pair,Pair+siz,Compare);
        i=0;
        while(k--)
            v.push_back(Pair[i++].first);
            
        
        return v;
    }
};