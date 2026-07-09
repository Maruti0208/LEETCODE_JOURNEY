/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    ListNode* detectCycle(ListNode* head) {
        ListNode* f = head;
        ListNode* s = head;
        int i = 0;
        while (f && f->next) {
            f = f->next->next;
            s = s->next;
            if (f == s){
                ListNode * t=head;
                while(t!=f){
                  f=  f->next;
                   t= t->next;
                }
                return t;
            }
                
        }
        return nullptr;
    }
};