long long int inversionCount(long long arr[], long long N)
    {
        // Your Code Here
//         TLE:
        int i , j , a ;
        i = a = 0 ;
        j = i+1;
        int count = 0 ;
        // int b[N];
        // for(int i = 0 ; i < N ; i++){
        //     b[i] = arr[i];
        // }
        // sort(b,b+N);
        
        
        while(j<N and i<N){
            if(arr[i] > arr[j] and (j != N-1)){
                count++;
                j++;
            }
            else if(arr[i] < arr[j] and  (j != N-1)){
                j++;
            }
            
            else if(arr[i] > arr[j] and (j == N-1)){
                count++;
                i++;
                j = i+1;
            }
            
            else if(arr[i] < arr[j] and (j == N-1)){
                i++;
                j = i+1;
            }
        }
        return count;
    }
