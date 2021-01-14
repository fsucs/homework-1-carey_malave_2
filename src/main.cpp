
/**
COP 3330 Project 1
Author: Kathryn Carey and Francisco Malave

This project takes the inputted string and counts the number of times
a character is repeated in the given string.It then returns the 
highest number of the same character.A restriction is that the string
needs to be less than 100. Both of us contributed equally,
everything imputed was decided by the both of us. We did not change the 
stability of this code when adding it.

*/

#include <iostream>
#include <example.hpp>
#include <assert.h>
#include <string>
using namespace std;
int get_max_count(string sinput){
	int max = 0; //returns back to main. max number of a repeated character
	int count[100] = {}; //array of each character's count

	for (int x = 0; x < sinput.size(); x++){
		if (x == 0)//first character receives 1
			count[x]++;
		else{
			int match = 0; //to see if the last character receives a count
			for (int y = x; y < x; y++){
				if (sinput[y] == sinput[x]){
					count[y]++;
					match++;
	        	        } 
			} 
 		} 
		if (match > 0) //if the last character does receive a count
			count[x]++;
	} 
	for (int i = 0; i < sinput.length(); i++){
		if (count[i] > max)
			max = count[i];
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
