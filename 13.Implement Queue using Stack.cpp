//TC: Push: O(N), Pop: O(1)
//SC: O(N) 
class MyQueue {
public:
    stack<int> s1,s2;
    MyQueue() {
        
    }
    
    void push(int x) {
        s1.push(x);
    }
    
    int pop() {
        while(!s1.empty()){
            int x=s1.top();
            s1.pop();
            s2.push(x);
        }

        int valToBePopped=s2.top();
        s2.pop();

        while(!s2.empty()){
            int x=s2.top();
            s2.pop();
            s1.push(x);
        }

        return valToBePopped;
    }
    
    int peek() {
        while(!s1.empty()){
            int x=s1.top();
            s1.pop();
            s2.push(x);
        }

        int valToBePeeked=s2.top();
        

        while(!s2.empty()){
            int x=s2.top();
            s2.pop();
            s1.push(x);
        }

        return valToBePeeked;
    }
    
    bool empty() {
        return s1.empty() && s2.empty();
    }
};