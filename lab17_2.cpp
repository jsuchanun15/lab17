void myString(char *&str, int N){
	str = new char[N + 1];    
	for(int i = 0; i < N;i++){
        str[i] = 'A' + i;  
    }
    str[N] = '\0'; 
}
