FROM gcc:latest

RUN mkdir -p /usr/src/home_assign

COPY main.cpp /usr/src/home_assign

WORKDIR /usr/src/home_assign

RUN g++ -o HomeAssign main.cpp

CMD [ "./HomeAssign" ]