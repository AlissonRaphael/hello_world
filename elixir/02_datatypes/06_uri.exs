URI.parse("http://example.com/product?size=40&page=2") # %URI{ authority: "example.com", fragment: nil, host: "example.com", path: "/product", port: 80, query: "size=40&page=2", scheme: "http", userinfo: nil }

URI.decode("https%3A%2F%2Felixir-lang.org") # "https://elixir-lang.org"
URI.decode_query("size=40&page=2") # %{"page" => "2", "size" => "40"}

URI.encode("ftp://s-ite.tld/?value=put it+й") # "ftp://s-ite.tld/?value=put%20it+%D0%B9"
URI.encode_query(%{"page" => "2", "size" => "40"}) # "size=40&page=2"

URI.char_reserved?(?_) # false
URI.char_reserved?(?+) # true

URI.char_unreserved?(?+) # false
URI.char_unreserved?(?_) # true

URI.char_unescaped?(?{) # false
URI.char_unescaped?(?_) # true
URI.char_unescaped?(?+) # true

URI.to_string(URI.merge("http://google.com","/query")) # "http://google.com/query"

System.stop()
