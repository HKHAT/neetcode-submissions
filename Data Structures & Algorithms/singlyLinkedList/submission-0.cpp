#include <vector>

class LinkedList {
private:
    struct Node {
        int val;
        Node* next;
        Node(int v, Node* n = nullptr) : val(v), next(n) {}
    };

    Node* head;
    Node* tail;
    size_t sz;

public:
    LinkedList() : head(nullptr), tail(nullptr), sz(0) {}

    // Return value at index i (0-based); -1 if out of bounds
    int get(int i) const {
        if (i < 0 || (size_t)i >= sz) return -1;
        Node* cur = head;
        for (int k = 0; k < i; ++k) cur = cur->next;
        return cur->val;
    }

    // Insert at head
    void insertHead(int val) {
        Node* n = new Node(val, head);
        head = n;
        if (!tail) tail = n;
        ++sz;
    }

    // Insert at tail
    void insertTail(int val) {
        Node* n = new Node(val, nullptr);
        if (tail) {
            tail->next = n;
            tail = n;
        } else {
            head = tail = n;
        }
        ++sz;
    }

    // Remove ith node; return true if successful
    bool remove(int i) {
        if (i < 0 || (size_t)i >= sz) return false;

        if (i == 0) {
            Node* toDel = head;
            head = head->next;
            if (toDel == tail) tail = nullptr;
            delete toDel;
            --sz;
            return true;
        }

        Node* prev = head;
        for (int k = 0; k < i - 1; ++k) prev = prev->next;

        Node* toDel = prev->next;
        prev->next = toDel->next;
        if (toDel == tail) tail = prev;
        delete toDel;
        --sz;
        return true;
    }

    // Return all values from head to tail
    std::vector<int> getValues() const {
        std::vector<int> res;
        res.reserve(sz);
        for (Node* cur = head; cur != nullptr; cur = cur->next) res.push_back(cur->val);
        return res;
    }

    // Optional: destructor to free memory
    ~LinkedList() {
        Node* cur = head;
        while (cur) {
            Node* nxt = cur->next;
            delete cur;
            cur = nxt;
        }
    }
};