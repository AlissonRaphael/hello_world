Float.ceil(34.5) # 35
Float.ceil(34.561, 1) # 34.6
Float.ceil(2.333948, 3) # 2.334

Float.parse("14.41") # {14.41, ""}
Float.parse("20o4z") # {20.0, "o4z"}

Float.pow(2.0, 2) # 4.0
Float.pow(17.0, 1.6) # 93.05040638761433
# Float.pow(-1.0, 0.5) ** (ArithmeticError) bad argument in arithmetic expression

Float.ratio(1.5) # {3, 2}
Float.ratio(16.0) # {16, 0}

Float.round(34.5615, 3) # 34.562
Float.round(34.5674, 2) # 34.57

Float.to_charlist(78.0) # "78.0"
Float.to_string(94.72) # "94.72"

System.stop()
