class Solution {
public:
    bool nozero(int n){
        string a=to_string(n);
        for(auto b:a){
            if(b=='0')return false;


        }
        return true;
    }
    vector<int> getNoZeroIntegers(int n) {
        if(nozero(n-1))return {1,n-1};
        vector<int>ans={2,n-2};

        while(!nozero(ans[1])){
            ans[1]--;
            ans[0]++;

        }
        return ans;
       
       
        
    }
};