/* main.cpp */

#include <algorithm> // provides sort
#include <cstddef> // provides size_t
#include <iostream> // provides cout
#include <cstdlib> // provides srand, rand
#include <ctime> // provides time

#include "binary_search.h"


int main(){


	// Make a list of numbers and sort it.
	size_t n = 8;
	int arr[n];

	srand(time(NULL)); // seed the random number generator

	for(size_t i = 0; i < n; i++){
		arr[i] = rand()  % 20;
		std::cout << "arr[" << i << "]: " << arr[i] << std::endl;
	}

	// Sort the array
	std::sort(arr, arr + n);


	// search for a number
	bool is_found = binary_search(arr, (size_t)0, (size_t)n, 10);
	if(is_found){
		std::cout << "10 was found! :)" << std::endl;
	} else{
		std::cout << "10 was not found. :(" << std::endl;
	}

	return 0;
}