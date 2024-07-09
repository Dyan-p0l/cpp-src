#include <iostream>

using namespace std;

struct Questions{
	
	string question;
	string choice1;
	string choice2;
	string choice3;
	int answer;
	
};

void showquestion(Questions questions){
	
	cout<< questions.question<< endl;
	cout<< questions.choice1<< endl;
	cout<< questions.choice2<< endl;
	cout<< questions.choice3<< endl;
	
	
}
	 
void showResult(int userchoice, int answer){
	
	cin>> userchoice;
	
	if(userchoice == answer){
		cout<< "Correct!"<< endl;
	}
	else{
		cout<< "Incorrect!"<< endl;
	}
	
}

int main(){
	
	int userchoice;
	
	Questions questions;
	questions.question = "What is the smallest country? ";
	questions.answer = 3;
	questions.choice1 = "1. USA ";
	questions.choice2 = "2. INDIA";
	questions.choice3 = "3. VATICAN CITY";
	
	Questions questions2;
	questions2.question = "What is the biggest animal in the world? ";
	questions2.answer = 2;
	questions2.choice1 = "1. ELEPHANT ";
	questions2.choice2 = "2. BLUE WHALE";
	questions2.choice3 = "3. GREAT WHITE SHARK";
	
	Questions questions3;
	questions3.question = "Who is the first person to land on the moon? ";
	questions3.answer = 1;
	questions3.choice1 = "1. ARMSTRONG ";
	questions3.choice2 = "2. ALDRIN";
	questions3.choice3 = "3. WOLOWITZ";
	
	int mistakes;
		while(answer != 3){
			showquestion(questions);
			showResult(userchoice, questions.answer);
		}
		
		
		
		showquestion(questions2);
		showResult(userchoice, questions2.answer);
		
		showquestion(questions3);
		showResult(userchoice, questions3.answer);
	
	
	
	
	return 0;
}