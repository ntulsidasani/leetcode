class Solution {
public:
    int minSetSize(vector<int>& arr) {
        unordered_map<int,int>freq;
        for(auto a:arr)freq[a]++;
        priority_queue<pair<int,int>>heap;
        for(auto a:freq)heap.push({a.second,a.first});
        set<int>ans;
        int n=arr.size();
        while(n>arr.size()/2){
            ans.insert(heap.top().second);
            n-=heap.top().first;
            heap.pop();
        }
        return ans.size();
    }
};