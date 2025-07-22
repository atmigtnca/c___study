import random
alphabet = 'qwertyuiopalskdjfhgmznxbcv1029384756!@#$%?~QWERTYUIOPLKJHGFDSAZXCVBNM'

def genPass():
    global alphabet
    password = ''

    for i in range(11):
        password += random.choice(alphabet)

    return password

def Pass(k):
    p = 0
    while p != k:
        for i in range(k):
            print(genPass())
            p += 1
            
k = int(input('생성하고 싶은 패스워드의 개수를 입력하시오: '))

Pass(k)