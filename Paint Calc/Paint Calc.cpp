using namespace std;
#include <iostream>

int main()
{

		int N;
		float P = 0.004;
		int Nc;
		float S;
		float W = 1.2;
		int Nd;
		bool correctPaint;
		string userPaint;

		cout << "Welcome to the paint caluclator" << endl;
		cout << "please enter the area in which we will need to paint" << endl;
		cin >> S;
		cout << "okay so that's " << S << " square meters we need to paint correct? please type either no, No, n or N if this incorrect or Yes,yes,Y or y if this is correct" << endl;
		cin >> userPaint;

		if (userPaint == "No" || "n" || "no" || "N"){
			correctPaint = false;
		}
		else if (userPaint == "Yes" || "y" || "yes" || "Y") {
			correctPaint = true;
		}

		while(correctPaint = false) {
			correctPaint = false;
			cout << "please enter the area in which we will need to paint" << endl;
			cin >> S;
			cout << "okay so that's " << S << " square meters we need to paint correct?" << endl;
		}
		cout << "Thanks now we need to know how many children will be near by please enter below " << endl;
		cin >> Nc;
		cout << "right so their are " << Nc << " children near by" << endl;



		return 0;
	
}

	