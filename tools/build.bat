@echo off
setlocal enabledelayedexpansion

PowerShell.exe -NoProfile -ExecutionPolicy Bypass -Command "Start-Process PowerShell -ArgumentList '-NoProfile -ExecutionPolicy Bypass -Command ""Set-ExecutionPolicy RemoteSigned""' -Verb RunAs -Wait"
PowerShell.exe -NoProfile -ExecutionPolicy Bypass -File ".\make.ps1" 
pause
