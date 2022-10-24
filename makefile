make:
	lex sau_interpreter.l
	yacc -d sau_interpreter.y
	gcc lex.yy.c y.tab.c -w -lm -o output.out
