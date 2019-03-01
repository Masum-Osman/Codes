#julkarnine quiz:

import unittest

def encode(string):
    sb = ""
    salt = 0
    for s in string:
        sp = str(hex(ord(s) + salt))[2:]
        salt += 1
        sb += sp

    print(sb)
    return sb

def decode(string):
    sb = ""
    salt = 0
    for i in range(0, len(string), 2):
        s = string[i:i+2]
        c = chr(int(s, 16) - salt)
        salt += 1
        sb += c

    print(sb)
    return sb

class MyTest(unittest.TestCase):
    def testEncoding(self):
        line = "666a70672452677a7d76"
        self.assertEqual(line, decode(encode(line)))

if __name__ == '__main__':
    unittest.main()