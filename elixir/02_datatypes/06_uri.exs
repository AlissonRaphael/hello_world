uri = URI.parse("http://example.com/product?size=40&page=2")

URI.decode("https%3A%2F%2Felixir-lang.org") # "https://elixir-lang.org"
URI.decode_query("size=40&page=2") # %{"page" => "2", "size" => "40"}

IO.inspect(uri2)

System.stop()
