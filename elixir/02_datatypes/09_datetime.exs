datetime1 = ~N[2020-01-12 10:30:15.00Z]

datetime1.year # 2020
datetime1.month # 1
datetime1.day # 12
datetime1.hour # 10
datetime1.minute # 30
datetime1.second # 15

DateTime.after?(~U[2020-01-12 10:30:15.00Z], ~U[2022-02-10 14:15:30.00Z]) # false
DateTime.after?(~U[2020-01-12 10:30:15.00Z], ~U[2020-01-12 05:30:00.00Z]) # true

DateTime.before?(~U[2020-01-12 10:30:15.00Z], ~U[2022-02-10 14:15:30.00Z]) # true
DateTime.before?(~U[2020-01-12 10:30:15.00Z], ~U[2020-01-12 05:30:00.00Z]) # false

datetimeI = %DateTime{year: 2000, month: 2, day: 29, zone_abbr: "AMT",
                hour: 23, minute: 0, second: 7, microsecond: {0, 0},
                utc_offset: -14400, std_offset: 0, time_zone: "America/Manaus"}
datetimeII = %DateTime{year: 2000, month: 2, day: 29, zone_abbr: "CET",
                hour: 23, minute: 0, second: 7, microsecond: {0, 0},
                utc_offset: 3600, std_offset: 0, time_zone: "Europe/Warsaw"}
datetimeIII = %DateTime{year: 1998, month: 6, day: 15, zone_abbr: "AMT",
                hour: 12, minute: 0, second: 0, microsecond: {0, 0},
                utc_offset: 0, std_offset: 0, time_zone: "Europe/Warsaw"}

DateTime.compare(datetimeI, datetimeII) # :gt
DateTime.compare(datetimeIII, datetimeI) # :lt

DateTime.diff(datetimeI, datetimeII) # 18000 -> seconds
DateTime.diff(datetimeI, datetimeIII) # 53967607 -> seconds
DateTime.diff(datetimeI, datetimeIII, :hour) # 14991 -> hours
DateTime.diff(datetimeI, datetimeIII, :day) # 624 -> days

DateTime.from_gregorian_seconds(1) # ~U[0000-01-01 00:00:01Z]

DateTime.from_iso8601("2015-01-23T23:50:07Z") # {:ok, ~U[2015-01-23 23:50:07Z], 0}
DateTime.from_iso8601("2015-01-23P23:50:07") # {:error, :invalid_format}

IO.inspect(datetime)

System.stop()
