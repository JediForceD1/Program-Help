#include "pch.h"
#include <iostream>

void getScore(int score) {
	using namespace std;
	do {

		if (score < 0) {
			cout << "Please Enter a Number Greater Than 0.";
			cin >> score;
		}

		else if (score > 100) {

			cout << "Please Enter a Number Less Than 100.";
			cin >> score;

		}


	} while (score < 0 || score > 100);


}


int main()
{
	using namespace std;
	
	int sc_1, sc_2, sc_3, sc_4, sc_5;

	cin >> sc_1;
	cin >> sc_2;
	cin >> sc_3;
	cin >> sc_4;
	cin >> sc_5;

	getScore(sc_1);


}

/*void getScore(int score) {
	using namespace std;
	do {

		if (score < 0) {
			cout << "Please Enter a Number Greater Than 0.";

		}


	} while (score < 0 || score > 100);


}*/

///void calcAverage() {



///}

///int findLowest() {



///}