class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* list1 = l1;
        ListNode* list2 = l2;
        ListNode* answer;
        int carry = 0;
        
        while (list1 != nullptr && list2 != nullptr){
            list1 = list1->next;
            list2 = list2->next;
        }
        if (list1 == nullptr){
            list1 = l2;
            list2 = l1;
        } else {
            list1 = l1;
            list2 = l2;
        }
        answer = list1;
        int temp;
        while (list1 != nullptr){
            int temp = list1->val;
            if (list2 != nullptr){
                list1->val = (temp + list2->val + carry)%10;
                ((temp + list2->val + carry) > 9) ? carry = 1: carry = 0;
                list2 = list2->next;
            } else {
                list1->val = (temp + carry)%10;
                ((temp + carry) > 9) ? carry = 1: carry = 0;
            }
            if (list1->next == nullptr && carry == 1){
                ListNode* lastcarry = new ListNode(1);
                list1->next = lastcarry;
                break;
            }
            list1 = list1->next;
        }
        return answer;
    }
};