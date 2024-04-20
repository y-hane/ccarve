@echo off

cl.exe /utf-8 /W4 /std:c11 /Fe"test.exe" test_ccarve.c ccarve_inner.c
del *.obj
test.exe
