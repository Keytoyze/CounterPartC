# eax: return

import sys

if len(sys.argv) != 2:
    print("usage: python [IR path]")

ir = open(sys.argv[1]).read()

