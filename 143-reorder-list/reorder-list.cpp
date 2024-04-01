class Solution {
public:
    void reorderList(ListNode* head) {
        if (head->next == nullptr || head->next->next == nullptr){return;}
        ListNode* slow = head;
        ListNode* fast = head; 
        while (fast != nullptr && fast->next != nullptr){
            slow = slow->next;
            fast = fast->next->next;
        }
        ListNode* prev= nullptr;
        ListNode* upnext;
        while (slow != nullptr){
            upnext = slow->next;
            slow->next = prev;
            prev = slow;
            slow = upnext;
        }
        // while (head != nullptr){
        //     cout << head->val << " ";
        //     head = head->next;
        // }
        // cout << endl;
        // while (prev != nullptr){
        //     cout << prev->val << " ";
        //     prev = prev->next;
        // }
        ListNode* temp1;
        ListNode* temp2;
        while (prev->next != nullptr){
            temp1 = head->next;
            temp2 = prev->next;
            head->next = prev;
            prev->next = temp1;
            head = temp1;
            prev = temp2;
        }





        // if (head->next == nullptr || head->next->next == nullptr){return;}
        // deque<ListNode*> nodes;
        // ListNode* temp = head->next;
        // while (temp != nullptr){
        //     nodes.push_back(temp);
        //     temp = temp->next;
        //     nodes.back()->next = nullptr;
        // }
        // bool start = false;
        // temp = head;
        // while (nodes.empty() == false){
        //     if (start == false){
        //         temp->next = nodes.back();
        //         nodes.pop_back();
        //         start = true;
        //         temp = temp->next;
        //     } else{
        //         temp->next = nodes.front();
        //         nodes.pop_front();
        //         start = false;
        //         temp = temp->next;
        //     }
        // }
    }
};