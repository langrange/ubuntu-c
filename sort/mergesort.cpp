#include <iostream>
#include <vector>
#include <string>
#include <sstream>

using namespace std ;

void merge(int* arr,int start,int mid, int finish, vector<int> &temp){
	int i=start;
	int j=mid + 1;
	int t=0;
	while(i<=mid && j<=finish){
		if(arr[i]<arr[j])
			temp[t++]=arr[i++];
		else
			temp[t++]=arr[j++];
	}

	while(i<=mid)
		temp[t++]=arr[i++];

	while(j<=finish)
		temp[t++]=arr[j++];

	//copy valut to the original arr ARR
	t = 0 ;
	while(start<=finish)
		arr[start++] = temp[t++] ;

}

void sort(int* arr,int start,int finish,vector<int> &temp){

	if(finish<=start)
		return ;

	int mid = (start + finish )/ 2 ;
	sort(arr,start,mid,temp);
	sort(arr,mid+1,finish,temp);
	merge(arr,start,mid,finish,temp);
}

void mergesort(int* arr,int size){

	vector<int> temp(size,0);
	sort(arr,0,size-1,temp);
}

int main (){

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

	mergesort(arr,num);
	i = 0 ;
	while(i<num){
	cout << arr[i++] << " " ;
	}
	cout << endl ;
	return 0 ;
}

