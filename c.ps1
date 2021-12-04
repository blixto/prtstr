if (-not (Test-Path $PSScriptRoot/bin))
{
    New-Item -ItemType "directory" -Name "bin" -Path $PSScriptRoot
}

if (-not (Test-Path $PSScriptRoot/obj))
{
    New-Item -ItemType "directory" -Name "obj" -Path $PSScriptRoot
}

cl /Fe:bin\prtstr.exe /Fo:obj\prtstr.obj src\main.c
