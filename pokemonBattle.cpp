/*
 * Derek T. Klapchar
 * cs 111
 * 4-20-2016
 *This program lets you select a pokemon to use in the battle against the super powerful pokemon mewtwo.  
 *It uses a random dye roll to select if you win or not.  odd you lose, even you win.
 */

#include <iostream>
#include <cstdlib>
using namespace std;

class Dice {
	public:
		Dice();//default constructor
		Dice(int); //alt constructor
		int roll();

		//getters/setters
		void setNumSides(int);
		int getNumSides();
	private:
		int numSides;
};

/*
 * Defualt constructor.
 */
Dice::Dice() {
	srand(time(NULL)); //starts the random number generator
	numSides = 6;
}

/*
 * Simulate a roll of the dice.
 * @return a random value between 1 and 6
 */

int Dice::roll() {
	return (rand() % numSides) + 1;
}


int Dice::getNumSides(){
	return numSides;
}

void printInstructions();
void printMenu();
int getMenuChoice();



int main(){
	int userMenuChoice;
	int number;// used for knowing if the dye rolled a even or odd number.
	char answer;//for slecting if they are ready to fight mewtwo or not.
	char battleAnswer;//for selecting which attack you want to use.
	int MewtwosHealth   = 416;//Will reprsent the health that Mewtwo has.
	int charizardHealth = 360;//Will reprsent the health that Charizard has.
	int blastoiseHealth = 362;//will reprsent the health that Blastoise has.
	int venusaurHealth  = 364;//will reprsent the health that Vensaur has.
	Dice myDice;
	do {
		printInstructions();
		printMenu();
		userMenuChoice = getMenuChoice();
		//number = myDice.roll() % 2;
		if(userMenuChoice == 1){
			cout << "***********************************************" << endl;	
			cout << "Congratulations you have selected Charizard!  *" << endl;
			cout << "Now you have to battle Mewtwo!                *" << endl;
			cout << "ARE YOU READY?!?!?!?!?!? (Y/N): ";
			cin  >> answer;
			cout << "***********************************************" << endl;
			
			do{
				if (answer == 'Y' || answer == 'y'){
				cout << "A. Flamethrower  B. Earthquake  " << endl;
				cout << "C. Hyper Beam    D. Fly         " << endl;
				cout << "Which attack would you like to use?(A-D): ";
				cin  >> battleAnswer;
			
		 			number = myDice.roll() % 2;	
					if(battleAnswer == 'A' || battleAnswer == 'a'){	
						if(number == 0){
							cout << "***************************************************************************" << endl;
							cout << "You missed Mewtwo.                                                        *" << endl;
							cout << "***************************************************************************" << endl;
						} else{
							cout << "***************************************************************************" << endl;
							cout << "You did 95 damage to Mewtwo.                                              *" << endl;
							cout << "***************************************************************************" << endl;
						}
						if(number != 0){
							cout << "Mewtwos health left: " << MewtwosHealth - 95 << endl;
							MewtwosHealth -= 95;
						}
						if(number == 0){
						cout << "Mewtwos Health left: " << MewtwosHealth << endl;		
						}
						if(MewtwosHealth < 1){
							break;
						}
						number = myDice.roll() % 2;
						cout << "Mewtwo used Phychic" << endl;
						if(number == 0){
							cout << "Mewtwo missed" << endl;
						}else{
							cout << "Mewtwo did 90 damgae. Charizards remaining health: " << charizardHealth - 90 << endl;
							charizardHealth -=90;
						}
						
					}else if(battleAnswer == 'B' || battleAnswer == 'b'){
						
						if(number == 0){
							cout << "***************************************************************************" << endl;
							cout << "You missed Mewtwo.                                                        *" << endl;
							cout << "***************************************************************************" << endl;
						} else{
							cout << "***************************************************************************" << endl;
							cout << "You did 100 damage to Mewtwo.                                              *" << endl;
							cout << "***************************************************************************" << endl;
						}
						if(number != 0){
							cout << "Mewtwos health left: " << MewtwosHealth - 100 << endl;
							MewtwosHealth -= 100;
						}
						if(number == 0){
						cout << "Mewtwos Health left: " << MewtwosHealth << endl;		
						}
						number = myDice.roll() % 2;
						cout << "Mewtwo used Phychic" << endl;
						if(number == 0){
							cout << "Mewtwo missed" << endl;
						}else{
							cout << "Mewtwo did 90 damgae. Charizards remaining health: " << charizardHealth - 90 << endl;
							charizardHealth -=90;
						}	
						
					}else if(battleAnswer == 'C' || battleAnswer == 'c'){
						
						if(number == 0){
							cout << "***************************************************************************" << endl;
							cout << "You missed Mewtwo.                                                        *" << endl;
							cout << "***************************************************************************" << endl;
						} else{
							cout << "***************************************************************************" << endl;
							cout << "You did 150 damage to Mewtwo.                                              *" << endl;
							cout << "***************************************************************************" << endl;
						}
						if(number != 0){
							cout << "Mewtwos health left: " << MewtwosHealth - 150 << endl;
							MewtwosHealth -= 150;
						}
						if(number == 0){
						cout << "Mewtwos Health left: " << MewtwosHealth << endl;		
						}
						number = myDice.roll() % 2;
						cout << "Mewtwo used Phychic" << endl;
						if(number == 0){
							cout << "Mewtwo missed" << endl;
						}else{
							cout << "Mewtwo did 90 damgae. Charizards remaining health: " << charizardHealth - 90 << endl;
							charizardHealth -=90;
						}
					}else if(battleAnswer == 'D' || battleAnswer == 'd'){
						
						if(number == 0){
							cout << "***************************************************************************" << endl;
							cout << "You missed Mewtwo.                                                        *" << endl;
							cout << "***************************************************************************" << endl;
						} else{
							cout << "***************************************************************************" << endl;
							cout << "You did 75 damage to Mewtwo.                                              *" << endl;
							cout << "***************************************************************************" << endl;
						}
						if(number != 0){
							cout << "Mewtwos health left: " << MewtwosHealth - 75 << endl;
							MewtwosHealth -= 75;
						}
						if(number == 0){
						cout << "Mewtwos Health left: " << MewtwosHealth << endl;		
						}
						number = myDice.roll() % 2;
						cout << "Mewtwo used Phychic" << endl;
						if(number == 0){
							cout << "Mewtwo missed" << endl;
						}else{
							cout << "Mewtwo did 90 damgae. Charizards remaining health: " << charizardHealth - 90 << endl;
							charizardHealth -=90;
						}
					}
				}
			}while(MewtwosHealth > 0 && charizardHealth > 0);
			if(MewtwosHealth < 1){
				cout << "Chairzard is the Winner" << endl;		
			}else if(charizardHealth < 1){
				cout << "Mewtwo is the Winner" << endl;
			}
			charizardHealth = 360;
			MewtwosHealth   = 416;
				
		}else if(userMenuChoice == 2){
			cout << "**********************************************" << endl;
			cout << "Congratulations you have selected Blastoise! *" << endl;
			cout << "Now you have to battle Mewtwo!               *" << endl;
			cout << "ARE YOU READY?!?!?!?!?!? (Y/N): ";
			cin  >> answer;
			cout << "**********************************************" << endl;
		
			
			do{
				if (answer == 'Y' || answer == 'y'){
				cout << "A. Surf          B. Dig  " << endl;
				cout << "C. Hydro Pump    D. Blizzard        " << endl;
				cout << "Which attack would you like to use?(A-D): ";
				cin  >> battleAnswer;
			
		 			number = myDice.roll() % 2;	
					if(battleAnswer == 'A' || battleAnswer == 'a'){	
						if(number == 0){
							cout << "***************************************************************************" << endl;
							cout << "You missed Mewtwo.                                                        *" << endl;
							cout << "***************************************************************************" << endl;
						} else{
							cout << "***************************************************************************" << endl;
							cout << "You did 95 damage to Mewtwo.                                              *" << endl;
							cout << "***************************************************************************" << endl;
						}
						if(number != 0){
							cout << "Mewtwos health left: " << MewtwosHealth - 95 << endl;
							MewtwosHealth -= 95;
						}
						if(number == 0){
						cout << "Mewtwos Health left: " << MewtwosHealth << endl;		
						}
						if(MewtwosHealth < 1){
							break;
						}
						number = myDice.roll() % 2;
						cout << "Mewtwo used Phychic" << endl;
						if(number == 0){
							cout << "Mewtwo missed" << endl;
						}else{
							cout << "Mewtwo did 90 damgae. Charizards remaining health: " << blastoiseHealth - 90 << endl;
							blastoiseHealth -=90;
						}
						
					}else if(battleAnswer == 'B' || battleAnswer == 'b'){
						
						if(number == 0){
							cout << "***************************************************************************" << endl;
							cout << "You missed Mewtwo.                                                        *" << endl;
							cout << "***************************************************************************" << endl;
						} else{
							cout << "***************************************************************************" << endl;
							cout << "You did 100 damage to Mewtwo.                                              *" << endl;
							cout << "***************************************************************************" << endl;
						}
						if(number != 0){
							cout << "Mewtwos health left: " << MewtwosHealth - 100 << endl;
							MewtwosHealth -= 100;
						}
						if(number == 0){
						cout << "Mewtwos Health left: " << MewtwosHealth << endl;		
						}
						number = myDice.roll() % 2;
						cout << "Mewtwo used Phychic" << endl;
						if(number == 0){
							cout << "Mewtwo missed" << endl;
						}else{
							cout << "Mewtwo did 90 damgae. Blastoise remaining health: " << blastoiseHealth - 90 << endl;
							blastoiseHealth -=90;
						}	
						
					}else if(battleAnswer == 'C' || battleAnswer == 'c'){
						
						if(number == 0){
							cout << "***************************************************************************" << endl;
							cout << "You missed Mewtwo.                                                        *" << endl;
							cout << "***************************************************************************" << endl;
						} else{
							cout << "***************************************************************************" << endl;
							cout << "You did 120 damage to Mewtwo.                                             *" << endl;
							cout << "***************************************************************************" << endl;
						}
						if(number != 0){
							cout << "Mewtwos health left: " << MewtwosHealth - 120 << endl;
							MewtwosHealth -= 120;
						}
						if(number == 0){
						cout << "Mewtwos Health left: " << MewtwosHealth << endl;		
						}
						number = myDice.roll() % 2;
						cout << "Mewtwo used Phychic" << endl;
						if(number == 0){
							cout << "Mewtwo missed" << endl;
						}else{
							cout << "Mewtwo did 90 damgae. Blastoise remaining health: " << blastoiseHealth - 90 << endl;
							blastoiseHealth -=90;
						}
					}else if(battleAnswer == 'D' || battleAnswer == 'd'){
						
						if(number == 0){
							cout << "***************************************************************************" << endl;
							cout << "You missed Mewtwo.                                                        *" << endl;
							cout << "***************************************************************************" << endl;
						} else{
							cout << "***************************************************************************" << endl;
							cout << "You did 120 damage to Mewtwo.                                              *" << endl;
							cout << "***************************************************************************" << endl;
						}
						if(number != 0){
							cout << "Mewtwos health left: " << MewtwosHealth - 120 << endl;
							MewtwosHealth -= 120;
						}
						if(number == 0){
						cout << "Mewtwos Health left: " << MewtwosHealth << endl;		
						}
						number = myDice.roll() % 2;
						cout << "Mewtwo used Phychic" << endl;
						if(number == 0){
							cout << "Mewtwo missed" << endl;
						}else{
							cout << "Mewtwo did 90 damgae. Blastoise remaining health: " << blastoiseHealth - 90 << endl;
							blastoiseHealth -=90;
						}
					}
				}
			}while(MewtwosHealth > 0 && blastoiseHealth > 0);
			if(MewtwosHealth < 1){
				cout << "Blastoise is the Winner" << endl;		
			}else if(blastoiseHealth < 1){
				cout << "Mewtwo is the Winner" << endl;
			}
			blastoiseHealth = 362;
			MewtwosHealth   = 416;

		}else if(userMenuChoice == 3){
			cout << "**********************************************" << endl;
			cout << "Congratulations you have selected Venusaur!  *" << endl;
			cout << "Now you have to battle Mewtwo!               *" << endl;
			cout << "ARE YOU READY?!?!?!?!?!?! (Y/N): ";
			cin  >> answer;
			cout << "**********************************************" << endl;
			
			do{
				if (answer == 'Y' || answer == 'y'){
				cout << "A. SolarBeam     B. Double-Edge  " << endl;
				cout << "C. Hyper Beam    D. Body Slam    " << endl;
				cout << "Which attack would you like to use?(A-D): ";
				cin  >> battleAnswer;
			
		 			number = myDice.roll() % 2;	
					if(battleAnswer == 'A' || battleAnswer == 'a'){	
						if(number == 0){
							cout << "***************************************************************************" << endl;
							cout << "You missed Mewtwo.                                                        *" << endl;
							cout << "***************************************************************************" << endl;
						} else{
							cout << "***************************************************************************" << endl;
							cout << "You did 120 damage to Mewtwo.                                              *" << endl;
							cout << "***************************************************************************" << endl;
						}
						if(number != 0){
							cout << "Mewtwos health left: " << MewtwosHealth - 120 << endl;
							MewtwosHealth -= 120;
						}
						if(number == 0){
						cout << "Mewtwos Health left: " << MewtwosHealth << endl;		
						}
						if(MewtwosHealth < 1){
							break;
						}
						number = myDice.roll() % 2;
						cout << "Mewtwo used Phychic" << endl;
						if(number == 0){
							cout << "Mewtwo missed" << endl;
						}else{
							cout << "Mewtwo did 90 damgae. Venusaur remaining health: " << venusaurHealth - 90 << endl;
							venusaurHealth -=90;
						}
						
					}else if(battleAnswer == 'B' || battleAnswer == 'b'){
						
						if(number == 0){
							cout << "***************************************************************************" << endl;
							cout << "You missed Mewtwo.                                                        *" << endl;
							cout << "***************************************************************************" << endl;
						} else{
							cout << "***************************************************************************" << endl;
							cout << "You did 100 damage to Mewtwo.                                              *" << endl;
							cout << "***************************************************************************" << endl;
						}
						if(number != 0){
							cout << "Mewtwos health left: " << MewtwosHealth - 100 << endl;
							MewtwosHealth -= 100;
						}
						if(number == 0){
						cout << "Mewtwos Health left: " << MewtwosHealth << endl;		
						}
						number = myDice.roll() % 2;
						cout << "Mewtwo used Phychic" << endl;
						if(number == 0){
							cout << "Mewtwo missed" << endl;
						}else{
							cout << "Mewtwo did 90 damgae. Venusaur remaining health: " << venusaurHealth - 90 << endl;
							venusaurHealth -=90;
						}	
						
					}else if(battleAnswer == 'C' || battleAnswer == 'c'){
						
						if(number == 0){
							cout << "***************************************************************************" << endl;
							cout << "You missed Mewtwo.                                                        *" << endl;
							cout << "***************************************************************************" << endl;
						} else{
							cout << "***************************************************************************" << endl;
							cout << "You did 150 damage to Mewtwo.                                              *" << endl;
							cout << "***************************************************************************" << endl;
						}
						if(number != 0){
							cout << "Mewtwos health left: " << MewtwosHealth - 150 << endl;
							MewtwosHealth -= 150;
						}
						if(number == 0){
						cout << "Mewtwos Health left: " << MewtwosHealth << endl;		
						}
						number = myDice.roll() % 2;
						cout << "Mewtwo used Phychic" << endl;
						if(number == 0){
							cout << "Mewtwo missed" << endl;
						}else{
							cout << "Mewtwo did 90 damgae. Venusaur remaining health: " << venusaurHealth - 90 << endl;
							venusaurHealth -=90;
						}
					}else if(battleAnswer == 'D' || battleAnswer == 'd'){
						
						if(number == 0){
							cout << "***************************************************************************" << endl;
							cout << "You missed Mewtwo.                                                        *" << endl;
							cout << "***************************************************************************" << endl;
						} else{
							cout << "***************************************************************************" << endl;
							cout << "You did 85 damage to Mewtwo.                                              *" << endl;
							cout << "***************************************************************************" << endl;
						}
						if(number != 0){
							cout << "Mewtwos health left: " << MewtwosHealth - 85 << endl;
							MewtwosHealth -= 85;
						}
						if(number == 0){
						cout << "Mewtwos Health left: " << MewtwosHealth << endl;		
						}
						number = myDice.roll() % 2;
						cout << "Mewtwo used Phychic" << endl;
						if(number == 0){
							cout << "Mewtwo missed" << endl;
						}else{
							cout << "Mewtwo did 90 damgae. Venusaur remaining health: " << venusaurHealth - 90 << endl;
							venusaurHealth -=90;
						}
					}
				}
			}while(MewtwosHealth > 0 && venusaurHealth > 0);
			if(MewtwosHealth < 1){
				cout << "Venusaur is the Winner" << endl;		
			}else if(venusaurHealth < 1){
				cout << "Mewtwo is the Winner" << endl;
			}
			venusaurHealth = 364;
			MewtwosHealth   = 416;
		}			
	}while(userMenuChoice != 4);
	cout << "************************************************************" << endl;
	cout << "Youll never be the best like no one ever was by quitting   *" << endl;
	cout << "************************************************************" << endl;
		
	return 0;
}
// This function prints out the actually instructions of the game and tells you how you win and lose.
void printInstructions(){
	cout << "**********************************************************************************************************" << endl;
	cout << "Instructions                                                                                             *" << endl;
	cout << "You will be selecting one pokemon to battle with.                                                        *" << endl;
	cout << "You will be selecting a attack for each turn until one pokemon is not longer able to battle.             *" << endl;
	cout << "If your pokemon reaches zero first you lose.                                                             *" << endl;
	cout << "**********************************************************************************************************" << endl;
}
// This function lets the user select the pokemon they want to battle with or lets them quit the game.
void printMenu(){
	cout << "**********************************" << endl;
	cout << "1. Charizard                     *" << endl;
	cout << "2. Blastoise                     *" << endl;
	cout << "3. Venusaur                      *" << endl;
	cout << "4. Quit                          *" << endl;
	cout << "**********************************" << endl;
}
//This function gets the users menu choice and stores it so the program knows which option was selected.
int getMenuChoice(){
	int choice;
	cout << "Enter your option (1-4) now: ";
	cin  >> choice;

	while(choice < 1 || choice > 4){
		cout << "Invalid entry.  Enter a valid menu option (1-4): ";
		cin  >> choice;
	}
	
	return choice;
}


















