#include <iostream>
#include <vector>
#include <set>
#include <string>
	using namespace std;


	struct ListNode {
		int val;
		ListNode *next;
		ListNode(int x) : val(x), next(NULL) {}
	};

	ListNode* rotateRight(ListNode* head, int k) {
		int count = 1;
		ListNode* first = head;
		while (count <= k)
		{
			ListNode* ptr = head;
			int temp = first->val;
			for (; ptr != nullptr; ptr = ptr->next)
			{
				if (ptr->next != nullptr)
				{
					int temp_2 = ptr->next->val;
					ptr->next->val = temp;
					temp = temp_2;
				}
				else
				{
					first->val = temp;
					count++;

				}
			}
		}
		return first;
	}
	int main(int argc, char** argv)
	{
		ListNode begin(1);
		ListNode mid(2);
		ListNode last(3);
		begin.val = 1;
		mid.val = 2;
		last.val = 3;
		begin.next = &mid;
		mid.next = &last;
		last.next = nullptr;
		ListNode* result = rotateRight(&begin,2);
		for (ListNode* ptr = &begin; ptr != nullptr; ptr = ptr->next)
		{
			cout << ptr->val<<" ";
		}
	}