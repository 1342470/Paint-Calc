using namespace std;
#include <iostream>
bool correctPaint;
bool correctChild;
int N;
float P = 0.004;
int Nc;
float S;
float W = 1.2;
int Nd;
string userPaint;
string numChild;




void childCol() {
	cout << "Thanks now we need to know how many children will be near by please enter below " << endl;
	while (correctChild != true) {
		cout << "test to see if correctly passed  " << S << endl;
		cin >> Nc;
		cout << "right so their are " << Nc << " children near by" << endl;
		cout << "okay so that's " << Nc << " children correct? please type either no or No if this incorrect and Yes or yes if this is correct" << endl;
		cin >> numChild;
		if (numChild == "No" || numChild == "no") {
			correctChild = false;
		}
		else if (numChild == "Yes" || numChild == "yes" ) {
			correctChild = true;
			numDays();
		}
		else {
			cout << "please enter a valid responce" << endl;

		};
	}
}

void numDays() {

}


	

void main() {
	cout << "Welcome to the paint caluclator" << endl;
	 while (correctPaint == false){
		cout << "please enter the area in which we will need to paint" << endl;
		cin >> S;
		cout << "okay so that's " << S << " square meters we need to paint correct? please type either No or no if this incorrect and Yes or yes if this is correct" << endl;
		cin >> userPaint;
		if (userPaint == "No" || userPaint == "no") {
			 correctPaint = false;
		 }
			else if (userPaint == "Yes" || userPaint == "yes" ) {
			correctPaint = true;
			childCol();
		}
		 else {
			cout << "please enter a valid responce" << endl;
			correctPaint = false;

		};
	}
	 
}
		


