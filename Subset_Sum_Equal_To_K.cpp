#include <bits/stdc++.h>
using namespace std ;


bool F(int i , int k , vector<int> &arr) {
	if (k < 0)return false;
	if (k == 0) return true;

	if (i == 0) {
		if (k == arr[0]) return true;
		return false;
	}

	bool notTake = F(i - 1 , k , arr);
	bool take = F(i - 1 , k - arr[i] , arr);

	if (notTake || take) return true;

	return false;


}


bool subsetSumToK(int n, int k, vector<int> &arr) {

	return F(n - 1 , k , arr);


}


int main() {

	int t ;
	cin >> t;

	while (t--) {
		int n , k ;
		cin >> n >> k ;
		vector<int> arr(n);

		for (int i = 0; i < n; ++i)
		{
			cin >> arr[i];
		}

		cout << subsetSumToK(n , k , arr) << endl;

	}
	return 0;
}