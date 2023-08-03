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
	perimeter = 0
	rows, cols = len(grid), len(grid[0])

	for row in range(rows):
		for col in range(cols):
			if grid[row][col] == 1:
				perimeter += 4

				if row > 0 and grid[row - 1][col] == 1:
					perimeter -= 2
				if col > 0 and grid[row][col - 1] == 1:
					perimeter -= 2
	return perimeter

