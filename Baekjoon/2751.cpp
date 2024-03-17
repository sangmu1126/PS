#include <iostream>
#include <vector>
using namespace std;

void merge(vector<int>& arr, int first, int mid, int last)
{
	int* sorted = new int[last - first + 1];
	int i, j, k;
	i = first;		
	j = mid + 1;	
	k = 0;			

	while (i <= mid && j <= last)
	{
		if (arr[i] <= arr[j]) sorted[k++] = arr[i++];
		else sorted[k++] = arr[j++];
	}

	if (i > mid) 
		while (j <= last) sorted[k++] = arr[j++];
	else
		while (i <= mid) sorted[k++] = arr[i++];

	for (i = first, k = 0; i <= last; i++, k++) arr[i] = sorted[k];

	delete[] sorted;
}

void mergeSort(vector<int>& arr, int first, int last)
{
	if (first < last)
	{
		int mid = (first + last) / 2;
		mergeSort(arr, first, mid);
		mergeSort(arr, mid + 1, last);
		merge(arr, first, mid, last);
	}
}


int main() {
    int N;
    cin >> N;

    vector<int> nums;
    for (int i=0; i < N; i++) {
        int k;
        cin >> k;

        nums.push_back(k);
    }

    mergeSort(nums, 0, N-1);

    for (int i=0; i < N; i++) {
        cout << nums[i] << "\n";
    }
}