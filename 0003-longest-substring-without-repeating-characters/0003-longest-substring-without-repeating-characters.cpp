class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left=0,right=0;
        int ans=0;
       
        set<char>freq;
        while(right<s.size()){
            if(!freq.count(s[right])){
                freq.insert(s[right]);
                ans=max(right-left+1,ans);
                right++;
            }else{
                freq.erase(s[left]);
                left++;
            }

        }
        return ans;
        
        

    }
};