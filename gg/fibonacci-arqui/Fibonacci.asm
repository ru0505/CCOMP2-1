## Fibonacci.asm

# SECCION DE INSTRUCCIONES (.text)
.text              #inicio de instrucciones
.globl __start    # punto de inicio del codigo principal 

__start:     #empieza el cod
la $a0, hola      #llamar un nombre de un tipo funcion
li $v0, 4
syscall            
la $a0, Fiboprt
li $v0, 4          #$= guarada direcion de memoria 
syscall            #li = una speudo instruccion  guarada numero y el valor
li $v0, 5          # la=guarada ireccion de memoria
syscall
addi $t8,$v0,0         # valor de teclado en $t8
li $t0,0               # valor $v0
li $t1,1

la $a0,Fibost1        #llama la serie fivonacci
li $v0,4
syscall               # "La serie Fibonacci de "
addi $a0,$t8,0        # 
li $v0,1
syscall               # n
la $a0,Fibost2
li $v0,4 
syscall               # " terminos es: "
li $a0,1
li $v0,1
syscall               # 1, ...
la $a0,coma
li $v0,4
syscall
      li   $t4,2
      beq  $t8,$0,fin       # si son iguales 
      bltz $t8,fin          # menor que
loop: add  $t2,$t0,$t1  # fibonacci  # sumar = add
      addi $a0,$t2,0    #suma de tiende a sumar t2 con el numero colocado por defecto que en este caso es 0
      li $v0,1          #addi= adicion
      syscall           #llamado de memoria
      beq $t4,$t8,fin  #contador #si son iguales
      la $a0,coma
      li $v0,4      #mandi para imprimir 
      syscall
      addi $t4,$t4,1
      addi $t0,$t1,0   #contador de secuencia
      addi $t1,$t2,0
      
      j loop  #salto
      #condiciones que rompa el bucle

fin:   
      la $a0,endl
      li $v0,4
      syscall
      li $v0,10
      syscall #aviso al sistema para salir del programa

# SECCION DE VARIABLES EN MEMORIA (.data)
.data         #defnicion de variables de memoria 
Fiboprt: .asciiz "Ingresar n:"
Fibost1: .asciiz "La serie Fibonacci de "
Fibost2: .asciiz " terminos es: "
coma:    .asciiz ", "
endl:    .asciiz "\n"
hola:    .asciiz "hola a toddossss  "
 
 
 # .asciiz indica que acba la cadena 
 
 # lui guarada el registro
 #t1 desensanbla los valores 
