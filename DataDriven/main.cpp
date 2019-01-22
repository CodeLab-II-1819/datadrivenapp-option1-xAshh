#include <iostream>
#include <fstream>
#include <string>

using namespace std;


int main() {

	/*-----Welcome/Greeting-----*/
	cout << "\n\n\Hello! Welcome to this Tweet search Engine! \n" << endl;
	cout << "Press the corresponding number and then 'enter' to get searching!\n\n" << endl;

	//Options
	cout << "1=Total number of tweets in the data set \n2=Number of tweets that mention 'money' \n3=Number of tweets that mention 'politics'\n" << endl;
	cout << "4=Tweets that contain the word 'Paris' \n5=Tweets that contain the word 'DreamWorks'\n6=Tweets that contain the word 'Uber' \n " << endl;
	cout << "7=Enter a word to see how many tweets contain it\n8=Enter a word and see what tweets contain that word\n" << endl; 
	cout << "9=All ReTweets\n10=Tweets during 21:00-21:59 \n \n \n" << endl; 
	
	
	int choice; //Options variable
	cin >> choice; //Option Selection 

	

	{switch (choice) {
		{ { { { { { { { { {

			{default: //Invalid input 
				cout << "\n \n \nChoice was not valid." << endl;

				char ch = 'n'; //Variable for another search
				cout << "Would you like to make another search? [y/n] \n \n \n " << endl;
				cin >> ch; //Whether another search is wanted to be done

				if (ch == 'y' || ch == 'Y') // Both cases
					main();
				else
					cout << "\n\n\nThank you for using the search engine! \nGoodbye!" << endl; //Exit message 
				system("pause");
				return 0; }




			{case 1: /*--------------------------Counting the Total Lines-----------------------------*/
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
				break;
			};
			/*-----------------------------------------------------------------------------*/




			{case 2:/*--------------------------Number of times money appears--------------------------*/
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
				cout << "Money appears " << count2 << " times." << endl; //output number of times string appears
				break;
			};
			/*-----------------------------------------------------------------------------*/




			{case 3:/*--------------------------Number of times money appears--------------------------*/
				ifstream file;
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
				cout << "Politics appears " << count3 << " times." << endl; //output number of times string appears
				break;
			};
			/*-----------------------------------------------------------------------------*/




			{case 4:/*--------------------------Tweets with 'Paris'--------------------------*/
				ifstream file;
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
				break;
			};
			/*-----------------------------------------------------------------------------*/





			{case 5: /*--------------------------Tweets with 'DreamWorks'--------------------------*/
				ifstream file;
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
				break;
			};
			/*-----------------------------------------------------------------------------*/




			{case 6: /*--------------------------Tweets with 'Uber'--------------------------*/
				ifstream file;
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
				break;
			}
			/*-----------------------------------------------------------------------------*/




			{case 7:/*--------------------------Number of times user search appears--------------------------*/

				string str6; //variable to store each line
				int count4 = 0; //variable to store occurrences
				string user1; //variable for user input


				cout << "Enter a word you would like to search for and discover how many tweets there are containing that word. \n \n" << endl;
				cin >> user1; //input for user

				ifstream file;
				file.open("sampleTweets.csv"); //Open File

				if (file.good()) { //check file is ready
					cout << "Please wait...\n" << endl; // Waiting Message
					while (!file.eof()) { //while not at end of file
						getline(file, str6); //get line from file and store in str6 variable
						if (str6.find(user1) <= str6.length()) { //compare str6 with user string
							count4++; //increment count
						}
					}
					file.close(); //close file
				}
				else {
					cout << "File Error" << endl;
				}
				cout << user1 << " appears " << count4 << " times." << endl; //output number of times user string appears
				break;
			};
			/*-----------------------------------------------------------------------------*/




			{case 8: /*--------------------------Tweets with 'Uber'--------------------------*/

				string str7; //variable to store each line
				string user2;//variable for user input

				cout << "Enter a word you would like to search for within the tweets. \n \n" << endl;
				cin >> user2; //input for user

				ifstream file;
				file.open("sampleTweets.csv"); //Open File

				if (file.good()) { //check file is ready
					cout << "Please wait...\n" << endl; // Waiting Message
					while (!file.eof()) { //while not at end of file
						getline(file, str7); //get line from file and store in str7 variable
						if (str7.find(user2) <= str7.length()) { //compare str7 with user2
							cout << str7 << "\n" << endl; //Print line
						}
					}
					file.close(); //close file
				}
				else {
					cout << "File Error" << endl;
				}
				break;
			};
			/*-----------------------------------------------------------------------------*/




			{case 9: /*--------------------------All Retweets--------------------------*/
				ifstream file;
				file.open("sampleTweets.csv"); //Open File

				string str8; //variable to store each line

				if (file.good()) { //check file is ready
					cout << "Please wait...\n" << endl; // Waiting Message
					while (!file.eof()) { //while not at end of file
						getline(file, str8); //get line from file and store in str8 variable
						if (str8.find("RT @") <= str8.length()) { //compare str8 with 'RT @'
							cout << str8 << "\n" << endl; //Print line
						}
					}
					file.close(); //close file
				}
				else {
					cout << "File Error" << endl;
				}
				break;
			}
			/*-----------------------------------------------------------------------------*/




			{case 10: /*--------------------------Tweets between 21:00-21:59--------------------------*/
				ifstream file;
				file.open("sampleTweets.csv"); //Open File

				string str9; //variable to store each line

				if (file.good()) { //check file is ready
					cout << "Please wait...\n" << endl; // Waiting Message
					while (!file.eof()) { //while not at end of file
						getline(file, str9); //get line from file and store in str9 variable
						if (str9.find("21:") <= str9.length()) { //compare str9 with '21:59'
							cout << str9 << "\n" << endl; //Print line
						}
					}
					file.close(); //close file
				}
				else {
					cout << "File Error" << endl;
				}
				break;
			}
			/*-----------------------------------------------------------------------------*/

			} } } } } } } } } } }


	{ //Loop after a search

	char ch = 'n'; //Variable for another search
	cout << "Would you like to make another search? [y/n] \n \n \n " << endl;
	cin >> ch; //Whether another search is wanted to be done

	if (ch == 'y' || ch == 'Y') // Both cases
		main();
	else
		cout << "\n\n\nThank you for using the search engine! \nGoodbye!" << endl; //Exit message 
	
	system("pause");
	return 0; }

	};

	return 0;
}