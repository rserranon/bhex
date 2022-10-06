# Reverse a byte hex string: bhex 

## How to compile in Mac and istall executable
`clang++ -std=c++17 -fdiagnostics-color=always -g bhex.cpp -o bhex`

then copy the executable to /usr/local/bin

`sudo cp bhex /usr/local/bin`

## How to use it

Usage:

`bhex 29c3e04a81416e9ac2ac002282b35585a69b7051a2ce84b1dcf36866a18c91f0`

Result:

`original:29c3e04a81416e9ac2ac002282b35585a69b7051a2ce84b1dcf36866a18c91f0`

`bhex    :f0918ca16668f3dcb184cea251709ba68555b382220acc29a6e41814ae0c329`
