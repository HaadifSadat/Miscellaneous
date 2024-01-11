
def fnc(arr,excM = 0,excm = 0,ip = -1,jp = -1):
    min_pos = tuple()
    max_pos = tuple()
    min,max = 1000,-1
    for i in range(0,3):
        for j in range(0,3):
            if((min > arr[i][j]) and ((excm != arr[i][j]) or (ip != i and jp != j))):                
                min_pos = (i,j)
                min = arr[i][j]
            elif((max < arr[i][j]) and (excM != arr[i][j])):
                max_pos = (i,j)
                max = arr[i][j]
    return [min_pos,max_pos]


arr = [
    [1,2,3],
    [4,5,6],
    [7,8,9]
]


li = []
ans = fnc(arr,9,1)
li.append(ans)
print(li)




