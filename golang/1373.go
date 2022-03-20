package main

import (
	"bufio"
	"fmt"
	"os"
)

func main() {
	var s string
	reader := bufio.NewReader(os.Stdin)
	writer := bufio.NewWriter(os.Stdout)
	defer writer.Flush()
	fmt.Fscanln(reader, &s)
	if s == "0" {
		fmt.Fprintln(writer, "0")
		return
	}
	f := func(r byte) int {
		return int(r) - 48
	}
	var sum int
	for i := 0; i < len(s)%3; i++ {
		t := f(s[i])
		for j := 0; j < len(s)%3-i-1; j++ {
			t *= 2
		}
		sum += t
	}
	if sum != 0 {
		fmt.Fprint(writer, sum)
	}
	for i := len(s) % 3; i < len(s); i += 3 {
		fmt.Fprint(writer, f(s[i])*4+f(s[i+1])*2+f(s[i+2]))
	}
}
