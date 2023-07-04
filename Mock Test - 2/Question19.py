def meaaan(nums):
    total_sum = sum(nums)
    total_num = len(nums)
    mean = total_sum / total_num
    return mean

inp = [11,12,13,14,15]
mean_value = meaaan(inp)
print(mean_value)