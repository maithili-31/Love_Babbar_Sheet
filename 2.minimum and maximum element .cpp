pair<long long, long long> getMinMax(long long a[], int n) {
    long long m = 0 , p = a[0];
    for(int i= 0 ; i < n ; i++){
        if(m < a[i]){
            m = a[i];
        }
        if (p > a[i]){
            p = a[i];
        } 
    }
    return make_pair(p , m);
}
