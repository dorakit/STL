// C++ program to implement the approach

#include <bits/stdc++.h>
using namespace std;

// Function to check if both arrays are equal
bool checkArrays(int arr1[], int arr2[],
				int n, int m)
{
	// If lengths of array are not equal
	// means array are not equal
	if (n != m)
		return false;

	// Sort both arrays
	sort(arr1, arr1 + n);
	sort(arr2, arr2 + m);

	// Linearly compare elements
	for (int i = 0; i < n; i++)
		if (arr1[i] != arr2[i])
			return false;

	// If elements are same
	return true;
}

// Driver Code
int main()
{
	int arr1[] = { 1, 2, 3, 4, 5 };
	int arr2[] = { 5, 4, 3, 2, 1 };
	int N = sizeof(arr1) / sizeof(int);
	int M = sizeof(arr2) / sizeof(int);

	// Function call
	if (checkArrays(arr1, arr2, N, M))
		cout << "Equal";
	else
		cout << "Not Equal";
	return 0;
}
