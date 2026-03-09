class Solution {
public:
    char to_lower(char a){
        return (a>='A' && a<='Z')?a+('a'-'A'):a;
    }
    string rem(string s){
        string ans="";
        for(auto &a:s){
            if(a>='0' && a<='9')ans.push_back(a);
        }
        return ans;
    }
    int index(string s){
        
        for(int i=0;i<s.size();i++){
            if(s[i]=='@')return i; 
        }
        return -1;
    }
    string maskPII(string s) {
        int idx=index(s);
        if(idx!=-1){
            char a=to_lower(s[0]);
            char b=to_lower(s[idx-1]);
            string str=s.substr(idx);
            for(auto &a:str)a=to_lower(a);
            string ast="*****";
            string ans=a+ast+b+str;
            return ans;
        }
        s=rem(s);
        int n=s.size();
        string x=s.substr(n-4);
        if(n==10){
            string ast="***-***-";
            return ast+x;
        }
        else if(n==11){
            string ast="+*-***-***-";
            return ast+x;
        }else if(n==12){
            string ast="+**-***-***-";
            return ast+x;
        }else{
            string ast="+***-***-***-";
            return ast+x;
        }
        return "";
    }
};