#ifndef MENU_H
#define MENU_H

#include <iostream>
//#include the wav guys

using namespace std;

template<typename T>

/**
* This is a Menu class
*/
class menu{

    private:
	T userChoice, userChoice2, userChoice3, userChoice4, userChoice5;
	T option1, option2, option3, option4, option5, option6, option7, option8, option9;
	//void wavManager, wavIO;

    public:
	//default ctor
/**
* Base Constructor
*/
	menu();
	//parameterized ctor
	
/**
* Constructor that takes in the useChoice template 
* @param userChoice - Template for users to choose options
*/
	menu(T userChoice);

	//int getMenuChoice();

	T switchState();

};


template<typename T>
menu<T>::menu(){
    userChoice = 0;
}

//parameterized ctor
template<typename T>
menu<T>::menu(T userChoice) : userChoice(userChoice){
}

/**
* This is our template T using switch cases for the user interface
*/
template<typename T>
T menu<T>::switchState(){
//wavManager and wavIO class, pass in objects of those class to menu, in default ctor of menu set equal to class, and in main.cpp wavManager and wavIO get created first, then create menu and pass in objects via constructor
	do{

		//int userInput;
		cout << "**AUDIO FILE MANAGEMENT SYSTEM**" << endl;
		cout << "1. Modify/Add Metadata" << endl;
		cout << "2. Process Files" << endl;
		cout << "3. Export Files" << endl;
		cout << "0. EXIT" << endl;
		cout << "What do you want to do? " << endl;
		cin >> userChoice;

	    //userChoice = getMenuChoice();
	    switch(userChoice){
		case 1:
		cout << "Creating Metadata..." << endl;
		//modifyMetadata function
			break;
		case 2:
			//processFiles function
			cout << "How do you want to process your files?" << endl;
			cout << "1. Normalization" << endl;
			cout << "2. Noise Gate" << endl;
			cout << "3. Echo" << endl;
			cout << "Pick one: " << endl;
			cin >> userChoice2;

			switch(userChoice2){
			    case 1:
				cout << "You've selected normalization. If you want to use another processor, enter 1 for yes and 2 for no " << endl;
				cin >> option1;

					if(option1 == 1){
						cout << "How do you want to process your files?" << endl;
						cout << "1. Noise Gate" << endl;
						cout << "2. Echo" << endl;
						cout << "Pick one: " << endl;
						cin >> userChoice3;

						switch(userChoice3){
						case 1:
						    cout << "You've selected normalization and noise gate. Do you want to echo your file as well? (enter 1 for yes and 2 for no) " << endl;
						    cin >> option2;
						if(option2 == 1){
							cout << "You've selected normalization, noise gate, and echo!" << endl;
							//add all three and break
						}else if(option2 == 2){
							cout << "You've selected normalization and noise gate!" << endl;
							//add two and break;
						}
						case 2:
						    cout << "You've selected normalization and echo. Do you want to noise gate your file as well? (enter 1 for yes and 2 for no) " << endl;
						    cin >> option3;
						if(option3 == 1){
							cout << "You've selected normalization, echo, and noise gate!" << endl;
							//add all three and break;
						}else if(option3 == 2){
							cout << "You've selected normalization and echo!" << endl;
						}
					        }
					}else if(option1 == 2){
						cout << "You've selected normalization!" << endl;
						//add normalization and break
						break;
					}

			    case 2:
				cout << "You've selected noise gate. If you want to use another processor, enter 1 for yes and 2 for no " << endl;
				cin >> option4;

					if(option4 == 1){
						cout << "How do you want to process your files?" << endl;
						cout << "1. Normalization" << endl;
						cout << "2. Echo" << endl;
						cout << "Pick one: " << endl;
						cin >> userChoice4;

						switch(userChoice4){
						case 1:
		                                    cout << "You've selected noise gate and normalization. Do you want to echo your file as well? (enter 1 for yes and 2 for no) " << endl;
						    cin >> option5;
						if(option5 == 1){
							cout << "You've selected normalization, noise gating, and echo!" << endl;
							//add all three and break;
						}else if(option5 == 2){
							cout << "You've selected noise gating and normalization." << endl;
							//add two and break;
						}
						case 2:
							cout << "You've selected noise gate and echo. Do you want to normalize as well? (enter 1 for yes and 2 for no) " << endl;
							cin >> option6;
						if(option6 == 1){
							cout << "You've selected normalization, noise gating, and echo!" << endl;
						}else if(option6 == 2){
							cout << "You've selected noise gate and echo." << endl;
							//add two and break;
						}
						}
					}else if(option4 == 2){
						cout << "You've selected noise gate!" << endl;
					}
                            case 3:
				cout << "You've selected echo. If you want to use another processor, enter 1 for yes and 2 for no " << endl;
				cin >> option7;

					if(option7 == 1){
						cout << "How do you want to process your files?" << endl;
						cout << "1. Normalization" << endl;
						cout << "2. Noisegate" << endl;
						cout << "Pick one: " << endl;
						cin >> userChoice5;

						switch(userChoice5){
						case 1:
						    cout << "You've selected echo and normalization. Do you want to noise gate your file as well? (enter 1 for yes and 2 for no) " << endl;
						    cin >> option8;
							if(option8 == 1){
								cout << "You've selected echo, normalization, and noise gating!" << endl;
								//add three and break;
							}else if(option8 == 2){
								cout << "You've selected echo and normalization." << endl;
							}
						case 2:
							cout << "You've selected echo and noise gate. Do you want to normalize your file as well? (enter 1 for yes and 2 for no) " << endl;
							cin >> option9;
							    if(option9 == 1){
								cout << "You've selected echo, noise gating, and normalization!" << endl;
							    }else if(option9 == 2){
								cout << "You've selected echo and noise gate." << endl;
								//add two and break;
							    }
						}
					}

			}

			cout << "Processing Files..." << endl;

			break;
		case 3:
			//exportFiles function
			cout << "Exporting Files..." << endl;

			break;
		case 0:

			break;

		default:
			cout << "Not a valid option." << endl;
			break;
		}
	}while(userChoice != 0);
}
#endif
