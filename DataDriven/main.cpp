#include <iostream>
#include <fstream>
#include <string>

using namespace std;

int main() {

	/*-----Welcome/Greeting-----*/
	cout << "Hello! Welcome to this Tweet search Engine! \n" << endl;
	cout << "Press the corresponding number to get searching!\n" << endl;

	//Options
	cout << "1=Total number of tweets in the data set \n2=Number of tweets that mention 'money' \n3=Number of tweets that mention 'politics'\n" << endl;
	
	
	
	
	
	
	


	/*--------------------------Counting the Total Lines-----------------------------*/

	/*
	ifstream file;
	file.open("sampleTweets.csv"); //Open File

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
	
	cout << "File has " << count << " lines." << endl; //output number of lines	/*-----------------------------------------------------------------------------*/




	/*-----Number of times money appears-----*/
	/*
	ifstream file;
	file.open("sampleTweets.csv"); //Open File

	string str1; //variable to store each line
	int count = 0; //variable to store occurrences

	if (file.good()) { //check file is ready
		cout << "Please wait...\n" << endl; // Waiting Message
		while (!file.eof()) { //while not at end of file
			getline(file, str1); //get line from file and store in str1 variable
			if (str1.find("money") <= str1.length()) { //compare str1 with money
				count++; //increment count
			}
		}
		file.close(); //close file
	}
	else {
		cout << "File Error" << endl;
	}
	cout <<"Money appears " << count << " times." << endl; //output number of times string appears
	/*-----------------------------------------------------------------------------*/	
	
	
	
	/*-----Number of times politics appears-----*/
	
	ifstream file;
	file.open("sampleTweets.csv"); //Open File

	string str2; //variable to store each line
	int count = 0; //variable to store occurrences

	if (file.good()) { //check file is ready
		cout << "Please wait...\n" << endl; // Waiting Message
		while (!file.eof()) { //while not at end of file
			getline(file, str2); //get line from file and store in str2 variable
			if (str2.find("politics") <= str2.length()) { //compare str2 with politics
				count++; //increment count
		}
	}
	file.close(); //close file
	}
	else {
		cout << "File Error" << endl;
	}
	cout <<"Politics appears " << count << " times." << endl; //output number of times string appears
	/*-----------------------------------------------------------------------------*/





	system("pause");
	return 0;
}