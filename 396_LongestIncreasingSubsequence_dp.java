class DSA{
   
    static int longestSubsequence(int n, int a[])
    {
        int[] dp = new int[n+1];
        dp[0] = 1;
        for(int i = 1;i < n;i++){
            dp[i] = 1;
            for(int j = 0;j < i;j++){
                if(a[i] > a[j]){
                    dp[i] = Math.max(dp[i] , dp[j] + 1);
                }
            }
        }
        int jawab = 0;
        for(int i = 0;i < n;i++){
            jawab = Math.max(jawab, dp[i]);
        }
        return jawab;
    }
    
    public static void main(String[] args) {
        int[] arr = {5,2,4,3,4};
        System.out.println(longestSubsequence(5, arr));
    }
}