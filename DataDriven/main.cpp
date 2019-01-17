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
	cout << "4=Tweets that contain the word 'Paris' \n5=Tweets that contain the word 'DreamWorks'\n6=Tweets that contain the word 'Uber' \n" << endl;
	
	
	int choice; 
	cin >> choice; //Option Selection 

	

	{switch (choice) {

		{default:
			cout << "Choice was not valid." << endl;

			char ch = 'n';
			cout << "Would you like to make another search? [y/n] \n " << endl;
			cin >> ch;

			if (ch == 'y' || ch == 'Y')
				main();
			else
				cout << "Thank you for using the search engine! \nGoodbye!" << endl;
			return 0; }

		{case 1:
			cout << "hello" << endl;
			break;
		};
	}







	};
	
	
	
	


	/*--------------------------Counting the Total Lines-----------------------------*/

	/*
	ifstream file;
	file.open("sampleTweets.csv"); //Open File

	int count1 = 0; //variable to count lines
	string line; //varaible to temp store line

	if (file.good()) {//check file is ready
		cout << "Please wait...\n" << endl; // Waiting Message

		while (!file.eof()) { //loop until end of file
			getline(file, line); //get each line of file and assign to line string
			count1++; //increment count on each loop
		}
		file.close(); //close file once finished
	}
	else {
		cout << "File Error" << endl; //output file error if cant be read
	}
	
	cout << "File has " << count1 << " lines." << endl; //output number of lines
	/*-----------------------------------------------------------------------------*/




	/*-----Number of times money appears-----*/
	/*
	ifstream file;
	file.open("sampleTweets.csv"); //Open File

	string str1; //variable to store each line
	int count2 = 0; //variable to store occurrences

	if (file.good()) { //check file is ready
		cout << "Please wait...\n" << endl; // Waiting Message
		while (!file.eof()) { //while not at end of file
			getline(file, str1); //get line from file and store in str1 variable
			if (str1.find("money") <= str1.length()) { //compare str1 with money
				count2++; //increment count
			}
		}
		file.close(); //close file
	}
	else {
		cout << "File Error" << endl;
	}
	cout <<"Money appears " << count2 << " times." << endl; //output number of times string appears
	/*-----------------------------------------------------------------------------*/
	
	
	
	
	/*-----Number of times politics appears-----*/
	
	/*ifstream file;
	file.open("sampleTweets.csv"); //Open File

	string str2; //variable to store each line
	int count3 = 0; //variable to store occurrences

	if (file.good()) { //check file is ready
		cout << "Please wait...\n" << endl; // Waiting Message
		while (!file.eof()) { //while not at end of file
			getline(file, str2); //get line from file and store in str2 variable
			if (str2.find("politics") <= str2.length()) { //compare str2 with politics
				count3++; //increment count
		}
	}
	file.close(); //close file
	}
	else {
		cout << "File Error" << endl;
	}
	cout <<"Politics appears " << count << " times." << endl; //output number of times string appears
	/*-----------------------------------------------------------------------------*/




	/*-----Tweets with 'Paris'-----*/

	/*ifstream file;
	file.open("sampleTweets.csv"); //Open File

	string str3; //variable to store each line

	if (file.good()) { //check file is ready
		cout << "Please wait...\n" << endl; // Waiting Message
		while (!file.eof()) { //while not at end of file
			getline(file, str3); //get line from file and store in str3 variable
			if (str3.find("Paris") <= str3.length()) { //compare str3 with 'Paris'
				cout << str3 << "\n" << endl; //Print line
			}
		}
		file.close(); //close file
	}
	else {
		cout << "File Error" << endl;
	}
	/*-----------------------------------------------------------------------------*/




	/*-----Tweets with 'DreamWorks'-----*/

	/*ifstream file;
	file.open("sampleTweets.csv"); //Open File

	string str4; //variable to store each line

	if (file.good()) { //check file is ready
		cout << "Please wait...\n" << endl; // Waiting Message
		while (!file.eof()) { //while not at end of file
			getline(file, str4); //get line from file and store in str4 variable
			if (str4.find("DreamWorks") <= str4.length()) { //compare str4 with 'DreamWorks'
				cout << str4 << "\n" << endl; //Print line
			}
		}
		file.close(); //close file
	}
	else {
		cout << "File Error" << endl;
	}
	/*-----------------------------------------------------------------------------*/




	/*-----Tweets with 'Uber'-----*/

	/*ifstream file;
	file.open("sampleTweets.csv"); //Open File

	string str5; //variable to store each line

	if (file.good()) { //check file is ready
		cout << "Please wait...\n" << endl; // Waiting Message
		while (!file.eof()) { //while not at end of file
			getline(file, str5); //get line from file and store in str5 variable
			if (str5.find("Uber") <= str5.length()) { //compare str5 with 'Uber'
				cout << str5 << "\n" << endl; //Print line
			}
		}
		file.close(); //close file
	}
	else {
		cout << "File Error" << endl;
	}
	/*-----------------------------------------------------------------------------*/






















	system("pause");
	return 0;
}