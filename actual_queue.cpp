#include <iostream>
#include <queue>
using namespace std;

void printQueue(queue<int> q){
	
	while(!q.empty()){
		cout << q.front() << " ";
		q.pop();	
	}
	
	cout << endl;
}

int findSum(queue<int> q){
	int sum;
	while(!q.empty()){
		sum += q.front();
		q.pop();
	}
	return sum;
}

void reverseQueue(queue<int> q){
	if(q.empty()){
		return;
	}
	
	int temp = q.front();
	q.pop();
	
	reverseQueue(q);
	
	q.push(temp);
}

int main(){
	
	queue<int> myqueue;
	
	const int max_size = 6;
	
	int val;
	int sum;
	cout<< "Enter the elements of the queue: ";
	
	
	for(int i = 0; i < max_size; i++){
		cin >> val;
		myqueue.push(val);
	}
	
	//cout << "Elements of the queue: ";
	//printQueue(myqueue);
	
	//cout<< endl; 
	
	sum = findSum(myqueue);
	cout << "The sum of all elements: " << sum;
	
	cout << endl;
	
	reverseQueue(myqueue);
	cout << "Reversed Queue: ";
	
	while(!myqueue.empty()){
		cout << myqueue.front() << " ";
		myqueue.pop();	
	}
	
	cout << endl;
	return 0;
}