// Ninja loves cooking. and he decided to make the pizza for
// his friend. His friend loves eating cheese with the pizza;
// hence Ninja decided to fill the pizza with the cheese.
// For our convenience. let's consider the rectangular pizza
// slices only. and to increase the amount of cheese, the
// Ninja decided to cut some slices in pizza. Each slice can
// be cut only once. and the resulting pieces must also be
// rectangular.
// Ninja decided to cut it in ot most 'K' slices so that no one
// gets suspicious.
// Given 'N' number of slices have, 'K' maximum number of
// slices Ninja can cut and two arrays 'L' and 'B' stating the
// length and breadth of each slice, your task is to help
// Ninja find out the maximum extra cheese needed to fill
// the newl formed boundaries in izza.
// Note: The length and breadth of the pizza are 'L' and 'B'
// respectively.
// Input Format:
// - The first line of input contains an integer 'T' denoting
// the number of test cases.
// - The first line of each test case contains two space-
// separated integers 'N' and 'K' denoting the number of
// slices and the maximum number of slices Ninja can cut
// respectively.

//example 
// Input:
// N = 2, k = 1
// L = [4,2]
// B = [6,8]
// Output:
//16
// Explanation:
// Ninja can cut only one slice. Hence, the
// maximum extra cheese needed to fill the
// newly formed boundaries is 16.

// explanation on how to solve this problem

// 1. we need to find the area of the pizza
// 2. we need to find the area of the slices
// 3. we need to find the area of the slices that we cut
// 4. we need to find the area of the slices that we cut and the area of the pizza


// steps to solve this problem with example
// 1. we need to find the area of the pizza (4 * 6 = 24) 
// 2. we need to find the area of the slices (4 * 6 = 24) + (2 * 8 = 16) = 40
// 3. we need to find the area of the slices that we cut (4 * 6 = 24) + (2 * 8 = 16) = 40 - (4 * 2 = 8) = 32 
// 4. we need to find the area of the slices that we cut and the area of the pizza (4 * 6 = 24) + (2 * 8 = 16) = 40 - (4 * 2 = 8) = 32 + (4 * 6 = 24) = 56 

// 5. we need to find the area of the pizza (4 * 6 = 24) 
// 6. we need to find the area of the slices (4 * 6 = 24) + (2 * 8 = 16) = 40 
// 7. we need to find the area of the slices that we cut (4 * 6 = 24) + (2 * 8 = 16) = 40 - (4 * 2 = 8) = 32 
// 8. we need to find the area of the slices that we cut and the area of the pizza (4 * 6 = 24) + (2 * 8 = 16) = 40 - (4 * 2 = 8) = 32 + (4 * 6 = 24) = 56

// code with comments and take example from above
#include <bits/stdc++.h>
using namespace std;

int main() {
	int n=2, k = 1;
	int l[] = {4,2};
	int b[] = {6,8};
	int area = 0;
	int area_of_slices = 0;
	int area_of_slices_that_we_cut = 0;
	int area_of_slices_that_we_cut_and_the_area_of_the_pizza = 0;
	for(int i=0; i<n; i++){
	    area += l[i] * b[i];
	    area_of_slices += l[i] * b[i];
	}
	area_of_slices_that_we_cut = area_of_slices - (l[k] * b[k]);
	area_of_slices_that_we_cut_and_the_area_of_the_pizza = area_of_slices_that_we_cut + area;
	cout << area_of_slices_that_we_cut_and_the_area_of_the_pizza;
	return 0;
}
