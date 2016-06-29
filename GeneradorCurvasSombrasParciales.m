function [ArrayTension,ArrayCorriente,ArrayPotencia] = GeneradorCurvasSombrasParciales (handles)
a111 = handles.radiacionA11Tiempo1;
a121 = handles.radiacionA12Tiempo1;
a131 = handles.radiacionA13Tiempo1;
a141 = handles.radiacionA14Tiempo1;
a151 = handles.radiacionA15Tiempo1;
a161 = handles.radiacionA16Tiempo1;
a211 = handles.radiacionA21Tiempo1;
a221 = handles.radiacionA22Tiempo1;
a231 = handles.radiacionA23Tiempo1;
a241 = handles.radiacionA24Tiempo1;
a251 = handles.radiacionA25Tiempo1;
a261 = handles.radiacionA26Tiempo1;
a311 = handles.radiacionA31Tiempo1;
a321 = handles.radiacionA32Tiempo1;
a331 = handles.radiacionA33Tiempo1;
a341 = handles.radiacionA34Tiempo1;
a351 = handles.radiacionA35Tiempo1;
a361 = handles.radiacionA36Tiempo1;
a411 = handles.radiacionA41Tiempo1;
a421 = handles.radiacionA42Tiempo1;
a431 = handles.radiacionA43Tiempo1;
a441 = handles.radiacionA44Tiempo1;
a451 = handles.radiacionA45Tiempo1;
a461 = handles.radiacionA46Tiempo1;
a511 = handles.radiacionA51Tiempo1;
a521 = handles.radiacionA52Tiempo1;
a531 = handles.radiacionA53Tiempo1;
a541 = handles.radiacionA54Tiempo1;
a551 = handles.radiacionA55Tiempo1;
a561 = handles.radiacionA56Tiempo1;
a611 = handles.radiacionA61Tiempo1;
a621 = handles.radiacionA62Tiempo1;
a631 = handles.radiacionA63Tiempo1;
a641 = handles.radiacionA64Tiempo1;
a651 = handles.radiacionA65Tiempo1;
a661 = handles.radiacionA66Tiempo1;
a112 = handles.radiacionA11Tiempo2;
a122 = handles.radiacionA12Tiempo2;
a132 = handles.radiacionA13Tiempo2;
a142 = handles.radiacionA14Tiempo2;
a152 = handles.radiacionA15Tiempo2;
a162 = handles.radiacionA16Tiempo2;
a212 = handles.radiacionA21Tiempo2;
a222 = handles.radiacionA22Tiempo2;
a232 = handles.radiacionA23Tiempo2;
a242 = handles.radiacionA24Tiempo2;
a252 = handles.radiacionA25Tiempo2;
a262 = handles.radiacionA26Tiempo2;
a312 = handles.radiacionA31Tiempo2;
a322 = handles.radiacionA32Tiempo2;
a332 = handles.radiacionA33Tiempo2;
a342 = handles.radiacionA34Tiempo2;
a352 = handles.radiacionA35Tiempo2;
a362 = handles.radiacionA36Tiempo2;
a412 = handles.radiacionA41Tiempo2;
a422 = handles.radiacionA42Tiempo2;
a432 = handles.radiacionA43Tiempo2;
a442 = handles.radiacionA44Tiempo2;
a452 = handles.radiacionA45Tiempo2;
a462 = handles.radiacionA46Tiempo2;
a512 = handles.radiacionA51Tiempo2;
a522 = handles.radiacionA52Tiempo2;
a532 = handles.radiacionA53Tiempo2;
a542 = handles.radiacionA54Tiempo2;
a552 = handles.radiacionA55Tiempo2;
a562 = handles.radiacionA56Tiempo2;
a612 = handles.radiacionA61Tiempo2;
a622 = handles.radiacionA62Tiempo2;
a632 = handles.radiacionA63Tiempo2;
a642 = handles.radiacionA64Tiempo2;
a652 = handles.radiacionA65Tiempo2;
a662 = handles.radiacionA66Tiempo2;
a113 = handles.radiacionA11Tiempo3;
a123 = handles.radiacionA12Tiempo3;
a133 = handles.radiacionA13Tiempo3;
a143 = handles.radiacionA14Tiempo3;
a153 = handles.radiacionA15Tiempo3;
a163 = handles.radiacionA16Tiempo3;
a213 = handles.radiacionA21Tiempo3;
a223 = handles.radiacionA22Tiempo3;
a233 = handles.radiacionA23Tiempo3;
a243 = handles.radiacionA24Tiempo3;
a253 = handles.radiacionA25Tiempo3;
a263 = handles.radiacionA26Tiempo3;
a313 = handles.radiacionA31Tiempo3;
a323 = handles.radiacionA32Tiempo3;
a333 = handles.radiacionA33Tiempo3;
a343 = handles.radiacionA34Tiempo3;
a353 = handles.radiacionA35Tiempo3;
a363 = handles.radiacionA36Tiempo3;
a413 = handles.radiacionA41Tiempo3;
a423 = handles.radiacionA42Tiempo3;
a433 = handles.radiacionA43Tiempo3;
a443 = handles.radiacionA44Tiempo3;
a453 = handles.radiacionA45Tiempo3;
a463 = handles.radiacionA46Tiempo3;
a513 = handles.radiacionA51Tiempo3;
a523 = handles.radiacionA52Tiempo3;
a533 = handles.radiacionA53Tiempo3;
a543 = handles.radiacionA54Tiempo3;
a553 = handles.radiacionA55Tiempo3;
a563 = handles.radiacionA56Tiempo3;
a613 = handles.radiacionA61Tiempo3;
a623 = handles.radiacionA62Tiempo3;
a633 = handles.radiacionA63Tiempo3;
a643 = handles.radiacionA64Tiempo3;
a653 = handles.radiacionA65Tiempo3;
a663 = handles.radiacionA66Tiempo3;
a114 = handles.radiacionA11Tiempo4;
a124 = handles.radiacionA12Tiempo4;
a134 = handles.radiacionA13Tiempo4;
a144 = handles.radiacionA14Tiempo4;
a154 = handles.radiacionA15Tiempo4;
a164 = handles.radiacionA16Tiempo4;
a214 = handles.radiacionA21Tiempo4;
a224 = handles.radiacionA22Tiempo4;
a234 = handles.radiacionA23Tiempo4;
a244 = handles.radiacionA24Tiempo4;
a254 = handles.radiacionA25Tiempo4;
a264 = handles.radiacionA26Tiempo4;
a314 = handles.radiacionA31Tiempo4;
a324 = handles.radiacionA32Tiempo4;
a334 = handles.radiacionA33Tiempo4;
a344 = handles.radiacionA34Tiempo4;
a354 = handles.radiacionA35Tiempo4;
a364 = handles.radiacionA36Tiempo4;
a414 = handles.radiacionA41Tiempo4;
a424 = handles.radiacionA42Tiempo4;
a434 = handles.radiacionA43Tiempo4;
a444 = handles.radiacionA44Tiempo4;
a454 = handles.radiacionA45Tiempo4;
a464 = handles.radiacionA46Tiempo4;
a514 = handles.radiacionA51Tiempo4;
a524 = handles.radiacionA52Tiempo4;
a534 = handles.radiacionA53Tiempo4;
a544 = handles.radiacionA54Tiempo4;
a554 = handles.radiacionA55Tiempo4;
a564 = handles.radiacionA56Tiempo4;
a614 = handles.radiacionA61Tiempo4;
a624 = handles.radiacionA62Tiempo4;
a634 = handles.radiacionA63Tiempo4;
a644 = handles.radiacionA64Tiempo4;
a654 = handles.radiacionA65Tiempo4;
a664 = handles.radiacionA66Tiempo4;
a115 = handles.radiacionA11Tiempo5;
a125 = handles.radiacionA12Tiempo5;
a135 = handles.radiacionA13Tiempo5;
a145 = handles.radiacionA14Tiempo5;
a155 = handles.radiacionA15Tiempo5;
a165 = handles.radiacionA16Tiempo5;
a215 = handles.radiacionA21Tiempo5;
a225 = handles.radiacionA22Tiempo5;
a235 = handles.radiacionA23Tiempo5;
a245 = handles.radiacionA24Tiempo5;
a255 = handles.radiacionA25Tiempo5;
a265 = handles.radiacionA26Tiempo5;
a315 = handles.radiacionA31Tiempo5;
a325 = handles.radiacionA32Tiempo5;
a335 = handles.radiacionA33Tiempo5;
a345 = handles.radiacionA34Tiempo5;
a355 = handles.radiacionA35Tiempo5;
a365 = handles.radiacionA36Tiempo5;
a415 = handles.radiacionA41Tiempo5;
a425 = handles.radiacionA42Tiempo5;
a435 = handles.radiacionA43Tiempo5;
a445 = handles.radiacionA44Tiempo5;
a455 = handles.radiacionA45Tiempo5;
a465 = handles.radiacionA46Tiempo5;
a515 = handles.radiacionA51Tiempo5;
a525 = handles.radiacionA52Tiempo5;
a535 = handles.radiacionA53Tiempo5;
a545 = handles.radiacionA54Tiempo5;
a555 = handles.radiacionA55Tiempo5;
a565 = handles.radiacionA56Tiempo5;
a615 = handles.radiacionA61Tiempo5;
a625 = handles.radiacionA62Tiempo5;
a635 = handles.radiacionA63Tiempo5;
a645 = handles.radiacionA64Tiempo5;
a655 = handles.radiacionA65Tiempo5;
a665 = handles.radiacionA66Tiempo5;
a116 = handles.radiacionA11Tiempo6;
a126 = handles.radiacionA12Tiempo6;
a136 = handles.radiacionA13Tiempo6;
a146 = handles.radiacionA14Tiempo6;
a156 = handles.radiacionA15Tiempo6;
a166 = handles.radiacionA16Tiempo6;
a216 = handles.radiacionA21Tiempo6;
a226 = handles.radiacionA22Tiempo6;
a236 = handles.radiacionA23Tiempo6;
a246 = handles.radiacionA24Tiempo6;
a256 = handles.radiacionA25Tiempo6;
a266 = handles.radiacionA26Tiempo6;
a316 = handles.radiacionA31Tiempo6;
a326 = handles.radiacionA32Tiempo6;
a336 = handles.radiacionA33Tiempo6;
a346 = handles.radiacionA34Tiempo6;
a356 = handles.radiacionA35Tiempo6;
a366 = handles.radiacionA36Tiempo6;
a416 = handles.radiacionA41Tiempo6;
a426 = handles.radiacionA42Tiempo6;
a436 = handles.radiacionA43Tiempo6;
a446 = handles.radiacionA44Tiempo6;
a456 = handles.radiacionA45Tiempo6;
a466 = handles.radiacionA46Tiempo6;
a516 = handles.radiacionA51Tiempo6;
a526 = handles.radiacionA52Tiempo6;
a536 = handles.radiacionA53Tiempo6;
a546 = handles.radiacionA54Tiempo6;
a556 = handles.radiacionA55Tiempo6;
a566 = handles.radiacionA56Tiempo6;
a616 = handles.radiacionA61Tiempo6;
a626 = handles.radiacionA62Tiempo6;
a636 = handles.radiacionA63Tiempo6;
a646 = handles.radiacionA64Tiempo6;
a656 = handles.radiacionA65Tiempo6;
a666 = handles.radiacionA66Tiempo6;


