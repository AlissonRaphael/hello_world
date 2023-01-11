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
Date.compare(date2, date) # gt

Date.day_of_era(date) # {730131, 1}
Date.day_of_era(date2) # {738698, 1}
Date.day_of_era(~D[0000-08-16]) # {138, 0}
Date.day_of_era(~D[-4000-10-21]) # {1461042, 0}

System.stop()
