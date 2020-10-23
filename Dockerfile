FROM ppc64le/ubuntu:xenial

ARG PLATFORM=ppc64le
RUN mount
RUN apt update