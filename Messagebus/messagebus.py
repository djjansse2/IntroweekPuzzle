import socket
import sys
import json

with open('config.json') as f:
    configuration = json.load(f)

addr = configuration["address"]
port = configuration["port"]


sock = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
sock.bind(addr, port)
sock.listen(1)

conn, addr = sock.accept()

print(f'{addr} is connected')
while 1:
    data = conn.recv(BUFFER_SIZE)
    if not data: break
    print(f'received data: {data}')
    conn.send(data)
conn.close()