# mystic\_rust's baby's first crackme
[Link](https://crackmes.one/crackme/66736380e7b35c09bb266f92)

The program takes in a key and a password as arguments. The key must be 12 characters in length and the number is an integer between 0 and 50 (not inclusive). The key is then encoded with an algorithm that changes its behavior depending on if the input key characters or the location of the characters are even or odd. The password is correct if the last character of the encoded string is a pipe symbol '|'.

Since the index of the last character in the string is odd (11), there are two ways the encoding might handle the input key. If the key character is even, it'll use the formula `encoded_str[i] = key[i] + number * 2`. If the key character is not even, it'll use the formula `encoded_str[i] = key[i] + number * -2`.

The `encoded_str[i] = key[i] + number * 2` is easier to find readable keys for so we'll be using that. First, pick a lowercase letter that has an even value when converted to an integer. Then calculate the number with the following equation `124=y+x*2` where y is the integer form of the character chosen and x is the unknown number. For example with the letter 'b' being the last character in the key, the resulting number would be 13. Thus one working password for the program would be bbbrgbbbbaab as the key and 13 as the number.
