class Solution
{
    public:
    int peakElement(int arr[], int n)
    {
       for(int i=0;i<n;i++){
           if(i==0){
               if(arr[i]>arr[i+1]) return i;

           }
           if(i==n-1){
               if(arr[i]>arr[i-1]) return i;
           }
           if((arr[i]>=arr[i+1])&&(arr[i]>=arr[i-1]))
           return i;
       }
    }
};
