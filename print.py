firstPage = int(input("Type first page: "))
lastPage = int(input("Type last page: "))

i = firstPage
while i <= lastPage and i > 0:
    print(i,",")
    i += 2