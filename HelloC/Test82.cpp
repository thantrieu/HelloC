#include<iostream>
#include<string>
using namespace std;

class Employee
{
private:
	int PID;
	string FistName;
	string LastName;
	string Address;
	string Position;
	int Phonenumber;
	int Pay;
public:
	Employee();
	Employee(int, string, string, string, string, int, int);
	void ShowInfo();
	static int ID;
	void setPID(int);
	void setFistName(string);
	void setLastName(string);
	void setAddress(string);
	void setPosition(string);
	void setPhoneNumber(int);
	void setPay(int);
	int getPID();
	string getFistName();
	string getLastName();
	string getAddress();
	string getPosition();
	int getPhonenumber();
	int getPay();

	~Employee();
};

Employee::Employee()
{
	this->PID = 0;
	this->FistName = "";
	this->LastName = "";
	this->Address = "";
	this->Position = "";
	this->Phonenumber = 0;
	this->Pay = 0;
}
Employee::Employee(int id, string fistname, string lastname, string address, string position, int phonenumber, int pay) {
	setPID(id);
	setFistName(fistname);
	setLastName(lastname);
	setAddress(address);
	setPosition(position);
	setPhoneNumber(phonenumber);
	setPay(pay);
}
int Employee::ID = 1000;

void Employee::setPID(int id) {
	this->PID = (id >= 1000) ? id : Employee::ID++;
}
void Employee::setFistName(string fistname) {
	this->FistName = fistname;
}
void Employee::setLastName(string lastname) {
	this->LastName = lastname;
}
void Employee::setAddress(string address) {
	this->Address = address;
}
void Employee::setPosition(string postion) {
	this->Position = postion;
}
void Employee::setPhoneNumber(int phonenumber) {
	this->Phonenumber = phonenumber;
}
void Employee::setPay(int pay) {
	this->Pay = pay;
}
int Employee::getPID() {
	return PID;
}
string Employee::getFistName() {
	return FistName;
}
string Employee::getLastName() {
	return LastName;
}
string Employee::getAddress() {
	return Address;
}
string Employee::getPosition() {
	return Position;
}
int Employee::getPhonenumber() {
	return Phonenumber;
}
int Employee::getPay() {
	return Pay;
}

void Employee::ShowInfo() {
	cout << "============ >> Show Info <<==============" << endl
		<< "PID: " << getPID() << endl
		<< "FistName: " << getFistName() << endl
		<< "LastName: " << getLastName() << endl
		<< "Address: " << getAddress() << endl
		<< "Position: " << getPosition() << endl
		<< "Phonenumber: " << getPhonenumber() << endl
		<< "Pay: " << getPay() << endl;
}
void getInfo(Employee* pl, int n) {
	int PID, PhoneNumber, Pay;
	string FistName, LastName, Address, Position;
	for (int i = 0; i < n; i++) {
		cout << "FistName: ";
		cin >> FistName;
		cout << "LastName: ";
		cin >> LastName;
		cout << "Address: ";
		cin.ignore();
		getline(cin, Address);
		cout << "Position: ";
		cin >> Position;
		cout << "PhoneNumber: ";
		cin >> PhoneNumber;
		cout << "Pay: ";
		cin >> Pay;
		Employee Employee(0, FistName, LastName, Address, Position, PhoneNumber, Pay);
		pl[i] = Employee;
	}

}

void showInfo(Employee* pl, int n) {
	int temp;
	for (int i = 0; i < n; i++) {
		for (int j = i + 1; j < n; j++) {
			if (pl[i].getPay() > pl[j].getPay()) {
				temp = pl[i].getPay();
				pl[i].setPay(pl[j].getPay());
				pl[j].setPay(temp);
			}
		}
		pl[i].ShowInfo();
	}
}

Employee::~Employee()
{
}

int main() {
	int n;
	cout << "Nhap n>0: ";
	cin >> n;
	Employee* people;
	people = new Employee[n];
	getInfo(people, n);
	showInfo(people, n);

	return 0;
}