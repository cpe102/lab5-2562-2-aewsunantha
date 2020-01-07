#include<iostream>
#include<string>
using namespace std;

string mixText(string a1,string b1){
	   int L=a1.size(), K=b1.size();
       string y,A,B;
	   int i=0;
	   string e="E";
	   
	  if(L!=K){
	  	 return e;
	  }else{
		 while(i<L){	  
		    A=a1[i];
	   		B=b1[i];
	   		y=y+A+B;
		   i++;
	   }
		return y;
	  }
	   
}



int main(){	
	cout << mixText("AAA","BBB") << "\n";
	cout << mixText("Hello","World") << "\n";
	cout << mixText("SOTUS","CHEER") << "\n";
	cout << mixText("1234","5678") << "\n";
	cout << mixText("6","9") << "\n";
	cout << mixText("XXXXXXX","YYY") << "\n";	
	cout << mixText("Y","XX") << "\n";	
	
	return 0;	
}
