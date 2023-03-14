#include<bits/stdc++.h>
#include<vector>
#define ll long long
#define f(i,a,b) for(int i = a ; i <= b ; i++)
#define f_(i,a,b) for(int i = a ; i >= b ; i--)
#define F(i,a,b) for(int i = a ; i < b ; i++)
#define all(x) x.begin(), x.end()

using namespace std;

void show(int *arr, int n){
	f(i, 0 , n-1) cout << arr[i] << ' ';
	cout << endl;
}

// Selection Sort
void selection_sort(int *arr, int n){
	// Idea: choose element smallest of the sequence and put it 
	// in the first position of sequence
	int min_index = 0;
	F(i, 0, n-1){
		min_index = i;
		F(j, i+1, n){
			if(arr[j] < arr[min_index])
				min_index = j;
			
		}
		swap(arr[min_index], arr[i]);
	}
	show(arr, n);
}

// Bubble Sort
void bubble_sort(int *arr, int n) {
	// Idea: Swap 2 element next to itseft if it don't sort
	for(int i = 0 ; i < n ; i++) {
		for(int j = n-1 ; j > i ; j--) {
			if(arr[j] < arr[j-1])
				swap(arr[j], arr[j-1]);
		}
	}
}

// Insertion Sort
void insertion_sort(int *arr, int n){
	
}

// Quick Sort
void quick_sort(int *arr, int n){
	
}

// Merge sort
void merge_sort(int *arr, int n){
	
}



int main() {
	int arr[10] = {-1, 2, 4, 2, 9, 5, 8, 4, 0, 19};
	// Choose your code suitable for question
	selection_sort(arr, 10);
}
