using namespace std;
#include <iostream>
bool correctPaint;
bool correctDays;
bool correctChild;
int N;
float P = 0.004;
int Nc;
float S;
float W = 1.2;
int Nd;
string userPaint;
string numChild;
string numOfDays;


void finalCol() {
	cout << "Okay to just to be clear we need to paint " << S << " square meters of area and their are " << Nc << " children within the area and finally it will take " << Nd << " days" << " an addtion fee for the international painters tax is " << P << " as well as " << W << " for the expected waste " << endl;
	N = ((P * Nc * S) + W) * (1 + 1 / Nd);
	cout << "your estmate paint required from the data given is " << N << endl;
	cout << "from that the number of gallons the price of your paint will be " << N * 83.54  << " Britsh pound sterling" << endl;

}
	

void numDays() {
	while (correctDays == false) {
		while ((cout <<  "how many days it will take by please enter below " << endl) && !(std::cin >> Nd)) {
			std::cout << "That's not a number; ";
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}
		cout << "okay so it will take " << Nd << " days correct? please type either no or No if this incorrect and Yes or yes if this is correct" << endl;
		cin >> numOfDays;
		if (numOfDays == "No" || numOfDays == "no") {
			correctDays = false;
		}

		else if (numOfDays == "Yes" || numOfDays == "yes") {
			correctDays = true;
			finalCol();
		}
		else {
			cout << "please enter a valid responce" << endl;
			correctDays = false;

		};
	}
}

void childCol() {
	while (correctChild == false) {
		while ((cout << "How many children will be near by please enter below " << endl) && !(std::cin >> Nc)) {
			std::cout << "That's not a number; ";
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}
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
			correctChild = false;
		};
	}
}





void main() {
	cout << "Welcome to the paint caluclator" << endl;
	while (correctPaint == false) {
		while ((cout << "please enter the area in which we will need to paint" << endl) && !(std::cin >> S)) {
			std::cout << "That's not a number; ";
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		}
		cout << "okay so that's " << S << " square meters we need to paint correct? please type either No or no if this incorrect and Yes or yes if this is correct" << endl;
		cin >> userPaint;
		if (userPaint == "No" || userPaint == "no") {
			correctPaint = false;
		}
		else if (userPaint == "Yes" || userPaint == "yes") {
			correctPaint = true;
			childCol();
		}
		else {
			cout << "please enter a valid responce" << endl;
			correctPaint = false;
			main();

		};
	}
}

		


