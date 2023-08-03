#!/usr/bin/python3
"""
Module that has a function that returns perimeter of the island.
"""


def island_perimeter(grid):
	"""Computes perimeter of an island
	Args:
		grid (list): list of list of integers
	Returns:
		int: the perimeter of the island
	"""
	width = 0
	length = 0
	for index, lst in enumerate(grid):
		list_length = []
		list_width = []
		for i in lst:
			if list_width and not i:
				break
			list_width.append(i)
		if index > len(lst) - 1:
			break
		for i in [x[index] for x in grid]:
			if list_length and not i:
				break
			list_length.append(i)
		if list_width.count(1) > width:
			width = list_width.count(1)
		if list_length.count(1) > length:
			length = list_length.count(1)
	return 2 * (width + length)

