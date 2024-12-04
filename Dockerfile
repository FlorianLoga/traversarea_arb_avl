FROM gcc:latest
WORKDIR /usr/src/myapp
COPY myapp.c .
RUN gcc -o myapp myapp.c -lstdc++
CMD ["./myapp"]
