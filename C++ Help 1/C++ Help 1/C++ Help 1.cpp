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

int findLowest(short sc_1, short sc_2, short sc_3, short sc_4, short sc_5) {

	short low1, low2, low3, lowest;

	if (sc_1 < sc_2) {		low1 = sc_1;	}

	else if (sc_2 < sc_1) {		low1 = sc_2;	}

	else if (sc_3 < sc_4) {		low2 = sc_3;	}

	else if (sc_4 < sc_3) {		low2 = sc_4;	}

	else if (low1 < low2) {		low3 = low1;	}

	else if (low2 < low1) {		low3 = low2;	}

	else if (low3 < sc_5) {		lowest = low3;	}

	else if (sc_5 < low3) { lowest = sc_5; }

	if (lowest == sc_1) {
		return sc_1;
	}

	if (lowest == sc_2) {
		return sc_2;
	}

	if (lowest == sc_3) {
		return sc_3;
	}

	if (lowest == sc_4) {
		return sc_4;
	}

	if (lowest == sc_5) {
		return sc_5;
	}
}

int main()
{
	using namespace std;
	
	short sc_1, sc_2, sc_3, sc_4, sc_5;

	cout << "Please Enter a Score.\n";
	cin >> sc_1;
	getScore(sc_1);

	cout << "Please Enter a Score.\n";
	cin >> sc_2;
	getScore(sc_2);

	cout << "Please Enter a Score.\n";
	cin >> sc_3;
	getScore(sc_3);

	cout << "Please Enter a Score.\n";
	cin >> sc_4;
	getScore(sc_4);

	cout << "Please Enter a Score.\n";
	cin >> sc_5;
	getScore(sc_5);




}

///void calcAverage() {



///}

