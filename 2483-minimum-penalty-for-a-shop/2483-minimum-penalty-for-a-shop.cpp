class Solution {
public:
    int bestClosingTime(string customers) {
        vector<int>prefsum(customers.size());
        prefsum[0]=(customers[0]=='Y')?1:-1;
        for(int i=1;i<customers.size();i++){
            prefsum[i]=prefsum[i-1];
            prefsum[i]+=(customers[i]=='Y')?1:-1;
            

        }
        int ans=0,idx=-1;
        for(int i=0;i<prefsum.size();i++){
            if(prefsum[i]>ans){
                ans=prefsum[i];
                idx=i;
            }
        }
        return idx+1;

    }
};