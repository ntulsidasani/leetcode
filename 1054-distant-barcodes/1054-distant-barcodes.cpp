class Solution {
public:
    vector<int> rearrangeBarcodes(vector<int>& barcodes) {
        if(barcodes.size()<=2)return barcodes;
        unordered_map<int,int>freq;
        for(auto a:barcodes)freq[a]++;
        priority_queue<pair<int,int>>heap;
        for(auto [a,b]:freq){
            heap.push({b,a});
        }
        vector<int>ans;
        while(!heap.empty()){
            auto a=heap.top();
            heap.pop();
            auto b=heap.top();
            heap.pop();
            ans.push_back(a.second);
            ans.push_back(b.second);
            if(a.first-1>0)heap.push({a.first-1,a.second});
            if(b.first-1>0)heap.push({b.first-1,b.second});

        }
        return ans;
    }
};