#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	ios_base::sync_with_stdio(false);
	cin.tie(nullptr);

	int N;
	int x, y;
	int big = 0;
	int index = 0;
	vector<vector<int>> v;
	vector<int> tmp;

	cin >> N;
	for (int i = 0; i < N; i++) {
		cin >> x >> y;
		tmp.push_back(x);
		tmp.push_back(y);
		v.push_back(tmp);
		tmp.clear();
	}

	while (1) {
		for (int i = 0; i < N; i++) {
			if (i != index) {
				if (v[index][0] < v[i][0])
					if (v[index][1] < v[i][1])
						big++;
			}
		}
		cout << big+1 << " ";
		if (index == N - 1)
			break;
		index++;
		big = 0;
	}

}