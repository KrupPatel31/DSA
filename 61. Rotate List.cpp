class Solution {
public:
    ListNode* rotateRight(ListNode* head, int k) {
        if(head == NULL || head->next == NULL || k==0){
            return head;
        }

        vector<int> v;

        ListNode * temp = head;

        while(temp){
            v.push_back(temp->val);
            temp = temp->next;
        }

        temp = head;
        int s  = v.size();

        k = k%s;
        if(k == 0){
            return head;
        }

        int x = s - k ;

        for(int i = x;i<s;i++){
            temp->val = v[i];
            temp = temp->next;
        }

        for(int i = 0;i<x;i++){
            temp->val = v[i];
            temp = temp->next;
        }

        return head;
    }
};
