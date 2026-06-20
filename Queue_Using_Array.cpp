class myQueue {
    int *arr;
    int front, rear;
    int size;

public:
    myQueue(int n) {
        size = n;
        arr = new int[size];
        front = -1;
        rear = -1;
    }

    bool isEmpty() {
        return front == -1;
    }

    bool isFull() {
        return (front == 0 && rear == size - 1) ||
         (rear + 1) % size == front;
    }

    void enqueue(int x) {
        if (isFull()) {
            cout << "Queue Full\n";
            return;
        }

        if (isEmpty()) {
            front = rear = 0;
        } else {
            rear = (rear + 1) % size;
        }

        arr[rear] = x;
    }

    void dequeue() {
        if (isEmpty()) {
            cout << "Queue Empty\n";
            return;
        }

        if (front == rear) {
            front = rear = -1;  // last element removed
        } else {
            front = (front + 1) % size;
        }
    }

    int getFront() {
        if (isEmpty()) return -1;
        return arr[front];
    }

    int getRear() {
        if (isEmpty()) return -1;
        return arr[rear];
    }
};