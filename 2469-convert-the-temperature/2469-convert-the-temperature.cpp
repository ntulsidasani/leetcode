class Solution {
public:
    vector<double> convertTemperature(double celsius) {
        vector<double>ans(2);
        ans[0]=(celsius+273.15)/1.00000;
        ans[1]=(celsius*1.80+32.00)/1.00000;
        return ans;


    }
};