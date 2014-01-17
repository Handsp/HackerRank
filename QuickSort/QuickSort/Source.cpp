#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <bitset>
#include <cstdio>
#include <vector>
#include <cstdlib>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
using namespace std;
/* Head ends here */
void quickSort(vector <int>  ar, int ar_size) {

	int left, right;
	int pivot; //Select pivot, doesn't matter what the pivot is

	pivot = partition(ar, left, right);

	

	for (int i = 0; i < ar_size; i++)


}
int partition(vector <int> ar, int left, int right){



}
/* Tail starts here */
int main(void) {
	vector <int>  _ar;
	int _ar_size;
	cin >> _ar_size;
	for (int _ar_i = 0; _ar_i<_ar_size; _ar_i++) {
		int _ar_tmp;
		cin >> _ar_tmp;
		_ar.push_back(_ar_tmp);
	}

	quickSort(_ar, _ar_size);

	return 0;
}