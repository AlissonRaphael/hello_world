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

DateTime.from_unix(1_464_096_368) # {:ok, datetime}
DateTime.from_unix(253_402_300_800) # {:error, :invalid_unix_time}

DateTime.from_unix!(0) # ~U[1970-01-01 00:00:00Z]
DateTime.from_unix!(1_432_560_368_868_569, :microsecond) # ~U[2015-05-25 13:26:08.868569Z]

DateTime.now("Etc/UTC") # {:ok, ~U[2023-08-31 02:41:08.904461Z]}
DateTime.now("bad timezone") # {:error, :time_zone_not_found}

IO.inspect(datetime)

System.stop()
