int maxProfit(vector<int>& prices) {
        int min = prices[0] ;
        int a = 0;
        int n= prices.size();
        for(int i = 0 ; i < n ; i++){
            if(min > prices[i]){
                min = prices[i];
                a = i;
            }
        }
        cout<<a;
        int max = prices[a];
        if(a != n-1 ){
            for(int i = a+1 ; i < n ; i++){
                if(max < prices[i]){
                    max = prices[i];
                }
            }
            return max-min;
        }
        else{
            int min = prices[0];
            int max = prices[0] ;
            int flag = 0;
            for(int i = 1 ; i < n-1 ; i++){
                if(max < prices[i]){
                    max = prices[i];
                    flag = i ; 
                }
            }

            for(int i = 0 ; i < flag ; i++){
                if(min > prices[i]){
                    min = prices[i];
                }
            }
            if(flag != 0 ){
                return max-min;
            }
        }
        return 0 ;
    }
