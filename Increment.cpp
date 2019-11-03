#include<bits/stdc++.h>
using namespace std;

int main(){
	string str;
	cin>>str;
	
	int n =str.length();
	bool check = false;
	for(int i=0; i<n; i++){
		if(str[i]!='9')
			check = true;
	}
	if(check){
		cout<<n<<endl;
	}
	else{
		cout<<n+1<<endl;
	}	

}