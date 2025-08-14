class Solution {
public:
    long long dividePlayers(vector<int>& skill) {
        sort(skill.begin(),skill.end());
        long long ans=0;
        int a=skill[0]+skill[skill.size()-1];
        for(int i=0;i<skill.size()/2;i++){

            int x=skill[i]+skill[skill.size()-1-i];
            if(x!=a)return -1;
            else ans+=skill[i]*skill[skill.size()-1-i];
        }
        return ans;
    }
};