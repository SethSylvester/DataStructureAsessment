Code Design and Data Structures

List

## I. Requirements

1. Description of Problem

    - **Name**: List

2. Output Information

    - None, a list.

3. User Interface Information

    - None

## II. Design

### Type 'Node'
- Holds the code for Info call and pointers for next and previous node

#### Field: data
- Type: Anytype template

- Desc: Holds the info for the node

#### Field: next
- Type: pointer

- Desc: Points to the next node

#### Field: previous
- Type: pointer

- Desc: Points to the previous node

### Type 'Iterator'
- Holds code that Iterates through the list

#### Field: 'm_count'
- Type: int

- Desc: Length of the list

#### Field: 'current'
- Type: pointer

- Desc: points to the current space in the list

#### Method: operator*()
- returns a pointer to the data

#### Method: operator++()
- Increments the iterator

#### Method: operator--()
- Decrements the iterator

#### Method: operator==()
- Checks to see if data stored is equal

#### Method: operator!=()
- Checks to see if data stored is not equal

### Type 'UnorderedList'
- Holds code used for adding, searching, and removing from the list

#### Method: insertFirst()
- Creates a node to be added to the top of the list

#### Method: insertLast()
- Creates a node to be added to the bottom of the list

#### Method: deleteNode()
- Deletes a node from the list

#### Method: search()
- Searchs for a item in the list

### 'List'
- Holds code for ????

#### Field: 'm_count'
- Type: int

- Desc: Length of the list

#### Field: 'm_first'
- Type: pointer

- Desc: points to the first in the list

#### Field: 'm_last'
- Type: pointer

- Desc: points to the last in the list

#### Field: 'isEmptyList'
- Type: bool

- Desc: returns if the List is empty or not

#### Field: 'length'
- Type: int

- Desc: Length of the list

#### Field: 'search'
- Type: bool

- Desc: Searches through the list

#### Method: deleteNode()
- Deletes a node

#### Method: front()
- Return the first item in the list

#### Method: back()
- Return the last item in the list

#### Method: isEmpty()
- Returns if the list is empty or not
## License

MIT License - Copyright (c) 2018 Academy of Interactive Entertainment

For more information, see the [license][lic] file.

Third party works are attributed under [thirdparty.md][3p].

[lic]:license.md
[3p]:thirdparty.md
[raylib]:https://github.com/raysan5/raylib
