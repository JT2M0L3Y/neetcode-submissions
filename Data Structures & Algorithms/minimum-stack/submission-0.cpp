class MinStack {
private:
    vector<int> s;
public:
    MinStack() {}
    
    void push(int val) {
        s.push_back(val);
    }
    
    void pop() {
        s.pop_back();
    }
    
    int top() {
        return s[s.size() - 1];
    }
    
    int getMin() {
        int minVal = s[0];
        for (int num : s) {
            if (num < minVal)
                minVal = num;
        }
        return minVal;
    }
};
