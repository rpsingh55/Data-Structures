import java.io.*;
import java.util.*;

class Main{
    public static void main(String args[])throws IOException
    {
        BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(in.readLine());
        while(t-- > 0){
            String a[] = in.readLine().trim().split("\\s+");
            int n = Integer.parseInt(a[0]);
            int m = Integer.parseInt(a[1]);
            String a1[] = in.readLine().trim().split("\\s+");
            int mat[][] = new int[n][m];
            for(int i = 0;i < n*m;i++)
                mat[i/m][i%m] = Integer.parseInt(a1[i]);
            
            Solution ob = new Solution();
            System.out.println(ob.maxSquare(n, m, mat));
        }
    }
}// } Driver Code Ends


//User function Template for Java

class Solution{
    
    static public int prkriya(int mat[][], int i, int j, int [][] dp){
        if(i == mat.length || j == mat[0].length){
            return 0;
        }
        if(mat[i][j] == 0) return 0;
        if(dp[i][j] != -1) return dp[i][j];
        
        int a = prkriya(mat, i, j + 1, dp);
        int b = prkriya(mat, i + 1, j, dp);
        int c = prkriya(mat, i + 1, j + 1, dp);
        
        return dp[i][j] = 1 + Math.min(a, Math.min(b,c));
        
    }
    
    static int maxSquare(int n, int m, int mat[][]){
        int[][] dp = new int[n][m];
        for(int[] i : dp){
            Arrays.fill(i,-1);
        }
        int jawab = 0;
        for(int i = 0;i < n; i++){
            for(int j = 0; j < m; j++){
                if(mat[i][j] == 1){
                    jawab = Math.max(jawab, prkriya(mat, i, j, dp));
                }
            }
        }
        return jawab;
    }
}