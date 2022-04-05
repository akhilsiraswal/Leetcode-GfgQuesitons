class Solution {
    int [][]dp;
    public int maxProfit(int[] prices) {
        dp=new int[2][prices.length];
        for(int i=0;i<dp.length;i++)
        Arrays.fill(dp[i],-1);
        return findMaxProfit(prices,0,false,0);
    }
    public int findMaxProfit(int []prices,int index,boolean sell,int prev_cost){
        if(index>=prices.length)
            return 0;
        /*if(sell){
            int val1=0;
            if(prices[index]>prev_cost){
                val1=prices[index]-prev_cost+findMaxProfit(prices,index+1,false,0);
            }
            int val2=findMaxProfit(prices,index+1,true,prev_cost);
            max=Math.max(val1,val2);
        }
        else{
            int val1=findMaxProfit(prices,index+1,true,prices[index]);
            int val2=findMaxProfit(prices,index+1,false,prev_cost);
            max=Math.max(val1,val2);
        }*/
        int max=0;
        if(dp[sell?1:0][index]!=-1)
            return dp[sell?1:0][index];
        for(int i=index;i<prices.length;i++){
            if(sell){
                if(prices[i]<prev_cost)
                    continue;
                //System.out.println("fuck");
                max=Math.max(max,prices[i]-prev_cost+findMaxProfit(prices,i+1,!sell,0));
            }
            else{
                max=Math.max(max,findMaxProfit(prices,i+1,!sell,prices[i]));
                 }
        }
        return dp[sell?1:0][index]=max;
    }
}