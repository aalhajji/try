/*
 * main.cpp
 *
 *  Created on: Oct 14, 2015
 *      Author: aalhajji
 */



#include <iostream>
#include <sstream>
#include "header.hpp"
using namespace std;

int main() {

	string Sentence = "Anna_Goldenberg system_biologist";
	stringstream ss;
	ss << Sentence;
	string person, Expertise;
	getline(ss,person,' ');
	cout << "Who? " << person << endl;
	ss >> Expertise;
	cout << "Expertise? " << Expertise;
cout<<"ana malak";
}


/*

#define N_MOVIES 2

struct movie_t {
	char title [50];
	int year;
} films [N_MOVIES];

void printmovie (movie_t movie);

int main(){
	char buffer [50];
	int n;
	for (n=0; n<N_MOVIES; n++){
		cout << "Enter title: ";
		cin.getline(films[n].title,50);
		cout << "Enter year: ";
		cin.getline(buffer,50);
		stringstream(buffer)>>films[n].year;
		//films[n].year = atoi (buffer);
	}
	cout << "\nYou have entered these movies:\n";
	for (n=0; n<N_MOVIES; n++)
		printmovie(films[n]);
	return 0;
}

void printmovie (movie_t movie){
	cout << movie.title;
	cout << " (" << movie.year << ")\n";}
*/
