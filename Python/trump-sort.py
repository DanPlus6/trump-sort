def trumpSort(arr: list[int]):
    N = len(arr)
    wall = arr[0]
    citizens = [arr[0]]

    for i in range(1,N):
        if arr[i] >= wall:
            wall = arr[i]
            citizens.append(arr[i])
    
    return citizens


arr = [24,48,30,12,65,77,24,2,13,80,76,4,1]

sorted_arr = trumpSort(arr)

for i in sorted_arr:
    print(i)
