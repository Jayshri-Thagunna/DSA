# LinkedList Concepts

What is constructor ?
- Constructor do not have any return type.
- Constructor  has to be same name as class.
- Constructor automatically call when instance declare.


# LinkedList print base case

```cpp
void print (Node * &first) {
    // BASE CASE
    if (first == nullptr) {
        return;
    }

     while (first != NULL) {
        cout << first->data <<" ";
        first = first ->next;
    }
}
```