# include<iostream>
# include<vector>

using namespace std ;

void divideinsert(int *arr, int num){
	for(int i=1 ; i<num; ++i){
	int temp = arr[i] ;
	int left = 0 ;
	int right = i - 1 ;
	int mid = 0 ;
	
	while(left<=right){
		mid = (left + right)/2 ;
		if(temp<arr[mid])
			right = mid-1;
		else
			left = mid + 1; 	
	}
	
	// here, all after the left should be put one address after
	for(int j = i-1 ; j>=left;j--){
		arr[j+1] = arr[j] ;
	}
	arr[left] = temp ;
}
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

	divideinsert(arr,num) ;
	i = 0 ;
	cout << "the sorted array is :" << endl ;
	while(i<num){
	cout << arr[i++] << " " ;
	}
	cout << endl ;

	return 0 ;
}
