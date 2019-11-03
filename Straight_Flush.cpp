#include<bits/stdc++.h>
using namespace std;

int convert(char c){
	switch(c){
		case 'T': return 10;
		case 'J': return 11;
		case 'Q': return 12;
		case 'K': return 13;
		case 'A': return 14;
		default : return (c - '0');
	}
}

int main(){
	char c;
	cin>>c;
	cout<<convert(c);
}