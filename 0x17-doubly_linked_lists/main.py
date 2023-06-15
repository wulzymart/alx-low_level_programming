#!/usr/bin/python3
def is_palindrome(num : int):
	if num < 10:
		return False
	i = str(num)
	rev = i[::-1]
	return i == rev


multiples = {"mul": 0, "i": 0, "j": 0}
for i in (range(900, 1000)):
	for j in reversed(range(900,1000)):
		mul = i * j
		if is_palindrome(mul):
			if mul > multiples["mul"]:
				multiples["mul"] = mul
				multiples["i"] = i
				multiples["j"] = j
print(f"{multiples['mul']} = {multiples['i']} * {multiples['j']}")
