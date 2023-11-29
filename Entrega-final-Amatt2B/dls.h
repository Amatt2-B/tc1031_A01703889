#ifndef DLS_H
#define DLS_H

#include "driver.h"
#include <vector>

struct Node {
	Driver data;
	Node *next;
	Node *prev;

	Node(const Driver &driver) : data(driver), next(nullptr), prev(nullptr) {}
};

class DoublyLinkedList {
public:
	DoublyLinkedList();
	~DoublyLinkedList();

	void insertDriver(const Driver &driver);
	void deleteDriver(int driverNumber);
	void printList() const;
	Driver searchDriver(int driverNumber);

	void mergeByNumber(Node *&head, Node *middle, Node *tail);
	void mergeSortByNumber(Node *head, Node *tail);
	void setDrivers(const std::vector<Driver> &drivers);

	void bubbleSort();

	Node *getHead() const { return head; }
	Node *getTail() const { return tail; }

private:
	Node *findMiddle(Node *head, Node *&middle);
	void clearList();
	Node *head;
	Node *tail;
};

#endif // DLS_H
