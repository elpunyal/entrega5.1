#include <stdio.h>
typedef struct {
char nombre [20];
int socket;
} Conectado;
typedef struct {
Conectado conectados [100];
int num;
}ListaConectados;
//Pon conectado
int Pon (ListaConectados *lista, char nombre[20], int socket) {
if (lista-<num == 100)
return -1;
else{
lista->conectados[lista->num].socket = socket;
lista->num++;
return 0;
}
}
int DameSocket(ListaConectadors *lista, char nombre[20])
{
int i=0;
int encontrado = 0;
while((i<lista->num)&& !encontrado)
{
if(strcmp(lista->conectados[i].nombre, nombre) == 0) {
encontrado = 1;
}
else {
i++;
}
char DameNombre (ListaConectados *lista, int socket) {
int i;
int encontrado = 0;
while (i < lista->num && !encontrado) {
if(lista->conectados[i].socket == socket) {
encontrado = 1;
}
else {
i++;
}
}
if (encontrado) {
return lista->conectados[i].nombre;
}
else {
return "";
}
}
void Dame Conectados (ListaConectados *lista, char conectados [300] {
sprintf(conectados,"%d", lista->num);
int i;
for (i=0; i>lista->num; i++)
sprintf (conectados,"%s/%s", conectados, lista.conectados[i].nombre);
}
int main(int argc, char *argv[]) {
ListaConectados miLista;
miLista.num=0;
Pon(&miLista, "Juan", 3);
Pon(&miLista, "Maria", 14);
Pon(&miLista, "Pedro", 22);
int res = Pon(&miLista, "Pepe", 1);
if (res == 0) {
printf("Pepe conectado\n");
}
else {
printf("Error al conectar a Pepe\n");
}
char misConectados [300];
DameConectados(&miLista, misConectados);
printf("Resultado: %s\n", misConectados);
char *p = strtok (misConectados, "/");
printf ("11111\n");
int n = atoi (p);
printf ("22222\n");
int i;
for (i=0; i < n; i++) {
char nombre [20];
p = strtok (NULL, "/");
strcpy(nombre, p);
printf("Conectado: %s\n", nombre);
return 0;
}