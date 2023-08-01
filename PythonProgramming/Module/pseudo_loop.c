#include <stdio.h>
int i;
void a() {printf("%d\n", i++);}
void b() {a(); a(); a(); a(); a();}
void c() {b(); b(); b(); b(); b();}
void d(){c(); c(); c(); c();}
int main() {i=1; d();}