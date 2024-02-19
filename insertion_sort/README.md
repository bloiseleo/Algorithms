# Insertion Sort

The insertion sort can be used to sort an array while an element is being inserted at the list.

It starts by finding the correct position for the new element and moving the elements to the right until the right position is found. Finally, the value is inserted at the correct position.

## Example

{3, 2, 1}

Let's take the array above as the input array and let's start sorting it.

We need to start at index 1, because we cannot compare the element at -1 index, since arrays start at 0. So, we can see that the value of index 1 is lesser than the index 0. Then, we need tomove the value of 0 index to index 1 getting this result: 

{3, 3, 1}

After that, we reduce the index by 1 getting -1. Since -1 is not a valid position, we found the correct position for that value at index 1 (remember? It was 2). So, we put it at 0 getting the result:

{2, 3, 1}

Now, we can move on to the next valid position: 2.

The value at 2 index is 1. So, we start by comparing it to the value at 1 index, which is 3. Since 1 is lesser than 3, we move the value of 1 index to the 2 index getting the result below:

{2, 3, 3}

After that, we reduce the index by 1 getting 0. The value at index 0 is lesser than the value being compared which is 1. So, we move it to the right too. Getting the result below:

{2, 2, 3}

Redeucing the index by 1, we get -1. Since -1 is not valid, the correct position was found and we put the value into it. Getting the sorted array finally!
{1, 2, 3}

### Worst Case

The worst case occurs when we get an input inversed, with respect to the rule we defined for ordering.
