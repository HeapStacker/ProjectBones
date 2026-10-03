# ==========================================
# 1. BAZNA FAZA: C++, Clang, Git, Conan i Xmake
# ==========================================
FROM ubuntu:22.04 AS base

ENV DEBIAN_FRONTEND=noninteractive
RUN apt-get update && apt-get install -y \
    curl \
    unzip \
    git \
    build-essential \
    clang \
    lld \
    python3 \
    python3-pip \
    && rm -rf /var/lib/apt/lists/*

# Instalacija Conana i Xmake-a
RUN pip3 install conan && \
    curl -fsSL https://xmake.io/shget.text | bash

ENV PATH="/root/.local/bin:${PATH}"
WORKDIR /workspace

# ==========================================
# 2. WINDOWS FAZA: Dodaje MinGW i Wine
# ==========================================
FROM base AS env-windows
RUN apt-get update && apt-get install -y mingw-w64 wine && rm -rf /var/lib/apt/lists/*

# ==========================================
# 3. ANDROID FAZA: Dodaje Android NDK
# ==========================================
FROM base AS env-android
ENV ANDROID_HOME=/opt/android-sdk
ENV ANDROID_NDK_HOME=/opt/android-sdk/ndk/25.2.9519653

RUN apt-get update && apt-get install -y openjdk-17-jdk usbutils && rm -rf /var/lib/apt/lists/*

RUN mkdir -p ${ANDROID_HOME}/cmdline-tools && \
    curl -o /tmp/cmdline-tools.zip https://dl.google.com/android/repository/commandlinetools-linux-11076708_latest.zip && \
    unzip -q /tmp/cmdline-tools.zip -d ${ANDROID_HOME}/cmdline-tools && \
    mv ${ANDROID_HOME}/cmdline-tools/cmdline-tools ${ANDROID_HOME}/cmdline-tools/latest && \
    rm /tmp/cmdline-tools.zip

ENV PATH="${ANDROID_HOME}/cmdline-tools/latest/bin:${ANDROID_HOME}/platform-tools:${PATH}"

RUN yes | sdkmanager --licenses && \
    sdkmanager "ndk;25.2.9519653" "build-tools;34.0.0" "platforms;android-33"

# ==========================================
# 4. ALL-IN-ONE FAZA: Sadrži sve živo zajedno
# ==========================================
FROM env-android AS env-all
RUN apt-get update && apt-get install -y mingw-w64 wine && rm -rf /var/lib/apt/lists/*