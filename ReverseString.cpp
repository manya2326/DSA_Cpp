//return the address of the string
char* reverse(char *S, int len)
{

    char *a;
    stack<char>s;
    for(int i=0;i<len;i++){
        s.push(S[i]);
    }
    for(int i=0;i<len;i++){
        S[i]=s.top();
       s.pop();
    }
    return S;
}
