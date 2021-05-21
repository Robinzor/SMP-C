
# 1
Vraag 1:    "Compileer dit programma en geef de executable de naam : opg1a".
Actie:      gcc opg1a.c -o opg1a
Output:     opg1a.exe

# 2.1
Vraag:      "Run het gemaakte programma opg1a".     ("Geef het gebruikte commando.)
Actie:      ./opg1a
Output:     hello world!

# 2.2
Vraag:      "Bepaal de return waarde van dit programma".    ("Geef het gebruikte commando.)
Actie:      echo $?
Output:     1

# 3.1
Vraag:      "Onderzoek met het file commando het type bestand van opg1a.c".
Actie:      Het commando "file opg1a.c" uitgevoerd op Linux.
Output:     opg1a.c: C source, ASCII text, with CRLF line terminators

# 3.2
Vraag:      "Onderzoek met het file commando het type bestand van opg1a".
Actie:      Het commando "file opg1a" uitgevoerd op Linux.
Output:     ELF 64-bit LSB pie executable, x86-64, version 1 (SYSV), dynamically linked, interpreter /lib64/ld-linux-x86-64.so.2, for GNU/Linux 3.2.0, BuildID[sha1]=dbcc6dcc4fa2080f0a637f02205c9ec2a7769ce2, not stripped

# 4
Vraag:      "Controleer / onderzoek of de onderstaande bewering juist is:
            het file commando gebruikt de extensie om te bepalen of opg1a.c een c-source code bestand is."
Actie:      Bij het hernoemen van de bestandsextensie naar .txt en geeft het unix command file "C Source" aan.
            Bij mijn test file "test.txt" met willekeurige characters geeft het unix command file "ASCII text" aan.
Conclusie:  Het commando file in unix kijkt naar de inhoud van een bestand.

# 5
Vraag:      "Analyseer het programma opg1a m.b.v. het strings commando.
            zijn de namen van de nieuwe de definities, glob. variabele msg en functie toon, terug
            te vinden in de strings output ? Geef een duidelijke verklaring waarom dit zo is"
Actie:      strings opg1a
Output:     De variabele "toon" is terug te vinden want dit is een methode. 
            Echter is dit niet het geval voor de global variable "msg", omdat dit niet meer te lezen is na het compilen.

# 6
Vraag:      "Voer het volgende commando uit.
Comment:    (Dit commando verwijdert alle symbols van het programma opg1a en plaats het resultaat in output)
Actie:      strip -s -o opg1ab opg1a
Output 1: (file opg1ab) ELF 64-bit LSB pie executable, x86-64, version 1 (SYSV), dynamically linked, interpreter /lib64/ld-linux-x86-64.so.2, for GNU/Linux 3.2.0, BuildID[sha1]=dbcc6dcc4fa2080f0a637f02205c9ec2a7769ce2, stripped


# 6b
Vraag:      "Analyseer het programma opg1a m.b.v. het strings commando.
            zijn de namen van de nieuwe de definities, glob. variabele msg en functie toon, terug
            te vinden in de strings output ? Geef een duidelijke verklaring waarom dit zo is"
Actie:      strings opg1ab
Output:     Bijde variable zijn niet meer terug te vinden na de strip.

# 6c
Vraag:      "Wat geeft het file opg1ac commando als output?"
Actie:      strip -s -K main -o opg1ac opg1a
Actie:      file opg1ac
Output:     ELF 64-bit LSB pie executable, x86-64, version 1 (SYSV), dynamically linked, interpreter /lib64/ld-linux-x86-64.so.2, for GNU/Linux 3.2.0, BuildID[sha1]        =dbcc6dcc4fa2080f0a637f02205c9ec2a7769ce2, not stripped

# 6d
Conclusie:  Nee, want je weet niet welke parameters zijn meegegeven aan het commando.

# 7 
Vraag:      "Wat is 'puts' (een variabele, functie, of ?? ) en waar is het gedefinieerd?
Conclusie:  De C-bibliotheekfunctie int puts (const char * str) schrijft een string naar stdout tot maar zonder het null-teken. Een newline-teken wordt aan de uitvoer toegevoegd.

# 7b
Vraag:      "Wat is 'puts@@GLIBC_2.2.5' (een variabele, functie, of ?? ) en waar is het gedefinieerd?
Conclusie:  Puts is ook aanwezig in de "GNU C Library (glibc)". Dit staat gedefineerd in de debug informatie die met strip is verwijderd.

# 8
Vraag:      "Onderzoek beide programma's opg1a en opg1ab met readelf -h"  (Dit geeft de header informatie)
Actie:      "is er een verschil in aantal program headers, aantal section headers en het entry point
            tussen het originele programma en de ge'strip'de versie ?"

executable:             
opga1   (non-stripped)          opg1ab (stripped)   
program headers =   56 (bytes)  program headers =  56 (bytes)
section headers =   30          section headers =  28
entry point =       0x1050      entry point =   0x1050











