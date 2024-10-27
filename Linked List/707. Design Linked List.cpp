class MyLinkedList {
private:
    int size;
    ListNode* head;
public:
    MyLinkedList() {
        this->size = 0;
        this->head = new ListNode(0); 
    }

    int get(int index) {
        if (index < 0 || index >= size) return -1;
        ListNode* cur = head;
        for (int i = 0; i <= index; i++) {
            cur = cur->next;
        }
        return cur->val;
    }

    void addAtHead(int val) {
        ListNode* newhead = new ListNode(val);
        newhead->next = head->next;
        head->next = newhead;
        size++;
    }

    void addAtTail(int val) {
        ListNode* cur = head;
        ListNode* newtail = new ListNode(val);
        while (cur->next != nullptr) {
            cur = cur->next;
        }
        cur->next = newtail;
        size++;
    }

    void addAtIndex(int index, int val) {
        if (index > size) return;
        if (index == size) {
            addAtTail(val);
            return;
        }
        ListNode* cur = head;
        ListNode* newNode = new ListNode(val);
        for (int i = 0; i < index; i++) {
            cur = cur->next;
        }
        newNode->next = cur->next;
        cur->next = newNode;
        size++;
    }

    void deleteAtIndex(int index) {
        if (index < 0 || index >= size) return;  // attention: the range of index

        ListNode* prev = head;
        ListNode* cur = head->next;

        if (index == 0) {
            head->next = cur->next;  
            delete cur;
        } else {
            for (int i = 0; i < index; i++) {
                prev = cur;
                cur = cur->next;
            }
            prev->next = cur->next;
            delete cur;
        }
        size--;
    }
};

