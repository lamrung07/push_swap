*This project has been created as part
of the 42 curriculum by ngulam*
# Push_Swap 🔀

Because Swap_push doesn’t feel as natural

In this project, you will sort data in a stack using a limited set of instructions, aiming
to achieve the lowest possible number of actions. To succeed, you will need to work with
various algorithms and choose the most appropriate one for optimized data sorting.

## Description
At the beginning, random number of unique negative and/or positive integers are given. The requirement is using two stack (a to store the give list, and b is an empty stack) and 11 designated operations to sort all the number in stack a in ascending order.

-- OPERATIONS --
| Code  | Instruction                         | Action                                                 |
| ----- | ----------------------------------- | ------------------------------------------------------ |
| `sa`  | swap a                              | swaps the 2 top elements of stack a                    |
| `sb`  | swap b                              | swaps the 2 top elements of stack b                    |
| `ss`  | swap a + swap b                     | `sa` and `sb` at the same time                                     |
| `pa`  | push a                              | moves the top element of stack b at the top of stack a |
| `pb`  | push b                              | moves the top element of stack a at the top of stack b |
| `ra`  | rotate a                            | Shift up all elements of stack a by 1      |
| `rb`  | rotate b                            |  Shift up all elements of stack b by 1      |
| `rr`  | rotate a + rotate b                 | `ra` and `rb` at the same time                                    |
| `rra` | reverse rotate a                    |  Shift down all elements of stack a by 1      |
| `rrb` | reverse rotate b                    | Shift down all elements of stack b by 1.   |
| `rrr` | reverse rotate a + reverse rotate b | `rra` and `rrb` at the same time                                   |

-- ALGORITHM --

My Push_swap project implement Turk Sort which inspired a lot A.Yigit Ogun from 42-Heilbronn. The overall steps of this algorithm are:

*Step 1: Push each node of stack a to stack b until stack a have only 3 numbers remaining. While pushing, making sure that numbers in stack a are push above the right target (the biggest smaller number than the current node in a, if there are no smaller numbers, the target is the smallest number in stack b). After all, stack b will store all the numbers in descending order

*Step 2: Sorting the stack A with simple algorithm to sort 3 random number. 

*Step 3: Push back all the number from stack b to stack a. While pushing, we still choose the target (the smallest bigger number than the current number in stack b, if there are no bigger numbers, the target is the biggest number in stack a). Finally, rotate stack a until the smallest number in the top. 

## Instructions

Compilation:

1. Git clone into your computer
2. Run "make" to compile the project
3. using the command "./push_swap" follow by inputs (programme will display "Error\n" with unsuitable inputs)

## Resources
My project is inspired a by the Push_swap project of A.Yigit Ogun from 42-Heilbronn. Besides, I also watched tutorial of sorting algorithms, push_swap tutorial in Youtube. In this project, AI and GDB are used to check debugging and find the segmentation faults. All the references are listed below.

*Video:
1. https://www.youtube.com/watch?v=wRvipSG4Mmk&t=1006s
2. https://www.youtube.com/watch?v=OaG81sDEpVk&t=3712s
3. https://www.youtube.com/watch?v=4dMsuxfqufg

*Instructions:
1. https://medium.com/@ayogun/push-swap-c1f5d2d41e97
2. https://medium.com/@julien-ctx/push-swap-an-easy-and-efficient-algorithm-to-sort-numbers-4b7049c2639a
3. https://medium.com/nerd-for-tech/push-swap-tutorial-fa746e6aba1e
