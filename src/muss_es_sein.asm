section .data
    msg db 'The Navidson Record actually contains two films.', 0

section .text
    global _start

_start:
    ; Loop 3 times
    mov ecx, 3

repeat_message:
    ; Print the message
    mov eax, 4         ; System call number for sys_write
    mov ebx, 1         ; File descriptor 1 is stdout
    mov ecx, msg       ; Pointer to the message
    mov edx, 45        ; Length of the message
    int 0x80           ; Interrupt to invoke system call

    ; Print a newline character
    mov eax, 4         ; System call number for sys_write
    mov ebx, 1         ; File descriptor 1 is stdout
    mov ecx, newline   ; Pointer to the newline character
    mov edx, 1         ; Length of the newline character
    int 0x80           ; Interrupt to invoke system call

    ; Decrement the loop counter
    loop repeat_message

    ; Exit the program
    mov eax, 1         ; System call number for sys_exit
    xor ebx, ebx       ; Exit code 0
    int 0x80           ; Interrupt to invoke system call

section .data
    newline db 10      ; ASCII code for newline
