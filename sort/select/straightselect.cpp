# include<iostream>
# include<vector>

using namespace std;

void straightselect(int *arr, int num){
	for(int i=0;i<num;++i){
	   int min = arr[i];
	   int low = i;
	   for(int j= i+1;j<num;++j){
		   if( arr[j] < min){
			low = j;
			min = arr[j];
			}
		}
	   arr[low] = arr[i];
	   arr[i] = min ;
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

	straightselect(arr,num);
	i = 0 ;
	while(i<num){
	cout << arr[i++] << " " ;
	}
	cout << endl ;
	return 0 ;
}

