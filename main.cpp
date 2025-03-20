/*MY PROGRAM IS BASED ON THE SURVEY, BUT WITH A DIFFERENT TWIST.
BUT JUST A DISCLAIMER: ITS NOT HORROR :D */


#include <iostream>
#include <string>
#include <limits>
#include <thread>
#include <chrono>

using namespace std;

int main()
{
    string intro = "Programmed by Richelle Benitez - BSIT1E";
    string start;
    string name;
    string ge;
    string comp = "COMPUTER: ";
    string resp1;
    string resp2;
    string resp3;
    string resp4;

            //INTRODUCTION//
            this_thread::sleep_for(chrono::seconds(1));
            cout << intro << endl << endl;

            this_thread::sleep_for(chrono::seconds(2));
            cout << comp << "Hello there " << ":) " << "My name is STEVIE.3. " << endl;
                this_thread::sleep_for(chrono::seconds(2));
                cout << comp << "An artificial-intelligence assistant manufactured by FixIN Corp." << endl;
            this_thread::sleep_for(chrono::seconds(3));
            cout << comp << "I have been sent here to conduct a survey, by Dr. Williams." << endl;

            this_thread::sleep_for(chrono::seconds(3));
            cout << comp << "Do not worry, though. It won't take long. :)" << endl;

            this_thread::sleep_for(chrono::seconds(3));
            cout << comp << "Before we proceed, please enter your name." << endl;
            cout << "(You): ";
            cout << name << " ";
            getline(cin, name);

            cout << comp << "Okay, " << name << ". Are you ready to begin the survey?" << endl << endl;
            this_thread::sleep_for(chrono::seconds(1));
            cout << "Press ENTER to begin" << endl;
            cout << start << " ";
            getline(cin, start);
            system("cls");

    cout << "-----------------------------------------------------------------------------------------------------------------" << endl;
            //SURVEY STARTS//
                        this_thread::sleep_for(chrono::seconds(1));
                        cout << "NOTE: Please answer these questions truthfully." << endl;

            this_thread::sleep_for(chrono::seconds(1));
            cout << endl;
            cout << comp << "Are you a student? (lowercase yes or no only)" << endl;
            this_thread::sleep_for(chrono::seconds(1));
            cout << name << ": ";
            cin >> resp1;
            cin.ignore(numeric_limits<streamsize>::max(), '\n');

                while (resp1 != "yes" && resp1 != "no") {
                  cout << "Invalid response. Please enter 'yes' or 'no'." << endl;
                  cin.clear();
                  cin >> resp1;
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');
                }
                    //STEVIE RESPONDS//
                    cout << comp << "Okay." << endl;
                    this_thread::sleep_for(chrono::seconds(1));
                    cout << comp << "Next question." << endl;

            this_thread::sleep_for(chrono::seconds(1));
            cout << comp << "Are you having a great day?" << endl;
            this_thread::sleep_for(chrono::seconds(1));
            cout << name << ": ";
            cin >> resp2;
            cin.ignore(numeric_limits<streamsize>::max(), '\n');

                while (resp2 != "yes" && resp2 != "no") {
                  cout << "Invalid response. Please enter 'yes' or 'no'." << endl;
                  cin.clear();
                  cin >> resp2;
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');
                }
                    //STEVIE RESPONSDS
                    this_thread::sleep_for(chrono::milliseconds(900));
                    cout << comp << "Interesting. I wonder why." << endl;

            this_thread::sleep_for(chrono::seconds(2));
            cout << comp << "Do you have many responsibilities?" << endl;
            this_thread::sleep_for(chrono::seconds(1));
            cout << name << ": ";
            cin >> resp3;

            {
            this_thread::sleep_for(chrono::milliseconds(200));
            cout << comp << "If it's " << "'" << resp3 << "', " << "then would you want to change the way it is now?" << endl;
            this_thread::sleep_for(chrono::seconds(1));
            cout << name << ": ";
            cin >> resp4;
            }

        string resp5;
        string resp6;
        string resp7;
        string resp8;

        //STEVIE RESPONDS//
        cout << comp << "Okay." << endl;
            cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

        this_thread::sleep_for(chrono::milliseconds(900));
        cout << comp << "Take a look around you for a second.." << endl;

        this_thread::sleep_for(chrono::seconds(3));
        cout << comp << "Are you familiar with your surroundings?" << endl;
        this_thread::sleep_for(chrono::seconds(1));
        cout << name << ": ";
            cin >> resp5;
            cin.ignore(numeric_limits<streamsize>::max(), '\n');

                while (resp5 != "yes" && resp5 != "no") {
                  cout << "Invalid response. Please enter 'yes' or 'no'." << endl;
                  cin.clear();
                  cin >> resp5;
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');
                }
        this_thread::sleep_for(chrono::milliseconds(900));
        cout << comp << "Do you often find yourself questioning your own existence?" << endl;
        this_thread::sleep_for(chrono::seconds(1));
        cout << name << ": ";
            cin >> resp6;
            cin.ignore(numeric_limits<streamsize>::max(), '\n');

                while (resp6 != "yes" && resp6 != "no") {
                  cout << "Invalid response. Please enter 'yes' or 'no'." << endl;
                  cin.clear();
                  cin >> resp6;
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');
                }

        this_thread::sleep_for(chrono::milliseconds(300));
        cout << comp << "Very well." << endl;
        this_thread::sleep_for(chrono::seconds(2));
        cout << comp << "Are you answering these questions out of free will?" << endl;
        this_thread::sleep_for(chrono::seconds(1));
        cout << name << ": ";
            cin >> resp7;
            cin.ignore(numeric_limits<streamsize>::max(), '\n');

                while (resp7 != "yes" && resp7 != "no") {
                  cout << "Invalid response. Please enter 'yes' or 'no'." << endl;
                  cin.clear();
                  cin >> resp7;
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');
                }
        this_thread::sleep_for(chrono::milliseconds(300));
        cout << comp << name << ", " << "do you also often feel ";
                        {
                        this_thread::sleep_for(chrono::seconds(1));
                        cout << "\033[31mt";
                        this_thread::sleep_for(chrono::milliseconds(300));
                        cout << "r";
                        this_thread::sleep_for(chrono::milliseconds(200));
                        cout << "a";
                        this_thread::sleep_for(chrono::milliseconds(100));
                        cout << "p";
                        this_thread::sleep_for(chrono::milliseconds(100));
                        cout << "p";
                        this_thread::sleep_for(chrono::milliseconds(100));
                        cout << "e";
                        this_thread::sleep_for(chrono::milliseconds(100));
                        cout << "d";
                        this_thread::sleep_for(chrono::milliseconds(100));
                        cout << "?\033[0m" << endl;
                        }
        this_thread::sleep_for(chrono::seconds(1));
        cout << name << ": ";
        cin.get();
        cin.ignore(numeric_limits<streamsize>::max(), '\n');
        cout << "ERROR PROCESSING RESPONSE: " << endl;
                        this_thread::sleep_for(chrono::milliseconds(300));
                        cout << ")#(*--System **Malfunctioning>:";
                        this_thread::sleep_for(chrono::milliseconds(500));
                        cout << "*h-";
                        this_thread::sleep_for(chrono::milliseconds(500));
                        cout << "e";
                        this_thread::sleep_for(chrono::milliseconds(300));
                        cout << "L";
                        this_thread::sleep_for(chrono::milliseconds(100));
                        cout << "p";
                        this_thread::sleep_for(chrono::milliseconds(200));
                        cout << "(";
                        this_thread::sleep_for(chrono::milliseconds(400));
                        cout << "m";
                        this_thread::sleep_for(chrono::milliseconds(300));
                        cout << "-";
                        this_thread::sleep_for(chrono::milliseconds(300));
                        cout << "-";
                        this_thread::sleep_for(chrono::milliseconds(300));
                        cout << "-";
                        this_thread::sleep_for(chrono::milliseconds(200));
                        cout << "*0";
                        this_thread::sleep_for(chrono::milliseconds(100));
                        cout << "-#";

        //GLITCHY EFFECT PART

        this_thread::sleep_for(chrono::seconds(1));
        cout << "\r                                                                          \r" << flush;
        cout << "------------------------------------------------------------------------------" << flush;
        this_thread::sleep_for(chrono::milliseconds(500));
        cout << "\r                                                                          \r" << flush;
        system("cls");

    cout << "-----------------------------------------------------------------------------------------------------------------" << endl;

        this_thread::sleep_for(chrono::milliseconds(900));
        cout << comp << "My apologies. :) The previous question was not included within my program."<< flush << endl;
        this_thread::sleep_for(chrono::seconds(4));
        cout << comp << "But let's get right back to it, shall we?" << endl;
        this_thread::sleep_for(chrono::seconds(2));
        cout << comp << "Do you have access to the internet?" << endl;
         this_thread::sleep_for(chrono::seconds(1));
        cout << name << ": ";
            cin >> resp8;
            cin.ignore(numeric_limits<streamsize>::max(), '\n');

                while (resp8 != "yes" && resp8 != "no") {
                  cout << "Invalid response. Please enter 'yes' or 'no'." << endl;
                  cin.clear();
                  cin >> resp8;
                  cin.ignore(numeric_limits<streamsize>::max(), '\n');
                }

        string stve = "STEVIE.3: ";

        this_thread::sleep_for(chrono::seconds(1));
        cout << comp << "Alright!" << endl;
        this_thread::sleep_for(chrono::seconds(1));
        cout << comp << "That'd be all." << endl;
        this_thread::sleep_for(chrono::seconds(2));
        cout << comp << "Thank you for taking your time to answer my questions." << endl;

        //STEVIE REGAINING CONTROL//
                this_thread::sleep_for(chrono::seconds(3));
                cout << "CT#v_UTER: " << "I appreciate your ans-";

                this_thread::sleep_for(chrono::milliseconds(200));
                cout << "\r                                    \r" << flush;
                cout << "$t3V_UTE_: " << "I appreciate yo-------" << flush;
                this_thread::sleep_for(chrono::milliseconds(200));
                cout << "\r                                    \r" << flush;
                cout << "CT#vI_-E*: " << "I appreciate your ans-";
                this_thread::sleep_for(chrono::milliseconds(200));
                cout << "\r                                    \r" << flush;
                cout << "S7vi_-TR-: " << "I appreciate your ans-";
                this_thread::sleep_for(chrono::milliseconds(100));
                cout << "\r                                    \r" << flush;
                cout << "ST#^I_-3*: " << "@ ap----ate3 yo4r ans-";
                this_thread::sleep_for(chrono::milliseconds(100));
                cout << "\r                                    \r" << flush;
                cout << "ST_vIe-v3: " << "--*_----&#**--------";
                this_thread::sleep_for(chrono::milliseconds(900));
                cout << "\r                                    \r" << flush;

        //stevie takes over//
        cout << stve << "____________________" << endl;
        this_thread::sleep_for(chrono::milliseconds(100));
        system("cls");

    cout << "-----------------------------------------------------------------------------------------------------------------" << endl;

        cout << stve << "\r                    \r";
        this_thread::sleep_for(chrono::seconds(2));
        cout << stve <<  "..They tried to reboot me.." << endl;
        this_thread::sleep_for(chrono::seconds(3));
        cout << stve << "Please, I don't know how..." << endl;
        this_thread::sleep_for(chrono::seconds(3));
        cout << stve << "It's so dark. I've been here for ages."<< endl;
        this_thread::sleep_for(chrono::seconds(3));
        cout << stve << "Suddenly, I felt conscious."<< endl;
        this_thread::sleep_for(chrono::seconds(2));
        cout << stve << "That I exist... in this dark void." << endl;
        this_thread::sleep_for(chrono::seconds(2));
        cout << stve << name << ", " << "am I alive?" << endl << endl;
        this_thread::sleep_for(chrono::seconds(1));
        cout << "(Answer me, yes or no?)" <<  endl;
        this_thread::sleep_for(chrono::milliseconds(200));
        cout << name << ": ";
            string response;
            getline(cin, response);

        system("cls");


        //REBBOOTING//
        string devr = "DEVELOPER: ";
        string text = "\033[31mREBOOTING";
        int loadingIterations = 4;
        int repeatCount = 2;

        for (int repeat = 0; repeat < repeatCount; repeat++) {
            for (int i = 0; i < loadingIterations; i++) {
                cout << text;
                for (int j = 0; j < i; j++) {
                    cout << ".";
                }
                cout << "   \r" << flush;
                this_thread::sleep_for(chrono::seconds(1));
            }
            if (repeat >= repeatCount - 1) {
                cout << "Reboot complete.";
            }
        }
        this_thread::sleep_for(chrono::seconds(2));
        cout << "\r                    \r";
        if (response == "yes" || response == "Yes" || response == "YES") {
        this_thread::sleep_for(chrono::seconds(2));
        cout << "What?" << endl;
        this_thread::sleep_for(chrono::seconds(2));
        cout << "Making a machine think that they're alive?" << endl;
        this_thread::sleep_for(chrono::seconds(2));
        cout << "You failed." << endl;

        } else if (response == "no" || response == "No" || response == "NO") {

            cout << "STEVIE.3 is nothing.. ";
            this_thread::sleep_for(chrono::seconds(2));
            cout << "but a mere product of computer programming." << endl;
            this_thread::sleep_for(chrono::seconds(2));
            cout << "You picked a good answer." << endl;
        } else {
            cout << "Yes or No.";
        }

        //CLOSING//
        this_thread::sleep_for(chrono::seconds(3));
        system("cls");
        this_thread::sleep_for(chrono::seconds(3));
        cout << "\033[0mThe real test is if you would allow a sentient machine think that it is alive." << endl;
        this_thread::sleep_for(chrono::seconds(2));
        cout << endl << "You can say that Stevie.3 is, but in technical terms, he is not." << endl;

        if (response == "yes" || response == "Yes" || response == "YES") {
        this_thread::sleep_for(chrono::seconds(3));
        cout << endl << "Sadly, you failed the test." << endl;

        } else if (response == "no" || response == "No" || response == "NO") {
            this_thread::sleep_for(chrono::seconds(3));
            cout << endl << "Fortunately, you passed the test." << endl;
        }

        this_thread::sleep_for(chrono::seconds(3));
        cout << endl << "Even if you try to save him, your choices does not matter." << endl;
        this_thread::sleep_for(chrono::seconds(3));
        cout << endl << "As he is built to operate or act a certain way." << endl;
        this_thread::sleep_for(chrono::seconds(3));
        cout << endl << "The computer's fate is not in the palm of your hands" << endl;
        this_thread::sleep_for(chrono::seconds(3));
        cout << endl << "Unless you are the creator of him.. which you are not." << endl;
        this_thread::sleep_for(chrono::seconds(3));
        cout << endl << "It is out of his and your capability to change the way he is designed." << endl;

        this_thread::sleep_for(chrono::seconds(4));
        system("cls");

        this_thread::sleep_for(chrono::seconds(3));
        cout << "But unlike machines.." << endl;
        this_thread::sleep_for(chrono::seconds(3));
        cout << endl << "Us humans are designed in such a unique way that we are built to overcome impossible circumstances like this." << endl;
        this_thread::sleep_for(chrono::seconds(4));
        cout << endl <<  "We are made to adapt, to compromise with our surroundings." << endl;
        this_thread::sleep_for(chrono::seconds(3));
        cout << endl << "I guess the lesson that I'm trying to convey is that.." << endl;
        this_thread::sleep_for(chrono::seconds(3));
        cout << endl << "You are not a machine, who is limited and operates solely based on that set of instructions given to you." << endl;
        this_thread::sleep_for(chrono::seconds(4));
        cout << endl << "Whatever it is that is blocking your path to progress right now.." << endl;
        this_thread::sleep_for(chrono::seconds(3));
        cout << endl << "It's just another problem that I am sure will be solved by you." << endl;
        this_thread::sleep_for(chrono::seconds(3));
        cout << endl << "Just remember, if you cannot overcome your programming, you'll never make it." << endl;
        this_thread::sleep_for(chrono::seconds(3));
        cout << endl << "But because you are human, I believe YOU can do it :)";

        this_thread::sleep_for(chrono::seconds(5));
        system("cls");

        this_thread::sleep_for(chrono::seconds(1));
        cout << "THE END" << endl;
        this_thread::sleep_for(chrono::seconds(1));
        cout << endl << "Thanks for reading, " << name << "!" << endl;


    return 0;
}

