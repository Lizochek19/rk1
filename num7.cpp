
#include <iostream>

int main()
void num7(Node* head, Node* el, int nomer)
{
	Node* cur = head;

	for (int i = 0; i < nomer; ++i) {
		curnode = cur->next;
	}
	el->next = cur->next;
	el->prev = cur;
	cur->next->prev = el;
	cur->next = el;
}

