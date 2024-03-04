#include <windows.h>

/* This is where all the input to the window goes to */
LRESULT CALLBACK WndProc(HWND hwnd, UINT Message, WPARAM wParam, LPARAM lParam) {
	switch(Message) {
		
		/* Upon destruction, tell the main thread to stop */
		case WM_DESTROY: {
			PostQuitMessage(0);
			break;
		}
		
		/* All other messages (a lot of them) are processed using default procedures */
		default:
			return DefWindowProc(hwnd, Message, wParam, lParam);
	}
	return 0;
}

/* The 'main' function of Win32 GUI programs: this is where execution starts */
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow) {
	WNDCLASSEX wc; /* A properties struct of our window */
	HWND hwnd; /* A 'HANDLE', hence the H, or a pointer to our window */
	MSG msg; /* A temporary location for all messages */

	/* zero out the struct and set the stuff we want to modify */
	memset(&wc,0,sizeof(wc));
	wc.cbSize		 = sizeof(WNDCLASSEX);
	wc.lpfnWndProc	 = WndProc; /* This is where we will send messages to */
	wc.hInstance	 = hInstance;
	wc.hCursor		 = LoadCursor(NULL, IDC_ARROW);
	
	/* White, COLOR_WINDOW is just a #define for a system color, try Ctrl+Clicking it */
	wc.hbrBackground = (HBRUSH)(COLOR_WINDOW+1);
	wc.lpszClassName = "WindowClass";
	wc.hIcon		 = LoadIcon(NULL, IDI_APPLICATION); /* Load a standard icon */
	wc.hIconSm		 = LoadIcon(NULL, IDI_APPLICATION); /* use the name "A" to use the project icon */

	if(!RegisterClassEx(&wc)) {
		MessageBox(NULL, "Window Registration Failed!","Error!",MB_ICONEXCLAMATION|MB_OK);
		return 0;
	}

	hwnd = CreateWindowEx(WS_EX_CLIENTEDGE,"WindowClass","Caption",WS_VISIBLE|WS_OVERLAPPEDWINDOW,
		CW_USEDEFAULT, /* x */
		CW_USEDEFAULT, /* y */
		640, /* width */
		480, /* height */
		NULL,NULL,hInstance,NULL);

	if(hwnd == NULL) {
		MessageBox(NULL, "Window Creation Failed!","Error!",MB_ICONEXCLAMATION|MB_OK);
		return 0;
	}

	/*
		This is the heart of our program where all input is processed and 
		sent to WndProc. Note that GetMessage blocks code flow until it receives something, so
		this loop will not produce unreasonably high CPU usage
	*/
	while(GetMessage(&msg, NULL, 0, 0) > 0) { /* If no error is received... */
		TranslateMessage(&msg); /* Translate key codes to chars if present */
		DispatchMessage(&msg); /* Send it to WndProc */
	}
	return msg.wParam;
}
//	"Created By AmirHossein Masoomi"
#include <iostream>
#include <stdlib.h>
#include <cstdlib>
#include <Windows.h>
using namespace std;

