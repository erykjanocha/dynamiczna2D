#include <stdio.h>
#include <malloc.h>
  
int main(void){
    // Deklaracja zmiennych
    int wier,kolumna;
    int **tab;
    int *kolumny;
    
    // Pobranie danych
    printf("Wiersze: ");
    scanf("%d", &wier);
   
   
    
    // Alokacja pamięci dla tablicy dwuwymiarowej
    tab=(int**)calloc(wier,wier*sizeof(int*));   // alokacja pamięci dla wierszy
    kolumny=(int*)calloc(wier,wier*sizeof(int));        // alokacja pamięci dla kolumn

    for(int i=0; i<wier; i++){
		 printf("\nKolumny[%d]: ",i);
    scanf("%d", &kolumna);
    tab[i]=(int*)calloc(kolumna,kolumna*sizeof(int));
    kolumny[i]=kolumna;
} 


 
    // Przypisanie wartości
    for(int i=0 ; i<wier ; i++)
        for(int j=0 ; j<kolumny[i] ; j++)
            tab[i][j] = 5;
 
 
    // Wypisywanie wartości
    for(int i=0 ; i<wier ; i++){
        for(int j=0 ; j<kolumny[i] ; j++){
            printf("%d",tab[i][j]);
        }
        printf("\n");
    }
 
    // Czyszczenie pamięci
    for(int i=0; i<wier; i++)
        free(tab[i]);
    free(tab);
    free(kolumny);
 
    return 0;
}
