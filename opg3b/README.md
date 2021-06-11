# Actie 1
valid
inspect

# Actie 2
valid = 00000a80
return waarde = 0x0
return waarde = 0x1

# 2a 
inspect
return waarde = 0x0
return waarde = 0x1

# 2b
valid(char *param_1){
  size_t sVar1;
  int local_24;
  long local_20;
  
  local_20 = 0;
  local_24 = 0;
  while (sVar1 = strlen(param_1), (ulong)(long)local_24 < sVar1) {
    local_20 = local_20 + param_1[local_24];
    local_24 = local_24 + 1;
  }
  if ((local_20 == 0x716) && (sVar1 = strlen(param_1), sVar1 == 0x10)) {
    step = 7;
    return 1;
  }
  return 0;
}

# 2c
LAB_00100afd                                    
XREF[2]:     00100ad9(j), 00100aeb(j)  
00100afd b8 00 00        
MOV        EAX,0x0
00 00

# Actie3
inspect = 00100b09

# 3b
inspect(char *param_1){
  size_t sVar1;
  bool bVar2;
  int local_24;
  long local_20;
  
  local_20 = 1;
  local_24 = 0;
  while (sVar1 = strlen(param_1), (ulong)(long)local_24 < sVar1) {
    local_20 = local_20 + param_1[local_24];
    local_24 = local_24 + 2;
  }
  bVar2 = local_20 % 0x47 != 0x43;
  if (!bVar2) {
    start = 0xc;
  }
  return bVar2;
}

# 3c
De echte naam is niet terug te zien in de debugger.

# 4 Actie
Geef je wachtwoord : 
naam : robin
pwd : lol
  naam / wachtwoord lijkt in orde.

 Kudos !!
Een mooi resultaat ! Knap werk ! Goed gedaan ! 

Nu kun je dit lezen:
o eu nrsbrEei!ewgdleei.  sew nz a h ewkteot rem;dag weea eeh gdsito azgjadkd-mdla  le ednn:oneelpuuu prioatlvietd g!rauekjZsdite lnk
ezljuj  -Hzn.tef tIesatcsd o eweeah trvpe kevkvpc.  azlwet i dra po  vrtiett ae  e zasoffnoectcceaelueen twitoi crpseeai tw o oinrj
 etaefte Dibcai eorhthza efo odta  aasannnl etDeete omli en eaf aankeenere   b e leysnbglaitiae  p or!uatk k

# 4.1
Ik heb het wachtwoord niet kunnen vinden na 12 uur besteede tijd.
Ik vraag me af of het programma wel juist werkt.

# 4.2
Ik heb de hex waardes veranderd om zo tot het bovenstaande resultaat te komen.
Mogelijk gebeurt er wat in de compare routine?