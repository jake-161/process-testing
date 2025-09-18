FROM auterion/app-base:v2

COPY src .
WORKDIR /build
RUN cmake .. && make

CMD ./app-1
