arr=[]
n= int(input("Ingresa el numero de elementos \n"))
i=0 
for i in range(int(n)):
    x=int(input(f'ingresa el elemento nro {i+1} \n'))
    arr.append(x)

for i in range(n):
    # Últimos i elementos ya están en su lugar correcto
    for j in range(0, n-i-1):
        # Intercambia si el elemento encontrado es mayor que el siguiente elemento
        if arr[j] > arr[j+1]:
            arr[j], arr[j+1] = arr[j+1], arr[j]

for item in arr:
    print(item)
