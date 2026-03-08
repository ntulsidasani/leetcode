class Solution {
public:
    int minimumIndex(vector<int>& capacity, int itemSize) {
        int index=-1;
        int curr=INT_MAX;
        for(int i=0;i<capacity.size();i++){
            if(capacity[i]==itemSize)return i;
            else if(capacity[i]>itemSize && capacity[i]<curr){
                index=i;
                curr=capacity[i];
            }
        }
        return index;
    }
};