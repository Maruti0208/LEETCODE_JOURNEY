class StockSpanner {
public:
    stack<pair<int,int>> s;
    int id=-1;
    StockSpanner() {
        id=-1;
         while(!s.empty()){
            s.pop();
         }

        
    }
    
    int next(int price) {
        id+=1;
        while(!s.empty() && price >= s.top().first ){
            s.pop();
        }
        int ans;
        if (s.empty()) ans = id+1;
        else {
          ans= id  -s.top().second;
        }
        s.push({price,id});
        return ans;
        
    }
};

/**
 * Your StockSpanner object will be instantiated and called as such:
 * StockSpanner* obj = new StockSpanner();
 * int param_1 = obj->next(price);
 */