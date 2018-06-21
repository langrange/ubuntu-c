#include<iostream>
#include<vector>

using namespace std;

int SplitPos(int *arr, int start, int finish){
	int x=arr[start];
	int i= start;
	int j= finish;
	while(1){
		// step to right to find the value smaller than x;d
		while(arr[++i]<x && i<finish);
		while(arr[--j]>x && j>start);
		if(i>j) break ;
		swap(arr[i],arr[j]);
	}
	arr[start] = arr[j];
	arr[j] = x;
	return j ;
}

void quicksort(int *arr, int start, int finish){
	if(start>=finish) return; 
	int q = SplitPos(arr,start,finish);
	quicksort(arr,start,q-1);
	quicksort(arr,q+1,finish);
}

int main(){

	int num;
	int arr[100] ;
	cout << "please input the siz of the array" << endl ;
	cin >> num ;
	cout << "please input the array :" ;
	string line;
	int element ;
	int i =0 ;
	cin.clear();
	while(i<num){
	  cin >> arr[i++] ;
	}

	quicksort(arr,0,num);
	i = 0 ;
	while(i<num){
	cout << arr[i++] << " " ;
	}
	cout << endl ;

	return 0 ;
}
