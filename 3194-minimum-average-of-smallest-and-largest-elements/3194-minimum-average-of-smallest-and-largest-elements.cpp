class Solution {
public:
    double minimumAverage(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        deque<int>dq(nums.begin(),nums.end());
        vector<double>avg;
        while(!dq.empty()){
            double x=(dq.front()+dq.back())/2.00000;
            avg.push_back(x);
            if(!dq.empty())dq.pop_front();
            if(!dq.empty())dq.pop_back();
        }
        return *min_element(avg.begin(),avg.end());

    }
};