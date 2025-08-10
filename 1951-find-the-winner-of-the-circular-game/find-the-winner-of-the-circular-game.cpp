class Solution {
public:
    int findTheWinner(int n, int k) {
        queue<int>heap;
        for(int i=1;i<=n;i++){
            heap.push(i);

        }
        while(heap.size()!=1){
            for(int i=0;i<k-1;i++){
                int x=heap.front();
                heap.pop();
                heap.push(x);

            }
            heap.pop();
        }
        return heap.front();
    }
};