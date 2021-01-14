
/**
COP 3330 Project 1
Author: Kathryn Carey and Francisco Malave

Here you should tell us about how your project works.  How to run,
any special things you have, etc.  Also, explain any non-trivial
design decisions you make. If you are working with a partner, clearly 
State what is each persons contribution. You should
also comment on the stability of your code.  Any big bugs should be listed
here.  Basically, anything that you think we need to know in general about
your project should go here.

*/

#include <iostream>
#include <example.hpp>
#include <assert.h>
#include <string>
using namespace std;
int get_max_count(string* line){
	int count[256] = {0};
	int max = 0;
	int arr = strlen(line);   //makes the array the length of the string

	for (int x = 0; x < arr; x++) {
		count[str[x]]++;
		if (max < count[str[x]]) {
			max = count[str[x]];
		}
	}
	return max;
}

int main(int argc, char *argv[]){

    
    if (argc >= 2){
        string test1("c++");
        assert(get_max_count(test1) == 2);
    } else {
        string line; 
        cout << "Please input a string: "; 
        getline(cin, line);
        cout << get_max_count(line) << endl;
    }

	return 0;

}
