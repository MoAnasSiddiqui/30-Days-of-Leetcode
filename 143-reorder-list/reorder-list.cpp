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
    void reorderList(ListNode* head) {
        if (head->next == nullptr || head->next->next == nullptr){return;}
        vector<ListNode*> nodes;
        ListNode* temp = head->next;
        while (temp != nullptr){
            nodes.push_back(temp);
            temp = temp->next;
            nodes[nodes.size()-1]->next = nullptr;
        }
        int counter_s = 0;
        int counter_e = nodes.size()-1;
        bool start = false;
        temp = head;
        while (counter_s <= counter_e){
            if (start == false){
                temp->next = nodes[counter_e];
                counter_e --;
                start = true;
                temp = temp->next;
            } else if (start == true){
                temp->next = nodes[counter_s];
                counter_s++;
                start = false;
                temp = temp->next;
            } else {break;}
        }
        
        // if (head->next == nullptr || head->next->next == nullptr){return;}
        // ListNode* current = head;
        // while(current != nullptr){
        //     ListNode* temp = current;
        //     while (temp->next != nullptr && temp->next->next != nullptr){
        //         temp = temp->next;
        //     }
        //     cout << current->val << " " << temp->val << endl;
        //     current = current->next;
        // }
    }
};