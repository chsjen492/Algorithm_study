#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	vector <vector<string>> v; //���� �̸� ���� 2���� �迭
	vector <string> v1; //2���� �迭�� ���� �ֱ� ���� string ����
	int n;
	int count = 0; //week�� �� count
	string s;

	while (1) {
		cin>> n;
		if (n > 1 && n <= 100) {
			for (int i = 0; i < n; i++) { //�Էµ� n�� �� ��ŭ ���� �̸� ���Ϳ� �Է�
				cin >> s;
				v1.push_back(s);
			}
			v.push_back(v1);
			v1.clear();
			count++;
			continue; //0�� �ƴϴ� ó������ ���ư� �ٽ� �Է��� ����
		}
		else if (n == 0)
			break; //0 �Է½� �Է� ����
	}


	for (int j = 0; j < count; j++) { //��� ����
		sort(v[j].begin(), v[j].end()); //���� �̸� �� ����
		v[j].erase(unique(v[j].begin(), v[j].end()), v[j].end()); //�ߺ��� �� ����
		cout << "Week " << j + 1 << " " << v[j].size() << endl; //��¹�
	}


}