int doUnion(int a[], int n, int b[], int m)  {
        sort(a, a+n );
        sort(b , b+m);
        int u[m+n];
        // int count = m+n; 
        int i , j , k;
        i = j = k = 0 ;
        while( i<n and j<m){
            if(a[i] == a[i-1]){
                i++;
            }
            
            else if(b[j] == b[j-1]){
                j++;
            }
            
            else if(a[i] < b[j] and a[i] != a[i-1]){
                u[k] = a[i];
                i++;
                k++;
            }
            
            else if(a[i] > b[j] and b[j] != b[j-1]){
                u[k] = b[j];
                j++;
                k++;
            }
            else{
                u[k] = a[i];
                i++;
                j++;
                k++;
            }
        }
        
        while(i<n){
            if(a[i] == a[i-1]){
                i++;
            }
            
            else if(b[j] == b[j-1]){
                j++;
            }
            else{
                u[k] = a[i] ;
                i++;
                k++;
            }
        }
        while(j<m){
            if(a[i] == a[i-1]){
                i++;
            }
            
            else if(b[j] == b[j-1]){
                j++;
            }
            else{
                u[k] = b[j] ;
                j++;
                k++;
            }
        }
        return k;
    }
