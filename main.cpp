#include <iostream> //For cout and cin
#include <cstring> //For strlen

using namespace std;

string secondCharToUpper (string phrase){
    int count_letters = 0; // Tracks only the letters (isalpha - not spaces, numbers nor punctuation)
    for (int i = 0, x = phrase.length(); i < x; i++){ 
        if(isalpha(phrase[i])) {
            if (count_letters++ % 2 == 0){ // If it's the second letter
                phrase[i] = toupper(phrase[i]);
            } else {
                // In case the letter is uppercase, convert it, without checking
                phrase[i] = tolower(phrase[i]);
            }
        }
    }
    return phrase;
}

int main()
{
    string userInput;
    cout << "Enter phrase: ";
    getline(cin,  userInput);

    
    // int count_letters = 0; // Tracks only the letters (isalpha - not spaces, numbers nor punctuation)
    // for (int i = 0, x = phrase.length(); i < x; i++){ 
    //     if(isalpha(phrase[i])) {
    //         if (count_letters++ % 2 == 0){ // If it's the second letter
    //             phrase[i] = toupper(phrase[i]);
    //         } else {
    //             // In case the letter is uppercase, convert it, without checking
    //             phrase[i] = tolower(phrase[i]);
    //         }
    //     }
    // }

    userInput = secondCharToUpper(userInput);
    cout << "\nThe new phrase is: ";
    cout << userInput << "\n";

    return 0;
}
