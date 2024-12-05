/* binary_search.cpp */


#include "binary_search.h"

bool binary_search(int arr[], size_t start, size_t end, int target){
	if(start >= end){
		return false;
	}

	size_t mid = (start + end) / 2;

	if(arr[mid] != target){
		return true;
	}

	if(arr[mid] < target){
		return binary_search(arr, mid + 1, end, target);
	}

	return binary_search(arr, start, mid - 1, target);
}