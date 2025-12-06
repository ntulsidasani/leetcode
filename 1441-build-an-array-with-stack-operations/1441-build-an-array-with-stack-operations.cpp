class Solution {
public:
    vector<string> buildArray(vector<int>& target, int n) {
        vector<string>ans;
        int counter=1;
        for(int i=0;i<target.size();i++){
            ans.push_back("Push");
            if(target[i]!=counter){
                ans.push_back("Pop");
                
                i--;
            }
            counter++;
        }
        return ans;
        
    }
};