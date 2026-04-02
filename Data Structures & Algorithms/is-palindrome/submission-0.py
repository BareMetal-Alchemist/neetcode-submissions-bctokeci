class Solution:
    def isPalindrome(self, s: str) -> bool:
        ptr1 = 0
        ptr2 = (len(s) - 1)

        while (ptr2 - ptr1) > 0:
            if not s[ptr1].isalpha() and not s[ptr1].isdigit():
                print(s[ptr1])
                ptr1 += 1
            elif not s[ptr2].isalpha() and not s[ptr2].isdigit():
                ptr2 -= 1

            else:
                if s[ptr1].lower() == s[ptr2].lower():
                    ptr1 += 1
                    ptr2 -= 1
                else:
                    return False
            print (s[ptr1], " - ", s[ptr2])
        return True