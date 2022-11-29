int getPairsCount(int arr[], int n, int k) {
        // code here
        sort(arr , arr+n);
        int count = 0 ;
        int j = n-1 ; 
        int i = 0;
        
        while(i < n){
            if(arr[i] + arr[j] == k ){
                count++;
                i++;
                j--;
            }
            else if(arr[i] + arr[j] > k ){
                j--;
            }
            else if(arr[i] + arr[j] < k ){
                i++;
            }
        }
        return count;
    }
