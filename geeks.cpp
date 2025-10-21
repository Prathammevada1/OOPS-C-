// Detect loop using unordered set

bool detectLoop(Node* head) {
        
        unordered_map<Node*,bool> visited(0);
        Node *curr=head;
        
        while(curr)
        {
            if(visited[curr]==true)
            return true;
            
            else
            visited[curr]=true;
            
            curr=curr->next;
        }
        return false;