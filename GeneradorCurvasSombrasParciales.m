function [ArrayTension,ArrayCorriente,ArrayPotencia] = GeneradorCurvasSombrasParciales (handles,Temperaturas,Radiacion,flagRadiacion,flagTemperatura)

ArrayTension = [];
ArrayPotencia = [];
ArrayCorriente = [];
cantidadIteraciones = handles.cantidadTransiciones;
if flagRadiacion == 0
    disp('No se registran datos de Radiación guardados. La simulación se llevará a cabo con los datos cargados por defecto')
end
if flagTemperatura == 0
    disp('No se registran datos de Temperatura guardados. La simulación se llevará a cabo con los datos cargados por defecto')
end
    
for i=1:cantidadIteraciones
assignin('base','a11',Radiacion.a11Transicion(1,i));
assignin('base','a12',Radiacion.a12Transicion(1,i));
assignin('base','a13',Radiacion.a13Transicion(1,i));
assignin('base','a14',Radiacion.a14Transicion(1,i));
assignin('base','a15',Radiacion.a15Transicion(1,i));
assignin('base','a16',Radiacion.a16Transicion(1,i));

assignin('base','a21',Radiacion.a21Transicion(1,i));
assignin('base','a22',Radiacion.a22Transicion(1,i));
assignin('base','a23',Radiacion.a23Transicion(1,i));
assignin('base','a24',Radiacion.a24Transicion(1,i));
assignin('base','a25',Radiacion.a25Transicion(1,i));
assignin('base','a26',Radiacion.a26Transicion(1,i));

assignin('base','a31',Radiacion.a31Transicion(1,i));
assignin('base','a32',Radiacion.a32Transicion(1,i));
assignin('base','a33',Radiacion.a33Transicion(1,i));
assignin('base','a34',Radiacion.a34Transicion(1,i));
assignin('base','a35',Radiacion.a35Transicion(1,i));
assignin('base','a36',Radiacion.a36Transicion(1,i));

assignin('base','a41',Radiacion.a41Transicion(1,i));
assignin('base','a42',Radiacion.a42Transicion(1,i));
assignin('base','a43',Radiacion.a43Transicion(1,i));
assignin('base','a44',Radiacion.a44Transicion(1,i));
assignin('base','a45',Radiacion.a45Transicion(1,i));
assignin('base','a46',Radiacion.a46Transicion(1,i));

assignin('base','a51',Radiacion.a51Transicion(1,i));
assignin('base','a52',Radiacion.a52Transicion(1,i));
assignin('base','a53',Radiacion.a53Transicion(1,i));
assignin('base','a54',Radiacion.a54Transicion(1,i));
assignin('base','a55',Radiacion.a55Transicion(1,i));
assignin('base','a56',Radiacion.a56Transicion(1,i));

assignin('base','a61',Radiacion.a61Transicion(1,i));
assignin('base','a62',Radiacion.a62Transicion(1,i));
assignin('base','a63',Radiacion.a63Transicion(1,i));
assignin('base','a64',Radiacion.a64Transicion(1,i));
assignin('base','a65',Radiacion.a65Transicion(1,i));
assignin('base','a66',Radiacion.a66Transicion(1,i));

assignin('base','b11',Temperaturas.b11Transicion(1,i));
assignin('base','b12',Temperaturas.b12Transicion(1,i));
assignin('base','b13',Temperaturas.b13Transicion(1,i));
assignin('base','b14',Temperaturas.b14Transicion(1,i));
assignin('base','b15',Temperaturas.b15Transicion(1,i));
assignin('base','b16',Temperaturas.b16Transicion(1,i));

assignin('base','b21',Temperaturas.b21Transicion(1,i));
assignin('base','b22',Temperaturas.b22Transicion(1,i));
assignin('base','b23',Temperaturas.b23Transicion(1,i));
assignin('base','b24',Temperaturas.b24Transicion(1,i));
assignin('base','b25',Temperaturas.b25Transicion(1,i));
assignin('base','b26',Temperaturas.b26Transicion(1,i));

assignin('base','b31',Temperaturas.b31Transicion(1,i));
assignin('base','b32',Temperaturas.b32Transicion(1,i));
assignin('base','b33',Temperaturas.b33Transicion(1,i));
assignin('base','b34',Temperaturas.b34Transicion(1,i));
assignin('base','b35',Temperaturas.b35Transicion(1,i));
assignin('base','b36',Temperaturas.b36Transicion(1,i));

assignin('base','b41',Temperaturas.b41Transicion(1,i));
assignin('base','b42',Temperaturas.b42Transicion(1,i));
assignin('base','b43',Temperaturas.b43Transicion(1,i));
assignin('base','b44',Temperaturas.b44Transicion(1,i));
assignin('base','b45',Temperaturas.b45Transicion(1,i));
assignin('base','b46',Temperaturas.b46Transicion(1,i));

assignin('base','b51',Temperaturas.b51Transicion(1,i));
assignin('base','b52',Temperaturas.b52Transicion(1,i));
assignin('base','b53',Temperaturas.b53Transicion(1,i));
assignin('base','b54',Temperaturas.b54Transicion(1,i));
assignin('base','b55',Temperaturas.b55Transicion(1,i));
assignin('base','b56',Temperaturas.b56Transicion(1,i));

assignin('base','b61',Temperaturas.b61Transicion(1,i));
assignin('base','b62',Temperaturas.b62Transicion(1,i));
assignin('base','b63',Temperaturas.b63Transicion(1,i));
assignin('base','b64',Temperaturas.b64Transicion(1,i));
assignin('base','b65',Temperaturas.b65Transicion(1,i));
assignin('base','b66',Temperaturas.b66Transicion(1,i));

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
assignin('base','ArregloTension',ArrayTension);
assignin('base','ArregloCorriente',ArrayCorriente);
assignin('base','ArregloPotencia',ArrayPotencia);

figure(1)
plot(ArrayTension',ArrayPotencia')
plot(ArrayTension',ArregloPotencia')
grid on
title('Potencia vs Voc')
xlabel('Tensión de circuito abierto')
ylabel('Potencia')
grid on
figure(2)
plot(ArregloTension',ArregloCorriente')
grid on
title('Coriente vs Voc')
xlabel('Tensión de circuito abierto')
ylabel('Corriente')
grid on

end