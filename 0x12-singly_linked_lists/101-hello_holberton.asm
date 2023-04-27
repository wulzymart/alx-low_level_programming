          global    main
          extern    printf
main:
	  mov   rdi, mssg
	  xor   rax, rax
	  call  printf
	  mov 	rax, 0
	  ret
mssg: db `Hello, Holberton\n`,0
ms2: db 'Hello world',0
