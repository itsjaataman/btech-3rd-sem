
numbers = (10, 20, 30, 40, 50, 60, 70, 80)

print("Original tuple:", numbers)

# 1) From index (start slicing from index 3)
print("\n1) From index 3:", numbers[3:])

# 2) Alternate elements (every second element)
print("2) Alternate elements:", numbers[::2])

# 3) Negative indices
print("3) Element at index -1 (last):", numbers[-1])
print("   Elements from index -5 to -2:", numbers[-5:-1])

# 4) Reverse tuple
print("4) Reverse tuple:", numbers[::-1])
