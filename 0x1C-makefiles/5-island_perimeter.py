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
		if lst.count(1) > width:
			width = lst.count(1)
		if [i[index] for i in grid].count(1) > length:
			length = [i[index] for i in grid].count(1)
	return 2 * (width + length)

