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

int main()
{
	int S = 10, N = 16, M = 2;
	int S2 = 110, N2 = 116, M2 = 12;
	survival(S2, N2, M2);
	return 0;
}
