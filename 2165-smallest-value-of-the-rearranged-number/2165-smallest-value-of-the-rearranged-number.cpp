class Solution {
public:
    long long smallestNumber(long long num) {
        
        if(num>0){
            string s=to_string(num);
            sort(s.begin(),s.end());
            int ind=0;
            while(ind<s.size() && s[ind]=='0')ind++;
            if(ind<s.size())swap(s[0],s[ind]);
            return stoll(s);
        }else{
            string s=to_string(num*-1);
            sort(s.begin(),s.end(),greater<char>());
            return -1*stoll(s);
        }
        return -1;
    }
};