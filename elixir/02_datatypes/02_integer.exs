Integer.digits(1003) # [1, 0, 0, 3]
Integer.digits(50,2) # [1, 1, 0, 0, 1, 0]
Integer.digits(-170, 2) # [-1, 0, -1, 0, -1, 0, -1, 0]

Integer.extended_gcd(240, 46) # {2, -9, 47}
Integer.extended_gcd(-46, -240) # {2, -47, 9}
Integer.extended_gcd(10, 0) # {10, 1, 0}

Integer.floor_div(5, 2) # 2
Integer.floor_div(-99, 2) # -50

Integer.gcd(8, 12) # 4
Integer.gcd(10, 5) # 5

Integer.mod(13,4) # 1
Integer.mod(9,3) # 0

Integer.parse("34.2") # {34, ".2"}
Integer.parse("20", 10) # {20, ""}

Integer.pow(2, 10) # 1024
Integer.pow(2, 64) # 0x10000000000000000

Integer.to_charlist(-720) # "-720"
Integer.to_charlist(0123) # "123"
Integer.to_charlist(100, 16) # "64"
Integer.to_charlist(88, 2) # "1011000"

Integer.to_string(20) # "20"
Integer.to_string(0123) # "123"

Integer.undigits([1,7,3]) # 173
Integer.undigits([8,8], 16) # 136

System.stop()
