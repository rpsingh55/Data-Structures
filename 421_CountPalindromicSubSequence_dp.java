
import java.util.*;
class GFG1
{
	public static void main(String args[])
	{
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		sc.nextLine();
		while(t>0)
		{
			String str = sc.nextLine();
			//System.out.println(str.length());
			Solution ob  = new Solution();
			System.out.println(ob.countPS(str));
		t--;
		}
	}
}

class Solution
{
    long countPS(String str)
    {
        final int mo=1000000007;
        int dp[][]=new int[str.length()][str.length()];
		
		for(int g=0;g<str.length();g++) {
			
			for(int i=0, j=g;j<str.length();i++,j++) {
				if(g==0) {
					dp[i][j]=1;
				}else if(g==1) {
					dp[i][j]=str.charAt(i)==str.charAt(j) ? 3:2;
					
				}else {
					if(str.charAt(i)==str.charAt(j)) {
						dp[i][j]=(dp[i][j-1]+dp[i+1][j]+1)%mo;
					}else {
						dp[i][j]=(dp[i][j-1]+ dp[i+1][j]-dp[i+1][j-1])%mo;
					}
					
					if (dp[i][j] < 0) dp[i][j] += mo;
				}
			}
		}
		
	return (dp[0][str.length()-1])%mo;
    }
}