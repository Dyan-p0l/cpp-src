#include <iostream>
#include <ctime>

using namespace std;

	char userchoice(){
		int choicenum;
		char user;
		
	
		cout<< "Rock Paper Scissors! \n";
			cout<< "Press 1 for Rock\n";
			cout<< "Press 2 for Paper\n";
			cout<< "Press 3 for Scissors\n";
		
		cin>> choicenum;	
		switch(choicenum){
			case 1: return 'r';
			break;
			
			case 2: return 'p';
			break;
			
			case 3: return 's';
			break;
		}	
		
	return 0;
	}
	
	
	char computerchoice(){
		
		char computer;
		srand(time(0));
		int num = rand() % 3 + 1;
		
		switch(num){
			case 1: return 'r';
			break;
			
			case 2: return 'p';
			break;
			
			case 3: return 's';
			break;
		}
		
	return 0;
	}
	
	void showChoice(char choice){
		switch(choice){
			case 'r': cout<< "Rock";
				break;
			case 'p': cout<< "Paper";
				break;
			case 's': cout<< "Scissors";
				break;
		}
	}
	
	void showWinner(char userchoice, char computerchoice){
		
		if(userchoice == 'r' && computerchoice == 'p'){
			cout<< "Computer wins!";
		}
		else if(userchoice == 'r' && computerchoice == 's'){
			cout<< "You win!";
		}
		else if(userchoice == 'p' && computerchoice == 'r'){
			cout<< "You win!";
		}
		else if(userchoice == 'p' && computerchoice == 's'){
			cout<< "Computer wins!";
		}
		else if(userchoice == 's' && computerchoice == 'r'){
			cout<< "Computer wins!";
		}
		else if(userchoice == 's' && computerchoice == 'p'){
			cout<< "You win!";
		}
		
		if(userchoice == 'r' && computerchoice == 'r'){
			cout<< "It's a tie'!";
		}
		if(userchoice == 'p' && computerchoice == 'p'){
			cout<< "It's a tie'!";
		}
		if(userchoice == 's' && computerchoice == 's'){
			cout<< "It's a tie'!";
		}
		
		
	}

int main() {
	
	char user;
	char computer;
	int choicenum;
	
	user = userchoice();
	cout<< "Your choice: ";
	showChoice(user);
	
	computer = computerchoice();
	cout<<"\nComputer's choice: ";
	showChoice(computer);
	
	cout<< "\nResult: ";
	showWinner(user, computer);
	
	
	
	
	
	return 0;
}