class Solution {
public:
    char first(vector<char>A,char target){
        int left=0,right=A.size()-1;
        char ans=A[0];
        while(left<=right){
            int mid=(left+right)/2;
            if(A[mid]>target){
                right=mid-1;
                ans=A[mid];
            }
            else {
                left=mid+1;
            }
            
        }
        return ans;
    }
    char nextGreatestLetter(vector<char>& letters, char target) {
        char ans=first(letters,target);
        return ans;
    }
};