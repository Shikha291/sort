list1 = [3, 27, 5, 1, 36, 88, 10]
list2 = ['hi', 'how', 'are', 'you']


def sortasc(list1):
    for i in range(0, len(list1)):
        for j in range(i + 1, len(list1)):
            if list1[i] > list1[j]:
                temp = list1[i]
                list1[i] = list1[j]
                list1[j] = temp
    return list1


def sortdesc(list1):
    for i in range(0, len(list1)):
        for j in range(i + 1, len(list1)):
            if list1[i] < list1[j]:
                temp = list1[i]
                list1[i] = list1[j]
                list1[j] = temp
    return list1


print("List in ascending order=", sortasc(list2))
print("List in descending order=", sortdesc(list2))
print("List in ascending order=", sortasc(list1))
print("List in descending order=", sortdesc(list1))
