/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* oddEvenList(ListNode* head) {
        if (head == nullptr || head->next == nullptr)
            return head;
        ListNode* odd = new ListNode(-1);
        ListNode* tail1 = odd;

        ListNode* even = new ListNode(-1);
        ListNode* tail2 = even;

        ListNode* temp = head;
        int l = 0;
        while (temp != nullptr) {

            if (l % 2 == 0) {
                ListNode* n = new ListNode(temp->val);
                tail2->next = n;
                tail2 = n;
            } else {
                ListNode* n = new ListNode(temp->val);
                tail1->next = n;
                tail1 = n;
            }
            temp = temp->next;
            l++;
        }
        ListNode* ans;
         {
            ListNode* node = odd;
            tail2->next = odd->next;
            delete node;
            ans = even->next;
        }
        return ans;
    }
};