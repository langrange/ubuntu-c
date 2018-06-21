# include<iostream>
# include<string>
# include<fstream>
# include<sstream>
using namespace std ;

int main (){
	
   string line ;
   int word ;
   while(getline(cin,line)){
	if (line.empty())
	 break ;
	
	istringstream record(line);
	while(record>>word){
	cout << word << " " ;
	}
	cout << endl ;
	}
	
   return 0 ;
}

