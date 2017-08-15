# List-Interface

There are many dierent ways to represent lists of data when programming; you have used at
least linked lists and arrays in the past. While we may choose to represent a list one way or
another in our own code, we'd still like to write code that other people can reuse irrespective
of our choices. This involves creating a common interface that the dierent representations
of a data structure support.
In this question, you will implement classes which store lists of ints using dierent internal
representations, and still provide a common interface so that elements can be inserted into,
found in, and removed from each list without needing to know the type of the list in advance
and how the functionality is implemented.
You are to provide the class List, which serves as a common interface to all of these data
types. All lists should support the following operations:


 int at(int index), which takes in a position in the list and returns the int stored at
that position. This is equivalent to the arr[index] operation on an array arr. You may
assume that index is a valid index in the list.
 int first(), which returns the rst element in the list. You may assume that the list
is nonempty.
 int last(), which returns the last element in the list. You may assume that the list is
nonempty.
 int size(), which returns the number of elements currently in the list.
 void add(int num), which adds a number to the list.
 int find(int num), which searches through the list for num. If found, it returns the
index of the rst occurrence of num. Otherwise, it returns -1.
 bool remove(int num), which searches through the list for num. If found, it removes
the rst occurrence and returns true. Otherwise, it returns false.
You will support the List interface by implementing the classes: Vector, UnsortedList and
SortedList.

Vector should be implemented as an array whose size is adjusted as necessary to contain every
element, and where add adds new elements to the end of the array and remove removes the
selected element and immediately lls the gap that is created.

SortedList and UnsortedList should be implemented as linked lists, with the only dierence
that add inserts elements into a SortedList in sorted order, whereas it inserts elements into
an UnsortedList at the end of the linked list. The linked list should be implemented using the
standard denition of a Node class.
Note that while marmoset will test that your classes behave correctly, it cannot enforce that
the classes are implemented according to the specications (linked list or resizing array).
Because of this, there is a signicant handmarking component which will determine whether
your classes actually followed the implementation requirements. Submissions that produce the
desired outcome but do so without following the requirements mentioned above will be heavily
penalized (including reducing marks already obtained by passing Marmoset test cases).
