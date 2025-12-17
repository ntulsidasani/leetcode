class Solution {
public:
    int maximumGain(string s, int x, int y) {
        stack<char>heap;
        string first=(x>y)?"ab":"ba";
        string second=(first=="ab")?"ba":"ab";
        int ans=0;
        for(int i=0;i<s.size();i++){
            heap.push(s[i]);
            if(heap.size()>=2){
                char a=heap.top();
                heap.pop();
                char b=heap.top();
                heap.pop();
                if(a==first[1] && b==first[0])ans+=max(x,y);
                else {
                    heap.push(b);
                    heap.push(a);
                }
            }
        }
        string ss="";
        while(!heap.empty()){
            ss+=heap.top();
            heap.pop();
        }
        reverse(ss.begin(),ss.end());
        for(int i=0;i<ss.size();i++){
            heap.push(ss[i]);
            if(heap.size()>=2){
                char a=heap.top();
                heap.pop();
                char b=heap.top();
                heap.pop();
                if(a==second[1] && b==second[0])ans+=min(x,y);
                else {
                    heap.push(b);
                    heap.push(a);
                }
            }
        }
        return ans;

    }
};