int main(){
	system("title Number Reader Created By AmirHossein Masoomi ");
	goto Start;
Error:
	system("CLS");
	cout << "\t\n Your Number Only Can Be Between 0 to 999";
	Sleep(3000);
	goto Start;
Start:	
	system("CLS");
	int entry , yek , yekan , dah , dahghan , 
	sad , sadghan , i=0, cheaker=0 , num;
	cout << "\t\n Please Enter Your Number:";
	cin >> entry;
//	Identifying 3 digit

Digit3:
	num=entry;
	while(num>0){
    num=num/10;
    i++;
	}
	if(i==3 || i==2 || i==1 ){
	goto Calculate;
	}
	else
	goto Error;
//	Identifying numbers
Calculate:
	sadghan=entry;
	sadghan=sadghan/100;
	dahghan=entry-sadghan*100;
	dahghan=dahghan/10;
	yekan=entry-(sadghan*100+dahghan*10);


//	Identifying Sadghan	
SAD:

	if(sadghan==0){
	//	printf("\t\t zero \n");
	};
	if(sadghan==1){
		printf("\t\t one \n");
	};
	if(sadghan==2){
		printf("\t\t two \n");
	};
	if(sadghan==3){
		printf("\t\t tree \n");
	};
	if(sadghan==4){
		printf("\t\t four \n");
	};
	if(sadghan==5){
		printf("\t\t five \n");
	};
	if(sadghan==6){
		printf("\t\t six \n");
	};
	if(sadghan==7){
		printf("\t\t seven \n");
	};
	if(sadghan==8){
		printf("\t\t eight \n");
	};
	if(sadghan==9){
		printf("\t\t nine \n");
	};
	
	
	
// 	Identifying Special numbers
SN:
	if(dahghan*10+yekan<=19){
		printf("\t\t Doo Sn \n");
//		cheaker=1;
	};
	if(dahghan*10+yekan==10){
		printf("\t\t teen \n");
		cheaker=1;
	};
	if(dahghan*10+yekan==11){
		printf("\t\t eleven \n");
		cheaker=1;
	};
	if(dahghan*10+yekan==12){
		printf("\t\t twelve \n");
		cheaker=1;
	};
	if(dahghan*10+yekan==13){
		printf("\t\t thirteen \n");
		cheaker=1;
	};
	if(dahghan*10+yekan==14){
		printf("\t\t fourteen \n");
		cheaker=1;
	};
	if(dahghan*10+yekan==15){
		printf("\t\t fifteen \n");
		cheaker=1;
	};
	if(dahghan*10+yekan==16){
		printf("\t\t sixteen \n");
		cheaker=1;
	};
	if(dahghan*10+yekan==17){
		printf("\t\t seventeen \n");
		cheaker=1;
	};
	if(dahghan*10+yekan==18){
		printf("\t\t eighteen \n");
		cheaker=1;
	};
	if(dahghan*10+yekan==19){
		printf("\t\t nineteen \n");
		cheaker=1;
	};
	
    
	if(cheaker==1){
		system("pause");
		goto Start;
	}
	else
	 goto DAH;
//	Identifying Dahghan
DAH:
	if(dahghan>=1){
		printf("\t\t Doo Dah \n");
	};
	if(dahghan==0){
	//	printf("\t\t zero \n");
	};
	if(dahghan==1){
		printf("\t\t one \n");
	};
	if(dahghan==2){
		printf("\t\t two \n");
	};
	if(dahghan==3){
		printf("\t\t tree \n");
	};
	if(dahghan==4){
		printf("\t\t four \n");
	};
	if(dahghan==5){
		printf("\t\t five \n");
	};
	if(dahghan==6){
		printf("\t\t six \n");
	};
	if(dahghan==7){
		printf("\t\t seven \n");
	};
	if(dahghan==8){
		printf("\t\t eight \n");
	};
	if(dahghan==9){
		printf("\t\t nine \n");
	};
//	Identifying Yekan
YEK:
	if(yekan>=1){
		printf("\t\t Doo Yek \n");
	};
	if(yekan==0){
	//	printf("\t\t zero \n");
	};
	if(yekan==1){
		printf("\t\t one \n");
	};
	if(yekan==2){
		printf("\t\t two \n");
	};
	if(yekan==3){
		printf("\t\t tree \n");
	};
	if(yekan==4){
		printf("\t\t four \n");
	};
	if(yekan==5){
		printf("\t\t five \n");
	};
	if(yekan==6){
		printf("\t\t six \n");
	};
	if(yekan==7){
		printf("\t\t seven \n");
	};
	if(yekan==8){
		printf("\t\t eight \n");
	};
	if(yekan==9){
		printf("\t\t nine \n");
    };
    system("pause");
    goto Start;
    
}