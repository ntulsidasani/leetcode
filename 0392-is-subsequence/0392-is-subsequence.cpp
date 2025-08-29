class Solution {
public:
    bool isSubsequence(string s, string t) {
        queue<char>heap(t.begin(),t.end());
        int i=0;
        while(!heap.empty()){
            char a=heap.front();
            heap.pop();
            if(a==s[i])i++;
        }
        return i==s.size();
        
    }
};