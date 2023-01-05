uri = URI.parse("http://example.com/product?size=40&page=2")

URI.decode("https%3A%2F%2Felixir-lang.org") # "https://elixir-lang.org"
URI.decode_query("size=40&page=2") # %{"page" => "2", "size" => "40"}

URI.encode("ftp://s-ite.tld/?value=put it+й") # "ftp://s-ite.tld/?value=put%20it+%D0%B9"
URI.encode_query(%{"page" => "2", "size" => "40"}) # "size=40&page=2"

uri = URI.char_reserved?("asdf")
IO.inspect(uri)

System.stop()
