class Solution {
public:
    string evaluate(string s, vector<vector<string>>& knowledge) {
        
        unordered_map<string,string>map;
        for(auto a:knowledge)map[a[0]]=a[1];
        string temp="";
        string ans="";
        bool open=false;
        for(int i=0;i<s.size();i++){
            if(!open && s[i]!='(')ans.push_back(s[i]);
            else if(!open && s[i]=='(')open =true;
            else if(open && s[i]!=')')temp.push_back(s[i]);
            else {
                open=false;
                ans+=(map.count(temp))?map[temp]:"?";
                temp="";
            }
        }
        return ans;
    }
};