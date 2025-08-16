class Solution {
public:
    
    vector<int> minOperations(string boxes) {
        vector<int>index;
        for(int i=0;i<boxes.size();i++){
            if(boxes[i]=='1')index.push_back(i);
        }
        vector<int>ans;

        for(int i=0;i<boxes.size();i++){
            int steps=0;
            for(auto a:index){
                steps+=abs(a-i);
            }
            ans.push_back(steps);

        }
        return ans;
        
    }
};