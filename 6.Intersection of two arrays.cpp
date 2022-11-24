int NumberofElementsInIntersection(int a[], int b[], int n, int m) {
        // Your code goes here
        sort(a , a+n );
        sort(b , b+m);
        int i , j , count;
        i = j = count = 0;
        while(i< n and j< m){
            if(a[i] == a[i-1]){
                i++;
            }
            
            else if(b[j] == b[j-1]){
                j++;
            }
            
            else if(a[i] == b[j] and a[i] != a[i-1] and b[j] != b[j-1]){
                i++;
                j++;
                count++;
            }
            else if(a[i] < b[j]){
                i++;
            }
            else if(a[i] > b[j]){
                j++;
            }
        }
        return count;
    }
