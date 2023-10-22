

Notices:
  - add ``https://raw.githubusercontent.com/MHEtLive/arduino-boards-index/master/package_mhetlive_index.json`` under File -> Preferences menu in Arduino IDE;
  - install ``MH-ET LIVE Boards`` under boards manager (Cntrl+Shift+B);
  - check if latest version of usb drivers are installed or install it via ``apt install libusb-dev``;
  - compile ``$micronucleus`` from ``https://github.com/micronucleus/micronucleus`` sources;
  - compile project in Arduino IDE. As a result ``*.hex`` file will be created;
  - run ``$sudo /home/alexander/.arduino15/packages/mhetlive/tools/micronucleus/2.0a4/micronucleus /tmp/arduino/sketches/D59867732257D978AB18BC415D7C4B27/*.hex``;
  - press RESET button on the board or reconnect board to USB;
  - heed to disconnect wires from board in case then micronucleus tool is unable to detect board reconnecting to USB;
