int i , j , a ;
        i = j = a = 0 ;
        int count = 0 ;
        // for(int i = a+1 ; i< N ; i++){
        //     if(arr[a] >= arr[j]){
                
        //     }
        while(j<N and i<N){
            j = i+1 ; 
            if(arr[i] > arr[j] ){
                count++;
            }
