# Author: Shikai Lu

#integer to any base
def base_convert(n, base):
    convert_string = "0123456789ABCDEF"
    if n < base:
        return convert_string[n]
    else:
        return base_convert(n//base,base) + convert_string[n%base]

# test
# print(base_convert(8,2))