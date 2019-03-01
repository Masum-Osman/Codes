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
        line = "import unittestdef encode(string):sb = ""salt = 0for s in string:sp = str(hex(ord(s) + salt))[2:]salt += 1sb += spprint(sb)return sbdef decode(string):sb = ""salt = 0for i in range(0, len(string), 2):s = string[i:i+2]c = chr(int(s, 16) - salt)salt += 1sb += cprint(sb)return sbclass MyTest(unittest.TestCase):def testEncoding(self):line = ""self.assertEqual(line, decode(encode(line)))if __name__ == '__main__':unittest.main()"
        self.assertEqual(line, decode(encode(line)))

if __name__ == '__main__':
    unittest.main()

696e72727679267c76727e7f71808273757732788278857b7d418d8f8e868c86495b95854462469a89959e4b694d5e959fa352a6549ea457abadaca4aaa478b2b0617f63b7b9b86fb0aec273bbbfb277c37a727e74c8b7c3cc8283b68e97bbd2c1cdd6838fa28698dbcb8a96a98de1dfe0e3dbe1e89de9d9a1ebdfeff1efec9ff3e3e6e8eaa5eaecebf8eef0b4100102101f9fff9bcce108f8b7d5b910dfc108111bedcc0d1108112116c510fc7111117ca11d10d11b115114d8e1ded312011a124df12b12d12c12412a124e7ebe0f3ebfd137e5103e713b13d13c13413a13412913810a13afd105131138f6114f813c14214d10414614c15310815410e10311511b10f10711510915d14c15816111716215115d16611311f13211612816b15b11a12613911d16116f17216a17017712c17816813017a16e17e18017e17b12e18217217417e17418718813616419116d17f18e19014519318d18919519618819719915417b18d19c19e16e18d1a019315816a1951971991541a919b1aa1ac17e1a819e1ab1a11a71ad1a71691b51a81b01ab16f1811b41b21b81b016c18a16e1c21b51bd1b81811b51c81c91bc1ca1cd19f1cc1d11be1ca1871cc1ca1d01c81901851ca1cc1cb1d81ce1d01941d21dc1d21df1d51d719b1e01de1e41dc1a11a21a31e41e219d1dd1de1ee1e21ef1e81e31e41a61c41c51a91b11ea1eb1fa1ef1f81fe1f01f11ba1ce20a20420020c20d1ff20e2101cb20b20020920f1ca1cc