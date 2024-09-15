#include <iostream>
#include <thread>
#include <chrono> // Include chrono for std::chrono functions

using namespace std;

void driverCar(string driverName) {
	cout << driverName << " is driving." << endl;  // Added space after driverName
	this_thread::sleep_for(chrono::seconds(2));  // Simulate driving for 2 seconds
	cout << driverName << " is done driving." << endl;  // Added space after driverName
}

int main() {
	thread t1(driverCar, "Oggy ");
	thread t2(driverCar, "Jack ");

	t1.join(); // Wait for t1 to finish
	t2.join(); // Wait for t2 to finish
	return 0;
}
