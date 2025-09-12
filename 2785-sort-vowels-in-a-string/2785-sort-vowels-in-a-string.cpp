class Solution {
public:
    string sortVowels(string s) {
        vector<int>index;
        vector<char>vowel;
        for(int i=0;i<s.size();i++){
            char ch=s[i];
            if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
    ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U') {
        index.push_back(i);
        vowel.push_back(ch);
    }
    
        }
        sort(vowel.begin(),vowel.end());
        
        for(int i=0;i<index.size();i++){
            s[index[i]]=vowel[i];
        }
        return s;
        
    }
};