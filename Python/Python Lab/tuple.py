print("=== TUPLE CREATION ===")

# 1) Using parentheses
t1 = (1, 2, 3, 4)
print("1) Using parentheses:", t1)

# 2) Without parentheses (tuple packing)
t2 = "Aman", "Ravi", "Neha"
print("2) Without parentheses (packing):", t2)

# 3) Using tuple() constructor
t3 = tuple([10, 20, 30, 40])
print("3) Using tuple() constructor:", t3)

# 4) Single-element tuple (comma is required)
t4 = (99,)
print("4) Single-element tuple:", t4)

# 5) Nested tuple
t5 = ((1, 2), (3, 4), (5, 6))
print("5) Nested tuple:", t5)

print("\n=== TUPLE OPERATIONS ===")

nums = (5, 10, 15, 10, 20)
print("Tuple for operations:", nums)

# 1) Accessing elements
print("1) First element:", nums[0])
print("   Last element:", nums[-1])

# 2) Concatenation
concat_tuple = nums + (25, 30)
print("2) Concatenation:", concat_tuple)

# 3) Repetition
repeat_tuple = (1, 2) * 3
print("3) Repetition:", repeat_tuple)

# 4) Membership test
print("4) Is 15 present?", 15 in nums)
print("   Is 100 present?", 100 in nums)

# 5) Built-in functions
print("5) Length:", len(nums))
print("   Minimum:", min(nums))
print("   Maximum:", max(nums))
print("   Sum:", sum(nums))

# 6) index() and count()
print("6) Index of 10:", nums.index(10))
print("   Count of 10:", nums.count(10))

# 7) Iteration
print("7) Iterating elements:")
for value in nums:
	print(value, end=" ")
print()
