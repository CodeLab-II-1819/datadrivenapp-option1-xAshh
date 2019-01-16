#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {

	ifstream file;
	file.open("sampleTweets.csv"); //Open FIle
	

	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	
	int count = 0; //variable to count lines
	string line; //varaible to temp store line
	if (file.good()) {//check file is ready
		cout << "Please wait...\n" << endl; // Waiting Message

		while (!file.eof()) { //loop until end of file
			getline(file, line); //get each line of file and assign to line string
			count++; //increment count on each loop
		}
		file.close(); //close file once finished
	}
	else {
		cout << "File Error" << endl; //output file error if cant be read
	}
	
	cout << "File has " << count << " lines." << endl; //output number of lines







	system("pause");
	return 0;
}