numero = int(input("QUantos blocos?: "))
for i in range(1, numero + 1):
    print(' '  * (numero - i), end='')
    print('#' *i, end=' ')
    print('#' *i)
