#include <bits/stdc++.h>
using namespace std;

int board[1001][1001];
int dist[1001][1001];
int dx[4] = { 1,0,-1,0 };
int dy[4] = { 0,1,0,-1 };

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);

	int n, m, cnt=0;
	cin >> m >> n;
	queue<pair<int, int>> q;

	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			cin >> board[i][j];
			if (board[i][j] == 1) {
				q.push({ i,j });
				dist[i][j] == 0;

			}
			else if(board[i][j]==0)
				dist[i][j] = -1;
		}
	}

	while (!q.empty()) {
		pair<int, int> cur = q.front();
		q.pop();
		for (int dir = 0; dir < 4; dir++) {
			int nx = cur.first + dx[dir];
			int ny = cur.second + dy[dir];
			if (nx < 0 || nx >= n || ny < 0 || ny >= m)
				continue;
			if (dist[nx][ny]>=0)
				continue;
			dist[nx][ny] = dist[cur.first][cur.second] + 1;
			q.push({ nx,ny });

		}
	}
	int ret = 0;
	for (int i = 0; i < n; i++) {
		for (int j = 0; j < m; j++) {
			if (dist[i][j] == -1)
			{
				cout << -1;
				return 0;
			}
			if (dist[i][j] > ret)
				ret = dist[i][j];
		}
	}
	cout << ret;

}