#include<iostream>
#include<string>
#include<vector>
#include<utility>
#include<algorithm>

using namespace std;

int n, x, y;
vector< pair<int, int> > v;


int main() {
	cout << "dati numarul de perechi:\n"; cin >> n;
	for (int i = 0; i < n; i++) {
		cout << "dati 2 elemente:\n";
		cin >> x >> y;
		v.push_back(make_pair(x, y));
	}

	sort(v.begin(), v.end());

	for (int i = 0; i < n; i++)
		if (v[i].second % 2)
			v[i].second = 0;
	
	for (auto a : v) {
		cout << a.first << " " << a.second << "\n";
	}

	cout << "\nfinal\n";
	return 0;
}