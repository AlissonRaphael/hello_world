datetime1 = ~N[2000-01-12 12:30:05]

datetime1.hour # 12
datetime1.minute # 30
datetime1.second # 5

datetime1 |> DateTime.add(50, :second, FakeTimeZoneDatabase)
IO.inspect(datetime1)

System.stop()
