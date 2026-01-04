class Solution {
public:
    int factors(int n){
        int ans=0;
        int count=0;
        for(int i=1;i*i<=n;i++){
            if(n%i==0){
                int a=n/i;
                if(a!=i){
                    ans+=i;
                    ans+=n/i;
                    count+=2;
                }else{
                    ans+=i;
                    count++;
                } 
            } 
        }
        if(count==4)return ans;
        return -1;

    }
    int sumFourDivisors(vector<int>& nums) {
        int ans=0;
        for(auto a:nums){
            int check=factors(a);
            if(check!=-1){
                ans+=check;
            }
        }
        return ans;
    }
};