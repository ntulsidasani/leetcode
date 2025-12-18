class Solution {
public:
    vector<int> sortJumbled(vector<int>& mapping, vector<int>& nums) {
        unordered_map<int,int>map;
        for(int i=0;i<mapping.size();i++)map[i]=mapping[i];
       
        priority_queue<vector<int>,vector<vector<int>>,greater<vector<int>>>heap;
        for(int i=0;i<nums.size();i++){
            string s=to_string(nums[i]);
            int num=0;
            for(auto a:s){
                num=num*10+map[a-'0'];
            }
            heap.push({num,i,nums[i]});
        }
        vector<int>ans;
        while(!heap.empty()){
            ans.push_back(heap.top()[2]);
            heap.pop();
        }
        return ans;
        
    }
};