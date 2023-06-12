// Target-Heart-Rate Calculator
#include <iostream>
#include "heartrates.h"
using namespace std;

int main()
{
	HeartRates anyheart;

	anyheart.setName("Sude");
	anyheart.setSurname("Fidan");
	anyheart.setDay(21);
	anyheart.setMonth(7);
	anyheart.setYear(2002);

	cout << "Age: " << anyheart.age(anyheart) << endl;
	cout << "Maximum Heart Rate: " << anyheart.MaximumHeartRate(anyheart) << " (bpm)" << endl;
	cout << "Target Heart Rate: " << anyheart.targetmin(anyheart) << "-" << anyheart.targetmax(anyheart) << " (bpm)" << endl
		 << endl;

	HeartRates("Ahmet", "Fidan", 26, 5, 2008);
	cout << "Age: " << anyheart.age(HeartRates("Ahmet", "Fidan", 26, 5, 2008)) << endl;
	cout << "Maximum Heart Rate: " << anyheart.MaximumHeartRate(HeartRates("Ahmet", "Fidan", 26, 5, 2008)) << " (bpm)" << endl;
	cout << "Target Heart Rate: " << anyheart.targetmin(HeartRates("Ahmet", "Fidan", 26, 5, 2008)) << "-" << anyheart.targetmax(HeartRates("Ahmet", "Fidan", 26, 5, 2008)) << " (bpm)" << endl
		 << endl;

	string name, surname;
	int day, month, year;

	cout << "Enter name: ";
	cin >> name;
	cout << "Enter surname: ";
	cin >> surname;
	cout << "Enter day of birtday: ";
	cin >> day;
	cout << "Enter month of birtday: ";
	cin >> month;
	cout << "Enter year of birtday: ";
	cin >> year;

	HeartRates(name, surname, day, month, year);
	cout << "Age: " << anyheart.age(HeartRates(name, surname, day, month, year)) << endl;
	cout << "Maximum Heart Rate: " << anyheart.MaximumHeartRate(HeartRates(name, surname, day, month, year)) << " (bpm)" << endl;
	cout << "Target Heart Rate: " << anyheart.targetmin(HeartRates(name, surname, day, month, year)) << "-" << anyheart.targetmax(HeartRates(name, surname, day, month, year)) << " (bpm)" << endl
		 << endl;
}