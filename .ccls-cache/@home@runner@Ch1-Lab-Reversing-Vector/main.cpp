//
// File: main.cpp
// Description: Reversing vector
// Created: Sun. Feb 19, 2023
// Author: Noah Sanderson
// mail: Noahs6423@student.vvc.edu
//
#include <iostream>
#include <vector>
using namespace std;

// This method reverses contents of input argument vect.
vector<char> Reverse(vector<char> vect) {
	vector <char> rev;
	
	for (int i = vect.size(); i > 0; i--) {
	 rev.push_back(vect.at(i-1));  
	}
	return rev;
}

int main() {
	vector<char> ch(3);
	ch.at(0) = 'a';
	ch.at(1) = 'b';
	ch.at(2) = 'c';

	vector<char> reverseVect = Reverse(ch);

	for (size_t i = 0; i < reverseVect.size(); ++i) {
		cout << reverseVect.at(i);
	}

	return 0;
}