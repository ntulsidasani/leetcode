class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        int counter=0;
        stack<int>heap;
        for(int i=0;i<pushed.size();i++){
            heap.push(pushed[i]);
            while(!heap.empty() && heap.top()==popped[counter]){
                heap.pop();
                counter++;
            }
        }
        return heap.empty();
    }
};