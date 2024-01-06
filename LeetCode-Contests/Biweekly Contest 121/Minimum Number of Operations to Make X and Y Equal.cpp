class Solution {
public:
    int minimumOperationsToMakeEqual(int x, int y) {
        queue<int> q;
        unordered_set<int> visited;
        q.push(x);
        int operations = 0;

        while (!q.empty()) {
            int size = q.size();
            for (int i = 0; i < size; ++i) {
                int current = q.front();
                q.pop();

                if (current == y) {
                    return operations;
                }

                if (visited.count(current) > 0) {
                    continue;
                }

                visited.insert(current);

                // Increment and decrement
                q.push(current + 1);
                if (current > 1) {
                    q.push(current - 1);
                }

                // Divide by 11 and 5 if possible 
                if (current % 11 == 0) {
                    q.push(current / 11);
                }

                if (current % 5 == 0) {
                    q.push(current / 5);
                }
            }

            operations++;
        }

        return -1;
    }
};
