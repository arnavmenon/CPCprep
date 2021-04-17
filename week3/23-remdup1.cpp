#include <bits/stdc++.h>
#include <vector>
using namespace std;

ListNode* deleteDuplicates(ListNode* head) {

    ListNode* cur = head;

    while (cur && cur->next) {

        if (cur->val == cur->next->val)
        {
            ListNode* tmp = cur->next;
            cur->next = cur->next->next;
            delete tmp;
        }

        else
            cur = cur->next;
    }

    return head;
}