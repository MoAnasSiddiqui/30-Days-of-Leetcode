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
    ListNode* sortList(ListNode* head) {
        ListNode* answer = head;
        vector<int> values;
        while (head != nullptr){
            values.push_back(head->val);
            head = head->next;
        }
        sort(values.begin(),values.end());
        head = answer;
        for (auto i: values){
            head->val = i;
            head = head->next;
        }
        return answer;
    }
};