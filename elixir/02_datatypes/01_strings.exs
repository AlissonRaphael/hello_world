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

String.duplicate("alisson", 2) # alissonalisson
String.duplicate("alisson", 0) # ""
String.duplicate("one", 5) # oneoneoneoneone

String.ends_with?("southeast", "east") # true
String.ends_with?("southeast", ["west", "east"]) # true
String.ends_with?("southeast", ["west", "south"]) # false

String.equivalent?("abc", "abc") # true
String.equivalent?("abc", "ABC") # false

String.first("elixir") # e
String.first("") # nil

String.last("elixir") # r
String.last("") # nil

String.graphemes("\u00e9") # é

String.length("elixir") # 6

String.match?("Alisson", ~r/Alisson/) # true
String.match?("Oliveira", ~r/Raphael/) # false

String.pad_leading("Alisson", 10) # "   Alisson"
String.pad_leading("Alisson", 10, "_") # "___Alisson"

String.pad_trailing("Alisson", 10) # "Alisson   "
String.pad_trailing("Alisson", 10, "-") # "Alisson---"

String.replace("a,b,c,d", ",", "-") # "a-b-c-d"
String.replace("a,b,c,d", ",", "-", global: false) # "a-b,c,d"

String.reverse("Alisson") # "nossilA"

String.slice("Alisson", 1..5) # lisso
String.slice("Alisson", 5..6) # on
String.slice("Alisson", 2..-2) # isso
String.slice("Alisson", -6..6) # lisson
String.slice("Alisson", 8..12) # ""
String.slice("Alisson", 6..1) # ""
String.slice("Alisson", -2..-5) # ""

System.stop()
