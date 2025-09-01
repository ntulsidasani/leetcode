class Solution {
public:
    vector<string> splitstring(const string& s) {
    vector<string> v;
    stringstream ss(s);
    string word;
    while (ss >> word) {
        v.push_back(word);
    }
    return v;
    }
    vector<string> printVertically(string s) {
        vector<string>words=splitstring(s);
        int size=0;
        
        for(auto a:words)size=max((int)a.size(),size);
        vector<string>ans(size,"");
        for(int i=0;i<size;i++){
            for(int j=0;j<words.size();j++){
                if(i<words[j].size())ans[i]+=words[j][i];
                else ans[i]+=' ';
            }
            while(!ans[i].empty() && ans[i].back()==' ')ans[i].pop_back();
        }
        
        return ans;
        
    }
};