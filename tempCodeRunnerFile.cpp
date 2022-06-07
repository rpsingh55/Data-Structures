#include <bits/stdc++.h>
using namespace std;

void survival(int S, int N, int M)
{

	if (((N * 6) < (M * 7) && S > 6) || M > N)
		cout << "No\n";
	else {
		int days = (M * S) / N;
		if (((M * S) % N) != 0)
			days++;
		cout << "Yes " << days << endl;
	}
}


void minCashFlow(int graph[][100])
{
	int N = 100;
	int amount[N] = {0};

	for (int p=0; p<N; p++)
	for (int i=0; i<N; i++)
		amount[p] += (graph[i][p] - graph[p][i]);

	//minCashFlowRec(amount);
}

int main()
{
	int S = 10, N = 16, M = 2;
	survival(S, N, M);
	return 0;
}
