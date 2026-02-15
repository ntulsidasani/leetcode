class Solution {
public:
    pair<char,char> add(char a,char b,char c){
        if(a=='0' && b=='0'){
            if(c=='1')return {'1','0'};
            else return {'0','0'};
        }
        else if((a=='0' && b=='1')||(b=='0' && a=='1') ){
            if(c=='1')return {'0','1'};
            else return {'1','0'};
        }else if(a=='1'&& b=='1'){
            if(c=='1')return {'1','1'};
            else return {'0','1'};
        }
        return {0,0};
    }
    string addBinary(string a, string b) {
        if(a.size()>b.size()){
            string s(a.size()-b.size(),'0');
            b=s+b;
        }else{
            string s(b.size()-a.size(),'0');
            a=s+a;
        }
        string ans="";
        char c='0';
        for(int i=a.size()-1;i>=0;--i){
            pair<char,char>A=add(a[i],b[i],c);
            c=A.second;
            ans.push_back(A.first);
        }
        if(c=='1')ans.push_back(c);
        reverse(ans.begin(),ans.end());
        return ans;
        
    }
};