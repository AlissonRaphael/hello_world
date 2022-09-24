enum PaymentTypes {
  Debit,
  Cash,
  Credit
}

class Payment {
  private debit: number = 0.1
  private cash: number = 0.15
  private credit: number = 0

  constructor (public produt: string, public price: number) {}

  private applyDiscount (value: number, discount: number): number {
    return -value*discount
  }

  calculate (paymentType: PaymentTypes): void {
    if (paymentType === PaymentTypes.Debit)
      console.log(`Total: R$ ${this.price+this.applyDiscount(this.price, this.debit)}`)

    if (paymentType === PaymentTypes.Cash)
      console.log(`Total: R$ ${this.price+this.applyDiscount(this.price, this.cash)}`)

    if (paymentType === PaymentTypes.Credit)
      console.log(`Total: R$ ${this.price+this.applyDiscount(this.price, this.credit)}`)
  }
}

const product = new Payment('Smartphone', 1000)
// product.debit = 0.5      error TS2341: Property 'debit' is private and only accessible within class 'Payment'
product.calculate(PaymentTypes.Cash)
