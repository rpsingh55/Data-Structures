import java.io.*;
import java.util.*; 
class GFG{
    public static void main(String args[]) throws IOException { 
        BufferedReader read = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(read.readLine());
        while(t-- > 0){
            String input_line[] = read.readLine().trim().split("\\s+");
            int n1 = Integer.parseInt(input_line[0]);
            int n2 = Integer.parseInt(input_line[1]);
            int n3 = Integer.parseInt(input_line[2]);
            input_line = read.readLine().trim().split("\\s+");
            String A = input_line[0];
            String B = input_line[1];
            String C = input_line[2];
            Solution obj = new Solution();
            System.out.println(obj.LCSof3(A, B, C, n1, n2, n3));
        }
    } 
} 
class Solution 
{ 
    public int prkriya(String a, String b, String c, int i, int j, int k, int[][][] dp){
        if(i == a.length() || j == b.length() || k == c.length()){
            return 0;
        }
        if(dp[i][j][k] != -1){
            return dp[i][j][k];
        }
        
        
        if(a.charAt(i) == b.charAt(j) && b.charAt(j) == c.charAt(k)){
            dp[i][j][k] = 1 + prkriya(a, b, c, i + 1, j + 1, k + 1, dp);
        }
        
        else{
            int l1 = 0, l2 = 0, l3 = 0;
            l1 = prkriya(a, b, c, i + 1, j, k, dp);
            l2 = prkriya(a, b, c, i, j + 1, k, dp);
            l3 = prkriya(a, b, c, i, j, k + 1, dp);
            
            dp[i][j][k] = Math.max(l1, Math.max(l2, l3));
            
        }
        
        return dp[i][j][k];
        
    }
    
    
    int LCSof3(String a, String b, String c, int n1, int n2, int n3) 
    { 
       int[][][] dp = new int[n1][n2][n3];
       
       for(int[][] i : dp){
           for(int[]j : i){
               Arrays.fill(j, -1);
           }
       }
       
       return prkriya(a, b, c, 0, 0, 0, dp);
       
    }
} 