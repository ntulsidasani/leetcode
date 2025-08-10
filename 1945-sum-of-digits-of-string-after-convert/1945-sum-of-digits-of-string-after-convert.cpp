class Solution {
public:
    int digsum(long long n){
        int ans=0;
        while(n>0){
            ans+=n%10;
            n=n/10;
        }
        return ans;
    }
    int getLucky(string s, int k) {
        int num=0;
        unordered_map<char,int>freq;
        for(int i=0;i<26;i++){
            freq['a'+i]=i+1;
        }
        for(auto a:s){
            int x=freq[a];
            while(x>0){
                num+=x%10;
                x/=10;
            }
        }
        
        for(int i=1;i<k;i++){
            num=digsum(num);
        }
        return num;
        
    }
};