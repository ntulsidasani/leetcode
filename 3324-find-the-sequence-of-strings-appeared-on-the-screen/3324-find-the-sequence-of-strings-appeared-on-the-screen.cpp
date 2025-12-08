class Solution {
public:
    vector<string> stringSequence(string target) {
        vector<string>ans;
        string a="";
        for(int i=0;i<target.size();i++){
            char req=target[i];
            a+='a';
            ans.push_back(a);
            while(a.back()!=req){
                a.back()++;
                ans.push_back(a);
            }
        }
        return ans;
        
    }
};