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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* prev = nullptr;
        ListNode* upnext;
        while (head != nullptr){
            upnext = head->next;
            head->next = prev;
            prev = head;
            head = upnext;
        }
        head = prev;
        prev = nullptr;
        int counter = 0;
        if (n == 1){
            upnext = head->next;
            head->next = nullptr;
            head = upnext;
        }
        while (head != nullptr){
            counter++;
            if (counter == n-1){
                head->next = head->next->next;
            }
            upnext = head->next;
            head->next = prev;
            prev = head;
            head = upnext;
        }
        return prev;
    }
};