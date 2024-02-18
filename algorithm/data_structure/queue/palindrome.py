# Author: Shikai Lu

from deque import Deque

def is_palindrome(str):
    char_deque = Deque()

    for ch in str:
        char_deque.add_rear(ch)

    equal = True
    while char_deque.size() > 1 and equal:
        first = char_deque.remove_front()
        last = char_deque.remove_rear()
        if first != last:
            equal = False
    return equal

# test
# print(is_palindrome("ShikaiLu"))
# print(is_palindrome("noon"))
