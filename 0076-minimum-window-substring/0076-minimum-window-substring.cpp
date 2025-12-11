class Solution {
public:
    string minWindow(string s, string t) {
        if(s=="" || t=="")return "";

        unordered_map<char,int>freq;
        for(auto &a:t)freq[a]++;

        int left=0,right=0;
        int ans=INT_MAX;
        int req=freq.size(),have=0,start=-1;

        unordered_map<char,int>freq2;
        while(right<s.size()){
            freq2[s[right]]++;

            if(freq.count(s[right]) && freq[s[right]]==freq2[s[right]]){
                have++;
            }
            while(req==have){
                if(right-left+1<ans){
                    ans=right-left+1;
                    start=left;

                }
                freq2[s[left]]--;
                if(freq.count(s[left]) && freq2[s[left]]<freq[s[left]]){
                    have--;
                }
                left++;
            }
            right++;

        }  
        return (ans==INT_MAX)?"":s.substr(start,ans);      


    }
};