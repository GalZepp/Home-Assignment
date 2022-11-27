#include <iostream> //For cout and cin
#include <cstring> //For strlen

using namespace std;


// void printWord(string phrase){

// }


int main()
{
    string phrase;
    cout << "Enter phrase: ";
    getline(cin,  phrase);

    cout << "The phrase is: " << phrase << "\n\n";
    
    int count_letters = 0; // counts only the letters in the phrase
    for (int i = 0, x = phrase.length(); i < x; i++){ //traversing over the string
        if(isalpha(phrase[i])) {
            if (count_letters++ % 2 == 0){
                phrase[i] = toupper(phrase[i]);
            } else {
                phrase[i] = tolower(phrase[i]);
            }
        }
    }
    cout << phrase;

    return 0;
}
