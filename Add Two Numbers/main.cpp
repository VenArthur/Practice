/*SUCCESS!!*/
//You are given two non - empty linked lists representing two non - negative integers.
//The digits are stored in reverse order and each of their nodes contain a single digit.
//Add the two numbers and return it as a linked list.
//You may assume the two numbers do not contain any leading zero, except the number 0 itself.

#include <iostream>
#include <string>
#include <vector>
#include "ListNode.h"


ListNode* createList(int* arr, int n);
void printList(ListNode* head);
ListNode* addTwoNumbers(ListNode* l1, ListNode* l2);

int main()
{
	int arr1[] = { 8, 4};
	int arr2[] = { 2, 5, 9, 8};

	ListNode* l1, * l2, * result = NULL;
	l1 = createList(arr1, (sizeof(arr1) / sizeof(arr1[0])));
	l2 = createList(arr2, (sizeof(arr2) / sizeof(arr2[0])));

	std::cout << "First sorted list: " << std::endl;
	printList(l1);
	std::cout << std::endl;

	std::cout << "Second sorted list: " << std::endl;
	printList(l2);
	std::cout << std::endl;

	result = addTwoNumbers(l1, l2);
	std::cout << "Added Sorted lists: " << std::endl;
	printList(result);
	std::cout << std::endl;

	system("PAUSE");
	return 0;
}

ListNode* createList(int* arr, int n)
{
	ListNode* head, * p;
	p = head = new ListNode;
	head->val = arr[0];
	head->next = NULL;
	for (int i = 1; i < n; ++i)
	{
		p->next = new ListNode;
		p = p->next;
		p->val = arr[i];
		p->next = NULL;
	}

	return head;
}

void printList(ListNode* head)
{
	while (head != NULL)
	{
		std::cout << head->val << " ";
		head = head->next;
	}
	std::cout << std::endl;
}

ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) 
{
	std::vector <int> myNum;
	bool numCarried = false;

	while (l1 != NULL || l2 != NULL)
	{
		if (l1 == NULL && l2 != NULL)
		{
			if (numCarried == true)
			{
				if (l2->val + 1 == 10)
				{
					myNum.push_back(0);
					l2 = l2->next;

					if (l2 == NULL)
					{
						myNum.push_back(1);
					}
				}
				else
				{
					myNum.push_back(l2->val + 1);
					numCarried = false;
					l2 = l2->next;
				}
			}
			else
			{
				myNum.push_back(l2->val);
				l2 = l2->next;
			}

		}
		else if (l2 == NULL && l1 != NULL)
		{
			if (numCarried == true)
			{
				if (l1->val + 1 == 10)
				{
					myNum.push_back(0);
					l1 = l1->next;

					if (l1 == NULL)
					{
						myNum.push_back(1);
					}
				}
				else
				{
					myNum.push_back(l1->val + 1);
					numCarried = false;
					l1 = l1->next;
				}
			}
			else
			{
				myNum.push_back(l1->val);
				l1 = l1->next;
			}
		}
		else
		{
			int added = l1->val + l2->val;

			if (numCarried == true)
			{
				added += 1;
			}

			numCarried = false;

			if (added >= 10)
			{
				added = added - 10;
				numCarried = true;
			}

			myNum.push_back(added);
			l1 = l1->next;
			l2 = l2->next;

			if (l1 == NULL && l2 == NULL && numCarried == true)
			{
				myNum.push_back(1);
			}
		}
	}

	ListNode* l3, * p;
	p = l3 = new ListNode;
	l3->val = myNum[0];
	l3->next = NULL;

	for (int i = 1; i < myNum.size(); ++i)
	{
		p->next = new ListNode;
		p = p->next;
		p->val = myNum[i];
		p->next = NULL;
	}

	return l3;
}
