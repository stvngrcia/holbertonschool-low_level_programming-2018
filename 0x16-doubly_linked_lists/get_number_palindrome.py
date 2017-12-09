def get_palindrome():
    '''
        Calculates the maximum palindrome number
    '''
    num2 = 999
    max = 0
    while (num2 >= 900):
        num1 = 999
        while num1 >= 900:
            product = str(num1 * num2)
            l = len(product)
            middle = int(l/2)
            if (product[:middle] == product[middle:][::-1]):
                if (max < (num1 * num2)):
                    max = num1 * num2
                    numlist = [num1, num2]
                    print(product)
            num1 = num1 - 1
        num2 = num2 - 1
    print("{} * {}={}".format(numlist[0], numlist[1], max))


if __name__ == "__main__":
    get_palindrome()