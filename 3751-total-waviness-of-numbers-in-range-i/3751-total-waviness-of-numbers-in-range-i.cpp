class Solution {
public:
    int totalWaviness(int num1, int num2) {
        int ans=0;
        for(int i=num1;i<=num2;i++){
            string s=to_string(i);
            if(s.size()<3)continue;
            else{
                for(int j=1;j<s.size()-1;j++){
                   int left=s[j-1],right=s[j+1],mid=s[j];
                   if(mid>left && mid>right)ans++;
                   else if(mid<left && mid<right)ans++;
                }
            }
        }
        return ans;
    }
};