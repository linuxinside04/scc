compilew:
	g++ main_detohex.cpp -o */out/output.exe
runw:
	start output.exe

compilel:
	g++ main_detohex.cpp -o */out/output.sh
runl:
	cd /out/
	chmod 777 u+x output.sh
	\. output.sh