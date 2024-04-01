class Solution {
public:
    void reorderList(ListNode* head) {
        if (head->next == nullptr || head->next->next == nullptr){return;}
        deque<ListNode*> nodes;
        ListNode* temp = head->next;
        while (temp != nullptr){
            nodes.push_back(temp);
            temp = temp->next;
            nodes.back()->next = nullptr;
        }
        bool start = false;
        temp = head;
        while (nodes.empty() == false){
            if (start == false){
                temp->next = nodes.back();
                nodes.pop_back();
                start = true;
                temp = temp->next;
            } else{
                temp->next = nodes.front();
                nodes.pop_front();
                start = false;
                temp = temp->next;
            }
        }
    }
};