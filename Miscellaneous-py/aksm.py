% Given specifications
fp = 1256.63; % passband edge frequency in rad/sec
fs = 2513.27; % stopband edge frequency in rad/sec
dp = 3; % passband ripple in dB
ds = 15; % stopband ripple in dB
fsamp = 2000; % sampling frequency in Hz
n = 3; % order of the filter

% Calculate the normalized edge frequencies
wp = 2*pi*fp/fsamp;
ws = 2*pi*fs/fsamp;

% Calculate the minimum order required using the buttord function
[n,wn] = buttord(wp,ws,dp,ds,'s');

% Design the filter using the butter function
[b,a] = butter(n,wn,'s');

% Plot the frequency response of the filter
[h,w] = freqs(b,a,logspace(-1,4,10000));
figure;
semilogx(w/(2*pi),20*log10(abs(h)));
grid on;
axis([0.1 10000 -20 5]);
xlabel('Frequency (Hz)');
ylabel('Magnitude (dB)');
title('Butterworth Lowpass Filter');