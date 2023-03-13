#include "main.h"
#include <iostream>
#include<fstream>
#include <string>
#include<cstdlib>
#include<sstream>
using namespace std;

int main() {
	cout << "the program reads from an file containing ascii encrypted passwords and decrypts them showing the passwords\n";

	fstream pswrd_file;

	pswrd_file.open("password.txt", ios::in);

	if (pswrd_file.is_open()) {
		string each_pswrd = " ";
		while (getline(pswrd_file, each_pswrd)) {
			//convert the string password in each line into into interger type using the stoi()function in string directive
			int pswrd = stoi(each_pswrd);
			//now decrypt the passwords in each line and display in to the console using ascii convertion
			cout << pswrd << endl;
		}
	}
}
