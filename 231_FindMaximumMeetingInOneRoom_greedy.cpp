#include <bits/stdc++.h>
using namespace std;


    bool possible(int arr[], int n, int mid, int m){
        int stu = 1;
        int s = 0;
        for(int i = 0;i < n;i++){
            s += arr[i];
            if(s > mid){
                stu++;
                s = arr[i];
            }
        }
        return  stu <= m;
    }
    

void maxMeetings(int s[], int f[], int n)
{
	pair<int, int> a[n + 1];
	int i;
	for (i = 0; i < n; i++) {
		a[i].first = f[i];
		a[i].second = i;
	}	sort(a, a + n);

	int time_limit = a[0].first;

	vector<int> m;

	m.push_back(a[0].second + 1);

	for (i = 1; i < n; i++) {
		if (s[a[i].second] > time_limit) {
			m.push_back(a[i].second + 1);

			time_limit = a[i].first;
		}
	}

	for (int i = 0; i < m.size(); i++) {
		cout << m[i] << " ";
	}
}

int main()
{
	int s[] = { 1, 3, 0, 5, 8, 5 };
	int f[] = { 2, 4, 6, 7, 9, 9 };
	int n = sizeof(s) / sizeof(s[0]);

	maxMeetings(s, f, n);

	return 0;
}
