try:
    number = int(input("Please enter a number to be converted into Roman Symbol : "))
    values = [1000, 900, 500, 400, 100, 90, 50, 40, 10, 9, 5, 4, 1]
    romans = ["M", "CM", "D", "CD", "C", "XC", "L", "XL", "X", "IX", "V", "IV", "I"]
    romanNumber = ''
    iterator = 0
    numberIn = number
    while  number > 0:
        for rem in range(number // values[iterator]):
            romanNumber += romans[iterator]
            number -= values[iterator]
        iterator += 1
    print("Roman symbolic value of the number " + str(numberIn) + " is : " + str(romanNumber))
except ValueError:
    print("Please enter a valid absolute integer.")
