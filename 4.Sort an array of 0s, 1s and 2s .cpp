void sort012(int a[], int n)
    {
        // code here
        // brute force 
        int m = 0;
        int b[n];
        for(int i = 0 ; i<n ; i++){
            if (a[i] == 0){
                b[m] = a[i] ;
                m++;
            }
        }
        for(int i = 0 ; i<n ; i++){
            if (a[i] == 1){
                b[m] = a[i] ;
                m++;
            }
        }
        for(int i = 0 ; i<n ; i++){
            if (a[i] == 2){
                b[m] = a[i] ;
                m++;
            }
        }
        for(int i = 0 ; i<n ; i++){
            a[i] = b[i];
        }
//     optimised approach
//     int l = 0, r = n - 1, m = 0;
//         while (m <= r) {
//             if (a[m] == 0) {
//                 swap(a[l], a[m]);
//                 l++;
//             }
//             if (a[m] == 2) {
//                 swap(a[m], a[r]);
//                 r--;
//                 continue;
//             }
//             m++;
//         }
    }
