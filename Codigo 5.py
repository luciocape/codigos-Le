persona = {
    "nombre":"",
    "email":"",
    "edad":"",
    "peso":"",
    "altura":""
    
}

lista = ["nombre","email","edad","peso","altura"]


i = 0
x = 0
for p in persona:
    x=0
    while x == 0:
        persona[p] = input(f"Ingrese {lista[i]} de la persona\n")
        if i == 1:
            if "@" in persona[p] and "." in persona[p]:
                x=1
            else:
                print("el email no contiene @ o ., ingreselo devuelta")
                x=0
        else: x=1
    if i > 1:
        if i == 2:
            persona[p] = int(persona[p])
        else:
            persona[p] = float(persona[p])
    i+=1
    
IMC= persona["peso"]/(persona["altura"]**2)

i = 0
for r in persona:
    print(f"{lista[i]} de la persona:{persona[r]}")
    i+=1
    
print(f"IMC de la persona es {IMC}")