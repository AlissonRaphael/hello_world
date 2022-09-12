function throwErrorOnCatch (message: string): never {
  throw new Error(message)
}

throwErrorOnCatch('App Fail!')
