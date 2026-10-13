class Solution {
public:
    int calPoints(vector<string>& operations) {
        stack<int> ops;

        for (string op : operations) {
            if (op == "+")
                sumOps(ops);
            else if (op == "C")
                ops.pop();
            else if (op == "D")
                ops.push(ops.top() * 2);
            else
                ops.push(stoi(op));
        }

        return sumStack(ops);
    }
private:
    void sumOps(stack<int>& ops) {
        int first = ops.top();
        ops.pop();
        int second = ops.top();
        ops.push(first);
        ops.push(first + second);
    }

    int sumStack(stack<int> ops) {
        int total = 0;
        while (!ops.empty()) {
            total += ops.top();
            ops.pop();
        }
        return total;
    }
};