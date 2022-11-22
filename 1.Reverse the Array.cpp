#include <iostream>
using namespace std;

// this can be also used 
// void swap(int *a, int *b){
//     int temp = *a;
//     *a = *b ;
//     *b = temp;
// };

int main(){
	//code
	int T , temp , n ;
	cin>>T;
	for(int i= 0 ; i<T ; i++){
	    cin>>n;
	    int arr[n];
	    for(int i = 0 ; i<n ; i++){
	        cin>>arr[i]; 
	    }
	    for(int i = 0 ; i<n/2 ; i++){
	       // swap(arr[i],arr[n-i-1]);
	        temp = arr[i];
            arr[i] = arr[n-i-1] ;
            arr[n-i-1] = temp;
	    }
	    for(int i = 0 ; i<n ; i++){
	        cout<<arr[i]<<" "; 
	    }
	    cout<<endl;
	}
	return 0;
}
