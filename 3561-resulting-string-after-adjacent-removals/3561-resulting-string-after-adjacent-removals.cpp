class Solution {
public:
    string resultingString(string s) {
        stack<char>heap;
        for(int i=0;i<s.size();i++){
            if(!heap.empty()){
                char a=heap.top();
                if(abs(a-s[i])==1 || abs(a-s[i])=='z'-'a'){
                    heap.pop();
                    continue;
                }

            }
            heap.push(s[i]);
        }
        string ans="";
        while(!heap.empty()){
            ans+=heap.top();heap.pop();
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};