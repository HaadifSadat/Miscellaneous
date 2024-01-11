from __future__ import unicode_literals
li = ['\u0ce6','\u0ce7','\u0ce8','\u0ce9','\u0cea','\u0ceb','\u0cec','\u0ced','\u0cee','\u0cef']

n = input()
eng = []
for i in n:
    eng.append(i)
    print('*',end='')
print()
for j in eng:
    print(li.index(j),end='')

# print('\u0CCE')