class Solution {
public:
    bool hasCycle(ListNode* head) {
     unordered_set<ListNode*> seen;
     ListNode* cur = head;
     while(cur){
        if (seen.find(cur)!=seen.end()){
            return true;
        }
        seen.insert(cur);
        cur = cur->next;
     }
     return false;
    }
};
