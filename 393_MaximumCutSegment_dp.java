import java.util.*;

class DSA{
    public static int prkriya(int n, int x, int y, int z, int[] dp){
        if(n < 0){
            return Integer.MIN_VALUE;
        }
        if(n == 0){
            return 0;
        }
        if(dp[n] != -1){
            return dp[n];
        }
        int a = prkriya(n-x, x, y, z, dp);
        int b = prkriya(n-y, x, y, z, dp);
        int c = prkriya(n-z, x, y, z, dp);
        return dp[n] = Math.max(a , Math.max(b , c)) + 1;
    }
    
    public static int maximizeCuts(int n, int x, int y, int z)
    {
       int[] dp = new int[n+1];
       Arrays.fill(dp,-1);
       int jawab =  prkriya(n, x, y, z, dp);
       return jawab < 0 ? 0 : jawab;
    }
    public static void main(String[] args) {
        System.out.println(maximizeCuts(50,2,10,5));
    }
}