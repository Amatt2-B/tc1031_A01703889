/*
 * dls.cpp
 *
 *  Created on: 15/10/2023
 *      Author: AdrianMatute
 */

#include "dls.h"
#include <algorithm>

DoublyLinkedList::DoublyLinkedList() : head(nullptr), tail(nullptr) {
  insertDriver({"Daniel Ricciardo", 3, 8, "McLaren"});
  insertDriver({"Valtteri Bottas", 77, 3, "Mercedes"});
  insertDriver({"Carlos Sainz", 55, 7, "Ferrari"});
  insertDriver({"Fernando Alonso", 14, 9, "Alpine"});
  insertDriver({"Lewis Hamilton", 44, 1, "Mercedes"});
  insertDriver({"Charles Leclerc", 16, 6, "Ferrari"});
  insertDriver({"Sebastian Vettel", 5, 10, "Aston Martin"});
  insertDriver({"Max Verstappen", 33, 2, "Red Bull Racing"});
  insertDriver({"Sergio Perez", 11, 5, "Red Bull Racing"});
  insertDriver({"Lando Norris", 4, 4, "McLaren"});
}


DoublyLinkedList::~DoublyLinkedList() {
  while (head) {
    Node *temp = head;
    head = head->next;
    delete temp;
  }
}

void DoublyLinkedList::insertDriver(const Driver &driver) {
  Node *newNode = new Node(driver);
  if (!head) {
    head = newNode;
    tail = newNode;
  } else {
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
  }
}

void DoublyLinkedList::deleteDriver(int driverNumber) {
  Node *current = head;
  while (current) {
    if (current->data.driverNumber == driverNumber) {
      if (current->prev) {
        current->prev->next = current->next;
      } else {
        head = current->next;
      }
      if (current->next) {
        current->next->prev = current->prev;
      } else {
        tail = current->prev;
      }
      delete current;
      return;
    }
    current = current->next;
  }
}

void DoublyLinkedList::printList() const {
  Node *current = head;
  while (current) {
    printDriver(current->data);
    current = current->next;
  }
}

Node *DoublyLinkedList::findMiddle(Node *head, Node *&middle) {
  Node *slow = head;
  Node *fast = head->next;

  while (fast) {
    fast = fast->next;
    if (fast) {
      slow = slow->next;
      fast = fast->next;
    }
  }

  middle = slow->next;
  slow->next = nullptr;

  return head;
}

void DoublyLinkedList::setDrivers(const std::vector<Driver>& drivers) {
		// Limpiar la lista actual si es necesario
		while (head) {
				Node* temp = head;
				head = head->next;
				delete temp;
		}

		// Agregar los nuevos pilotos a la lista
		for (const Driver& driver : drivers) {
				insertDriver(driver);
		}
}

void DoublyLinkedList::mergeSortByNumber(Node *head, Node *tail) {
	if (!head || head == tail) {
		return;
	}

	Node *middle = nullptr;
	head = findMiddle(head, middle);

	mergeSortByNumber(head, middle);
	mergeSortByNumber(middle, tail);
	mergeByNumber(head, middle, tail);
}

void DoublyLinkedList::mergeByNumber(Node *&head, Node *middle, Node *tail) {
	if (!head || !middle || !tail) {
		return;
	}

	Node *newHead = nullptr;
	Node *newTail = nullptr;
	Node *left = head;
	Node *right = middle->next;

	while (left && right) {
		if (left->data.driverNumber <= right->data.driverNumber) {
			if (!newTail) {
				newHead = left;
				left->prev = nullptr;
			} else {
				newTail->next = left;
				left->prev = newTail;
			}
			newTail = left;
			left = left->next;
		} else {
			if (!newTail) {
				newHead = right;
				right->prev = nullptr;
			} else {
				newTail->next = right;
				right->prev = newTail;
			}
			newTail = right;
			right = right->next;
		}
	}

	if (left) {
		newTail->next = left;
		left->prev = newTail;
		newTail = tail;
	}

	if (right) {
		newTail->next = right;
		right->prev = newTail;
	}

	head = newHead;
	tail = newTail;
}

void DoublyLinkedList::bubbleSort() {
		Node *n = tail;
		while (n != head) {
				Node *temp = head;
				while (temp->next != n) {
						if (temp->data.position > temp->next->data.position) {
								std::swap(temp->data, temp->next->data);
						}
						temp = temp->next;
				}
				n = temp;
		}
}

Driver DoublyLinkedList::searchDriver(int driverNumber) {
  Node *current = head;
  while (current) {
    if (current->data.driverNumber == driverNumber) {
      return current->data;
    }
    current = current->next;
  }
  // Return a default-constructed Driver if not found
  return {"", -1, -1, ""};
}
