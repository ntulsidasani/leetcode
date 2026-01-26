class Solution {
public:
    vector<vector<int>> minimumAbsDifference(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        unordered_map<int,vector<vector<int>>>diff;
        for(int i=0;i<arr.size()-1;i++){
            diff[arr[i+1]-arr[i]].push_back({arr[i],arr[i+1]});


        }
        int m=INT_MAX;
        for(auto a:diff){
            m=min(a.first,m);
        }
        return diff[m];
    }
};