import socket
import sys
import json

with open('config.json') as f:
    configuration = json.load(f)

addr = configuration["address"]
port = int(configuration["port"])

print(f"started messagebus on {addr}:{port}")

sock = socket.socket(socket.AF_INET, socket.SOCK_STREAM)
sock.bind((addr, port))
sock.listen(2)

try:
    while True:
        conn, addr = sock.accept()
        print(f'{addr} is connected')
        while 1:
            data = conn.recv(2048)
            if not data: break
            parsed = json.loads(data)
            new_data = parsed["test"]
            print(f"ontvangen data: {new_data}")
            conn.send(data)
except KeyboardInterrupt:
    print("Received keyboard interupt!")
    conn.shutdown(1)
    conn.close()