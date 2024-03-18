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
    ListNode* reverseList(ListNode* head) {
        if (head == nullptr){return head;}
        return solution(head, nullptr);
    }
    ListNode* solution (ListNode* head, ListNode* prev){
        if (head == nullptr){
            return prev;
        }
        ListNode* nxt = head->next;
        head->next = prev;
        return solution(nxt, head);
    }
};