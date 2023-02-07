#include <iostream>
#include <fstream>
#include <string>
#include "Display.h"
using namespace std;

void DisplayNames(string file) {
	ifstream infile;
	infile.open(file);
	string line;
	
	if (infile.is_open()) {
		while (infile) {
			getline(infile, line);
			cout << line << endl;
		}
	}
	else {
		cout << "Could not open file.\n";
	}
	return 0;
}

