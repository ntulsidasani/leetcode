class Solution {
public:
    int maxSumDivThree(vector<int>& nums) {
        int sum=0;
        priority_queue<int,vector<int>,greater<int>>one,two;
        for(int i=0;i<nums.size();i++){
            if(nums[i]%3==1)one.push(nums[i]);
            else if(nums[i]%3==2)two.push(nums[i]);
            sum+=nums[i];
        }
        int rem1=INT_MAX,rem2=INT_MAX;
        if(sum%3==1){
            if(!one.empty()){
                rem1=one.top();
                one.pop();
            }
            if(two.size()>=2){
                int a=two.top();two.pop();
                rem2=a+two.top();two.pop();
            }
            return sum-min(rem1,rem2);
        }
        if(sum%3==2){
            if(!two.empty()){
                rem2=two.top();
                two.pop();
            }
            if(one.size()>=2){int a=one.top();one.pop();
            rem1=a+one.top();one.pop();
            }
            return sum-min(rem1,rem2);
        }
        return sum;
    
        

    }
};