class Solution {
public:
    long long calculateScore(vector<string>& instructions, vector<int>& values) {
        vector<bool>check(instructions.size(),true);
        long long ans=0;
        int n=instructions.size();
        long long i=0;
        while(i<n && check[i]){
            check[i]=false;
            if(instructions[i]=="jump"){
                i+=values[i];
                if(i<0)break;
            }else {
                ans+=values[i];
                i++;
            }
        }
        return ans;
    }
};