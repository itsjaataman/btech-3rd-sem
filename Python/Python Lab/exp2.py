items = ["apple", "banana", "cherry", "date", "banana", "fig"]

print("Original list:", items)

# remove() removes the first matching item
items.remove("banana")
print("After remove('banana'):", items)

# remove more than one item by calling remove() again
if "date" in items:
	items.remove("date")
if "fig" in items:
	items.remove("fig")
print("After removing more than one item:", items)

# pop() removes and returns the item at a given index
removed_item = items.pop()
print("Item removed by pop():", removed_item)
print("After pop():", items)

# clear() removes all items from the list
items.clear()
print("After clear():", items)
