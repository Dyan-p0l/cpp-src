#include <iostream>

using namespace std;

const int MAX_SIZE = 5;

int queue[MAX_SIZE];
int front = -1;
int rear = -1;

bool isempty(){
	return front == -1;
}


bool isfull(){
	return rear == MAX_SIZE - 1;
}

void enqueue(int val){
	if(isfull()){
		cout<< "The queue is full! Cannot enqueue!";
		return;
	}
	else if(isempty()){
		front = rear = 0;
		queue[rear] = val;
	}
	else{
		rear++;
		queue[rear] = val;
	}
	cout<< val << " enqueued to the Queue"<< endl;
}

void dequeue(){
	if(isempty()){
		cout<< "The queue is empty! Cannot dequeue!"<< endl;
		return;
	}
	cout<< queue[front] << " dequeued from the queue"<< endl;
	
	if(front == rear){
		front = rear = -1;
	}
	else{
		front = (front + 1) % MAX_SIZE;
	}
}
	
void printFront(){
	if(isempty()){
		cout<< "Queue is empty";
		return;
	}
	
	cout<< "Front element of the queue: " << queue[front]<< endl;
}

void printQueue() {
    if (isempty()) {
        cout << "Queue is empty." << endl;
        return;
    }

    cout << "Elements of the Queue: ";
    int i = front;
    while (true) {
        cout << queue[i];
        if (i == rear) {
            break;
        }
        cout << ", ";
        i = (i + 1) % MAX_SIZE;
    }
    cout << endl;
}


int main(){
	
	int choice;
	int value;
	
	do{
		cout<< endl;
		cout<< "Choose operation: "<< endl;
		cout<< "1. Enqueue"<< endl;
		cout<< "2. Dequeue"<< endl;
		cout<< "3. Print front of queue"<< endl;
		cout<< "4. Print Queue"<< endl;
		cout<< "5. Check if Queue is empty" << endl;
		cout<< "6. Check if Queue is full"<< endl;
		cout<< "7. Exit"<< endl;
		cout<< "Enter Choice: ";	
		cin>> choice;
		
		cout<< endl;
		
		switch (choice){
			case 1:
				cout<< "Enter the value to enqueue: ";
				cin >> value;
				enqueue(value);
				break;
			case 2:
				dequeue();
				break;
			case 3:
				printFront();
				break;
			case 4: 
				printQueue();
				break;
			case 5:
				if(isempty()){
					cout<< "QUEUE IS EMPTY!!"<< endl;
				} else{
					cout<< "QUEUE IS NOT EMPTY!"<< endl;
				}
				break;
			case 6:
				if(isfull()){
					cout<< "QUEUE IS FULL!!"<< endl;
				}
				else if(isempty()){
					cout<< "QUEUE IS NOT FULL! QUEUE IS EMPTY!"<< endl;
				}
				else{
					cout<< "QUEUE IS NOT FULL!"<< endl;
				}
				break;
			case 7:
				cout << "Exited";
				break;
			default: 
				cout << "Invalid choice!";
				cout << endl;		
				break;
		}
		
	} while(choice != 7);
    
    
    
	//dequeue();
	//dequeue();
	
	//printQueue();
	
	
	return 0;
}