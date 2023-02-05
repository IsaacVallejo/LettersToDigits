#include <iostream> // for standard io functions
#include <string> //for string data type
#include <limits> // defines the elements with the characteristics of arithmetic types
//This will allow me to use the function of numeric_limits<streamsize>::max()

using namespace std;

int main() {
	
	char letter;
	cout << "This program will take in your seven letter entry and output the corresponding digits to create a short memorable title.";
	cout << "Press # to exit the program: " << endl;

	do
	{
		int counter{};
		// I learned using the curly braces are new to c++11 and since i used this style I do not
		// have to initalize the counter to 0. which is interesting and new.
		string number;

		cout << "Enter the letters: ";

		do
		{
			cin >> letter;

			if (letter != '#')
			{
				counter++;
				letter = toupper(letter);

				switch (letter)
				{
				case 'A':
				case 'B':
				case 'C':
					number += "2";
					break;
				case 'D':
				case 'E':
				case 'F':
					number += "3";
					break;
				case 'G':
				case 'H':
				case 'I':
					number += "4";
					break;
				case 'J':
				case 'K':
				case 'L':
					number += "5";
					break;
				case 'M':
				case 'N':
				case 'O':
					number += "6";
					break;
				case 'P':
				case 'Q':
				case 'R':
					number += "7";
					break;
				case 'S':
				case 'T':
				case 'U':
				case 'V':
					number += "8";
					break;
				case 'W':
				case 'X':
				case 'Y':
				case 'Z':
					number += "9";
					break;
				default:
					cout << "Invalid entry. Try Again: ";
					counter--;
					break;
				}
				if (counter == 3)
					number += "-";
			}
		} while (letter != '#' && counter < 7);

		cout << '\n' << number << '\n';

		/*
		* since we want to allow the user to add as much letters we only want to process the first 7
		* what i thought was a good idea is to process the first 7 and ignore the rest of the string.
		* I am not sure how to temperaly save the other possible letters and process after. will learn how to do this for a later project.
		* 
		* This function was interesting and is still very hard to comprehend but to my knowledge we want to ignore the streamsize of max up to the '\n'.
		*/
		cin.ignore(numeric_limits<streamsize>::max(), '\n');

		cout << "If you want to continue type 'Y' or 'N' ";

		cin >> letter;
		letter = toupper(letter);
	} while (letter != 'N');
	
	return 0;
}