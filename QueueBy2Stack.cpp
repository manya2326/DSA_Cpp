//Function to push an element in queue by using 2 stacks.
void StackQueue :: push(int x) {
    while (!s1.empty()) {
        s2.push(s1.top());
        s1.pop();
    }
    s1.push(x);
    while(!s2.empty()) {
        s1.push(s2.top());
        s2.pop();
    }
}

int StackQueue :: pop(){
    if (s1.empty()) return -1;
    int res = s1.top();
    s1.pop();
    return res;
}
