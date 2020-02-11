
#!/usr/bin/env python

import os

n = int(__file__)

f_out = open(str(n) + ".txt", "a")

if n == 0:
    print("0", file=f_out)
elif n == 1 or n == 2:
    print("1", file=f_out)
else:
    cwd = os.getcwd()
    
    os.system("./" + os.path.join(cwd, str(n-1), str(n-1) + ".*"))
    os.system("./" + os.path.join(cwd, str(n-2), str(n-2) + ".*"))

    n1 = open(os.path.join(cwd, str(n-1), str(n-1) + ".txt"))
    n2 = open(os.path.join(cwd, str(n-2), str(n-2) + ".txt"))
    n1s = int(n1.read())
    n2s = int(n2.read())
    n1.close()
    n2.close()
    print(str(n1s + n2s), file=f_out)

f_out.close()
