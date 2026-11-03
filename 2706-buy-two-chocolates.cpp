class Solution {
public:
    int buyChoco(vector<int>& prices, int money) {
        int min = INT_MAX;
        int sec_min = INT_MAX;

        for(int price : prices){
            if(price < min){
                sec_min = min;
                min = price;
            }
              
            else if(price < sec_min ){
                sec_min = price;
            }
        }
      
        int total = min + sec_min;
        if(total <= money)
            return money-total;
        else
            return money;
        
    }
};
