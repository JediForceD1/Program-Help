#include "pch.h"
#include <iostream>

using namespace std;

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

int findLowest(int sc_1, int sc_2, int sc_3, int sc_4, int sc_5) {

	int low1, low2, low3, lowest;
	low1 = 0;
	low2 = 0;
	low3 = 0;
	lowest = 0;

	if (sc_1 < sc_2) {		low1 = sc_1;	}

	else if (sc_2 < sc_1) {		low1 = sc_2;	}

	else if (sc_3 < sc_4) {		low2 = sc_3;	}

	else if (sc_4 < sc_3) {		low2 = sc_4;	}

	else if (low1 < low2) {		low3 = low1;	}

	else if (low2 < low1) {		low3 = low2;	}

	else if (low3 < sc_5) {		lowest = low3;	}

	else {		lowest = sc_5; }

	cout << low3;

	cout << lowest;

	if (lowest == sc_1) {		return sc_1;	}

	else if (lowest == sc_2) {		return sc_2;	}

	else if (lowest == sc_3) {		return sc_3;	}

	else if (lowest == sc_4) {		return sc_4;	}

	else  {		return sc_5;	}
}
void calcAverage(short sc_1, short sc_2, short sc_3, short sc_4, short sc_5) {

	short lowest = findLowest(sc_1, sc_2, sc_3, sc_4, sc_5);
	short avg = 0;
	cout << lowest;

	if (lowest == sc_1) {
		avg = (sc_2 + sc_3 + sc_4 + sc_5) / 4;
	}

	else if (lowest == sc_2) {
		avg = (sc_1 + sc_3 + sc_4 + sc_5) / 4;
	}

	else if (lowest == sc_3) {
		avg = (sc_1 + sc_2 + sc_4 + sc_5) / 4;
	}

	else if (lowest == sc_4) {
		avg = (sc_1 + sc_2 + sc_3 + sc_5) / 4;
	}

	else if (lowest == sc_5) {
		avg = (sc_1 + sc_2 + sc_3 + sc_4) / 4;
	}

	cout << "Your Average is " << avg;
}

int main()
{

	
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

	calcAverage(sc_1, sc_2, sc_3, sc_4, sc_5);


}



