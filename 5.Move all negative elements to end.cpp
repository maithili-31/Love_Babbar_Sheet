class Solution{
    public:
    void segregateElements(int arr[],int n)
    {
        // Your code goes here
        int a=0;
        int b[n];
        for(int i = 0; i<n ; i++){
            if(arr[i]>0){
                b[a]=arr[i];
                a++;
            }
        }
        // m=a;
        for(int i = 0; i<n ; i++){
            if(arr[i]<0){
                b[a]=arr[i];
                a++;
            }
        }
        for(int i = 0; i<n ; i++){
            arr[i]=b[i];
        }
    }
};
