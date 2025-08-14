class Solution {
public:
    string largestGoodInteger(string num) {
        vector<string>ans={"000","111","222","333","444","555","666","777","888","999"};
        for(int i=0;i<num.size()-2;i++){
            string a=num.substr(i,3);
            if(a==ans[num[i]-'0'])return a;


        }
        return "";
    }
};