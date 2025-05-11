#include <iostream>
using namespace std;

void bubbleSort(int n, int arr[]){
	int i, j;
	bool flag;
	for (i = 0; i< n; i++){
		flag = false;
		for (j = 0; j<n-i-1; j++){
			if ( arr[j] > arr[j+1]){
				swap (arr[j], arr[j+1]);
				flag = true;
			}
		}
	}
}

void insertionSort(int arr[], int n){
	for (int i=1; i<n; i++){
		int key = arr[i];
		int j = i-1;
		while (key < arr[j] && j>= 0){
		arr[j+1] = arr[j];
		--j;	
		}
		arr[j+1] = key;
	}
}

void input(int arr[], int n){
	for (int i =0; i<n; i++){
		cout<<"Angka ke-"<<i+1<<" :";
		cin>>arr[i];
	}
}

int main (){
	int jumlah;
	cout<<"Masukkan jumlah array : ";
	cin>>jumlah;
	int arr[jumlah];
	int n = sizeof(arr)/sizeof(int);
	
	input(arr, n);
	
	cout<<"Sebelum Array di sorting : ";
	for (int i=0; i<n; i++){
		cout<<arr[i]<<" ";
	} cout<<endl<<endl;
	
	bubbleSort(n, arr);
	cout<<"Setelah Array disorting : ";
	for (int i=0; i<n; i++){
		cout<<arr[i]<<" ";
	}
	cout<<endl<<endl;
	system("pause");
	return(0);
}
