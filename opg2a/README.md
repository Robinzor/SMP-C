# 2A
# Actie 1:
PUSH instructie: Verwijdert het element bovenop de stapel, waardoor de grootte effectief met één wordt verkleind.

POP instructie: Voegt een nieuw element in bovenaan de stapel, boven het huidige bovenste element. 
De inhoud van dit nieuwe element wordt geïnitialiseerd naar een kopie van val.

# Actie 2
# Vraag 2: Bepaal de inhoud van registers eax, ebx en r12d als alle instructies zijn uitgevoerd. Doe dit zoals is voorgedaan in voorbeeld02:
#       Opcode          EAX         EBX         R12D
3. mov ebx,0x0                      0           
4. mov r12d,0x1                                 1  
5. add r12d,r12d                                2
6. add ebx,0x4                      4
7. imul ebx,r12d                    8           2
8. mov eax,ebx           8          8           


