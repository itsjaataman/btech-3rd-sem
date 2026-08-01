numbers = [10, 20, 30, 40, 50]

print("Original list:", numbers)

numbers[2] = 35
print("After update:", numbers)

numbers.insert(1, 15)
print("After insert:", numbers)

numbers.remove(40)
print("After remove:", numbers)

print("Last item using negative index:", numbers[-1])
print("Second last item using negative index:", numbers[-2])
