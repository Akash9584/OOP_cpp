#include <iostream>
using namespace std;
class Vector
{
public:
    int size;
    int capacity;
    int *arr;
    Vector()
    {
        size = 0;
        capacity = 1;
        arr = new int[1];
    }
    void add(int element)
    {
        if (size == capacity)
        {
            capacity *= 2;
            int *arr2 = new int[capacity];
            for (int i = 0; i < size; i++)
            {
                arr2[i] = arr[i];
            }
            arr = arr2;
        }
        arr[size++] = element;
    }
    void print()
    {
        for (int i = 0; i < size; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    int get(int index)
    {
        if (size == 0)
        {
            cout << "Array is empty.";
        }
        if (index >= size || index < 0)
        {
            cout << "Invalid index! ";
            return -1;
        }
        return arr[index];
    }
    void remove()
    {
        if (size == 0)
        {
            cout << "Array is empty.";

        }
        size--;
    }
};
int main()
{
    Vector v1;
    v1.add(10);
    v1.print();
    v1.add(15);
    v1.print();
    v1.add(9);
    v1.print();
    cout<<v1.get(2)<<endl;
    v1.remove();
    v1.print();
    return 0;
}
