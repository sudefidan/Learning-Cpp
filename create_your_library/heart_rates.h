#ifndef HEARTRATES_H_
#define HEARTRATES_H_
using namespace std;

class HeartRates
{
private:
	string name;
	string surname;
	int day;
	int month;
	int year;

public:
	HeartRates();

	HeartRates(string n, string s, int d, int m, int y);

	void setName(string n);
	void setSurname(string s);
	void setDay(int d);
	void setMonth(int m);
	void setYear(int y);

	string getName();
	string getSurame();
	int getYear();
	int getDay();
	int getMonth();

	int age(HeartRates obj);

	int MaximumHeartRate(HeartRates obj);
	int targetmin(HeartRates obj);
	int targetmax(HeartRates obj);
};

#endif