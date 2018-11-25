import socket

s = socket.socket(socket.AF_INET6, socket.SOCK_STREAM)
s.connect(('::1', 1234))
