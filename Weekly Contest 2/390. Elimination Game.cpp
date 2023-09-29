class Solution {
public:
    int lastRemaining(int n) {
        bool left = true;
        int head = 1, step = 1, remain = n;
        
        while(remain>1){
            if(left || remain&1){
                head += step;
            }
            
            step*=2;
            remain /= 2;
            left = !left;
        }
        
        return head;
    }
};


// Solution 2

class Solution {
public:
    int lastRemaining(int n) {
        if(n==1){
            return n;
        }
        return 2 * (1 + n/2 - lastRemaining(n/2));
    }
};
