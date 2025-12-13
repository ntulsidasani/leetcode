class Solution {
public:
    int clumsy(int n) {
        vector<int>multiply;
        bool first = true;

        for (int i = n; i > 0; i -= 4) {
            int curr = i;

            if (i - 1 > 0) curr *= (i - 1);
            if (i - 2 > 0) curr /= (i - 2);
            if (i - 3 > 0) {
                if (first) curr += (i - 3);
                else curr -= (i - 3);
            }

            multiply.push_back(curr);
            first = false;
        }

        for(int i=1;i<multiply.size();i++){
            multiply[0]-=multiply[i];
        }
        return multiply[0];

        
    }
};