#include <iostream>

using std::cin;
using std::cout;
using std::endl;

int main() {
    int x, y, z;
    cin >> x >> y >> z;
    int result = -1;

    int a = 0;
    int i = 0,k = 1;
    if(a==z){
	    	result = i;
	    	k = 0;
	    }
	    else 
	    	i++;
	   
    while(k){
	    
	    a += x;
	    
	    if(a==z){
	    	result = i;
	    	k = 0;
	    }
	    else 
	    	i++;

	    a -= y;
		
	    if(a==z){
	    	result = i;
	    	k = 0;
	    }
	    else 
	    	i++;

	    if(z<a){
	    	k=0;
	    	result = -1;
	    }

	}
    cout << result << endl;
    return 0;
}

