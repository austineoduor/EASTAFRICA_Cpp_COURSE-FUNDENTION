#include <iostream>
#ifndef QUEUE_H_
#define QUEUE_H_


class Customer

{
	private:
		long arrive;
		int processtime;
	public:
		Customer()
		{
		arrive = processtime = 0;
		}
		void set(long when);
		long when()const
		{
			return arrive;
		}
		int ptime()const
		{
			return processtime;
		}

	//	~Customer(){}
};

typedef Customer Item;

class Queue
{
	private:
	//node struct for the linked list for queue
		struct Node
		{
			Item item;
			struct Node *next;
		};
		enum{Q_SIZE = 10};
		struct Node *front;
		struct Node *rear;
		int items;
		const int qsize;
		Queue(const Queue &) :qsize(0){}
		Queue &operator=(const Queue &)
		{
			return *this;
		}
	public:

		Queue(int qs = Q_SIZE);
		~Queue();
		bool isempty() const;
		bool isfull()const;
		int queuecount()const;
		bool enqueue(const Item &item);
		bool dequeue(Item &item);
};

#endif
