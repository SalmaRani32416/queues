#include<iostream>
using namespace std;
class Queue{
	public:
		int size=5;
		int arr[size];
		int rear,front;
		Queue()
		{
			rear=-1;
			front=-1;
		}
		void empty(int value)
		{
			if(rear && front == -1)
			{
				cout<<"quesues is empty"<<endl;
			}
			cout<<"enter value you wnt to be inserted"<<endl;
			cin>>value;
			arr[0]=value;
			rear++;
		}
		void full(value)
		{
			if(rear==size)
			{
				cout<<"queue is full"<<endl;
			}
			cout<<"enter value you want to be inserted:"<<endl;
			cin>>value
			arr[0]=value;
			rear++;
		
		}
		void Enqueue(int value)
		{
			if(empty())
			{
				cout<<"enter value you want to be inserted"<<endl;
				cin>>value
			}
		}
		void Dequeue()
		{
			arr[rear--];
			cout<<"value is dequeued"<<endl;
		}
		void display()
		{
			cout<<"displaying of queue"<<endl;
			for(int i=0;i<rear;i++)
			{
				cout<<arr[i]<<endl;
			}
		}
}
int main()
{
	Queue q
	q.Enqueue(10);
		q.Enqueue(20);
			q.Enqueue(30);
				q.Enqueue(40);
					q.Enqueue(50);
					q.display();
					
	
	
}