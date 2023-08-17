//Function to push an element into stack using two queues.
void QueueStack :: push(int x) {
    q1.push(x);
}

int QueueStack :: pop() {
    if(!q1.size()) return -1;

    int x;

    while(q1.size() > 1) {
        x = q1.front();
        q1.pop();
        q2.push(x);
    }
    x = q1.front();
    q1.pop();
    while(q2.size()) {
        q1.push(q2.front());
        q2.pop();
    }

    return x;
}
