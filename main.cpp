#include <iostream> // For cout and cin
#include <cstring> // For strlen

using namespace std; // For the 'string' type


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

void secondCharToUpperWithUserInput (){
    string userInput;
    cout << "Enter phrase: ('q' to quit) "; 
    getline(cin, userInput); // Reading string input from user
    cout << userInput << "\n";

    while (userInput != "q" && userInput != "Q") {
        userInput = secondCharToUpper(userInput);

        cout << "\nThe new phrase is: ";
        cout << userInput << "\n\n";
        cout << "Enter phrase: ('q' to quit) "; 
        getline(cin, userInput); 
    };    
}

int main()
{
    
    // secondCharToUpperWithUserInput();


    int numOfTests = 4;
    string inputs[numOfTests] = {"phRaAse", "ph12ras5se", "   ph ArSe    With spaCes", "ph./,'ase /.s sdf"};
    string correctAnswers[numOfTests] = {"PhRaAsE", "Ph12RaS5sE", "   Ph ArSe    WiTh SpAcEs", "Ph./,'AsE /.s SdF"};
    int passes = 0;

    for (int i = 0; i < numOfTests; i++) {
        string output = secondCharToUpper(inputs[i]);
        if (correctAnswers[i] == output) {
            ++passes;
        }
    }
    if (4 == passes) {
        cout << "All of the tests have passed successfully.\n";
    } else if (0 < passes){
        cout << passes << " out of 4 tests passed\n";
    } else {
        cout << "Non of the tests passed\n";
    }

    return 0;
}