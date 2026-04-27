Submitted by : Parminder singh 
submitted to : Mr. Rajendra kumar 
//Q1: Here's a simple C++ program that uses a template to swap the values of two variables:

#include <iostream>
using namespace std;

template <typename T>
void swapValues(T &a, T &b) {
    T temp = a;
    a = b;
    b = temp;
}

int main() {
    int x = 10, y = 20;
    cout << "Before swapping: x = " << x << ", y = " << y << endl;
    swapValues(x, y);
    cout << "After swapping: x = " << x << ", y = " << y << endl;

    double a = 5.5, b = 8.8;
    cout << "Before swapping: a = " << a << ", b = " << b << endl;
    swapValues(a, b);
    cout << "After swapping: a = " << a << ", b = " << b << endl;

    return 0;
}

//In this program, the `swapValues` function template takes two arguments of the same type by reference, and swaps their values using a temporary variable. The main function demonstrates how to use the template with both integer and double variables.

//Now let's see the results:


Before swapping: x = 10, y = 20
After swapping: x = 20, y = 10
Before swapping: a = 5.5, b = 8.8
After swapping: a = 8.8, b = 5.5
    

//Q2: Here's a C++ program that uses a template to find the minimum value in an array:

#include <iostream>
using namespace std;

template <typename T>
T findMin(T arr[], int n) {
    T min = arr[0];
    for (int i = 1; i < n; i++) {
        if (arr[i] < min) {
            min = arr[i];
        }
    }
    return min;
}

int main() {
    int intArr[] = {5, 3, 8, 1, 9};
    double doubleArr[] = {4.5, 2.1, 7.9, 3.6};
    cout << "Minimum value in intArr: " << findMin(intArr, 5) << endl;
    cout << "Minimum value in doubleArr: " << findMin(doubleArr, 4) << endl;
    return 0;
}

//In this program, the `findMin` function template takes an array of any data type by reference, and returns the minimum value in the array. The `main` function demonstrates how to use the template with both integer and double arrays.

//Now let's see the results:


Minimum value in intArr: 1
Minimum value in doubleArr: 2.1

//Q3: Here's a C++ program that uses a template to sort an array using Bubble Sort or sorting:

#include <iostream>
using namespace std;

template <typename T>
void bubbleSort(T arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
                T temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main() {
    int arr[] = {5, 3, 8, 1, 9};
    double arr2[] = {4.5, 2.1, 7.9, 3.6};
    bubbleSort(arr, 5);
    bubbleSort(arr2, 4);
    cout << "Sorted int array: ";
    for (int i = 0; i < 5; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    cout << "Sorted double array: ";
    for (int i = 0; i < 4; i++) {
        cout << arr2[i] << " ";
    }
    cout << endl;
    return 0;
}

// In this program, the `bubbleSort` function template takes

// Now let's see the results:

Sorted int array: 1 3 5 8 9
Sorted double array: 2.1 3.6 4.5 7.9

Q4: Here's a C++ program that uses a template to search an array using linear search:
```cpp
#include <iostream>
using namespace std;

template <typename T>
int linearSearch(T arr[], int n, T key) {
    for (int i = 0; i < n; i++) {
        if (arr[i] == key) {
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[] = {5, 3, 8, 1, 9};
    double arr2[] = {4.5, 2.1, 7.9, 3.6};
    int intKey = 8;
    double doubleKey = 2.1;
    int intIndex = linearSearch(arr, 5, intKey);
    int doubleIndex = linearSearch(arr2, 4, doubleKey);
    cout << "Index of " << intKey << " in int array: " << intIndex << endl;
    cout << "Index of " << doubleKey << " in double array: " << doubleIndex << endl;
    return 0;
}
//In this program, the `linearSearch` function template takes an array of any data type by reference, and returns the index of the key value if it is found in the array, and -1 otherwise. The `main` function demonstrates how to use the template with both integer and double arrays.

//Now let's see the results:

Index of 8 in int array: 2
Index of 2.1 in double array: 1


Q5: Here's a C++ program that implements stack using templates:

#include <iostream>
using namespace std;

template <typename T>
class Stack {
    T arr[100];
    int top;
public:
    Stack() {
        top = -1;
    }
    void push(T data) {
        arr[++top] = data;
    }
    T pop() {
        return arr[top, ];
    }
    void display() {
        for (int i = 0; i <= top; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Stack<int> s;
    s.push(5);
    s.push(3);
    s.push(8);
    s.push(1);
    s.push(9);
    cout << "Stack: ";
    s.display();
    s.pop();
    cout << "Stack after pop: ";
    s.display();
    return 0;
}
```
In this program, the `Stack` class is implemented using a template, so that it can be used for stacks of any data type. The `push` and `pop` functions can be used to add and remove elements from the stack, and the `display` function can be used to print the elements in the stack. The `main` function demonstrates how to use the stack with integers.

//Q7 : Here's a C++ program that implements queue using templates:

#include <iostream>
using namespace std;

template <typename T>
class Queue {
    T arr[100];
    int front, rear;
public:
    Queue() {
        front = 0;
        rear = -1;
    }
    void enqueue(T data) {
        arr[++rear] = data;
    }
    T dequeue() {
        return arr[front++];
    }
    void display() {
        for (int i = front; i <= rear; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Queue<int> q;
    q.enqueue(5);
    q.enqueue(3);
    q.enqueue(8);
    q.enqueue(1);
    q.enqueue(9);
    cout << "Queue: ";
    q.display();
    q.dequeue();
    cout << "Queue after dequeue: ";
    q.display();
    return 0;
}

In this program, the `Queue` class is implemented using a template, so that it can be used for queues of any data type. The `enqueue` and `dequeue` functions can be used to add and remove elements from the stack, and the `display` function can be used to print the elements in queue. The `main` function demonstrates how to use the queue with integers.

Q 8 : Here is a C++ program that performs basic operations of calculator using templates.

#include <iostream>
using namespace std;

template <typename T>
class Calculator {
public:
    T add(T a, T b) {
        return a + b;
    }
    T subtract(T a, T b) {
        return a - b;
    }
    T multiply(T a, T b) {
        return a * b;
    }
    T divide(T a, T b) {
        return a / b;
    }
};

int main() {
    Calculator<int> calc;
    cout << "Addition: " << calc.add(5, 3) << endl;
    cout << "Subtraction: " << calc.subtract(5, 3) << endl;
    cout << "Multiplication: " << calc.multiply(5, 3) << endl;
    cout << "Division: " << calc.divide(5, 3) << endl;
    return 0;
}

In this program, the Calculator class is implemented using a template, so that it can be used for calculations with different data types. The add, subtract, multiply, and divide functions can be used to perform the respective calculations. The main function demonstrates how to use the calculator with integers.

Now let's see the results:

Addition: 8
Subtraction: 2
Multiplication: 15
Division: 2

//Q9 : Here is a C++ program that implements basic Array operations using templates.

#include <iostream>
using namespace std;

template <typename T>
class Array {
    T arr[100];
    int size;
public:
    void input(int n) {
        size = n;
        for (int i = 0; i < size; i++)
            cin >> arr[i];
    }
    void display() {
        for (int i = 0; i < size; i++)
            cout << arr[i] << " ";
    }
};

int main() {
    Array<int> a;
    int n;
    cout << "Enter size: ";
    cin >> n;
    cout << "Enter elements: ";
    a.input(n);
    cout << "Array: ";
    a.display();
    return 0;
}
```
In this program, the Array class is implemented using a template, so that it can be used for arrays of any data type. The input function can be used to store values in array, and the display function can be used to print the array. The main function demonstrates how to use the array with integers.
