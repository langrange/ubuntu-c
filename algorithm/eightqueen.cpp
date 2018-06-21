#include<iostream>
#include<vector>

using namespace std;

// cal the total kinds of method

void solution(vector<int>& x,int index,int n, int& sum){
	if(n==index) return ;
	for(int i=0;i<n;++i){
		if(0==index) {x[index]=i;solution(x,index+1,n,sum);continue;}
		int j= index;
		while((--j)>=0){
			if(i==x[j] || abs(index-j)==abs(i-x[j])) break;
		}
		if(-1!=j) continue;
		x[index] = i;
		if((n-1==index)) ++sum;
		solution(x,index+1,n,sum);

	}

}

int queen(int n){
	vector<int> x(n,-2) ; // x is the solution
	int sum=0;
	solution(x,0,n,sum) ;
	return sum ;
} 

int main(){

	int n=0;
	cout << "please input the n:" << endl ;
	cin >> n ;
	cin.clear();
	cout << "total solution mehtod is :" << " ";
	cout << queen(n) << endl ;	

	return 0;
}