a11Transicion = [a111 a112 a113 a114 a115 a116];
a12Transicion = [a121 a122 a123 a124 a125 a126];
a13Transicion = [a131 a132 a133 a134 a135 a136];
a14Transicion = [a141 a142 a143 a144 a145 a146];
a15Transicion = [a151 a152 a153 a154 a155 a156];
a16Transicion = [a161 a162 a163 a164 a165 a166];
a21Transicion = [a211 a212 a213 a214 a215 a216];
a22Transicion = [a221 a222 a223 a224 a225 a226];
a23Transicion = [a231 a232 a233 a234 a235 a236];
a24Transicion = [a241 a242 a243 a244 a245 a246];
a25Transicion = [a251 a252 a253 a254 a255 a256];
a26Transicion = [a261 a262 a263 a264 a265 a266];
a33Transicion = [a331 a332 a333 a334 a335 a336];
a34Transicion = [a341 a342 a343 a344 a345 a346];
a35Transicion = [a351 a352 a353 a354 a355 a356];
a36Transicion = [a361 a362 a363 a364 a365 a366];
a45Transicion = [a451 a452 a453 a454 a455 a456];
a46Transicion = [a461 a462 a463 a464 a465 a466];
a31Transicion = [a311 a312 a313 a314 a315 a316];
a32Transicion = [a321 a322 a323 a324 a325 a326];
a43Transicion = [a431 a432 a433 a434 a435 a436];
a44Transicion = [a441 a442 a443 a444 a445 a446];
a55Transicion = [a551 a552 a553 a554 a555 a556];
a56Transicion = [a561 a562 a563 a564 a565 a566];
a66Transicion = [a661 a662 a663 a664 a665 a666];
a41Transicion = [a411 a412 a413 a414 a415 a416];
a42Transicion = [a421 a422 a423 a424 a425 a426];
a51Transicion = [a511 a512 a513 a514 a515 a516];
a52Transicion = [a521 a522 a523 a524 a525 a526];
a53Transicion = [a531 a532 a533 a534 a535 a536];
a54Transicion = [a541 a542 a543 a544 a545 a546];
a61Transicion = [a611 a612 a613 a614 a615 a616];
a62Transicion = [a621 a622 a623 a624 a625 a626];
a63Transicion = [a631 a632 a633 a634 a635 a636];
a64Transicion = [a641 a642 a643 a644 a645 a646];
a65Transicion = [a651 a652 a653 a654 a655 a656];
ArrayTension = [];
ArrayPotencia = [];
ArrayCorriente = [];
cantidadIteraciones = handles.cantidadTransiciones;
for i=1:cantidadIteraciones
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
assignin('base','ArregloTension',ArrayTension);
assignin('base','ArregloCorriente',ArrayCorriente);
assignin('base','ArregloPotencia',ArrayPotencia);

figure(1)
plot(ArrayTension',ArrayPotencia')
grid on
title('Potencia vs Voc')
xlabel('Tensión de circuito abierto')
ylabel('Potencia')
grid on
figure(2)
plot(ArrayTension',ArrayCorriente')
grid on
title('Coriente vs Voc')
xlabel('Tensión de circuito abierto')
ylabel('Corriente')
grid on

end