class Solution {
public:
    int number(vector<int>A){
        int num=0;
        for(auto a:A){
            num=num*10+a;
        }
        return num;
    }
    int maximum69Number (int num) {
        vector<int>A;
        while(num>0){
            A.push_back(num%10);
            num/=10;
        }
        reverse(A.begin(),A.end());
        for(int i=0;i<A.size();i++){
            if(A[i]==6){
                A[i]=9;
                break;
            }
        }
        int n=number(A);
        return n;

        }
    
};