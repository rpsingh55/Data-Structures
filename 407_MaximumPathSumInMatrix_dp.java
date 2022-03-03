
import java.io.*;
import java.util.*;

class GFG
{
    public static void main(String args[])throws IOException
    {
        BufferedReader in = new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(in.readLine());
        while(t-- > 0){
            int N = Integer.parseInt(in.readLine());
            String input_line[] = in.readLine().trim().split("\\s+");
            int Matrix[][] = new int[N][N];
            for(int i = 0; i < N*N; i++)
                Matrix[(i/N)][i%N] = Integer.parseInt(input_line[i]);
            
            Solution ob = new Solution();
            System.out.println(ob.maximumPath(N, Matrix));
        }
    }
}
// } Driver Code Ends


//User function Template for Java

class Solution{
    
    static int prkriya(int[][] mat, int i, int j, int[][] dp){
        if(i == mat.length || j == mat.length || j < 0){
            return 0;
        }
        if(dp[i][j] != -1){
            return dp[i][j];
        }
        int a = prkriya(mat, i + 1, j, dp);
        int b = prkriya(mat, i + 1, j - 1, dp);
        int c = prkriya(mat, i + 1, j + 1, dp);
        
        return dp[i][j] = mat[i][j] + Math.max(a, Math.max(b, c));
        
    }

    
    static int maximumPath(int n, int Matrix[][])
    {
        int dp[][] = new int[n][n];
        for(int[] i : dp){
            Arrays.fill(i, -1);
        }
        int jawab = 0;
        for(int i = 0; i < n; i++){
            jawab = Math.max(jawab,prkriya(Matrix, 0 , i, dp));
        }
        return jawab;
    }
}