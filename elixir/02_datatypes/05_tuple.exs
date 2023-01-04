tuple1 = { 34, "Alisson", :active }

IO.inspect(tuple1) # {34, "Alisson", :active}

tuple2 = Tuple.append(tuple1, "2022-01-03")
IO.inspect(tuple2) # {34, "Alisson", :active, "2022-01-03"}

tuple3 = Tuple.delete_at(tuple2, 2)
IO.inspect(tuple3) # {34, "Alisson", "2022-01-03"}

tuple4 = Tuple.duplicate("Alisson", 3)
IO.inspect(tuple4) # {"Alisson","Alisson","Alisson"}

tuple5 = Tuple.insert_at(tuple4, 2, :ok)
IO.inspect(tuple5) # {"Alisson","Alisson",:ok,"Alisson"}

Tuple.product({40, 2}) # 80
Tuple.product({20, 1}) # 20
Tuple.product({2, 2, 3}) # 12
Tuple.product({}) # 1

Tuple.sum({300, 4, 20}) # 324
Tuple.sum({10, 10}) # 20

list = Tuple.to_list(tuple2)
IO.inspect(list) # [34, "Alisson", :active, "2022-01-03"]

System.stop()
