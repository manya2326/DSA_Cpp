class Solution{
public:
    int getPairsCount(int arr[], int n, int k) {
        map<int,int>m;
        int count=0;

           for(int i=0;i<n;i++){
              if(m[k-arr[i]]>=1)


               count+=m[k-arr[i]];
               m[arr[i]]++;


       }
       return count;
    }
};
