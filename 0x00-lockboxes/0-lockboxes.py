#!/usr/bin/python3
""" You have n number of locked boxes in front of you.
    Each box is numbered sequentially from 0 to n - 1
    and each box may contain keys to the other boxes.
"""


def canUnlockAll(boxes):
    """ Determines if all the boxes can be opened. """

    keys = [0]
    storage = []
    all_keys = [i for i in range(0, len(boxes))]

    while (len(keys) > 0):

        keys.sort()

        if keys[0] < len(boxes) and keys[0] not in storage:

            storage.append(keys[0])

            for value in boxes[keys[0]]:
                if value not in keys and value not in storage:
                    keys.append(value)

        del keys[0]

    storage.sort()
    if storage == all_keys:
        return True
    return False
