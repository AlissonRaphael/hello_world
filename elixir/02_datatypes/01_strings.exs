fname = "Alisson"
lname = "Oliveira"

IO.puts("Welcome! Mr. #{fname} #{lname}.")

country = IO.gets("Where you are from #{fname}? ")

IO.puts(fname <> " " <> lname <> " from #{country}")

String.length(country) # 6
byte_size("É") # 2

String.at("North East", 6) # E
String.at("North East", 0) # N
String.at("North East", 2) # r
String.at("North East", -1) # t
String.at("North East", -6) # h

String.bag_distance("abc", "") # 0
String.bag_distance("abcd", "a") # 0.25
String.bag_distance("abcd", "abcd") # 1
String.bag_distance("abcd", "ab") # 0.5

String.capitalize("northeast") # Northeast
String.downcase("NOT NORTH") # not north
String.codepoints("Hello!") # ["H", "e", "l", "l", "!"]

String.contains?("I live in the northeast", "northeast") # true
String.contains?("I live in the northeast", ["northeast", "north"]) # true
String.contains?("I live in the northeast", ["south", "north"]) # false
