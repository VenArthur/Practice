/*SUCCESS!!*/
#include <iostream>
#include "ListNode.h"

ListNode* createList(int* arr, int n);

void printList(ListNode* head);

ListNode* mergeTwoLists(ListNode* l1, ListNode* l2);


int main()
{
	int arr1[] = { 1,2,4 };
	int arr2[] = { 1,3,4};

	ListNode* l1, * l2, * result = NULL;
	l1 = createList(arr1, (sizeof(arr1) / sizeof(arr1[0])));
	l2 = createList(arr2, (sizeof(arr2) / sizeof(arr2[0])));
	
	std::cout << "First sorted list: " << std::endl;
	printList(l1);
	std::cout << std::endl;

	std::cout << "Second sorted list: " << std::endl;
	printList(l2);
	std::cout << std::endl;

	result = mergeTwoLists(l1, l2);
	std::cout << "Merged Sorted lists: " << std::endl;
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

ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) 
{
	ListNode* result = NULL;

	//If list1 is empty return list2
	if (l1 == NULL)
	{
		return l2;
	}

	//If list2 is empty return list1
	if (l2 == NULL)
	{
		return l1;
	}

	//The value currently being pointed to in list1, is less than the value currently being pointed to in list2
	if (l1->val < l2->val)
	{
		result = l1; //Add the list1 value to result
		result->next = mergeTwoLists(l1->next, l2); //Point to the next value in list1
	}
	else
	{
		result = l2;
		result->next = mergeTwoLists(l1, l2->next);
	}

	return result;
}