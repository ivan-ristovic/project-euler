# Problem 12
# The sequence of triangle numbers is generated by adding the natural numbers. So the 7th triangle number would be 1 + 2 + 3 + 4 + 5 + 6 + 7 = 28. The first ten terms would be:
#
# 1, 3, 6, 10, 15, 21, 28, 36, 45, 55, ...
#
# Let us list the factors of the first seven triangle numbers:
#
# 1: 1
# 3: 1,3
# 6: 1,2,3,6
# 10: 1,2,5,10
# 15: 1,3,5,15
# 21: 1,3,7,21
# 28: 1,2,4,7,14,28
#
# We can see that 28 is the first triangle number to have over five divisors.
#
# What is the value of the first triangle number to have over five hundred divisors?

def div_num(number):
	i = 2
	p = 1
	while i <= number:
		v = 0
		while number % i == 0:
			number /= i
			v += 1
		if v != 0:
			p *= (v+1)
		i += 1

	return p

k = 2
i = 1
while div_num(i) <= 500:
	i += k
	k += 1

print i

# Solution:
# 76576500
