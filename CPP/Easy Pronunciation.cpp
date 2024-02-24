#include <iostream>
#include <string>
using namespace std;

void test_case_executer(){
    string input;
	int len;
	cin>>len;
	cin>>input;
	if (len<4){cout<<"Yes"<<endl;}
	else{
	    int count=0;
    	for (auto i:input){
    	    if (count!=4){
        	    if (i!='a' && i!='e' && i!='i' && i!='o' && i!='u'){
        	        count+=1;
        	    }
        	    else{
        	        count=0;
        	    }
    	    }
    	    else{
    	        break;
    	    }
    	}
    	if (count==4){ cout<<"No"<<endl;}
    	else{cout<<"Yes"<<endl;}
	}

}

int main() {
	
	int test_case_size;
	cin>>test_case_size;
	while(test_case_size>0){
	    test_case_executer();
	    test_case_size-=1;
	}

}
