package main

import "fmt"

  var c float64
  
func c_to_f()  {
  var f float64 = 9/5 * c + 32
  fmt.Println(f)
}
func c_to_k()  {
  var k float64 = 9/5 * c + 491.67
  fmt.Println(k)
}
func c_to_r()  {
 var r float64 = 4/5 * c 
 fmt.Println(r)
}
func main()  {
  fmt.Println("Masukkan nilai celcius: ")
  fmt.Scan(&c)
  var temperatures string 
  fmt.Println("Pilih temperatur: (Fareinheit, Kelvin, Reamur)")
  fmt.Scan(&temperatures)
  
switch temperatures {
  case "f":
    fmt.Println("Nilai Fareinheit adalah: ")
    c_to_f()
  case "k":
    fmt.Println("Nilai Kelvin adalah: ")
    c_to_k()
  case "r":
    fmt.Println("Nilai Reamur adalah: ")
    c_to_r()
  default:
    fmt.Println("Masukkan temperatur yang benar.")
  }
}

