section .data
	message db 'Hello, Holberton', 10  ; Declare a null-terminated string to store the message

section .text
	global _start

_start:
	; Call printf function to print the message
	mov eax, 4          ; Set the system call number for write()
	mov ebx, 1          ; Set the file descriptor for stdout
	mov ecx, message    ; Set the buffer address to the message string
	mov edx, 16         ; Set the buffer length to the message string length
	int 0x80            ; Call the kernel interrupt to perform the system call

	; Exit the program
	mov eax, 1          ; Set the system call number for exit()
	xor ebx, ebx        ; Set the exit status to 0
	int 0x80            ; Call the kernel interrupt to perform the system call

