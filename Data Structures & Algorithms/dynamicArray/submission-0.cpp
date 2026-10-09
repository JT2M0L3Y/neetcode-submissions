class DynamicArray {
private:
    int *arr;
    int length;
    int capacity;
public:
    DynamicArray(int capacity) {
        if (capacity > 0)
            this->capacity = capacity;
            this->length = 0;
            this->arr = new int[capacity];
    }

    int get(int i) {
        return this->arr[i];
    }

    void set(int i, int n) {
        this->arr[i] = n;
    }

    void pushback(int n) {
        if (length == capacity)
            resize();
        this->arr[length] = n;
        length++;
    }

    int popback() {
        if (length > 0)
            length--;
        return arr[length];
    }

    void resize() {
        capacity *= 2;
        int* newArr = new int[capacity];
        for (int i = 0; i < length; i++)
            newArr[i] = arr[i];
        delete[] arr;
        arr = newArr;
    }

    int getSize() {
        return this->length;
    }

    int getCapacity() {
        return this->capacity;
    }
};
