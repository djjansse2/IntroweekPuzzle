import socket
import json

with open('config.json') as f:
    configuration = json.load(f)

addr = configuration["address"]
port = int(configuration["port"])

with socket.socket(socket.AF_INET, socket.SOCK_STREAM) as s:
    s.connect((addr, port))
    while True:
        data = s.recv(1024)
        print('Received', repr(data))