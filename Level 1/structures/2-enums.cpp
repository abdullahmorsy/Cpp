#include <iostream>
using namespace std;
enum enColor
{
	red,
	green,
	blue,
	yellow,
};
enum enGender
{
	male,
	female
};
enum enStatus
{
	single,
	Married
};
struct stAddress
{
	string streetName;
	string buildInfo;
	string poBox;
	string zipCode;
};
struct stContactInfo
{
	string phone;
	string email;
	stAddress address;
};
struct stPerson
{
	string firstName;
	string lastName;
	stContactInfo contactInfo;
	enStatus status;
	enGender gender;
	enColor favouriteColor;
};
int main()
{
	stPerson person1;

	person1.firstName = "Abdulla";
	person1.lastName = "Morsy";
	person1.contactInfo.email = "abdomorsy42@gmail.com";
	person1.contactInfo.phone = "+201800463780";
	person1.contactInfo.address.buildInfo = "355";
	person1.contactInfo.address.poBox = "4848";
	person1.contactInfo.address.streetName = "godzilla";
	person1.contactInfo.address.zipCode = "496968";
	person1.gender = enGender::male;
	person1.status = enStatus::single;
	person1.favouriteColor = enColor::green;

	cout << person1.contactInfo.address.streetName << endl;
	return 0;
}
