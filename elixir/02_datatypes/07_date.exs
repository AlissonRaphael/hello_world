date = ~D[2000-01-12]

date.year # 2000
date.month # 1
date.day # 12

Date.add(date, 3) # 2000-01-15

Date.beginning_of_month(date) # 2000-01-01
Date.end_of_month(date) # 2000-01-31

Date.beginning_of_week(date) # 2000-01-10
Date.end_of_week(date) # 2000-01-16

date2 = ~D[2023-06-27]
Date.compare(date, date2) # lt
Date.compare(date2, date) # gt

System.stop()
