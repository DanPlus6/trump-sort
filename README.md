
# Welcome to the Trump Sort Repo :clipboard:

<img width="715" height="251" alt="image" src="https://github.com/user-attachments/assets/a4e611ff-f7ab-400b-8e0a-2a566ce2fb0f" />


## What is Trump Sort? :question:

### Introduction

Trump Sort is a highly efficient sorting algorithm, serving as a systematic method for placing the elements of a random access file or an array in order. Trump Sort is also know as the best sorting algorithm of all times because of its AMAZING capacity of always ordering an array with an O(n) performance.

### How it works?

It's pretty simple, all you need to do is iterate N times through the elements of the array (with N being the length of the unsorted array), checking if its elements are in order. You keep track of a temprorary variable known as the "wall"; whenever you encounter an element greater than the last, that is your new "wall". Any element occuring after the wall and is lesser than the wall will be removed and appended to the end of the array, in other words "deported to the East". Finally, once you have iterated through N elements, the magic happens! Your "wall" is the largest element in the array and none of the "deported" elements "behind the wall" can return, thus we can now discard all elements behind the wall and you're left with a sorted array!

V "bro i aint readin' allat" - well neither am I, so check out this step-by-step example below V

### Step-by-step example

1. (1 2 5 3 5 7) -> (**1** 2 5 3 5 7) Here the algorithm stores the first of element of the array as the "wall"
2. (**1** 2 5 3 5 7) -> (1 **2** 5 3 5 7) Now it will compare the stored element with the second one, if this is taller than the wall, it replaces the wall with this
3. (1 **2** 5 3 5 7) -> (1 2 **5** 3 5 7) Repeats step 2
4. (1 2 **5** 3 5 7) -> (1 2 **5** 5 7 3) Since the 4th element is shorter than the wall, the 4th element will be deported.
5. (1 2 **5** 5 7) -> (1 2 5 **5** 7 3) Equal elements are preserved
6. (1 2 5 **5** 7 3) -> (1 2 5 5 **7** 3) Larger element, so new wall
7. (1 2 5 5 **7 |** 3) End of loop; since 7 was the wall, you can now discard all deported elements behind it.
8. **(1 2 5 5 7)** Sorted array yay!

### Pseudocode implementation

Keep in mind that this is pseudocode, and is just an example. We strongly encourage you to code a different approach. 

```pseudocode
FUNCTION trumpSort(A : list OF sortable items)
    n := length(A)
    wall := A[0]
    citizens := [A[0]]

    FOR i := 1 TO n NOT inclusive DO
        IF A[i] >= bigger THEN
          wall := A[i]
          citizens.push(A[i])
        END IF
    END FOR

    RETURN citizens
END FUNCTION
```

## Want to help? :raised_hands:

Please check the [CONTRIBUTING.md](./CONTRIBUTING.md)

### Give this Project a Star! :star:

## About + Credits due

> - DanPlus6 does not claim ownership, posession, or credit for invention to the Trump Sort algorithm, rather "Trump Sort" was discovered from [a medium.com article by Gant Laborde](https://gantlaborde.medium.com/trump-sort-a-new-sorting-algorithm-b37b1133356a) and implemented here in code by DanPlus6 and other maintainers/contributors on GitHub
>
> - Trump Sort was found out of curiosity after discovery of [Stalin Sort](https://github.com/gustavo-depaula/stalin-sort), which DanPlus6 found from [a discussion on DMOJ](https://dmoj.ca/problem/miraclesort#comment-22524)

----------------------------------------

<sup> Please note that "Trump Sort", or this repository at least, was created purely as a joke and is not meant to offend anyone. I/We express my/our sincerest apologies if it does. </sup>

