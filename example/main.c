#include <stdio.h>

int main(int argc, char *argv[]) {
		char data;
		int students[9] = {0};
		int i, max, ans;
		max = 0;
		
		data = getchar();
				
		while(data != EOF){
			data = data - '0';
			if((data >= 0) && (data <= 9)){
				students[data] += 1;
				if(students[data] > max){	
					max = students[data];
					ans = data;
				}
			}
			data = getchar();
		}
		
		printf("%d\n", ans);
		
    return 0;
}
