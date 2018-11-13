
#include <iostream>
using namespace std;

void displayArray(int x[], int n);
void quicksort(int A[], int low, int high);
int partition(int A[], int low, int high);
int main() {
	int x[] = {714,1236,1236,1236,12,6123,67432,7,34762,31,1,2,3,4};
	int n = sizeof(x)/sizeof(x[0]);
	quicksort(x,0,n-1);
	displayArray(x,n);


}

void quicksort(int A[], int low, int high){
	if(low<high){
		int pivot = partition(A,low,high);
		quicksort(A,low,pivot-1);
		quicksort(A,pivot+1,high);
	}
}
int partition(int A[], int low, int high){
	int pivotVar = A[high], i = low-1;
	for(int j = low; j<high; j++){
		if(A[j]<pivotVar){
			i++;
			swap(A[i],A[j]);
		}
	}
	i++;swap(A[i],A[high]);
	return i;



}
void displayArray(int x[], int n){
	for(int i = 0; i<n; i++)
		cout<<x[i]<<" ";
	cout<<endl;
}

