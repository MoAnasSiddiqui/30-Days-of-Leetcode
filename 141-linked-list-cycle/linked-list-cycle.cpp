/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
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
    bool hasCycle(ListNode *head) {
        bool answer = false;
        ListNode* slow = head;
        while (head != nullptr && head->next != nullptr){
            slow = slow->next;
            head = head->next->next;
            if (slow == head){
                answer = true;
                break;
            }
        }
        return answer;
    }
};