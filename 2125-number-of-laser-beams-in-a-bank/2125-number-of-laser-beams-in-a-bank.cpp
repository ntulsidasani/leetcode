class Solution {
public:
    int bits(string n) {
        int ans=0;
        for(auto a:n){
            if(a=='1')ans++;
        }
        return ans;
    }

    int numberOfBeams(vector<string>& bank) {
        vector<int>A;
        int ans=0;
        for(auto a:bank){
            if(bits(a)!=0)A.push_back(bits(a));

        }
        for(int i=0;i<A.size()-1;i++){
            ans+=A[i]*A[i+1];
        }
        return ans;
    }
};