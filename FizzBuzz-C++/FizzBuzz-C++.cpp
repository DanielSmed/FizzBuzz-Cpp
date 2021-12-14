#include <iostream>
#include <list>

using namespace std;

int main()
{
    cout << "A little game of FizzBuzz. \n ";
    string input_string;
    int input_integer;
    
    /*
    cout << "Number of multiplecation tabels (int): ";
    cin >> input_integer;
    */
    
    const int NumberOfTabels = 2; //input_integer;

    string Words[NumberOfTabels] = {"Fizz", "Buzz"};
    int Tabels[NumberOfTabels] = { 3, 5};
    string answer;
    
    /*
    for(int i = 0; i < NumberOfTabels; i++) {
        cout << "Multiplecation tabel where numbers that are a multiple of (int): ";
        cin >> input_integer;
        Tabels[i] = input_integer;
        
        cout << "Word for the multiplecation tabel (string): ";
        cin >> input_string;
        Words[i] = input_string;
    }
    */

    cout << "Run until what number (int):";
    int Last_number;
    cin >> Last_number;

    for (int i = 1; i <= Last_number; i++) {
        answer = "";
        for (int j = 0; j < NumberOfTabels; j++) {
            if (i % Tabels[j] == 0) {
                answer = answer + Words[j];
            }
        }
        if (answer == "") {
            cout << i;
        }
        else {
            cout << answer;
        }
        cout << "\n";
    }
}