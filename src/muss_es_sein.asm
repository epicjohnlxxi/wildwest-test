section .data
    msg db 'The Navidson Record actually contains two films.', 0

section .text
    global _start

_start:
    mov ecx, 3

repeat_message:
    mov eax, 4         
    mov ebx, 1         
    mov ecx, msg       
    mov edx, 45        
    int 0x80           

    mov eax, 4         
    mov ebx, 1         
    mov ecx, newline   
    mov edx, 1         
    int 0x80           

    loop repeat_message

    mov eax, 1         
    xor ebx, ebx       
    int 0x80           

section .data
    newline db 10      
