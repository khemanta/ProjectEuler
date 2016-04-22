def isPalindrome(num):
    return str(num) == str(num)[::-1]
def largest(bot, top):
    z = 0
    for x in range(top, bot, -1):
        for y in range(top,bot, -1):
            if isPalindrome(x*y):
                if x*y > z:
                    z = x*y
                    lowerNum=x
                    upperNum=y
    return z
    print x
    print y
print largest(10,99)
print lowerNum
print 