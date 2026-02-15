class Solution {
public:
    vector<int> toggleLightBulbs(vector<int>& bulbs) {
        vector<bool>on(101,false);
        for(auto a:bulbs){
            if(!on[a])on[a]=true;
            else on[a]=false;
        }
        vector<int>ans;
        for(int i=1;i<101;i++){
            if(on[i])ans.push_back(i);
        }
        return ans;
    }
};