import java.util.Scanner

fun main(args: Array<String>) = with(Scanner(System.`in`)) {
    val a = next()
    val b = next()
 
    print(a.replace('6', '5').toInt() + b.replace('6', '5').toInt())
    print(' ')
    print(a.replace('5', '6').toInt() + b.replace('5', '6').toInt())
}