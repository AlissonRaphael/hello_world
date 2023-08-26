a = :"is atom"
b = :atom

a == :"is atom" # true
:atom == :atom # true
:atom == :"is atom" # false

to_charlist(a) # "is atom"
to_charlist(:"is new atom") # "is new atom"
to_string(b) # "atom"

System.stop()
