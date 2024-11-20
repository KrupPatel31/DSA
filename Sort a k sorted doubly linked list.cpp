DLLNode *sortAKSortedDLL(DLLNode *head, int k) {
        // code here
        if(k == 0){
            return head;
        }
        
        priority_queue<int,vector<int>,greater<int>> pq;
        
        DLLNode * temp = head;
        
        for(int i = 0;i<=k;i++){
            pq.push(temp->data);
            temp = temp->next;
        }
        
        DLLNode *x = head;
        while(!pq.empty()){
            x->data = pq.top();
            pq.pop();
            if(temp){
                pq.push(temp->data);
                temp = temp->next;
            }
            x = x->next;
        }
        
        return head;
    }
