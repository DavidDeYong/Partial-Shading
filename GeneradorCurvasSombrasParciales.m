function [ArrayTension,ArrayCorriente,ArrayPotencia] = GeneradorCurvasSombrasParciales ()

a11Transicion = [1000 1000 1000];
a12Transicion = [1000 1000 1000];
a13Transicion = [1000 1000 1000];
a14Transicion = [1000 1000 1000];
a15Transicion = [1000 1000 1000];
a16Transicion = [1000 1000 1000];
a21Transicion = [1000 1000 1000];
a22Transicion = [1000 1000 1000];
a23Transicion = [1000 1000 1000];
a24Transicion = [1000 1000 1000];
a25Transicion = [1000 1000 1000];
a26Transicion = [1000 1000 1000];
a33Transicion = [1000 1000 500];
a34Transicion = [1000 1000 500];
a35Transicion = [1000 1000 500];
a36Transicion = [1000 1000 500];
a45Transicion = [1000 500 500];
a46Transicion = [1000 500 500];
a31Transicion = [1000 500 500];
a32Transicion = [1000 500 500];
a43Transicion = [500 500 500];
a44Transicion = [500 500 500];
a55Transicion = [500 100 100];
a56Transicion = [500 100 100];
a66Transicion = [500 100 100];
a41Transicion = [100 100 100];
a42Transicion = [100 100 100];
a51Transicion = [100 100 100];
a52Transicion = [100 100 100];
a53Transicion = [100 100 100];
a54Transicion = [100 100 100];
a61Transicion = [100 100 100];
a62Transicion = [100 100 100];
a63Transicion = [100 100 100];
a64Transicion = [100 100 100];
a65Transicion = [100 100 100];
ArrayTension = [];
ArrayPotencia = [];
ArrayCorriente = [];

for i=1:length(a11Transicion)
assignin('base','a11',a11Transicion(1,i));
assignin('base','a12',a12Transicion(1,i));
assignin('base','a13',a13Transicion(1,i));
assignin('base','a14',a14Transicion(1,i));
assignin('base','a15',a15Transicion(1,i));
assignin('base','a16',a16Transicion(1,i));

assignin('base','a21',a21Transicion(1,i));
assignin('base','a22',a22Transicion(1,i));
assignin('base','a23',a23Transicion(1,i));
assignin('base','a24',a24Transicion(1,i));
assignin('base','a25',a25Transicion(1,i));
assignin('base','a26',a26Transicion(1,i));

assignin('base','a31',a31Transicion(1,i));
assignin('base','a32',a32Transicion(1,i));
assignin('base','a33',a33Transicion(1,i));
assignin('base','a34',a34Transicion(1,i));
assignin('base','a35',a35Transicion(1,i));
assignin('base','a36',a36Transicion(1,i));

assignin('base','a41',a41Transicion(1,i));
assignin('base','a42',a42Transicion(1,i));
assignin('base','a43',a43Transicion(1,i));
assignin('base','a44',a44Transicion(1,i));
assignin('base','a45',a45Transicion(1,i));
assignin('base','a46',a46Transicion(1,i));

assignin('base','a51',a51Transicion(1,i));
assignin('base','a52',a52Transicion(1,i));
assignin('base','a53',a53Transicion(1,i));
assignin('base','a54',a54Transicion(1,i));
assignin('base','a55',a55Transicion(1,i));
assignin('base','a56',a56Transicion(1,i));

assignin('base','a61',a61Transicion(1,i));
assignin('base','a62',a62Transicion(1,i));
assignin('base','a63',a63Transicion(1,i));
assignin('base','a64',a64Transicion(1,i));
assignin('base','a65',a65Transicion(1,i));
assignin('base','a66',a66Transicion(1,i));

sim ArregloSeisPorSeis.slx
Tension_Panel = Tension_Panel';
Potencia_Panel = Potencia_Panel';
Corriente_Panel = Corriente_Panel';
ArrayTension(i,:) = Tension_Panel;
ArrayPotencia(i,:) = Potencia_Panel;
ArrayCorriente(i,:) = Corriente_Panel;
% figure(1)
% plot(Tension_Panel(im,Potencia_Panel)
% hold on
% figure(2)
% plot(Tension_Panel,Corriente_Panel)
hold on
end



end