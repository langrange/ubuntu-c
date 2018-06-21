#include<iostream>

using namespace std ;

void straightinsert(int * arr, int num){
	if(1==num) return ;
	for(int i=1; i<num; ++i){
		int temp = arr[i] ;
		int j= i-1;

		while(j>=0&&temp<arr[j]) j--; 
		if(j==(i-1)) continue ;
		j++ ;
		for(int k=i-1;k>=j;--k){
			arr[k+1] = arr[k];
		}
		arr[j] = temp ;
             }
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

	straightinsert(arr,num);
	i = 0 ;
	while(i<num){
	cout << arr[i++] << " " ;
	}
	cout << endl ;
	return 0 ;
}

