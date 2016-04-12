''' 
The prime factors of 13195 are 5, 7, 13 and 29.

What is the largest prime factor of the number 600851475143 ?
'''

def primeFactors(n):
	""" This function will return all the prime factors of a given composite number"""
	factors = []
	d = 2
	while n > 1 :
		while n % d == 0 :
			factors.append(d)
			n /= d
		d = d + 1
		if d*d > n :
			if n > 1 : factors.append(n)
			break
	return factors

pfx = primeFactors(600851475143)
largest_prime_factor = max(pfx)
print "--------"
print "The largest prime factors of number 600851475143 : ", largest_prime_factor
#rint "--------"

print "--------"
pf_test = primeFactors(6857)
print "The prime factor above is checked if it has any largest prime itself or not :", max(pf_test)
print "--------"


