date1 = ~D[2000-01-12]

date1.year # 2000
date1.month # 1
date1.day # 12

Date.add(date1, 3) # 2000-01-15

Date.beginning_of_month(date1) # 2000-01-01
Date.end_of_month(date1) # 2000-01-31

Date.beginning_of_week(date1) # 2000-01-10
Date.end_of_week(date1) # 2000-01-16

date2 = ~D[2023-06-27]
Date.compare(date1, date2) # lt
Date.compare(date2, date1) # gt

Date.day_of_era(date1) # {730131, 1}
Date.day_of_era(date2) # {738698, 1}
Date.day_of_era(~D[0000-08-16]) # {138, 0}
Date.day_of_era(~D[-4000-10-21]) # {1461042, 0}

date3 = ~D[2001-09-11]

Date.day_of_week(date3) # 2 >>> Tuesday
Date.day_of_week(date3, :sunday) # 3 >>> Tuesday
Date.day_of_week(date3, :wednesday) # 7 >>> Tuesday

Date.day_of_year(date1) # 12
Date.day_of_year(date2) # 178
Date.day_of_year(date3) # 254

Date.days_in_month(~D[2023-12-10]) # 31
Date.days_in_month(~D[2023-02-19]) # 28
Date.days_in_month(~D[2023-06-07]) # 30

Date.diff(~D[2023-01-03], ~D[2023-01-01]) # 2
Date.diff(~D[2023-03-03], ~D[2023-04-03]) # -31
Date.diff(~D[2023-02-01], ~D[2022-12-01]) # 62

IO.inspect(a)

System.stop()
