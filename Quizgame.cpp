#include <iostream>
using namespace std;

int main(){


    
    string questions[] = {{"1.What is the power dissipated by a 2K ohm resistor when a current of 5mA flows through it ?: "},
                         {"2.The sender of a message is also known as ?: "},
                         {"3.With ........., communication becomes a cycle ?: "},
                         {"4.The additive inverse of 9-4i is ?: "},
                         {"5.Which of the following are object-oriented languages? "},
                         {"6.A function may also be referred to as a ......?" },
                         {"7.Every line of code in C++ ends in.....?  "},
                         {"8.Ohms law states that? "},
                         {"9.Newton's 1st law of motion states that? "},
                         {"10.Do you think French should be studied in UMaT SRID? "}};

                         //using a multi dimensional array to store the possible answers to the questions
    string options[][4] = {{"A.0.05W ", "B. 0.25W", "C. 500W", "D. 0.92W"},
                          {"A. encoder", "B.John Carmack ", "C. decoder", "D.Mark Zuckerburg"},
                          {"A. channel", "B. feedback", "C. the encoder", "D. message"},
                          {"A. -9+i", "B. -9+4i", "C. 9+4i", "D. -9-4i?"},
                          {"A. Python", "B. Fortran", "C. C#", "D. SQL"},
                          {"A. menu", "B. data", "C. string", "D. None of the above"},
                          {"A. fullstop", "B. comma", "C. semi colon", "D. apostrophe"},
                          {"A. V=R*O", "B. V=IR", "C. P= VIt", "D. I=RV"},
                          {"A. V=IR", "B. F=Imt", "C. F=ma", "D. f= vt"},
                          {"A. Yes", "B. No", "C. Not at all", "D. none of the above"}};

                          //marking scheme for the above questions
    char answerKey[] = {'A', 'A', 'B', 'C', 'A', 'D', 'C', 'B', 'C', 'A'};
    
    int size = sizeof(questions)/sizeof(questions[0]);   
    char guess;
    int score;
    string name;
    int reference_number;

    string userResponse;  //string to store the response of the user to determine whether they are ready or not
    bool isReady = false;

    cout << "Enter your full name: \n";
    getline(cin >> ws, name);

    cout << "Enter your reference number: \n";
    cin >> reference_number;

    std::cin.clear();
        fflush(stdin);

    while (!isReady){
        cout << "Are you Ready to Start The Quiz? (Yes/No): \n";
        cin >> userResponse;

        if(userResponse == "Yes" || userResponse == "yes" || userResponse == "YES"){
            //
            cout << "\n Good Luck, Proceed to Answer the Questions\n ";
            isReady = true;
            
        }
        else if(userResponse == "No" || userResponse == "no" || userResponse == "NO"){
            cout << "\nProceed when Ready\n";
        }
        else{
            cout << "\nInvalid input\n";
        }
    }


    cout << "********UMaT SRID GENERAL QUESTIONS FOR ALL 1ST YEAR STUDENTS*********\n";
    cout << "***********************************************************************\n";

    for(int i = 0; i < size; i++){
        cout << questions[i] << '\n';
        

        for(int j = 0; j < sizeof(options[i])/sizeof(options[i][0]); j++){
            cout << options[i][j] << '\n';
        }

        cin >> guess;
        guess = toupper(guess);  //since user's guess can be in lower case this
                                 //converts it to uppercase letters to be recognised by the system

        if(guess == answerKey[i]){
            cout << "CORRECT\n";
            score++;
        }
        else{
            cout << "WRONG!\n";
            cout << "Answer: " << answerKey[i] << '\n';
        }

    }
    cout << "********************************\n";
    cout << "*          Results             *\n";
    cout << "********************************\n";
    cout << "\n                              \n";
    cout << "Name: " << name << '\n' << "Reference number: " << reference_number << '\n';
    cout << "CORRECT GUESSES: " << score << '\n';
    cout << "# of QUESTIONS: " << size << '\n';
    cout << "SCORE: " << (score/(double)size)*100 << "%";    //calculates the score in terms of percentages

    cout << "\n                              \n"; 
    if(((score/(double)size)*100) == 100){
        cout << "GOOD JOB  GENERAL YOU BROKE THE SYSTEM '_' ";
    }
        
    else if(((score/(double)size)*100) >= 70){
        cout << "\nEXCELLENT WORK\n";
    }
    else if (((score/(double)size)*100) <= 69){                  //remarks  based on the overall marks or score of participant
        cout << "\n Well done, Better luck next time\n";
    }

    return 0;
}