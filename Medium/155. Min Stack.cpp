class MinStack {
        int stack[100000];
        int index, min;
    public:
        MinStack() {
            index = -1;
            min = INT_MAX;
        }

        void push(int val) {
            stack[++index] = val;
            if(val<min) min = val;
        }

        void pop() {
            index--;
            min = INT_MAX;
            for(int i=0; i<=index; i++) {
                if(stack[i]<min) min = stack[i];
            }
        }

        int top() {
            return stack[index];
        }

        int getMin() {
            return min;
        }
};