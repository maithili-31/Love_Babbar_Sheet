long long int inversionCount(long long arr[], long long N)
    {
        // Your Code Here
        int i , j , a ;
        i = a = 0 ;
        j = i+1;
        int count = 0 ;
        
//     TLE:
        while(j<N and i<N){
            if(arr[i] > arr[j]){
                count++;
                if(j != N-1){
                    j++;
                }
                else{
                    i++;
                    j = i+1;
                }
                
            } 
            else if(arr[i] < arr[j]){
                if(j != N-1){
                    j++;
                }
                else{
                    i++;
                    j = i+1;
                }
            }
        }
        return count;
    }
