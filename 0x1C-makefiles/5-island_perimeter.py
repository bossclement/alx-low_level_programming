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
	row_index = 0
	width = 0
	length = 0
	for lst in grid:
		if not row_index and 1 in lst:
			row_index = lst.index(1)
		if lst.count(1) > width:
			width = lst.count(1)
		if row_index and lst[row_index] == 1:
			length += 1
	return 2 * (width + length)

