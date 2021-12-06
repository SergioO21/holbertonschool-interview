#!/usr/bin/python3

def canUnlockAll(boxes):

    keys = [0]
    storage = []
    all_keys = [i for i in range(0, len(boxes))]

    while (len(keys) > 0):

        keys.sort()

        if keys[0] < len(boxes) and not keys[0] in storage:

            storage.append(keys[0])

            for value in boxes[keys[0]]:
                if not value in keys and not value in storage:
                    keys.append(value)

        del keys[0]

    storage.sort()
    if storage == all_keys:
        return True
    return False
