class Solution {
public:
    vector<int> occurrencesOfElement(vector<int>& nums, vector<int>& queries, int x) {
        vector<int>index;
        for(int i=0;i<nums.size();i++){
            if(nums[i]==x)index.push_back(i);
        }
        for(auto &a:queries){
            if(a<=index.size()){
                a=index[a-1];
            }else{
                a=-1;
            }
        }
        return queries;
    }
};