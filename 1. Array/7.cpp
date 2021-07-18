#include <iostream>
using namespace std;

int findMax (int arr[], int n) {
	int max = arr[0];

	for (int i = 0; i < n; i++)
		if (arr[i] > max)
			max = arr[i];
	
	return max;
}

int findMin (int arr[], int n) {
	int min = arr[0];

	for (int i = 0; i < n; i++)
		if (arr[i] < min)
			min = arr[i];
	
	return min;
}

int main() {
	int i, length, array[100];
	
	cout << "Input array length: ";
    cin >> length;
    
	cout << endl << "Input array:" << endl;
	for (i = 0; i < length; i++)
	    cin >> array[i];
	    
	cout << "Maximum value in array: " << findMax(array, length) << endl;
	cout << "Minimum value in array: " << findMin(array, length);
	
	return 0;
}
