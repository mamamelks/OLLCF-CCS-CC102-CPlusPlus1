#include <iostream>

using namespace std;

int main()
{
	string nickname, courseYear, school;
	cout << "Nickname: ";
	cin >> nickname;
	cout << "Course-Year Level: ";
	cin >> courseYear;
	cout << "School name: ";
	cin >> school;
	
	cout << "Wow Congrats" << nickname << "!" << courseYear << "is a nice course. And you are studying in " << school << "which is one if the Center of";
	return 0;
}