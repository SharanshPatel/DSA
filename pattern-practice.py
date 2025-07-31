def pattern(N):
    for i in range(N):
        for j in range (N):
            print("*",end=" ")
        print()

def pattern2(N):
    for i in range(N):
        for j in range (i+1):
            print("*",end=" ")
        print()

def pattern3(N):
    for i in range(N):
        for j in range (i+1):
            print(i+1,end=" ")

        print()


N=5
pattern3(N)        