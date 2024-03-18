// class Solution {
// public:
//     ListNode* reverseList(ListNode* head) {
//         if (head == nullptr){return head;}
//         return solution(head, nullptr);
//     }
//     ListNode* solution (ListNode* head, ListNode* prev){
//         if (head == nullptr){
//             return prev;
//         }
//         ListNode* nxt = head->next;
//         head->next = prev;
//         return solution(nxt, head);
//     }
// };

// class Solution {
// public:
//     ListNode* reverseList(ListNode* head) {
//         ListNode* next;
//         ListNode* prev = nullptr;
//         while (head != nullptr){
//             next = head->next;
//             head->next = prev;
//             prev = head;
//             head = next;
//         }
//         return prev;
//     }
// };

class Solution {
public:
    ListNode* reverseList(ListNode* head) {

        if(head == NULL){
            return NULL;
        }

        ListNode* newHead = head;
        if(head->next != NULL){
            newHead = reverseList(head ->next);
            head->next->next = head;
        }
        head->next = NULL;
        return newHead;
    }    
};