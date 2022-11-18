# Clase

//Primer archivo 

// -Declaración de Variables-
var primerVariable = 1
var segundaVariable = 2
var terceraVariable = 3
var cuartaVariable = 4
var quintaVariable = 5

// -Declaración de Constantes-
let primerCte = 1
let segundaCte = 2
let terceraCte = 3
let cuartaCte = 4
let quintaCte = 5

let UnoA : String
UnoA = "Algo xd"
let UnoB : String
UnoB = "Otro algo xd"
let UnoC : String
UnoC = "Otro otro algo"

// -Impresion de variables y constantes-
let saludo = "Hola"; print("Saludo : \(saludo)")

//Declaración de variables de punto flotante
var floatUno : Float
floatUno = -3.141592
var floatDos : Float
floatDos = 2.9832
var floatTres : Float
floatTres = 0.35

// -Declaracion de una tupla-

let contacto = (5545316455, "Uriel")
//Esta es una tupla de tipo int & string

let (telefono,nombre) = contacto
print("el telefono es \(telefono)")
print("El usuario es \(nombre)")
//Descomponemos la tupla

//                           

//CADENAS

//Declaración de adenas vacías
var cadenaVacia = ""
var otraCadenaVacia = String()

print(cadenaVacia)
print(otraCadenaVacia)

//Mutabilidad de cadenas
var variableString = "Hola"
variableString += "¿cómo estás?"
print(variableString)

/*
let constanteString = "Wolaaaa"
constanteString += " jeje"
print(constanteString)

//Error, ya que solo las variables pueden ser mutables
 */

// caracterizacion de cadenas

let string1 = "Hola "
let string2 = "Cómo estás?"
var saludo2 = string1 + string2
print(saludo)

//Interpolacion de cadenas

/*
 Es una forma de construir un nuevo valor string a partir
 de una combinacion de constantes.
 */

let numero = 12
let operacion = "\(numero) veces 2.5 \(Double(numero)*2.5)"
print (operacion)

/* CONTANDO CARACTERES
 Para poder hacer un recuento de los caracteres de una cadena, se utiliza la propiedad count
 */

let frase = "Viva Apple, abajo Android"
print("La frase tiene \(frase.count) caracteres")


//Ejercicio mutabilidad
var suma : Int
suma = 5
suma += 10
print("El resultado es \(suma)")

//  ACCESO Y MODIFICACION DE CADENAS
 // 1. Indice

let saludo3 = "Buenas :)"
saludo3[saludo3.startIndex]
saludo3[saludo3.index(before : saludo3.endIndex)]
saludo3[saludo3.index(after: saludo3.startIndex)]

// 2. Insertar y quitar

var saludo4 = "Hola" //establesco una variable con la palabra Hola
saludo4.insert("!", at: saludo.endIndex) //Le agrego un ! al final de la palabra

saludo4.insert(contentsOf: ":)", at: saludo4.index(before:saludo4.endIndex)) //le agrego un :) antes del final de la cadena (!).
print(saludo4)

//     
