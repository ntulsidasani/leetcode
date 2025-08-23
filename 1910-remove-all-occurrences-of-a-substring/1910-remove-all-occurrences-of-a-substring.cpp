class Solution {
public:
    string removeOccurrences(string &s, string part) {
        size_t pos=s.find(part);
        if(s.find(part)==string::npos)return s;
        
        
        s.erase(pos,part.size());

        
        return removeOccurrences(s,part);

    }
};