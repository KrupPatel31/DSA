ListNode* modifiedList(vector<int>& nums, ListNode* head) {

        if(head == NULL){
            return head;
        }

        unordered_map<int,bool> m;

        int n = nums.size();

        for(int i = 0;i<n;i++){
            m[nums[i]] = true;
        }

        vector<int> v;

        ListNode* temp = head;

        while(temp != NULL){
            if(m[temp->val] == false){
                v.push_back(temp->val);
            }
            temp = temp->next;
        }

        temp = head;

        for(int i = 0;i<v.size()-1;i++){
            temp->val = v[i];
            temp = temp->next;
        }

        temp->val = v[v.size()-1];
        temp->next = NULL;

        return head;
    }
