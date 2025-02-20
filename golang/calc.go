package main

import "fmt"
     

func main()  {
  var x,y float64
  var Operasi string 

  fmt.Println("Masukkan angka pertama: ")
  fmt.Scan(&x)
  
  fmt.Println("Masukkan angka kedua: ")
  fmt.Scan(&y)

  fmt.Println("Masukkan Operasi: +, -, *, / ")
  fmt.Scan(&Operasi)

  switch Operasi {
  case "+":
    fmt.Println("Hasilnya =", x + y)
  case "-":
    fmt.Println("Hasilnya = ", x - y)
  case "*":
    fmt.Println("Hasilnya = ", x * y)
  case "/":
    fmt.Println("Hasilnya = ", x / y)
    default :
  fmt.Println("Operasi salah")
  }
}  

