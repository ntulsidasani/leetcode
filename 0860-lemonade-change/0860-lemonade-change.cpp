class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int five=0;
        int ten=0;
        for(auto a:bills){
            if(a==5)five++;
            else if(a==10){
                if(five==0)return false;
                five--;
                ten++;
            }
            else{
                if(!((five>=3) || (five>0 && ten>0)))return false;
                if(five>0 && ten>0){
                    five--;
                    ten--;
                }else five-=3;
            }
        }
        return true;
    }
};