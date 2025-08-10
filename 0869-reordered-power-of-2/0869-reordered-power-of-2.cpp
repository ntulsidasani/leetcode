class Solution {
public:
    
    bool reorderedPowerOf2(int n) {
        vector<string>pow2;
        int num=1;
        while(num<1000000000){
            string s=to_string(num);
            
            sort(s.begin(),s.end());
            pow2.push_back(s);
            num=num*2;
        } 
        string req=to_string(n);
        sort(req.begin(),req.end());
        auto it=find(pow2.begin(),pow2.end(),req);
        if(it==pow2.end())return false;
        else return true;
    }
};