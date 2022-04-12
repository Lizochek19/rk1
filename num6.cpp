#include <iostream>
#include <string>

using namespace std;

struct node {
    double val;
    node* next = nullptr;
};
class list {
public:
    node* head = nullptr;
    node* tail = nullptr;
    void insert(double vall) {
        node* nd = new node;
        nd->val = vall;
        if (tail == nullptr) {
            head = tail = nd;
        }
        else {
            tail = tail->next = nd;
        }
    }

};

node* average(int** a, int n, int m);

node* average(int** a, int n, int m) {
    list ans;
    for (int i = 0; i < n; ++i) {
        int sum = 0;
        for (int j = 0; j < m; ++j) {
            sum += a[i][j];
        }
        double aver = sum * 1.0 / (m * 1.0);
        ans.insert(aver);
    }
    return ans.head; // возращаем певрый элемент списка
}


int main() {
    return 0;
}

