/* Paul Rowe */
/* 10/7/24 */
/* Extra: Repeats test based on user input */
/* Mood Tracker */
#include <iostream>
using namespace std;
/* using namespace to make code more efficient */
int main()
{
    bool resp = true;
    while (resp) {
        /* start of while loop */
        int mood = 5;

        cout << "What is your mood today?" << endl;
        cout << "----------------------------" << endl;
        cout << "Joyful -> 1" << endl;
        cout << "Annoyed -> 2" << endl;
        cout << "Depressed -> 3" << endl;
        cout << "Calm -> 4" << endl;
        cout << "Anxious -> 5" << endl;
        /* listing emotions */
        cin >> mood;

        switch (mood) {
        case 1:
            cout << "That's good to hear!" << endl;
            break;
        case 2:
            cout << "What's bothering you?" << endl;
            break;
        case 3:
            cout << "Here, take a cookie!" << endl;
            break;
        case 4:
            cout << "Have you been meditating recently?" << endl;
            break;
        case 5:
            cout << "Take deep breaths, I'm sure you'll be alright." << endl;
            break;
        default:
            cout << "I don't know what that means :(" << endl;
            break;
        }
        /* switch statement that goes up to 5 */

        string answ;
        cout << "Retake? y/n" << endl;
        cin >> answ;
        /* extra */

        if (answ == "y") {
            resp = true;
        }
        else if (answ == "n")
            resp = false;
        }
    /* if statements that react to user input*/
    }


