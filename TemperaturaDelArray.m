function varargout = TemperaturaDelArray(varargin)
% TEMPERATURADELARRAY MATLAB code for TemperaturaDelArray.fig
%      TEMPERATURADELARRAY, by itself, creates a new TEMPERATURADELARRAY or raises the existing
%      singleton*.
%
%      H = TEMPERATURADELARRAY returns the handle to a new TEMPERATURADELARRAY or the handle to
%      the existing singleton*.
%
%      TEMPERATURADELARRAY('CALLBACK',hObject,eventData,handles,...) calls the local
%      function named CALLBACK in TEMPERATURADELARRAY.M with the given input arguments.
%
%      TEMPERATURADELARRAY('Property','Value',...) creates a new TEMPERATURADELARRAY or raises the
%      existing singleton*.  Starting from the left, property value pairs are
%      applied to the GUI before TemperaturaDelArray_OpeningFcn gets called.  An
%      unrecognized property name or invalid value makes property application
%      stop.  All inputs are passed to TemperaturaDelArray_OpeningFcn via varargin.
%
%      *See GUI Options on GUIDE's Tools menu.  Choose "GUI allows only one
%      instance to run (singleton)".
%
% See also: GUIDE, GUIDATA, GUIHANDLES

% Edit the above text to modify the response to help TemperaturaDelArray

% Last Modified by GUIDE v2.5 29-Jun-2016 12:17:22

% Begin initialization code - DO NOT EDIT
gui_Singleton = 1;
gui_State = struct('gui_Name',       mfilename, ...
                   'gui_Singleton',  gui_Singleton, ...
                   'gui_OpeningFcn', @TemperaturaDelArray_OpeningFcn, ...
                   'gui_OutputFcn',  @TemperaturaDelArray_OutputFcn, ...
                   'gui_LayoutFcn',  [] , ...
                   'gui_Callback',   []);
if nargin && ischar(varargin{1})
    gui_State.gui_Callback = str2func(varargin{1});
end

if nargout
    [varargout{1:nargout}] = gui_mainfcn(gui_State, varargin{:});
else
    gui_mainfcn(gui_State, varargin{:});
end
% End initialization code - DO NOT EDIT


% --- Executes just before TemperaturaDelArray is made visible.
function TemperaturaDelArray_OpeningFcn(hObject, eventdata, handles, varargin)
% This function has no output args, see OutputFcn.
% hObject    handle to figure
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
% varargin   command line arguments to TemperaturaDelArray (see VARARGIN)

% Choose default command line output for TemperaturaDelArray
handles.output = hObject;
handles.radiacionA11Tiempo1 = 1000;
handles.radiacionA12Tiempo1 = 1000;
handles.radiacionA13Tiempo1 = 1000;
handles.radiacionA14Tiempo1 = 1000;
handles.radiacionA15Tiempo1 = 1000;
handles.radiacionA16Tiempo1 = 1000;
handles.radiacionA21Tiempo1 = 1000;
handles.radiacionA22Tiempo1 = 1000;
handles.radiacionA23Tiempo1 = 1000;
handles.radiacionA24Tiempo1 = 1000;
handles.radiacionA25Tiempo1 = 1000;
handles.radiacionA26Tiempo1 = 1000;
handles.radiacionA31Tiempo1 = 1000;
handles.radiacionA32Tiempo1 = 1000;
handles.radiacionA33Tiempo1 = 1000;
handles.radiacionA34Tiempo1 = 1000;
handles.radiacionA35Tiempo1 = 1000;
handles.radiacionA36Tiempo1 = 1000;
handles.radiacionA41Tiempo1 = 1000;
handles.radiacionA42Tiempo1 = 1000;
handles.radiacionA43Tiempo1 = 1000;
handles.radiacionA44Tiempo1 = 1000;
handles.radiacionA45Tiempo1 = 1000;
handles.radiacionA46Tiempo1 = 1000;
handles.radiacionA51Tiempo1 = 1000;
handles.radiacionA52Tiempo1 = 1000;
handles.radiacionA53Tiempo1 = 1000;
handles.radiacionA54Tiempo1 = 1000;
handles.radiacionA55Tiempo1 = 1000;
handles.radiacionA56Tiempo1 = 1000;
handles.radiacionA61Tiempo1 = 1000;
handles.radiacionA62Tiempo1 = 1000;
handles.radiacionA63Tiempo1 = 1000;
handles.radiacionA64Tiempo1 = 1000;
handles.radiacionA65Tiempo1 = 1000;
handles.radiacionA66Tiempo1 = 1000;
handles.radiacionA11Tiempo2 = 1000;
handles.radiacionA12Tiempo2 = 1000;
handles.radiacionA13Tiempo2 = 1000;
handles.radiacionA14Tiempo2 = 1000;
handles.radiacionA15Tiempo2 = 1000;
handles.radiacionA16Tiempo2 = 1000;
handles.radiacionA21Tiempo2 = 1000;
handles.radiacionA22Tiempo2 = 1000;
handles.radiacionA23Tiempo2 = 1000;
handles.radiacionA24Tiempo2 = 1000;
handles.radiacionA25Tiempo2 = 1000;
handles.radiacionA26Tiempo2 = 1000;
handles.radiacionA31Tiempo2 = 1000;
handles.radiacionA32Tiempo2 = 1000;
handles.radiacionA33Tiempo2 = 1000;
handles.radiacionA34Tiempo2 = 1000;
handles.radiacionA35Tiempo2 = 1000;
handles.radiacionA36Tiempo2 = 1000;
handles.radiacionA41Tiempo2 = 1000;
handles.radiacionA42Tiempo2 = 1000;
handles.radiacionA43Tiempo2 = 1000;
handles.radiacionA44Tiempo2 = 1000;
handles.radiacionA45Tiempo2 = 1000;
handles.radiacionA46Tiempo2 = 1000;
handles.radiacionA51Tiempo2 = 1000;
handles.radiacionA52Tiempo2 = 1000;
handles.radiacionA53Tiempo2 = 1000;
handles.radiacionA54Tiempo2 = 1000;
handles.radiacionA55Tiempo2 = 1000;
handles.radiacionA56Tiempo2 = 1000;
handles.radiacionA61Tiempo2 = 1000;
handles.radiacionA62Tiempo2 = 1000;
handles.radiacionA63Tiempo2 = 1000;
handles.radiacionA64Tiempo2 = 1000;
handles.radiacionA65Tiempo2 = 1000;
handles.radiacionA66Tiempo2 = 1000;
handles.radiacionA11Tiempo3 = 1000;
handles.radiacionA12Tiempo3 = 1000;
handles.radiacionA13Tiempo3 = 1000;
handles.radiacionA14Tiempo3 = 1000;
handles.radiacionA15Tiempo3 = 1000;
handles.radiacionA16Tiempo3 = 1000;
handles.radiacionA21Tiempo3 = 1000;
handles.radiacionA22Tiempo3 = 1000;
handles.radiacionA23Tiempo3 = 1000;
handles.radiacionA24Tiempo3 = 1000;
handles.radiacionA25Tiempo3 = 1000;
handles.radiacionA26Tiempo3 = 1000;
handles.radiacionA31Tiempo3 = 1000;
handles.radiacionA32Tiempo3 = 1000;
handles.radiacionA33Tiempo3 = 1000;
handles.radiacionA34Tiempo3 = 1000;
handles.radiacionA35Tiempo3 = 1000;
handles.radiacionA36Tiempo3 = 1000;
handles.radiacionA41Tiempo3 = 1000;
handles.radiacionA42Tiempo3 = 1000;
handles.radiacionA43Tiempo3 = 1000;
handles.radiacionA44Tiempo3 = 1000;
handles.radiacionA45Tiempo3 = 1000;
handles.radiacionA46Tiempo3 = 1000;
handles.radiacionA51Tiempo3 = 1000;
handles.radiacionA52Tiempo3 = 1000;
handles.radiacionA53Tiempo3 = 1000;
handles.radiacionA54Tiempo3 = 1000;
handles.radiacionA55Tiempo3 = 1000;
handles.radiacionA56Tiempo3 = 1000;
handles.radiacionA61Tiempo3 = 1000;
handles.radiacionA62Tiempo3 = 1000;
handles.radiacionA63Tiempo3 = 1000;
handles.radiacionA64Tiempo3 = 1000;
handles.radiacionA65Tiempo3 = 1000;
handles.radiacionA66Tiempo3 = 1000;
handles.radiacionA11Tiempo4 = 1000;
handles.radiacionA12Tiempo4 = 1000;
handles.radiacionA13Tiempo4 = 1000;
handles.radiacionA14Tiempo4 = 1000;
handles.radiacionA15Tiempo4 = 1000;
handles.radiacionA16Tiempo4 = 1000;
handles.radiacionA21Tiempo4 = 1000;
handles.radiacionA22Tiempo4 = 1000;
handles.radiacionA23Tiempo4 = 1000;
handles.radiacionA24Tiempo4 = 1000;
handles.radiacionA25Tiempo4 = 1000;
handles.radiacionA26Tiempo4 = 1000;
handles.radiacionA31Tiempo4 = 1000;
handles.radiacionA32Tiempo4 = 1000;
handles.radiacionA33Tiempo4 = 1000;
handles.radiacionA34Tiempo4 = 1000;
handles.radiacionA35Tiempo4 = 1000;
handles.radiacionA36Tiempo4 = 1000;
handles.radiacionA41Tiempo4 = 1000;
handles.radiacionA42Tiempo4 = 1000;
handles.radiacionA43Tiempo4 = 1000;
handles.radiacionA44Tiempo4 = 1000;
handles.radiacionA45Tiempo4 = 1000;
handles.radiacionA46Tiempo4 = 1000;
handles.radiacionA51Tiempo4 = 1000;
handles.radiacionA52Tiempo4 = 1000;
handles.radiacionA53Tiempo4 = 1000;
handles.radiacionA54Tiempo4 = 1000;
handles.radiacionA55Tiempo4 = 1000;
handles.radiacionA56Tiempo4 = 1000;
handles.radiacionA61Tiempo4 = 1000;
handles.radiacionA62Tiempo4 = 1000;
handles.radiacionA63Tiempo4 = 1000;
handles.radiacionA64Tiempo4 = 1000;
handles.radiacionA65Tiempo4 = 1000;
handles.radiacionA66Tiempo4 = 1000;
handles.radiacionA11Tiempo5 = 1000;
handles.radiacionA12Tiempo5 = 1000;
handles.radiacionA13Tiempo5 = 1000;
handles.radiacionA14Tiempo5 = 1000;
handles.radiacionA15Tiempo5 = 1000;
handles.radiacionA16Tiempo5 = 1000;
handles.radiacionA21Tiempo5 = 1000;
handles.radiacionA22Tiempo5 = 1000;
handles.radiacionA23Tiempo5 = 1000;
handles.radiacionA24Tiempo5 = 1000;
handles.radiacionA25Tiempo5 = 1000;
handles.radiacionA26Tiempo5 = 1000;
handles.radiacionA31Tiempo5 = 1000;
handles.radiacionA32Tiempo5 = 1000;
handles.radiacionA33Tiempo5 = 1000;
handles.radiacionA34Tiempo5 = 1000;
handles.radiacionA35Tiempo5 = 1000;
handles.radiacionA36Tiempo5 = 1000;
handles.radiacionA41Tiempo5 = 1000;
handles.radiacionA42Tiempo5 = 1000;
handles.radiacionA43Tiempo5 = 1000;
handles.radiacionA44Tiempo5 = 1000;
handles.radiacionA45Tiempo5 = 1000;
handles.radiacionA46Tiempo5 = 1000;
handles.radiacionA51Tiempo5 = 1000;
handles.radiacionA52Tiempo5 = 1000;
handles.radiacionA53Tiempo5 = 1000;
handles.radiacionA54Tiempo5 = 1000;
handles.radiacionA55Tiempo5 = 1000;
handles.radiacionA56Tiempo5 = 1000;
handles.radiacionA61Tiempo5 = 1000;
handles.radiacionA62Tiempo5 = 1000;
handles.radiacionA63Tiempo5 = 1000;
handles.radiacionA64Tiempo5 = 1000;
handles.radiacionA65Tiempo5 = 1000;
handles.radiacionA66Tiempo5 = 1000;
handles.radiacionA11Tiempo6 = 1000;
handles.radiacionA12Tiempo6 = 1000;
handles.radiacionA13Tiempo6 = 1000;
handles.radiacionA14Tiempo6 = 1000;
handles.radiacionA15Tiempo6 = 1000;
handles.radiacionA16Tiempo6 = 1000;
handles.radiacionA21Tiempo6 = 1000;
handles.radiacionA22Tiempo6 = 1000;
handles.radiacionA23Tiempo6 = 1000;
handles.radiacionA24Tiempo6 = 1000;
handles.radiacionA25Tiempo6 = 1000;
handles.radiacionA26Tiempo6 = 1000;
handles.radiacionA31Tiempo6 = 1000;
handles.radiacionA32Tiempo6 = 1000;
handles.radiacionA33Tiempo6 = 1000;
handles.radiacionA34Tiempo6 = 1000;
handles.radiacionA35Tiempo6 = 1000;
handles.radiacionA36Tiempo6 = 1000;
handles.radiacionA41Tiempo6 = 1000;
handles.radiacionA42Tiempo6 = 1000;
handles.radiacionA43Tiempo6 = 1000;
handles.radiacionA44Tiempo6 = 1000;
handles.radiacionA45Tiempo6 = 1000;
handles.radiacionA46Tiempo6 = 1000;
handles.radiacionA51Tiempo6 = 1000;
handles.radiacionA52Tiempo6 = 1000;
handles.radiacionA53Tiempo6 = 1000;
handles.radiacionA54Tiempo6 = 1000;
handles.radiacionA55Tiempo6 = 1000;
handles.radiacionA56Tiempo6 = 1000;
handles.radiacionA61Tiempo6 = 1000;
handles.radiacionA62Tiempo6 = 1000;
handles.radiacionA63Tiempo6 = 1000;
handles.radiacionA64Tiempo6 = 1000;
handles.radiacionA65Tiempo6 = 1000;
handles.radiacionA66Tiempo6 = 1000;
handles.cantidadTransiciones  = 6;


% Update handles structure
guidata(hObject, handles);

% UIWAIT makes TemperaturaDelArray wait for user response (see UIRESUME)
% uiwait(handles.figure1);


% --- Outputs from this function are returned to the command line.
function varargout = TemperaturaDelArray_OutputFcn(hObject, eventdata, handles) 
% varargout  cell array for returning output args (see VARARGOUT);
% hObject    handle to figure
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Get default command line output from handles structure
varargout{1} = handles.output;

function b111_Callback(hObject, eventdata, handles)
% hObject    handle to b111 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b111 as text
%        str2double(get(hObject,'String')) returns contents of b111 as a double
radiacionA11Tiempo1 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA11Tiempo1double = str2double(radiacionA11Tiempo1); %Transformar a formato double
handles.radiacionA11Tiempo1 = radiacionA11Tiempo1double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n


% --- Executes during object creation, after setting all properties.
function b111_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b111 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b121_Callback(hObject, eventdata, handles)
% hObject    handle to b121 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b121 as text
%        str2double(get(hObject,'String')) returns contents of b121 as a double
radiacionA12Tiempo1 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA12Tiempo1double = str2double(radiacionA12Tiempo1); %Transformar a formato double
handles.radiacionA12Tiempo1 = radiacionA12Tiempo1double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n


% --- Executes during object creation, after setting all properties.
function b121_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b121 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b131_Callback(hObject, eventdata, handles)
% hObject    handle to b131 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b131 as text
%        str2double(get(hObject,'String')) returns contents of b131 as a double
radiacionA13Tiempo1 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA13Tiempo1double = str2double(radiacionA13Tiempo1); %Transformar a formato double
handles.radiacionA13Tiempo1 = radiacionA13Tiempo1double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n



% --- Executes during object creation, after setting all properties.
function b131_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b131 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b141_Callback(hObject, eventdata, handles)
% hObject    handle to b141 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b141 as text
%        str2double(get(hObject,'String')) returns contents of b141 as a double
radiacionA14Tiempo1 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA14Tiempo1double = str2double(radiacionA14Tiempo1); %Transformar a formato double
handles.radiacionA14Tiempo1 = radiacionA14Tiempo1double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n


% --- Executes during object creation, after setting all properties.
function b141_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b141 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b151_Callback(hObject, eventdata, handles)
% hObject    handle to b151 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b151 as text
%        str2double(get(hObject,'String')) returns contents of b151 as a double
radiacionA15Tiempo1 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA15Tiempo1double = str2double(radiacionA15Tiempo1); %Transformar a formato double
handles.radiacionA15Tiempo1 = radiacionA15Tiempo1double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n



% --- Executes during object creation, after setting all properties.
function b151_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b151 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b161_Callback(hObject, eventdata, handles)
% hObject    handle to b161 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b161 as text
%        str2double(get(hObject,'String')) returns contents of b161 as a double
radiacionA16Tiempo1 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA16Tiempo1double = str2double(radiacionA16Tiempo1); %Transformar a formato double
handles.radiacionA16Tiempo1 = radiacionA16Tiempo1double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n


% --- Executes during object creation, after setting all properties.
function b161_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b161 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b211_Callback(hObject, eventdata, handles)
% hObject    handle to b211 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b211 as text
%        str2double(get(hObject,'String')) returns contents of b211 as a double
radiacionA21Tiempo1 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA21Tiempo1double = str2double(radiacionA21Tiempo1); %Transformar a formato double
handles.radiacionA21Tiempo1 = radiacionA21Tiempo1double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n



% --- Executes during object creation, after setting all properties.
function b211_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b211 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b221_Callback(hObject, eventdata, handles)
% hObject    handle to b221 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b221 as text
%        str2double(get(hObject,'String')) returns contents of b221 as a double
radiacionA22Tiempo1 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA22Tiempo1double = str2double(radiacionA22Tiempo1); %Transformar a formato double
handles.radiacionA22Tiempo1 = radiacionA22Tiempo1double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n



% --- Executes during object creation, after setting all properties.
function b221_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b221 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b231_Callback(hObject, eventdata, handles)
% hObject    handle to b231 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b231 as text
%        str2double(get(hObject,'String')) returns contents of b231 as a double
radiacionA23Tiempo1 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA23Tiempo1double = str2double(radiacionA23Tiempo1); %Transformar a formato double
handles.radiacionA23Tiempo1 = radiacionA23Tiempo1double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n



% --- Executes during object creation, after setting all properties.
function b231_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b231 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b241_Callback(hObject, eventdata, handles)
% hObject    handle to b241 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b241 as text
%        str2double(get(hObject,'String')) returns contents of b241 as a double
radiacionA24Tiempo1 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA24Tiempo1double = str2double(radiacionA24Tiempo1); %Transformar a formato double
handles.radiacionA24Tiempo1 = radiacionA24Tiempo1double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n




% --- Executes during object creation, after setting all properties.
function b241_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b241 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b251_Callback(hObject, eventdata, handles)
% hObject    handle to b251 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b251 as text
%        str2double(get(hObject,'String')) returns contents of b251 as a double
radiacionA25Tiempo1 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA25Tiempo1double = str2double(radiacionA25Tiempo1); %Transformar a formato double
handles.radiacionA25Tiempo1 = radiacionA25Tiempo1double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n



% --- Executes during object creation, after setting all properties.
function b251_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b251 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b261_Callback(hObject, eventdata, handles)
% hObject    handle to b261 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b261 as text
%        str2double(get(hObject,'String')) returns contents of b261 as a double
radiacionA26Tiempo1 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA26Tiempo1double = str2double(radiacionA26Tiempo1); %Transformar a formato double
handles.radiacionA26Tiempo1 = radiacionA26Tiempo1double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n


% --- Executes during object creation, after setting all properties.
function b261_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b261 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b311_Callback(hObject, eventdata, handles)
% hObject    handle to b311 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b311 as text
%        str2double(get(hObject,'String')) returns contents of b311 as a double
radiacionA31Tiempo1 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA31Tiempo1double = str2double(radiacionA31Tiempo1); %Transformar a formato double
handles.radiacionA31Tiempo1 = radiacionA31Tiempo1double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n



% --- Executes during object creation, after setting all properties.
function b311_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b311 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b321_Callback(hObject, eventdata, handles)
% hObject    handle to b321 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b321 as text
%        str2double(get(hObject,'String')) returns contents of b321 as a double
radiacionA32Tiempo1 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA32Tiempo1double = str2double(radiacionA32Tiempo1); %Transformar a formato double
handles.radiacionA32Tiempo1 = radiacionA32Tiempo1double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n



% --- Executes during object creation, after setting all properties.
function b321_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b321 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b331_Callback(hObject, eventdata, handles)
% hObject    handle to b331 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b331 as text
%        str2double(get(hObject,'String')) returns contents of b331 as a double
radiacionA33Tiempo1 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA33Tiempo1double = str2double(radiacionA33Tiempo1); %Transformar a formato double
handles.radiacionA33Tiempo1 = radiacionA33Tiempo1double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n



% --- Executes during object creation, after setting all properties.
function b331_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b331 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b341_Callback(hObject, eventdata, handles)
% hObject    handle to b341 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b341 as text
%        str2double(get(hObject,'String')) returns contents of b341 as a double
radiacionA34Tiempo1 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA34Tiempo1double = str2double(radiacionA34Tiempo1); %Transformar a formato double
handles.radiacionA34Tiempo1 = radiacionA34Tiempo1double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n



% --- Executes during object creation, after setting all properties.
function b341_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b341 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b351_Callback(hObject, eventdata, handles)
% hObject    handle to b351 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b351 as text
%        str2double(get(hObject,'String')) returns contents of b351 as a double
radiacionA35Tiempo1 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA35Tiempo1double = str2double(radiacionA35Tiempo1); %Transformar a formato double
handles.radiacionA35Tiempo1 = radiacionA35Tiempo1double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n



% --- Executes during object creation, after setting all properties.
function b351_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b351 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b361_Callback(hObject, eventdata, handles)
% hObject    handle to b361 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b361 as text
%        str2double(get(hObject,'String')) returns contents of b361 as a double
radiacionA36Tiempo1 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA36Tiempo1double = str2double(radiacionA36Tiempo1); %Transformar a formato double
handles.radiacionA36Tiempo1 = radiacionA36Tiempo1double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n



% --- Executes during object creation, after setting all properties.
function b361_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b361 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b411_Callback(hObject, eventdata, handles)
% hObject    handle to b411 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b411 as text
%        str2double(get(hObject,'String')) returns contents of b411 as a double
radiacionA41Tiempo1 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA41Tiempo1double = str2double(radiacionA41Tiempo1); %Transformar a formato double
handles.radiacionA41Tiempo1 = radiacionA41Tiempo1double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n



% --- Executes during object creation, after setting all properties.
function b411_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b411 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b421_Callback(hObject, eventdata, handles)
% hObject    handle to b421 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b421 as text
%        str2double(get(hObject,'String')) returns contents of b421 as a double
radiacionA42Tiempo1 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA42Tiempo1double = str2double(radiacionA42Tiempo1); %Transformar a formato double
handles.radiacionA42Tiempo1 = radiacionA42Tiempo1double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n




% --- Executes during object creation, after setting all properties.
function b421_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b421 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b431_Callback(hObject, eventdata, handles)
% hObject    handle to b431 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b431 as text
%        str2double(get(hObject,'String')) returns contents of b431 as a double
radiacionA43Tiempo1 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA43Tiempo1double = str2double(radiacionA43Tiempo1); %Transformar a formato double
handles.radiacionA43Tiempo1 = radiacionA43Tiempo1double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n



% --- Executes during object creation, after setting all properties.
function b431_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b431 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b441_Callback(hObject, eventdata, handles)
% hObject    handle to b441 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b441 as text
%        str2double(get(hObject,'String')) returns contents of b441 as a double
radiacionA44Tiempo1 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA44Tiempo1double = str2double(radiacionA44Tiempo1); %Transformar a formato double
handles.radiacionA44Tiempo1 = radiacionA44Tiempo1double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n



% --- Executes during object creation, after setting all properties.
function b441_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b441 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b451_Callback(hObject, eventdata, handles)
% hObject    handle to b451 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b451 as text
%        str2double(get(hObject,'String')) returns contents of b451 as a double
radiacionA45Tiempo1 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA45Tiempo1double = str2double(radiacionA45Tiempo1); %Transformar a formato double
handles.radiacionA45Tiempo1 = radiacionA45Tiempo1double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n


% --- Executes during object creation, after setting all properties.
function b451_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b451 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b461_Callback(hObject, eventdata, handles)
% hObject    handle to b461 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b461 as text
%        str2double(get(hObject,'String')) returns contents of b461 as a double
radiacionA46Tiempo1 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA46Tiempo1double = str2double(radiacionA46Tiempo1); %Transformar a formato double
handles.radiacionA46Tiempo1 = radiacionA46Tiempo1double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n


% --- Executes during object creation, after setting all properties.
function b461_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b461 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b511_Callback(hObject, eventdata, handles)
% hObject    handle to b511 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b511 as text
%        str2double(get(hObject,'String')) returns contents of b511 as a double
radiacionA51Tiempo1 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA51Tiempo1double = str2double(radiacionA51Tiempo1); %Transformar a formato double
handles.radiacionA51Tiempo1 = radiacionA51Tiempo1double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n


% --- Executes during object creation, after setting all properties.
function b511_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b511 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b521_Callback(hObject, eventdata, handles)
% hObject    handle to b521 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b521 as text
%        str2double(get(hObject,'String')) returns contents of b521 as a double
radiacionA52Tiempo1 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA52Tiempo1double = str2double(radiacionA52Tiempo1); %Transformar a formato double
handles.radiacionA52Tiempo1 = radiacionA52Tiempo1double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n



% --- Executes during object creation, after setting all properties.
function b521_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b521 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b531_Callback(hObject, eventdata, handles)
% hObject    handle to b531 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b531 as text
%        str2double(get(hObject,'String')) returns contents of b531 as a double
radiacionA53Tiempo1 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA53Tiempo1double = str2double(radiacionA53Tiempo1); %Transformar a formato double
handles.radiacionA53Tiempo1 = radiacionA53Tiempo1double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n


% --- Executes during object creation, after setting all properties.
function b531_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b531 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b541_Callback(hObject, eventdata, handles)
% hObject    handle to b541 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b541 as text
%        str2double(get(hObject,'String')) returns contents of b541 as a double
radiacionA54Tiempo1 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA54Tiempo1double = str2double(radiacionA54Tiempo1); %Transformar a formato double
handles.radiacionA54Tiempo1 = radiacionA54Tiempo1double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n



% --- Executes during object creation, after setting all properties.
function b541_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b541 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b551_Callback(hObject, eventdata, handles)
% hObject    handle to b551 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b551 as text
%        str2double(get(hObject,'String')) returns contents of b551 as a double
radiacionA55Tiempo1 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA55Tiempo1double = str2double(radiacionA55Tiempo1); %Transformar a formato double
handles.radiacionA55Tiempo1 = radiacionA55Tiempo1double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n



% --- Executes during object creation, after setting all properties.
function b551_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b551 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end


function b561_Callback(hObject, eventdata, handles)
% hObject    handle to b561 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b561 as text
%        str2double(get(hObject,'String')) returns contents of b561 as a double
radiacionA56Tiempo1 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA56Tiempo1double = str2double(radiacionA56Tiempo1); %Transformar a formato double
handles.radiacionA56Tiempo1 = radiacionA56Tiempo1double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n

% --- Executes during object creation, after setting all properties.
function b561_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b561 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b611_Callback(hObject, eventdata, handles)
% hObject    handle to b611 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b611 as text
%        str2double(get(hObject,'String')) returns contents of b611 as a double
radiacionA61Tiempo1 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA61Tiempo1double = str2double(radiacionA61Tiempo1); %Transformar a formato double
handles.radiacionA61Tiempo1 = radiacionA61Tiempo1double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n



% --- Executes during object creation, after setting all properties.
function b611_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b611 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b621_Callback(hObject, eventdata, handles)
% hObject    handle to b621 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b621 as text
%        str2double(get(hObject,'String')) returns contents of b621 as a double
radiacionA62Tiempo1 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA62Tiempo1double = str2double(radiacionA62Tiempo1); %Transformar a formato double
handles.radiacionA62Tiempo1 = radiacionA62Tiempo1double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n



% --- Executes during object creation, after setting all properties.
function b621_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b621 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b631_Callback(hObject, eventdata, handles)
% hObject    handle to b631 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b631 as text
%        str2double(get(hObject,'String')) returns contents of b631 as a double
radiacionA63Tiempo1 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA63Tiempo1double = str2double(radiacionA63Tiempo1); %Transformar a formato double
handles.radiacionA63Tiempo1 = radiacionA63Tiempo1double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n


% --- Executes during object creation, after setting all properties.
function b631_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b631 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b641_Callback(hObject, eventdata, handles)
% hObject    handle to b641 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b641 as text
%        str2double(get(hObject,'String')) returns contents of b641 as a double
radiacionA64Tiempo1 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA64Tiempo1double = str2double(radiacionA64Tiempo1); %Transformar a formato double
handles.radiacionA64Tiempo1 = radiacionA64Tiempo1double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n



% --- Executes during object creation, after setting all properties.
function b641_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b641 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b651_Callback(hObject, eventdata, handles)
% hObject    handle to b651 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b651 as text
%        str2double(get(hObject,'String')) returns contents of b651 as a double
radiacionA65Tiempo1 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA65Tiempo1double = str2double(radiacionA65Tiempo1); %Transformar a formato double
handles.radiacionA65Tiempo1 = radiacionA65Tiempo1double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n



% --- Executes during object creation, after setting all properties.
function b651_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b651 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b661_Callback(hObject, eventdata, handles)
% hObject    handle to b661 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b661 as text
%        str2double(get(hObject,'String')) returns contents of b661 as a double
radiacionA66Tiempo1 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA66Tiempo1double = str2double(radiacionA66Tiempo1); %Transformar a formato double
handles.radiacionA66Tiempo1 = radiacionA66Tiempo1double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n



% --- Executes during object creation, after setting all properties.
function b661_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b661 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b662_Callback(hObject, eventdata, handles)
% hObject    handle to b662 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b662 as text
%        str2double(get(hObject,'String')) returns contents of b662 as a double
radiacionA66Tiempo2 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA66Tiempo2double = str2double(radiacionA66Tiempo2); %Transformar a formato double
handles.radiacionA66Tiempo2 = radiacionA66Tiempo2double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n


% --- Executes during object creation, after setting all properties.
function b662_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b662 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b652_Callback(hObject, eventdata, handles)
% hObject    handle to b652 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b652 as text
%        str2double(get(hObject,'String')) returns contents of b652 as a double
radiacionA65Tiempo2 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA65Tiempo2double = str2double(radiacionA65Tiempo2); %Transformar a formato double
handles.radiacionA65Tiempo2 = radiacionA65Tiempo2double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n


% --- Executes during object creation, after setting all properties.
function b652_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b652 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b642_Callback(hObject, eventdata, handles)
% hObject    handle to b642 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b642 as text
%        str2double(get(hObject,'String')) returns contents of b642 as a double
radiacionA64Tiempo2 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA64Tiempo2double = str2double(radiacionA64Tiempo2); %Transformar a formato double
handles.radiacionA64Tiempo2 = radiacionA64Tiempo2double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n


% --- Executes during object creation, after setting all properties.
function b642_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b642 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b632_Callback(hObject, eventdata, handles)
% hObject    handle to b632 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b632 as text
%        str2double(get(hObject,'String')) returns contents of b632 as a double
radiacionA63Tiempo2 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA63Tiempo2double = str2double(radiacionA63Tiempo2); %Transformar a formato double
handles.radiacionA63Tiempo2 = radiacionA63Tiempo2double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n


% --- Executes during object creation, after setting all properties.
function b632_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b632 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b622_Callback(hObject, eventdata, handles)
% hObject    handle to b622 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b622 as text
%        str2double(get(hObject,'String')) returns contents of b622 as a double
radiacionA62Tiempo2 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA62Tiempo2double = str2double(radiacionA62Tiempo2); %Transformar a formato double
handles.radiacionA62Tiempo2 = radiacionA62Tiempo2double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n



% --- Executes during object creation, after setting all properties.
function b622_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b622 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b612_Callback(hObject, eventdata, handles)
% hObject    handle to b612 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b612 as text
%        str2double(get(hObject,'String')) returns contents of b612 as a double
radiacionA61Tiempo2 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA61Tiempo2double = str2double(radiacionA61Tiempo2); %Transformar a formato double
handles.radiacionA61Tiempo2 = radiacionA61Tiempo2double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n


% --- Executes during object creation, after setting all properties.
function b612_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b612 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b562_Callback(hObject, eventdata, handles)
% hObject    handle to b562 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b562 as text
%        str2double(get(hObject,'String')) returns contents of b562 as a double
radiacionA56Tiempo2 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA56Tiempo2double = str2double(radiacionA56Tiempo2); %Transformar a formato double
handles.radiacionA56Tiempo2 = radiacionA56Tiempo2double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n


% --- Executes during object creation, after setting all properties.
function b562_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b562 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b552_Callback(hObject, eventdata, handles)
% hObject    handle to b552 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b552 as text
%        str2double(get(hObject,'String')) returns contents of b552 as a double
radiacionA55Tiempo2 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA55Tiempo2double = str2double(radiacionA55Tiempo2); %Transformar a formato double
handles.radiacionA55Tiempo2 = radiacionA55Tiempo2double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n



% --- Executes during object creation, after setting all properties.
function b552_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b552 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b542_Callback(hObject, eventdata, handles)
% hObject    handle to b542 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b542 as text
%        str2double(get(hObject,'String')) returns contents of b542 as a double
radiacionA54Tiempo2 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA54Tiempo2double = str2double(radiacionA54Tiempo2); %Transformar a formato double
handles.radiacionA54Tiempo2 = radiacionA54Tiempo2double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n



% --- Executes during object creation, after setting all properties.
function b542_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b542 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b532_Callback(hObject, eventdata, handles)
% hObject    handle to b532 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b532 as text
%        str2double(get(hObject,'String')) returns contents of b532 as a double
radiacionA53Tiempo2 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA53Tiempo2double = str2double(radiacionA53Tiempo2); %Transformar a formato double
handles.radiacionA53Tiempo2 = radiacionA53Tiempo2double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n



% --- Executes during object creation, after setting all properties.
function b532_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b532 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b522_Callback(hObject, eventdata, handles)
% hObject    handle to b522 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b522 as text
%        str2double(get(hObject,'String')) returns contents of b522 as a double
radiacionA52Tiempo2 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA52Tiempo2double = str2double(radiacionA52Tiempo2); %Transformar a formato double
handles.radiacionA52Tiempo2 = radiacionA52Tiempo2double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n


% --- Executes during object creation, after setting all properties.
function b522_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b522 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b512_Callback(hObject, eventdata, handles)
% hObject    handle to b512 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b512 as text
%        str2double(get(hObject,'String')) returns contents of b512 as a double
radiacionA51Tiempo2 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA51Tiempo2double = str2double(radiacionA51Tiempo2); %Transformar a formato double
handles.radiacionA51Tiempo2 = radiacionA51Tiempo2double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n



% --- Executes during object creation, after setting all properties.
function b512_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b512 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b462_Callback(hObject, eventdata, handles)
% hObject    handle to b462 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b462 as text
%        str2double(get(hObject,'String')) returns contents of b462 as a double
radiacionA46Tiempo2 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA46Tiempo2double = str2double(radiacionA46Tiempo2); %Transformar a formato double
handles.radiacionA46Tiempo2 = radiacionA46Tiempo2double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n


% --- Executes during object creation, after setting all properties.
function b462_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b462 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b452_Callback(hObject, eventdata, handles)
% hObject    handle to b452 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b452 as text
%        str2double(get(hObject,'String')) returns contents of b452 as a double
radiacionA45Tiempo2 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA45Tiempo2double = str2double(radiacionA45Tiempo2); %Transformar a formato double
handles.radiacionA45Tiempo2 = radiacionA45Tiempo2double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n



% --- Executes during object creation, after setting all properties.
function b452_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b452 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b442_Callback(hObject, eventdata, handles)
% hObject    handle to b442 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b442 as text
%        str2double(get(hObject,'String')) returns contents of b442 as a double
radiacionA44Tiempo2 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA44Tiempo2double = str2double(radiacionA44Tiempo2); %Transformar a formato double
handles.radiacionA44Tiempo2 = radiacionA44Tiempo2double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n



% --- Executes during object creation, after setting all properties.
function b442_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b442 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b432_Callback(hObject, eventdata, handles)
% hObject    handle to b432 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b432 as text
%        str2double(get(hObject,'String')) returns contents of b432 as a double
radiacionA43Tiempo2 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA43Tiempo2double = str2double(radiacionA43Tiempo2); %Transformar a formato double
handles.radiacionA43Tiempo2 = radiacionA43Tiempo2double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n



% --- Executes during object creation, after setting all properties.
function b432_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b432 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b422_Callback(hObject, eventdata, handles)
% hObject    handle to b422 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b422 as text
%        str2double(get(hObject,'String')) returns contents of b422 as a double
radiacionA42Tiempo2 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA42Tiempo2double = str2double(radiacionA42Tiempo2); %Transformar a formato double
handles.radiacionA42Tiempo2 = radiacionA42Tiempo2double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n



% --- Executes during object creation, after setting all properties.
function b422_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b422 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b412_Callback(hObject, eventdata, handles)
% hObject    handle to b412 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b412 as text
%        str2double(get(hObject,'String')) returns contents of b412 as a double
radiacionA41Tiempo2 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA41Tiempo2double = str2double(radiacionA41Tiempo2); %Transformar a formato double
handles.radiacionA41Tiempo2 = radiacionA41Tiempo2double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n



% --- Executes during object creation, after setting all properties.
function b412_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b412 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b362_Callback(hObject, eventdata, handles)
% hObject    handle to b362 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b362 as text
%        str2double(get(hObject,'String')) returns contents of b362 as a double
radiacionA36Tiempo2 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA36Tiempo2double = str2double(radiacionA36Tiempo2); %Transformar a formato double
handles.radiacionA36Tiempo2 = radiacionA36Tiempo2double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n



% --- Executes during object creation, after setting all properties.
function b362_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b362 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b352_Callback(hObject, eventdata, handles)
% hObject    handle to b352 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b352 as text
%        str2double(get(hObject,'String')) returns contents of b352 as a double
radiacionA35Tiempo2 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA35Tiempo2double = str2double(radiacionA35Tiempo2); %Transformar a formato double
handles.radiacionA35Tiempo2 = radiacionA35Tiempo2double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n



% --- Executes during object creation, after setting all properties.
function b352_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b352 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b342_Callback(hObject, eventdata, handles)
% hObject    handle to b342 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b342 as text
%        str2double(get(hObject,'String')) returns contents of b342 as a double
radiacionA34Tiempo2 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA34Tiempo2double = str2double(radiacionA34Tiempo2); %Transformar a formato double
handles.radiacionA34Tiempo2 = radiacionA34Tiempo2double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n



% --- Executes during object creation, after setting all properties.
function b342_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b342 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b332_Callback(hObject, eventdata, handles)
% hObject    handle to b332 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b332 as text
%        str2double(get(hObject,'String')) returns contents of b332 as a double
radiacionA33Tiempo2 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA33Tiempo2double = str2double(radiacionA33Tiempo2); %Transformar a formato double
handles.radiacionA33Tiempo2 = radiacionA33Tiempo2double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n



% --- Executes during object creation, after setting all properties.
function b332_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b332 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b322_Callback(hObject, eventdata, handles)
% hObject    handle to b322 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b322 as text
%        str2double(get(hObject,'String')) returns contents of b322 as a double
radiacionA32Tiempo2 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA32Tiempo2double = str2double(radiacionA32Tiempo2); %Transformar a formato double
handles.radiacionA32Tiempo2 = radiacionA32Tiempo2double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n



% --- Executes during object creation, after setting all properties.
function b322_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b322 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b312_Callback(hObject, eventdata, handles)
% hObject    handle to b312 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b312 as text
%        str2double(get(hObject,'String')) returns contents of b312 as a double
radiacionA31Tiempo2 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA31Tiempo2double = str2double(radiacionA31Tiempo2); %Transformar a formato double
handles.radiacionA31Tiempo2 = radiacionA31Tiempo2double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n


% --- Executes during object creation, after setting all properties.
function b312_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b312 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b262_Callback(hObject, eventdata, handles)
% hObject    handle to b262 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b262 as text
%        str2double(get(hObject,'String')) returns contents of b262 as a double
radiacionA26Tiempo2 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA26Tiempo2double = str2double(radiacionA26Tiempo2); %Transformar a formato double
handles.radiacionA26Tiempo2 = radiacionA26Tiempo2double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n



% --- Executes during object creation, after setting all properties.
function b262_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b262 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b252_Callback(hObject, eventdata, handles)
% hObject    handle to b252 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b252 as text
%        str2double(get(hObject,'String')) returns contents of b252 as a double
radiacionA25Tiempo2 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA25Tiempo2double = str2double(radiacionA25Tiempo2); %Transformar a formato double
handles.radiacionA25Tiempo2 = radiacionA25Tiempo2double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n



% --- Executes during object creation, after setting all properties.
function b252_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b252 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b242_Callback(hObject, eventdata, handles)
% hObject    handle to b242 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b242 as text
%        str2double(get(hObject,'String')) returns contents of b242 as a double
radiacionA24Tiempo2 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA24Tiempo2double = str2double(radiacionA24Tiempo2); %Transformar a formato double
handles.radiacionA24Tiempo2 = radiacionA24Tiempo2double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n



% --- Executes during object creation, after setting all properties.
function b242_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b242 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b232_Callback(hObject, eventdata, handles)
% hObject    handle to b232 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b232 as text
%        str2double(get(hObject,'String')) returns contents of b232 as a double
radiacionA23Tiempo2 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA23Tiempo2double = str2double(radiacionA23Tiempo2); %Transformar a formato double
handles.radiacionA23Tiempo2 = radiacionA23Tiempo2double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n



% --- Executes during object creation, after setting all properties.
function b232_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b232 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b222_Callback(hObject, eventdata, handles)
% hObject    handle to b222 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b222 as text
%        str2double(get(hObject,'String')) returns contents of b222 as a double
radiacionA22Tiempo2 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA22Tiempo2double = str2double(radiacionA22Tiempo2); %Transformar a formato double
handles.radiacionA22Tiempo2 = radiacionA22Tiempo2double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n



% --- Executes during object creation, after setting all properties.
function b222_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b222 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b212_Callback(hObject, eventdata, handles)
% hObject    handle to b212 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b212 as text
%        str2double(get(hObject,'String')) returns contents of b212 as a double
radiacionA21Tiempo2 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA21Tiempo2double = str2double(radiacionA21Tiempo2); %Transformar a formato double
handles.radiacionA21Tiempo2 = radiacionA21Tiempo2double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n



% --- Executes during object creation, after setting all properties.
function b212_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b212 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b162_Callback(hObject, eventdata, handles)
% hObject    handle to b162 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b162 as text
%        str2double(get(hObject,'String')) returns contents of b162 as a double
radiacionA16Tiempo2 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA16Tiempo2double = str2double(radiacionA16Tiempo2); %Transformar a formato double
handles.radiacionA16Tiempo2 = radiacionA16Tiempo2double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n



% --- Executes during object creation, after setting all properties.
function b162_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b162 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b152_Callback(hObject, eventdata, handles)
% hObject    handle to b152 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b152 as text
%        str2double(get(hObject,'String')) returns contents of b152 as a double
radiacionA15Tiempo2 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA15Tiempo2double = str2double(radiacionA15Tiempo2); %Transformar a formato double
handles.radiacionA15Tiempo2 = radiacionA15Tiempo2double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n



% --- Executes during object creation, after setting all properties.
function b152_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b152 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b142_Callback(hObject, eventdata, handles)
% hObject    handle to b142 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b142 as text
%        str2double(get(hObject,'String')) returns contents of b142 as a double
radiacionA14Tiempo2 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA14Tiempo2double = str2double(radiacionA14Tiempo2); %Transformar a formato double
handles.radiacionA14Tiempo2 = radiacionA14Tiempo2double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n



% --- Executes during object creation, after setting all properties.
function b142_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b142 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b132_Callback(hObject, eventdata, handles)
% hObject    handle to b132 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b132 as text
%        str2double(get(hObject,'String')) returns contents of b132 as a double
radiacionA13Tiempo2 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA13Tiempo2double = str2double(radiacionA13Tiempo2); %Transformar a formato double
handles.radiacionA13Tiempo2 = radiacionA13Tiempo2double %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n

% --- Executes during object creation, after setting all properties.
function b132_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b132 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b122_Callback(hObject, eventdata, handles)
% hObject    handle to b122 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b122 as text
%        str2double(get(hObject,'String')) returns contents of b122 as a double
radiacionA12Tiempo2 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA12Tiempo2double = str2double(radiacionA12Tiempo2); %Transformar a formato double
handles.radiacionA12Tiempo2 = radiacionA12Tiempo2double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n



% --- Executes during object creation, after setting all properties.
function b122_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b122 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b112_Callback(hObject, eventdata, handles)
% hObject    handle to b112 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b112 as text
%        str2double(get(hObject,'String')) returns contents of b112 as a double
radiacionA11Tiempo2 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA11Tiempo2double = str2double(radiacionA11Tiempo2); %Transformar a formato double
handles.radiacionA11Tiempo2 = radiacionA11Tiempo2double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n



% --- Executes during object creation, after setting all properties.
function b112_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b112 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a113_Callback(hObject, eventdata, handles)
% hObject    handle to a113 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a113 as text
%        str2double(get(hObject,'String')) returns contents of a113 as a double
radiacionA11Tiempo3 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA11Tiempo3double = str2double(radiacionA11Tiempo3); %Transformar a formato double
handles.radiacionA11Tiempo3 = radiacionA11Tiempo3double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n



% --- Executes during object creation, after setting all properties.
function a113_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a113 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a123_Callback(hObject, eventdata, handles)
% hObject    handle to a123 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a123 as text
%        str2double(get(hObject,'String')) returns contents of a123 as a double
radiacionA12Tiempo3 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA12Tiempo3double = str2double(radiacionA12Tiempo3); %Transformar a formato double
handles.radiacionA12Tiempo3 = radiacionA12Tiempo3double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n

% --- Executes during object creation, after setting all properties.
function a123_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a123 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a133_Callback(hObject, eventdata, handles)
% hObject    handle to a133 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a133 as text
%        str2double(get(hObject,'String')) returns contents of a133 as a double
radiacionA13Tiempo3 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA13Tiempo3double = str2double(radiacionA13Tiempo3); %Transformar a formato double
handles.radiacionA13Tiempo3 = radiacionA13Tiempo3double %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n



% --- Executes during object creation, after setting all properties.
function a133_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a133 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a143_Callback(hObject, eventdata, handles)
% hObject    handle to a143 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a143 as text
%        str2double(get(hObject,'String')) returns contents of a143 as a double
radiacionA14Tiempo3 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA14Tiempo3double = str2double(radiacionA14Tiempo3); %Transformar a formato double
handles.radiacionA14Tiempo3 = radiacionA14Tiempo3double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n



% --- Executes during object creation, after setting all properties.
function a143_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a143 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a153_Callback(hObject, eventdata, handles)
% hObject    handle to a153 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a153 as text
%        str2double(get(hObject,'String')) returns contents of a153 as a double
radiacionA15Tiempo3 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA15Tiempo3double = str2double(radiacionA15Tiempo3); %Transformar a formato double
handles.radiacionA15Tiempo3 = radiacionA15Tiempo3double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n


% --- Executes during object creation, after setting all properties.
function a153_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a153 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a163_Callback(hObject, eventdata, handles)
% hObject    handle to a163 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a163 as text
%        str2double(get(hObject,'String')) returns contents of a163 as a double
radiacionA16Tiempo3 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA16Tiempo3double = str2double(radiacionA16Tiempo3); %Transformar a formato double
handles.radiacionA16Tiempo3 = radiacionA16Tiempo3double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n



% --- Executes during object creation, after setting all properties.
function a163_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a163 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a213_Callback(hObject, eventdata, handles)
% hObject    handle to a213 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a213 as text
%        str2double(get(hObject,'String')) returns contents of a213 as a double
radiacionA21Tiempo3 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA21Tiempo3double = str2double(radiacionA21Tiempo3); %Transformar a formato double
handles.radiacionA21Tiempo3 = radiacionA21Tiempo3double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n


% --- Executes during object creation, after setting all properties.
function a213_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a213 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a223_Callback(hObject, eventdata, handles)
% hObject    handle to a223 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a223 as text
%        str2double(get(hObject,'String')) returns contents of a223 as a double
radiacionA22Tiempo3 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA22Tiempo3double = str2double(radiacionA22Tiempo3); %Transformar a formato double
handles.radiacionA22Tiempo3 = radiacionA22Tiempo3double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n


% --- Executes during object creation, after setting all properties.
function a223_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a223 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a233_Callback(hObject, eventdata, handles)
% hObject    handle to a233 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a233 as text
%        str2double(get(hObject,'String')) returns contents of a233 as a double
radiacionA23Tiempo3 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA23Tiempo3double = str2double(radiacionA23Tiempo3); %Transformar a formato double
handles.radiacionA23Tiempo3 = radiacionA23Tiempo3double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n



% --- Executes during object creation, after setting all properties.
function a233_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a233 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a243_Callback(hObject, eventdata, handles)
% hObject    handle to a243 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a243 as text
%        str2double(get(hObject,'String')) returns contents of a243 as a double

radiacionA24Tiempo3 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA24Tiempo3double = str2double(radiacionA24Tiempo3); %Transformar a formato double
handles.radiacionA24Tiempo3 = radiacionA24Tiempo3double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n



% --- Executes during object creation, after setting all properties.
function a243_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a243 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a253_Callback(hObject, eventdata, handles)
% hObject    handle to a253 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a253 as text
%        str2double(get(hObject,'String')) returns contents of a253 as a double
radiacionA25Tiempo3 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA25Tiempo3double = str2double(radiacionA25Tiempo3); %Transformar a formato double
handles.radiacionA25Tiempo3 = radiacionA25Tiempo3double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n




% --- Executes during object creation, after setting all properties.
function a253_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a253 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a263_Callback(hObject, eventdata, handles)
% hObject    handle to a263 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a263 as text
%        str2double(get(hObject,'String')) returns contents of a263 as a double
radiacionA26Tiempo3 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA26Tiempo3double = str2double(radiacionA26Tiempo3); %Transformar a formato double
handles.radiacionA26Tiempo3 = radiacionA26Tiempo3double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n


% --- Executes during object creation, after setting all properties.
function a263_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a263 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a313_Callback(hObject, eventdata, handles)
% hObject    handle to a313 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a313 as text
%        str2double(get(hObject,'String')) returns contents of a313 as a double
radiacionA31Tiempo3 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA31Tiempo3double = str2double(radiacionA31Tiempo3); %Transformar a formato double
handles.radiacionA31Tiempo3 = radiacionA31Tiempo3double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n


% --- Executes during object creation, after setting all properties.
function a313_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a313 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a323_Callback(hObject, eventdata, handles)
% hObject    handle to a323 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a323 as text
%        str2double(get(hObject,'String')) returns contents of a323 as a double
radiacionA32Tiempo3 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA32Tiempo3double = str2double(radiacionA32Tiempo3); %Transformar a formato double
handles.radiacionA32Tiempo3 = radiacionA32Tiempo3double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n



% --- Executes during object creation, after setting all properties.
function a323_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a323 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a333_Callback(hObject, eventdata, handles)
% hObject    handle to a333 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a333 as text
%        str2double(get(hObject,'String')) returns contents of a333 as a double
radiacionA33Tiempo3 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA33Tiempo3double = str2double(radiacionA33Tiempo3); %Transformar a formato double
handles.radiacionA33Tiempo3 = radiacionA33Tiempo3double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n



% --- Executes during object creation, after setting all properties.
function a333_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a333 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a343_Callback(hObject, eventdata, handles)
% hObject    handle to a343 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a343 as text
%        str2double(get(hObject,'String')) returns contents of a343 as a double
radiacionA34Tiempo3 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA34Tiempo3double = str2double(radiacionA34Tiempo3); %Transformar a formato double
handles.radiacionA34Tiempo3 = radiacionA34Tiempo3double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n


% --- Executes during object creation, after setting all properties.
function a343_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a343 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a353_Callback(hObject, eventdata, handles)
% hObject    handle to a353 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a353 as text
%        str2double(get(hObject,'String')) returns contents of a353 as a double
radiacionA35Tiempo3 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA35Tiempo3double = str2double(radiacionA35Tiempo3); %Transformar a formato double
handles.radiacionA35Tiempo3 = radiacionA35Tiempo3double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n



% --- Executes during object creation, after setting all properties.
function a353_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a353 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a363_Callback(hObject, eventdata, handles)
% hObject    handle to a363 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a363 as text
%        str2double(get(hObject,'String')) returns contents of a363 as a double
radiacionA36Tiempo3 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA36Tiempo3double = str2double(radiacionA36Tiempo3); %Transformar a formato double
handles.radiacionA36Tiempo3 = radiacionA36Tiempo3double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n



% --- Executes during object creation, after setting all properties.
function a363_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a363 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a413_Callback(hObject, eventdata, handles)
% hObject    handle to a413 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a413 as text
%        str2double(get(hObject,'String')) returns contents of a413 as a double
radiacionA41Tiempo3 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA41Tiempo3double = str2double(radiacionA41Tiempo3); %Transformar a formato double
handles.radiacionA41Tiempo3 = radiacionA41Tiempo3double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n


% --- Executes during object creation, after setting all properties.
function a413_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a413 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a423_Callback(hObject, eventdata, handles)
% hObject    handle to a423 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a423 as text
%        str2double(get(hObject,'String')) returns contents of a423 as a double
radiacionA42Tiempo3 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA42Tiempo3double = str2double(radiacionA42Tiempo3); %Transformar a formato double
handles.radiacionA42Tiempo3 = radiacionA42Tiempo3double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n



% --- Executes during object creation, after setting all properties.
function a423_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a423 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a433_Callback(hObject, eventdata, handles)
% hObject    handle to a433 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a433 as text
%        str2double(get(hObject,'String')) returns contents of a433 as a double
radiacionA43Tiempo3 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA43Tiempo3double = str2double(radiacionA43Tiempo3); %Transformar a formato double
handles.radiacionA43Tiempo3 = radiacionA43Tiempo3double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n



% --- Executes during object creation, after setting all properties.
function a433_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a433 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a443_Callback(hObject, eventdata, handles)
% hObject    handle to a443 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a443 as text
%        str2double(get(hObject,'String')) returns contents of a443 as a double
radiacionA44Tiempo3 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA44Tiempo3double = str2double(radiacionA44Tiempo3); %Transformar a formato double
handles.radiacionA44Tiempo3 = radiacionA44Tiempo3double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n



% --- Executes during object creation, after setting all properties.
function a443_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a443 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a453_Callback(hObject, eventdata, handles)
% hObject    handle to a453 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a453 as text
%        str2double(get(hObject,'String')) returns contents of a453 as a double
radiacionA45Tiempo3 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA45Tiempo3double = str2double(radiacionA45Tiempo3); %Transformar a formato double
handles.radiacionA45Tiempo3 = radiacionA45Tiempo3double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n



% --- Executes during object creation, after setting all properties.
function a453_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a453 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a463_Callback(hObject, eventdata, handles)
% hObject    handle to a463 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a463 as text
%        str2double(get(hObject,'String')) returns contents of a463 as a double
radiacionA46Tiempo3 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA46Tiempo3double = str2double(radiacionA46Tiempo3); %Transformar a formato double
handles.radiacionA46Tiempo3 = radiacionA46Tiempo3double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n


% --- Executes during object creation, after setting all properties.
function a463_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a463 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a513_Callback(hObject, eventdata, handles)
% hObject    handle to a513 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a513 as text
%        str2double(get(hObject,'String')) returns contents of a513 as a double
radiacionA51Tiempo3 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA51Tiempo3double = str2double(radiacionA51Tiempo3); %Transformar a formato double
handles.radiacionA51Tiempo3 = radiacionA51Tiempo3double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n



% --- Executes during object creation, after setting all properties.
function a513_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a513 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a523_Callback(hObject, eventdata, handles)
% hObject    handle to a523 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a523 as text
%        str2double(get(hObject,'String')) returns contents of a523 as a double
radiacionA52Tiempo3 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA52Tiempo3double = str2double(radiacionA52Tiempo3); %Transformar a formato double
handles.radiacionA52Tiempo3 = radiacionA52Tiempo3double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n


% --- Executes during object creation, after setting all properties.
function a523_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a523 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a533_Callback(hObject, eventdata, handles)
% hObject    handle to a533 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a533 as text
%        str2double(get(hObject,'String')) returns contents of a533 as a double
radiacionA53Tiempo3 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA53Tiempo3double = str2double(radiacionA53Tiempo3); %Transformar a formato double
handles.radiacionA53Tiempo3 = radiacionA53Tiempo3double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n


% --- Executes during object creation, after setting all properties.
function a533_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a533 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a543_Callback(hObject, eventdata, handles)
% hObject    handle to a543 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a543 as text
%        str2double(get(hObject,'String')) returns contents of a543 as a double
radiacionA54Tiempo3 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA54Tiempo3double = str2double(radiacionA54Tiempo3); %Transformar a formato double
handles.radiacionA54Tiempo3 = radiacionA54Tiempo3double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n



% --- Executes during object creation, after setting all properties.
function a543_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a543 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a553_Callback(hObject, eventdata, handles)
% hObject    handle to a553 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a553 as text
%        str2double(get(hObject,'String')) returns contents of a553 as a double
radiacionA55Tiempo3 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA55Tiempo3double = str2double(radiacionA55Tiempo3); %Transformar a formato double
handles.radiacionA55Tiempo3 = radiacionA55Tiempo3double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n


% --- Executes during object creation, after setting all properties.
function a553_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a553 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a563_Callback(hObject, eventdata, handles)
% hObject    handle to a563 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a563 as text
%        str2double(get(hObject,'String')) returns contents of a563 as a double
radiacionA56Tiempo3 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA56Tiempo3double = str2double(radiacionA56Tiempo3); %Transformar a formato double
handles.radiacionA56Tiempo3 = radiacionA56Tiempo3double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n



% --- Executes during object creation, after setting all properties.
function a563_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a563 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a613_Callback(hObject, eventdata, handles)
% hObject    handle to a613 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a613 as text
%        str2double(get(hObject,'String')) returns contents of a613 as a double
radiacionA61Tiempo3 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA61Tiempo3double = str2double(radiacionA61Tiempo3); %Transformar a formato double
handles.radiacionA61Tiempo3 = radiacionA61Tiempo3double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n


% --- Executes during object creation, after setting all properties.
function a613_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a613 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a623_Callback(hObject, eventdata, handles)
% hObject    handle to a623 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a623 as text
%        str2double(get(hObject,'String')) returns contents of a623 as a double
radiacionA62Tiempo3 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA62Tiempo3double = str2double(radiacionA62Tiempo3); %Transformar a formato double
handles.radiacionA62Tiempo3 = radiacionA62Tiempo3double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n



% --- Executes during object creation, after setting all properties.
function a623_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a623 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a633_Callback(hObject, eventdata, handles)
% hObject    handle to a633 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a633 as text
%        str2double(get(hObject,'String')) returns contents of a633 as a double
radiacionA63Tiempo3 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA63Tiempo3double = str2double(radiacionA63Tiempo3); %Transformar a formato double
handles.radiacionA63Tiempo3 = radiacionA63Tiempo3double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n


% --- Executes during object creation, after setting all properties.
function a633_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a633 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a643_Callback(hObject, eventdata, handles)
% hObject    handle to a643 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a643 as text
%        str2double(get(hObject,'String')) returns contents of a643 as a double
radiacionA64Tiempo3 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA64Tiempo3double = str2double(radiacionA64Tiempo3); %Transformar a formato double
handles.radiacionA64Tiempo3 = radiacionA64Tiempo3double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n


% --- Executes during object creation, after setting all properties.
function a643_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a643 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a653_Callback(hObject, eventdata, handles)
% hObject    handle to a653 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a653 as text
%        str2double(get(hObject,'String')) returns contents of a653 as a double
radiacionA65Tiempo3 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA65Tiempo3double = str2double(radiacionA65Tiempo3); %Transformar a formato double
handles.radiacionA65Tiempo3 = radiacionA65Tiempo3double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n


% --- Executes during object creation, after setting all properties.
function a653_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a653 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a663_Callback(hObject, eventdata, handles)
% hObject    handle to a663 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a663 as text
%        str2double(get(hObject,'String')) returns contents of a663 as a double
radiacionA66Tiempo3 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA66Tiempo3double = str2double(radiacionA66Tiempo3); %Transformar a formato double
handles.radiacionA66Tiempo3 = radiacionA66Tiempo3double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n



% --- Executes during object creation, after setting all properties.
function a663_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a663 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a144_Callback(hObject, eventdata, handles)
% hObject    handle to a144 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a144 as text
%        str2double(get(hObject,'String')) returns contents of a144 as a double
radiacionA14Tiempo4 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA14Tiempo4double = str2double(radiacionA14Tiempo4); %Transformar a formato double
handles.radiacionA14Tiempo4 = radiacionA14Tiempo4double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n



% --- Executes during object creation, after setting all properties.
function a144_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a144 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a664_Callback(hObject, eventdata, handles)
% hObject    handle to a664 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a664 as text
%        str2double(get(hObject,'String')) returns contents of a664 as a double
radiacionA66Tiempo4 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA66Tiempo4double = str2double(radiacionA66Tiempo4); %Transformar a formato double
handles.radiacionA66Tiempo4 = radiacionA66Tiempo4double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n


% --- Executes during object creation, after setting all properties.
function a664_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a664 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a654_Callback(hObject, eventdata, handles)
% hObject    handle to a654 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a654 as text
%        str2double(get(hObject,'String')) returns contents of a654 as a double
radiacionA65Tiempo4 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA65Tiempo4double = str2double(radiacionA65Tiempo4); %Transformar a formato double
handles.radiacionA65Tiempo4 = radiacionA65Tiempo4double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n


% --- Executes during object creation, after setting all properties.
function a654_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a654 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a644_Callback(hObject, eventdata, handles)
% hObject    handle to a644 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a644 as text
%        str2double(get(hObject,'String')) returns contents of a644 as a double
radiacionA64Tiempo4 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA64Tiempo4double = str2double(radiacionA64Tiempo4); %Transformar a formato double
handles.radiacionA64Tiempo4 = radiacionA64Tiempo4double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n



% --- Executes during object creation, after setting all properties.
function a644_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a644 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a634_Callback(hObject, eventdata, handles)
% hObject    handle to a634 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a634 as text
%        str2double(get(hObject,'String')) returns contents of a634 as a double
radiacionA63Tiempo4 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA63Tiempo4double = str2double(radiacionA63Tiempo4); %Transformar a formato double
handles.radiacionA63Tiempo4 = radiacionA63Tiempo4double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n



% --- Executes during object creation, after setting all properties.
function a634_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a634 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a624_Callback(hObject, eventdata, handles)
% hObject    handle to a624 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a624 as text
%        str2double(get(hObject,'String')) returns contents of a624 as a double
radiacionA62Tiempo4 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA62Tiempo4double = str2double(radiacionA62Tiempo4); %Transformar a formato double
handles.radiacionA62Tiempo4 = radiacionA62Tiempo4double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n


% --- Executes during object creation, after setting all properties.
function a624_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a624 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a614_Callback(hObject, eventdata, handles)
% hObject    handle to a614 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a614 as text
%        str2double(get(hObject,'String')) returns contents of a614 as a double
radiacionA61Tiempo4 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA61Tiempo4double = str2double(radiacionA61Tiempo4); %Transformar a formato double
handles.radiacionA61Tiempo4 = radiacionA61Tiempo4double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n



% --- Executes during object creation, after setting all properties.
function a614_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a614 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a564_Callback(hObject, eventdata, handles)
% hObject    handle to a564 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a564 as text
%        str2double(get(hObject,'String')) returns contents of a564 as a double
radiacionA56Tiempo4 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA56Tiempo4double = str2double(radiacionA56Tiempo4); %Transformar a formato double
handles.radiacionA56Tiempo4 = radiacionA56Tiempo4double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n


% --- Executes during object creation, after setting all properties.
function a564_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a564 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a554_Callback(hObject, eventdata, handles)
% hObject    handle to a554 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a554 as text
%        str2double(get(hObject,'String')) returns contents of a554 as a double
radiacionA55Tiempo4 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA55Tiempo4double = str2double(radiacionA55Tiempo4); %Transformar a formato double
handles.radiacionA55Tiempo4 = radiacionA55Tiempo4double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n



% --- Executes during object creation, after setting all properties.
function a554_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a554 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a544_Callback(hObject, eventdata, handles)
% hObject    handle to a544 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a544 as text
%        str2double(get(hObject,'String')) returns contents of a544 as a double
radiacionA54Tiempo4 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA54Tiempo4double = str2double(radiacionA54Tiempo4); %Transformar a formato double
handles.radiacionA54Tiempo4 = radiacionA54Tiempo4double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n



% --- Executes during object creation, after setting all properties.
function a544_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a544 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a534_Callback(hObject, eventdata, handles)
% hObject    handle to a534 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a534 as text
%        str2double(get(hObject,'String')) returns contents of a534 as a double
radiacionA53Tiempo4 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA53Tiempo4double = str2double(radiacionA53Tiempo4); %Transformar a formato double
handles.radiacionA53Tiempo4 = radiacionA53Tiempo4double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n



% --- Executes during object creation, after setting all properties.
function a534_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a534 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a524_Callback(hObject, eventdata, handles)
% hObject    handle to a524 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a524 as text
%        str2double(get(hObject,'String')) returns contents of a524 as a double
radiacionA52Tiempo4 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA52Tiempo4double = str2double(radiacionA52Tiempo4); %Transformar a formato double
handles.radiacionA52Tiempo4 = radiacionA52Tiempo4double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n


% --- Executes during object creation, after setting all properties.
function a524_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a524 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a514_Callback(hObject, eventdata, handles)
% hObject    handle to a514 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a514 as text
%        str2double(get(hObject,'String')) returns contents of a514 as a double
radiacionA51Tiempo4 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA51Tiempo4double = str2double(radiacionA51Tiempo4); %Transformar a formato double
handles.radiacionA51Tiempo4 = radiacionA51Tiempo4double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n


% --- Executes during object creation, after setting all properties.
function a514_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a514 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a464_Callback(hObject, eventdata, handles)
% hObject    handle to a464 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a464 as text
%        str2double(get(hObject,'String')) returns contents of a464 as a double
radiacionA46Tiempo4 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA46Tiempo4double = str2double(radiacionA46Tiempo4); %Transformar a formato double
handles.radiacionA46Tiempo4 = radiacionA46Tiempo4double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n


% --- Executes during object creation, after setting all properties.
function a464_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a464 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a454_Callback(hObject, eventdata, handles)
% hObject    handle to a454 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a454 as text
%        str2double(get(hObject,'String')) returns contents of a454 as a double
radiacionA45Tiempo4 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA45Tiempo4double = str2double(radiacionA45Tiempo4); %Transformar a formato double
handles.radiacionA45Tiempo4 = radiacionA45Tiempo4double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n


% --- Executes during object creation, after setting all properties.
function a454_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a454 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a444_Callback(hObject, eventdata, handles)
% hObject    handle to a444 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a444 as text
%        str2double(get(hObject,'String')) returns contents of a444 as a double
radiacionA44Tiempo4 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA44Tiempo4double = str2double(radiacionA44Tiempo4); %Transformar a formato double
handles.radiacionA44Tiempo4 = radiacionA44Tiempo4double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n



% --- Executes during object creation, after setting all properties.
function a444_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a444 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function edit165_Callback(hObject, eventdata, handles)
% hObject    handle to edit165 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of edit165 as text
%        str2double(get(hObject,'String')) returns contents of edit165 as a double
radiacionA43Tiempo4 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA43Tiempo4double = str2double(radiacionA43Tiempo4); %Transformar a formato double
handles.radiacionA43Tiempo4 = radiacionA43Tiempo4double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n


% --- Executes during object creation, after setting all properties.
function edit165_CreateFcn(hObject, eventdata, handles)
% hObject    handle to edit165 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a424_Callback(hObject, eventdata, handles)
% hObject    handle to a424 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a424 as text
%        str2double(get(hObject,'String')) returns contents of a424 as a double
radiacionA42Tiempo4 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA42Tiempo4double = str2double(radiacionA42Tiempo4); %Transformar a formato double
handles.radiacionA42Tiempo4 = radiacionA42Tiempo4double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n


% --- Executes during object creation, after setting all properties.
function a424_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a424 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a414_Callback(hObject, eventdata, handles)
% hObject    handle to a414 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a414 as text
%        str2double(get(hObject,'String')) returns contents of a414 as a double
radiacionA41Tiempo4 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA41Tiempo4double = str2double(radiacionA41Tiempo4); %Transformar a formato double
handles.radiacionA41Tiempo4 = radiacionA41Tiempo4double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n


% --- Executes during object creation, after setting all properties.
function a414_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a414 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a364_Callback(hObject, eventdata, handles)
% hObject    handle to a364 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a364 as text
%        str2double(get(hObject,'String')) returns contents of a364 as a double
radiacionA36Tiempo4 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA36Tiempo4double = str2double(radiacionA36Tiempo4); %Transformar a formato double
handles.radiacionA36Tiempo4 = radiacionA36Tiempo4double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n


% --- Executes during object creation, after setting all properties.
function a364_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a364 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a354_Callback(hObject, eventdata, handles)
% hObject    handle to a354 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a354 as text
%        str2double(get(hObject,'String')) returns contents of a354 as a double
radiacionA35Tiempo4 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA35Tiempo4double = str2double(radiacionA35Tiempo4); %Transformar a formato double
handles.radiacionA35Tiempo4 = radiacionA35Tiempo4double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n


% --- Executes during object creation, after setting all properties.
function a354_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a354 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a344_Callback(hObject, eventdata, handles)
% hObject    handle to a344 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a344 as text
%        str2double(get(hObject,'String')) returns contents of a344 as a double
radiacionA34Tiempo4 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA34Tiempo4double = str2double(radiacionA34Tiempo4); %Transformar a formato double
handles.radiacionA34Tiempo4 = radiacionA34Tiempo4double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n



% --- Executes during object creation, after setting all properties.
function a344_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a344 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a334_Callback(hObject, eventdata, handles)
% hObject    handle to a334 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a334 as text
%        str2double(get(hObject,'String')) returns contents of a334 as a double
radiacionA33Tiempo4 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA33Tiempo4double = str2double(radiacionA33Tiempo4); %Transformar a formato double
handles.radiacionA33Tiempo4 = radiacionA33Tiempo4double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n



% --- Executes during object creation, after setting all properties.
function a334_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a334 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a324_Callback(hObject, eventdata, handles)
% hObject    handle to a324 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a324 as text
%        str2double(get(hObject,'String')) returns contents of a324 as a double
radiacionA32Tiempo4 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA32Tiempo4double = str2double(radiacionA32Tiempo4); %Transformar a formato double
handles.radiacionA32Tiempo4 = radiacionA32Tiempo4double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n



% --- Executes during object creation, after setting all properties.
function a324_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a324 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a314_Callback(hObject, eventdata, handles)
% hObject    handle to a314 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a314 as text
%        str2double(get(hObject,'String')) returns contents of a314 as a double
radiacionA31Tiempo4 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA31Tiempo4double = str2double(radiacionA31Tiempo4); %Transformar a formato double
handles.radiacionA31Tiempo4 = radiacionA31Tiempo4double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n



% --- Executes during object creation, after setting all properties.
function a314_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a314 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a264_Callback(hObject, eventdata, handles)
% hObject    handle to a264 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a264 as text
%        str2double(get(hObject,'String')) returns contents of a264 as a double
radiacionA26Tiempo4 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA26Tiempo4double = str2double(radiacionA26Tiempo4); %Transformar a formato double
handles.radiacionA26Tiempo4 = radiacionA26Tiempo4double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n



% --- Executes during object creation, after setting all properties.
function a264_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a264 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a254_Callback(hObject, eventdata, handles)
% hObject    handle to a254 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a254 as text
%        str2double(get(hObject,'String')) returns contents of a254 as a double
radiacionA25Tiempo4 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA25Tiempo4double = str2double(radiacionA25Tiempo4); %Transformar a formato double
handles.radiacionA25Tiempo4 = radiacionA25Tiempo4double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n



% --- Executes during object creation, after setting all properties.
function a254_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a254 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a244_Callback(hObject, eventdata, handles)
% hObject    handle to a244 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a244 as text
%        str2double(get(hObject,'String')) returns contents of a244 as a double
radiacionA24Tiempo4 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA24Tiempo4double = str2double(radiacionA24Tiempo4); %Transformar a formato double
handles.radiacionA24Tiempo4 = radiacionA24Tiempo4double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n


% --- Executes during object creation, after setting all properties.
function a244_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a244 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a234_Callback(hObject, eventdata, handles)
% hObject    handle to a234 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a234 as text
%        str2double(get(hObject,'String')) returns contents of a234 as a double
radiacionA23Tiempo4 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA23Tiempo4double = str2double(radiacionA23Tiempo4); %Transformar a formato double
handles.radiacionA23Tiempo4 = radiacionA23Tiempo4double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n



% --- Executes during object creation, after setting all properties.
function a234_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a234 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a224_Callback(hObject, eventdata, handles)
% hObject    handle to a224 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a224 as text
%        str2double(get(hObject,'String')) returns contents of a224 as a double
radiacionA22Tiempo4 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA22Tiempo4double = str2double(radiacionA22Tiempo4); %Transformar a formato double
handles.radiacionA22Tiempo4 = radiacionA22Tiempo4double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n



% --- Executes during object creation, after setting all properties.
function a224_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a224 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a214_Callback(hObject, eventdata, handles)
% hObject    handle to a214 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a214 as text
%        str2double(get(hObject,'String')) returns contents of a214 as a double
radiacionA21Tiempo4 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA21Tiempo4double = str2double(radiacionA21Tiempo4); %Transformar a formato double
handles.radiacionA21Tiempo4 = radiacionA21Tiempo4double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n



% --- Executes during object creation, after setting all properties.
function a214_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a214 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a164_Callback(hObject, eventdata, handles)
% hObject    handle to a164 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a164 as text
%        str2double(get(hObject,'String')) returns contents of a164 as a double
radiacionA16Tiempo4 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA16Tiempo4double = str2double(radiacionA16Tiempo4); %Transformar a formato double
handles.radiacionA16Tiempo4 = radiacionA16Tiempo4double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n


% --- Executes during object creation, after setting all properties.
function a164_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a164 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a154_Callback(hObject, eventdata, handles)
% hObject    handle to a154 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a154 as text
%        str2double(get(hObject,'String')) returns contents of a154 as a double
radiacionA15Tiempo4 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA15Tiempo4double = str2double(radiacionA15Tiempo4); %Transformar a formato double
handles.radiacionA15Tiempo4 = radiacionA15Tiempo4double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n



% --- Executes during object creation, after setting all properties.
function a154_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a154 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a134_Callback(hObject, eventdata, handles)
% hObject    handle to a134 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a134 as text
%        str2double(get(hObject,'String')) returns contents of a134 as a double
radiacionA13Tiempo4 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA13Tiempo4double = str2double(radiacionA13Tiempo4); %Transformar a formato double
handles.radiacionA13Tiempo4 = radiacionA13Tiempo4double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n


% --- Executes during object creation, after setting all properties.
function a134_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a134 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a124_Callback(hObject, eventdata, handles)
% hObject    handle to a124 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a124 as text
%        str2double(get(hObject,'String')) returns contents of a124 as a double
radiacionA12Tiempo4 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA12Tiempo4double = str2double(radiacionA12Tiempo4); %Transformar a formato double
handles.radiacionA12Tiempo4 = radiacionA12Tiempo4double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n



% --- Executes during object creation, after setting all properties.
function a124_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a124 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a114_Callback(hObject, eventdata, handles)
% hObject    handle to a114 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a114 as text
%        str2double(get(hObject,'String')) returns contents of a114 as a double
radiacionA11Tiempo4 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA11Tiempo4double = str2double(radiacionA11Tiempo4); %Transformar a formato double
handles.radiacionA11Tiempo4 = radiacionA11Tiempo4double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n



% --- Executes during object creation, after setting all properties.
function a114_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a114 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a115_Callback(hObject, eventdata, handles)
% hObject    handle to a115 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a115 as text
%        str2double(get(hObject,'String')) returns contents of a115 as a double
radiacionA11Tiempo5 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA11Tiempo5double = str2double(radiacionA11Tiempo5); %Transformar a formato double
handles.radiacionA11Tiempo5 = radiacionA11Tiempo5double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n



% --- Executes during object creation, after setting all properties.
function a115_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a115 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a125_Callback(hObject, eventdata, handles)
% hObject    handle to a125 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a125 as text
%        str2double(get(hObject,'String')) returns contents of a125 as a double
radiacionA12Tiempo5 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA12Tiempo5double = str2double(radiacionA12Tiempo5); %Transformar a formato double
handles.radiacionA12Tiempo5 = radiacionA12Tiempo5double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n



% --- Executes during object creation, after setting all properties.
function a125_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a125 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a135_Callback(hObject, eventdata, handles)
% hObject    handle to a135 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a135 as text
%        str2double(get(hObject,'String')) returns contents of a135 as a double
radiacionA13Tiempo5 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA13Tiempo5double = str2double(radiacionA13Tiempo5); %Transformar a formato double
handles.radiacionA13Tiempo5 = radiacionA13Tiempo5double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n



% --- Executes during object creation, after setting all properties.
function a135_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a135 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a155_Callback(hObject, eventdata, handles)
% hObject    handle to a155 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a155 as text
%        str2double(get(hObject,'String')) returns contents of a155 as a double
radiacionA15Tiempo5 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA15Tiempo5double = str2double(radiacionA15Tiempo5); %Transformar a formato double
handles.radiacionA15Tiempo5 = radiacionA15Tiempo5double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n


% --- Executes during object creation, after setting all properties.
function a155_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a155 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a165_Callback(hObject, eventdata, handles)
% hObject    handle to a165 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a165 as text
%        str2double(get(hObject,'String')) returns contents of a165 as a double
radiacionA16Tiempo5 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA16Tiempo5double = str2double(radiacionA16Tiempo5); %Transformar a formato double
handles.radiacionA16Tiempo5 = radiacionA16Tiempo5double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n



% --- Executes during object creation, after setting all properties.
function a165_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a165 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a215_Callback(hObject, eventdata, handles)
% hObject    handle to a215 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a215 as text
%        str2double(get(hObject,'String')) returns contents of a215 as a double
radiacionA21Tiempo5 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA21Tiempo5double = str2double(radiacionA21Tiempo5); %Transformar a formato double
handles.radiacionA21Tiempo5 = radiacionA21Tiempo5double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n



% --- Executes during object creation, after setting all properties.
function a215_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a215 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a225_Callback(hObject, eventdata, handles)
% hObject    handle to a225 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a225 as text
%        str2double(get(hObject,'String')) returns contents of a225 as a double
radiacionA22Tiempo5 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA22Tiempo5double = str2double(radiacionA22Tiempo5); %Transformar a formato double
handles.radiacionA22Tiempo5 = radiacionA22Tiempo5double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n



% --- Executes during object creation, after setting all properties.
function a225_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a225 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a235_Callback(hObject, eventdata, handles)
% hObject    handle to a235 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a235 as text
%        str2double(get(hObject,'String')) returns contents of a235 as a double
radiacionA23Tiempo5 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA23Tiempo5double = str2double(radiacionA23Tiempo5); %Transformar a formato double
handles.radiacionA23Tiempo5 = radiacionA23Tiempo5double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n



% --- Executes during object creation, after setting all properties.
function a235_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a235 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a245_Callback(hObject, eventdata, handles)
% hObject    handle to a245 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a245 as text
%        str2double(get(hObject,'String')) returns contents of a245 as a double
radiacionA24Tiempo5 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA24Tiempo5double = str2double(radiacionA24Tiempo5); %Transformar a formato double
handles.radiacionA24Tiempo5 = radiacionA24Tiempo5double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n



% --- Executes during object creation, after setting all properties.
function a245_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a245 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a255_Callback(hObject, eventdata, handles)
% hObject    handle to a255 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a255 as text
%        str2double(get(hObject,'String')) returns contents of a255 as a double
radiacionA25Tiempo5 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA25Tiempo5double = str2double(radiacionA25Tiempo5); %Transformar a formato double
handles.radiacionA25Tiempo5 = radiacionA25Tiempo5double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n


% --- Executes during object creation, after setting all properties.
function a255_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a255 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a265_Callback(hObject, eventdata, handles)
% hObject    handle to a265 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a265 as text
%        str2double(get(hObject,'String')) returns contents of a265 as a double
radiacionA26Tiempo5 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA26Tiempo5double = str2double(radiacionA26Tiempo5); %Transformar a formato double
handles.radiacionA26Tiempo5 = radiacionA26Tiempo5double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n



% --- Executes during object creation, after setting all properties.
function a265_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a265 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a315_Callback(hObject, eventdata, handles)
% hObject    handle to a315 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a315 as text
%        str2double(get(hObject,'String')) returns contents of a315 as a double
radiacionA31Tiempo5 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA31Tiempo5double = str2double(radiacionA31Tiempo5); %Transformar a formato double
handles.radiacionA31Tiempo5 = radiacionA31Tiempo5double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n


% --- Executes during object creation, after setting all properties.
function a315_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a315 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a325_Callback(hObject, eventdata, handles)
% hObject    handle to a325 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a325 as text
%        str2double(get(hObject,'String')) returns contents of a325 as a double
radiacionA32Tiempo5 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA32Tiempo5double = str2double(radiacionA32Tiempo5); %Transformar a formato double
handles.radiacionA32Tiempo5 = radiacionA32Tiempo5double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n


% --- Executes during object creation, after setting all properties.
function a325_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a325 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a335_Callback(hObject, eventdata, handles)
% hObject    handle to a335 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a335 as text
%        str2double(get(hObject,'String')) returns contents of a335 as a double
radiacionA33Tiempo5 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA33Tiempo5double = str2double(radiacionA33Tiempo5); %Transformar a formato double
handles.radiacionA33Tiempo5 = radiacionA33Tiempo5double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n


% --- Executes during object creation, after setting all properties.
function a335_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a335 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a345_Callback(hObject, eventdata, handles)
% hObject    handle to a345 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a345 as text
%        str2double(get(hObject,'String')) returns contents of a345 as a double
radiacionA34Tiempo5 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA34Tiempo5double = str2double(radiacionA34Tiempo5); %Transformar a formato double
handles.radiacionA34Tiempo5 = radiacionA34Tiempo5double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n



% --- Executes during object creation, after setting all properties.
function a345_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a345 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a355_Callback(hObject, eventdata, handles)
% hObject    handle to a355 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a355 as text
%        str2double(get(hObject,'String')) returns contents of a355 as a double
radiacionA35Tiempo5 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA35Tiempo5double = str2double(radiacionA35Tiempo5); %Transformar a formato double
handles.radiacionA35Tiempo5 = radiacionA35Tiempo5double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n



% --- Executes during object creation, after setting all properties.
function a355_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a355 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a365_Callback(hObject, eventdata, handles)
% hObject    handle to a365 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a365 as text
%        str2double(get(hObject,'String')) returns contents of a365 as a double
radiacionA36Tiempo5 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA36Tiempo5double = str2double(radiacionA36Tiempo5); %Transformar a formato double
handles.radiacionA36Tiempo5 = radiacionA36Tiempo5double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n


% --- Executes during object creation, after setting all properties.
function a365_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a365 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a415_Callback(hObject, eventdata, handles)
% hObject    handle to a415 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a415 as text
%        str2double(get(hObject,'String')) returns contents of a415 as a double
radiacionA41Tiempo5 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA41Tiempo5double = str2double(radiacionA41Tiempo5); %Transformar a formato double
handles.radiacionA41Tiempo5 = radiacionA41Tiempo5double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n


% --- Executes during object creation, after setting all properties.
function a415_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a415 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a425_Callback(hObject, eventdata, handles)
% hObject    handle to a425 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a425 as text
%        str2double(get(hObject,'String')) returns contents of a425 as a double
radiacionA42Tiempo5 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA42Tiempo5double = str2double(radiacionA42Tiempo5); %Transformar a formato double
handles.radiacionA42Tiempo5 = radiacionA42Tiempo5double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n



% --- Executes during object creation, after setting all properties.
function a425_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a425 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a435_Callback(hObject, eventdata, handles)
% hObject    handle to a435 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a435 as text
%        str2double(get(hObject,'String')) returns contents of a435 as a double
radiacionA43Tiempo5 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA43Tiempo5double = str2double(radiacionA43Tiempo5); %Transformar a formato double
handles.radiacionA43Tiempo5 = radiacionA43Tiempo5double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n


% --- Executes during object creation, after setting all properties.
function a435_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a435 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a445_Callback(hObject, eventdata, handles)
% hObject    handle to a445 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a445 as text
%        str2double(get(hObject,'String')) returns contents of a445 as a double
radiacionA44Tiempo5 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA44Tiempo5double = str2double(radiacionA44Tiempo5); %Transformar a formato double
handles.radiacionA44Tiempo5 = radiacionA44Tiempo5double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n



% --- Executes during object creation, after setting all properties.
function a445_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a445 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a455_Callback(hObject, eventdata, handles)
% hObject    handle to a455 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a455 as text
%        str2double(get(hObject,'String')) returns contents of a455 as a double
radiacionA45Tiempo5 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA45Tiempo5double = str2double(radiacionA45Tiempo5); %Transformar a formato double
handles.radiacionA45Tiempo5 = radiacionA45Tiempo5double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n


% --- Executes during object creation, after setting all properties.
function a455_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a455 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a465_Callback(hObject, eventdata, handles)
% hObject    handle to a465 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a465 as text
%        str2double(get(hObject,'String')) returns contents of a465 as a double
radiacionA46Tiempo5 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA46Tiempo5double = str2double(radiacionA46Tiempo5); %Transformar a formato double
handles.radiacionA46Tiempo5 = radiacionA46Tiempo5double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n



% --- Executes during object creation, after setting all properties.
function a465_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a465 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a515_Callback(hObject, eventdata, handles)
% hObject    handle to a515 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a515 as text
%        str2double(get(hObject,'String')) returns contents of a515 as a double
radiacionA51Tiempo5 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA51Tiempo5double = str2double(radiacionA51Tiempo5); %Transformar a formato double
handles.radiacionA51Tiempo5 = radiacionA51Tiempo5double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n


% --- Executes during object creation, after setting all properties.
function a515_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a515 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a525_Callback(hObject, eventdata, handles)
% hObject    handle to a525 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a525 as text
%        str2double(get(hObject,'String')) returns contents of a525 as a double
radiacionA52Tiempo5 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA52Tiempo5double = str2double(radiacionA52Tiempo5); %Transformar a formato double
handles.radiacionA52Tiempo5 = radiacionA52Tiempo5double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n



% --- Executes during object creation, after setting all properties.
function a525_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a525 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a535_Callback(hObject, eventdata, handles)
% hObject    handle to a535 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a535 as text
%        str2double(get(hObject,'String')) returns contents of a535 as a double
radiacionA53Tiempo5 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA53Tiempo5double = str2double(radiacionA53Tiempo5); %Transformar a formato double
handles.radiacionA53Tiempo5 = radiacionA53Tiempo5double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n


% --- Executes during object creation, after setting all properties.
function a535_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a535 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a545_Callback(hObject, eventdata, handles)
% hObject    handle to a545 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a545 as text
%        str2double(get(hObject,'String')) returns contents of a545 as a double
radiacionA54Tiempo5 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA54Tiempo5double = str2double(radiacionA54Tiempo5); %Transformar a formato double
handles.radiacionA54Tiempo5 = radiacionA54Tiempo5double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n


% --- Executes during object creation, after setting all properties.
function a545_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a545 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a555_Callback(hObject, eventdata, handles)
% hObject    handle to a555 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a555 as text
%        str2double(get(hObject,'String')) returns contents of a555 as a double
radiacionA55Tiempo5 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA55Tiempo5double = str2double(radiacionA55Tiempo5); %Transformar a formato double
handles.radiacionA55Tiempo5 = radiacionA55Tiempo5double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n


% --- Executes during object creation, after setting all properties.
function a555_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a555 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a565_Callback(hObject, eventdata, handles)
% hObject    handle to a565 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a565 as text
%        str2double(get(hObject,'String')) returns contents of a565 as a double
radiacionA56Tiempo5 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA56Tiempo5double = str2double(radiacionA56Tiempo5); %Transformar a formato double
handles.radiacionA56Tiempo5 = radiacionA56Tiempo5double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n


% --- Executes during object creation, after setting all properties.
function a565_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a565 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a615_Callback(hObject, eventdata, handles)
% hObject    handle to a615 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a615 as text
%        str2double(get(hObject,'String')) returns contents of a615 as a double
radiacionA61Tiempo5 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA61Tiempo5double = str2double(radiacionA61Tiempo5); %Transformar a formato double
handles.radiacionA61Tiempo5 = radiacionA61Tiempo5double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n


% --- Executes during object creation, after setting all properties.
function a615_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a615 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a625_Callback(hObject, eventdata, handles)
% hObject    handle to a625 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a625 as text
%        str2double(get(hObject,'String')) returns contents of a625 as a double
radiacionA62Tiempo5 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA62Tiempo5double = str2double(radiacionA62Tiempo5); %Transformar a formato double
handles.radiacionA62Tiempo5 = radiacionA62Tiempo5double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n



% --- Executes during object creation, after setting all properties.
function a625_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a625 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a635_Callback(hObject, eventdata, handles)
% hObject    handle to a635 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a635 as text
%        str2double(get(hObject,'String')) returns contents of a635 as a double
radiacionA63Tiempo5 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA63Tiempo5double = str2double(radiacionA63Tiempo5); %Transformar a formato double
handles.radiacionA63Tiempo5 = radiacionA63Tiempo5double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n


% --- Executes during object creation, after setting all properties.
function a635_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a635 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a645_Callback(hObject, eventdata, handles)
% hObject    handle to a645 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a645 as text
%        str2double(get(hObject,'String')) returns contents of a645 as a double
radiacionA64Tiempo5 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA64Tiempo5double = str2double(radiacionA64Tiempo5); %Transformar a formato double
handles.radiacionA64Tiempo5 = radiacionA64Tiempo5double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n


% --- Executes during object creation, after setting all properties.
function a645_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a645 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a655_Callback(hObject, eventdata, handles)
% hObject    handle to a655 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a655 as text
%        str2double(get(hObject,'String')) returns contents of a655 as a double
radiacionA65Tiempo5 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA65Tiempo5double = str2double(radiacionA65Tiempo5); %Transformar a formato double
handles.radiacionA65Tiempo5 = radiacionA65Tiempo5double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n


% --- Executes during object creation, after setting all properties.
function a655_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a655 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a665_Callback(hObject, eventdata, handles)
% hObject    handle to a665 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a665 as text
%        str2double(get(hObject,'String')) returns contents of a665 as a double
radiacionA66Tiempo5 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA66Tiempo5double = str2double(radiacionA66Tiempo5); %Transformar a formato double
handles.radiacionA66Tiempo5 = radiacionA66Tiempo5double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n


% --- Executes during object creation, after setting all properties.
function a665_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a665 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a145_Callback(hObject, eventdata, handles)
% hObject    handle to a145 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a145 as text
%        str2double(get(hObject,'String')) returns contents of a145 as a double
radiacionA14Tiempo5 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA14Tiempo5double = str2double(radiacionA14Tiempo5); %Transformar a formato double
handles.radiacionA14Tiempo5 = radiacionA14Tiempo5double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n



% --- Executes during object creation, after setting all properties.
function a145_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a145 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a116_Callback(hObject, eventdata, handles)
% hObject    handle to a116 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a116 as text
%        str2double(get(hObject,'String')) returns contents of a116 as a double
radiacionA11Tiempo6 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA11Tiempo6double = str2double(radiacionA11Tiempo6); %Transformar a formato double
handles.radiacionA11Tiempo6 = radiacionA11Tiempo6double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n



% --- Executes during object creation, after setting all properties.
function a116_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a116 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a126_Callback(hObject, eventdata, handles)
% hObject    handle to a126 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a126 as text
%        str2double(get(hObject,'String')) returns contents of a126 as a double
radiacionA12Tiempo6 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA12Tiempo6double = str2double(radiacionA12Tiempo6); %Transformar a formato double
handles.radiacionA12Tiempo6 = radiacionA12Tiempo6double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n


% --- Executes during object creation, after setting all properties.
function a126_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a126 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a136_Callback(hObject, eventdata, handles)
% hObject    handle to a136 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a136 as text
%        str2double(get(hObject,'String')) returns contents of a136 as a double
radiacionA13Tiempo6 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA13Tiempo6double = str2double(radiacionA13Tiempo6); %Transformar a formato double
handles.radiacionA13Tiempo6 = radiacionA13Tiempo6double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n


% --- Executes during object creation, after setting all properties.
function a136_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a136 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a156_Callback(hObject, eventdata, handles)
% hObject    handle to a156 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a156 as text
%        str2double(get(hObject,'String')) returns contents of a156 as a double
radiacionA15Tiempo6 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA15Tiempo6double = str2double(radiacionA15Tiempo6); %Transformar a formato double
handles.radiacionA15Tiempo6 = radiacionA15Tiempo6double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n



% --- Executes during object creation, after setting all properties.
function a156_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a156 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a166_Callback(hObject, eventdata, handles)
% hObject    handle to a166 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a166 as text
%        str2double(get(hObject,'String')) returns contents of a166 as a double
radiacionA16Tiempo6 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA16Tiempo6double = str2double(radiacionA16Tiempo6); %Transformar a formato double
handles.radiacionA16Tiempo6 = radiacionA16Tiempo6double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n


% --- Executes during object creation, after setting all properties.
function a166_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a166 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a216_Callback(hObject, eventdata, handles)
% hObject    handle to a216 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a216 as text
%        str2double(get(hObject,'String')) returns contents of a216 as a double
radiacionA21Tiempo6 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA21Tiempo6double = str2double(radiacionA21Tiempo6); %Transformar a formato double
handles.radiacionA21Tiempo6 = radiacionA21Tiempo6double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n



% --- Executes during object creation, after setting all properties.
function a216_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a216 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a226_Callback(hObject, eventdata, handles)
% hObject    handle to a226 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a226 as text
%        str2double(get(hObject,'String')) returns contents of a226 as a double
radiacionA22Tiempo6 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA22Tiempo6double = str2double(radiacionA22Tiempo6); %Transformar a formato double
handles.radiacionA22Tiempo6 = radiacionA22Tiempo6double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n


% --- Executes during object creation, after setting all properties.
function a226_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a226 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a236_Callback(hObject, eventdata, handles)
% hObject    handle to a236 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a236 as text
%        str2double(get(hObject,'String')) returns contents of a236 as a double
radiacionA23Tiempo6 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA23Tiempo6double = str2double(radiacionA23Tiempo6); %Transformar a formato double
handles.radiacionA23Tiempo6 = radiacionA23Tiempo6double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n



% --- Executes during object creation, after setting all properties.
function a236_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a236 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a246_Callback(hObject, eventdata, handles)
% hObject    handle to a246 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a246 as text
%        str2double(get(hObject,'String')) returns contents of a246 as a double
radiacionA24Tiempo6 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA24Tiempo6double = str2double(radiacionA24Tiempo6); %Transformar a formato double
handles.radiacionA24Tiempo6 = radiacionA24Tiempo6double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n


% --- Executes during object creation, after setting all properties.
function a246_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a246 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a256_Callback(hObject, eventdata, handles)
% hObject    handle to a256 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a256 as text
%        str2double(get(hObject,'String')) returns contents of a256 as a double
radiacionA25Tiempo6 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA25Tiempo6double = str2double(radiacionA25Tiempo6); %Transformar a formato double
handles.radiacionA25Tiempo6 = radiacionA25Tiempo6double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n



% --- Executes during object creation, after setting all properties.
function a256_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a256 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a266_Callback(hObject, eventdata, handles)
% hObject    handle to a266 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a266 as text
%        str2double(get(hObject,'String')) returns contents of a266 as a double
radiacionA26Tiempo6 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA26Tiempo6double = str2double(radiacionA26Tiempo6); %Transformar a formato double
handles.radiacionA26Tiempo6 = radiacionA26Tiempo6double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n



% --- Executes during object creation, after setting all properties.
function a266_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a266 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a316_Callback(hObject, eventdata, handles)
% hObject    handle to a316 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a316 as text
%        str2double(get(hObject,'String')) returns contents of a316 as a double
radiacionA31Tiempo6 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA31Tiempo6double = str2double(radiacionA31Tiempo6); %Transformar a formato double
handles.radiacionA31Tiempo6 = radiacionA31Tiempo6double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n

% --- Executes during object creation, after setting all properties.
function a316_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a316 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a326_Callback(hObject, eventdata, handles)
% hObject    handle to a326 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a326 as text
%        str2double(get(hObject,'String')) returns contents of a326 as a double
radiacionA32Tiempo6 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA32Tiempo6double = str2double(radiacionA32Tiempo6); %Transformar a formato double
handles.radiacionA32Tiempo6 = radiacionA32Tiempo6double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n



% --- Executes during object creation, after setting all properties.
function a326_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a326 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a336_Callback(hObject, eventdata, handles)
% hObject    handle to a336 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a336 as text
%        str2double(get(hObject,'String')) returns contents of a336 as a double
radiacionA33Tiempo6 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA33Tiempo6double = str2double(radiacionA33Tiempo6); %Transformar a formato double
handles.radiacionA33Tiempo6 = radiacionA33Tiempo6double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n



% --- Executes during object creation, after setting all properties.
function a336_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a336 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a346_Callback(hObject, eventdata, handles)
% hObject    handle to a346 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a346 as text
%        str2double(get(hObject,'String')) returns contents of a346 as a double
radiacionA34Tiempo6 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA34Tiempo6double = str2double(radiacionA34Tiempo6); %Transformar a formato double
handles.radiacionA34Tiempo6 = radiacionA34Tiempo6double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n




% --- Executes during object creation, after setting all properties.
function a346_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a346 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a356_Callback(hObject, eventdata, handles)
% hObject    handle to a356 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a356 as text
%        str2double(get(hObject,'String')) returns contents of a356 as a double
radiacionA35Tiempo6 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA35Tiempo6double = str2double(radiacionA35Tiempo6); %Transformar a formato double
handles.radiacionA35Tiempo6 = radiacionA35Tiempo6double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n



% --- Executes during object creation, after setting all properties.
function a356_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a356 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a366_Callback(hObject, eventdata, handles)
% hObject    handle to a366 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a366 as text
%        str2double(get(hObject,'String')) returns contents of a366 as a double
radiacionA36Tiempo6 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA36Tiempo6double = str2double(radiacionA36Tiempo6); %Transformar a formato double
handles.radiacionA36Tiempo6 = radiacionA36Tiempo6double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n



% --- Executes during object creation, after setting all properties.
function a366_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a366 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a416_Callback(hObject, eventdata, handles)
% hObject    handle to a416 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a416 as text
%        str2double(get(hObject,'String')) returns contents of a416 as a double
radiacionA41Tiempo6 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA41Tiempo6double = str2double(radiacionA41Tiempo6); %Transformar a formato double
handles.radiacionA41Tiempo6 = radiacionA41Tiempo6double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n



% --- Executes during object creation, after setting all properties.
function a416_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a416 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a426_Callback(hObject, eventdata, handles)
% hObject    handle to a426 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a426 as text
%        str2double(get(hObject,'String')) returns contents of a426 as a double
radiacionA42Tiempo6 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA42Tiempo6double = str2double(radiacionA42Tiempo6); %Transformar a formato double
handles.radiacionA42Tiempo6 = radiacionA42Tiempo6double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n



% --- Executes during object creation, after setting all properties.
function a426_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a426 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a436_Callback(hObject, eventdata, handles)
% hObject    handle to a436 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a436 as text
%        str2double(get(hObject,'String')) returns contents of a436 as a double
radiacionA43Tiempo6 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA43Tiempo6double = str2double(radiacionA43Tiempo6); %Transformar a formato double
handles.radiacionA43Tiempo6 = radiacionA43Tiempo6double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n




% --- Executes during object creation, after setting all properties.
function a436_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a436 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a446_Callback(hObject, eventdata, handles)
% hObject    handle to a446 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a446 as text
%        str2double(get(hObject,'String')) returns contents of a446 as a double
radiacionA44Tiempo6 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA44Tiempo6double = str2double(radiacionA44Tiempo6); %Transformar a formato double
handles.radiacionA44Tiempo6 = radiacionA44Tiempo6double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n



% --- Executes during object creation, after setting all properties.
function a446_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a446 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a456_Callback(hObject, eventdata, handles)
% hObject    handle to a456 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a456 as text
%        str2double(get(hObject,'String')) returns contents of a456 as a double
radiacionA45Tiempo6 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA45Tiempo6double = str2double(radiacionA45Tiempo6); %Transformar a formato double
handles.radiacionA45Tiempo6 = radiacionA45Tiempo6double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n



% --- Executes during object creation, after setting all properties.
function a456_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a456 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a466_Callback(hObject, eventdata, handles)
% hObject    handle to a466 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a466 as text
%        str2double(get(hObject,'String')) returns contents of a466 as a double
radiacionA46Tiempo6 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA46Tiempo6double = str2double(radiacionA46Tiempo6); %Transformar a formato double
handles.radiacionA46Tiempo6 = radiacionA46Tiempo6double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n



% --- Executes during object creation, after setting all properties.
function a466_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a466 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a516_Callback(hObject, eventdata, handles)
% hObject    handle to a516 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a516 as text
%        str2double(get(hObject,'String')) returns contents of a516 as a double
radiacionA51Tiempo6 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA51Tiempo6double = str2double(radiacionA51Tiempo6); %Transformar a formato double
handles.radiacionA51Tiempo6 = radiacionA51Tiempo6double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n



% --- Executes during object creation, after setting all properties.
function a516_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a516 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a526_Callback(hObject, eventdata, handles)
% hObject    handle to a526 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a526 as text
%        str2double(get(hObject,'String')) returns contents of a526 as a double
radiacionA52Tiempo6 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA52Tiempo6double = str2double(radiacionA52Tiempo6); %Transformar a formato double
handles.radiacionA52Tiempo6 = radiacionA52Tiempo6double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n




% --- Executes during object creation, after setting all properties.
function a526_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a526 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a536_Callback(hObject, eventdata, handles)
% hObject    handle to a536 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a536 as text
%        str2double(get(hObject,'String')) returns contents of a536 as a double
radiacionA53Tiempo6 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA53Tiempo6double = str2double(radiacionA53Tiempo6); %Transformar a formato double
handles.radiacionA53Tiempo6 = radiacionA53Tiempo6double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n



% --- Executes during object creation, after setting all properties.
function a536_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a536 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a546_Callback(hObject, eventdata, handles)
% hObject    handle to a546 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a546 as text
%        str2double(get(hObject,'String')) returns contents of a546 as a double
radiacionA54Tiempo6 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA54Tiempo6double = str2double(radiacionA54Tiempo6); %Transformar a formato double
handles.radiacionA54Tiempo6 = radiacionA54Tiempo6double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n



% --- Executes during object creation, after setting all properties.
function a546_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a546 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a556_Callback(hObject, eventdata, handles)
% hObject    handle to a556 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a556 as text
%        str2double(get(hObject,'String')) returns contents of a556 as a double
radiacionA55Tiempo6 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA55Tiempo6double = str2double(radiacionA55Tiempo6); %Transformar a formato double
handles.radiacionA55Tiempo6 = radiacionA55Tiempo6double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n



% --- Executes during object creation, after setting all properties.
function a556_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a556 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a566_Callback(hObject, eventdata, handles)
% hObject    handle to a566 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a566 as text
%        str2double(get(hObject,'String')) returns contents of a566 as a double
radiacionA56Tiempo6 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA56Tiempo6double = str2double(radiacionA56Tiempo6); %Transformar a formato double
handles.radiacionA56Tiempo6 = radiacionA56Tiempo6double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n



% --- Executes during object creation, after setting all properties.
function a566_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a566 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a616_Callback(hObject, eventdata, handles)
% hObject    handle to a616 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a616 as text
%        str2double(get(hObject,'String')) returns contents of a616 as a double
radiacionA61Tiempo6 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA61Tiempo6double = str2double(radiacionA61Tiempo6); %Transformar a formato double
handles.radiacionA61Tiempo6 = radiacionA61Tiempo6double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n



% --- Executes during object creation, after setting all properties.
function a616_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a616 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a626_Callback(hObject, eventdata, handles)
% hObject    handle to a626 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a626 as text
%        str2double(get(hObject,'String')) returns contents of a626 as a double
radiacionA62Tiempo6 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA62Tiempo6double = str2double(radiacionA62Tiempo6); %Transformar a formato double
handles.radiacionA62Tiempo6 = radiacionA62Tiempo6double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n


% --- Executes during object creation, after setting all properties.
function a626_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a626 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a636_Callback(hObject, eventdata, handles)
% hObject    handle to a636 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a636 as text
%        str2double(get(hObject,'String')) returns contents of a636 as a double
radiacionA63Tiempo6 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA63Tiempo6double = str2double(radiacionA63Tiempo6); %Transformar a formato double
handles.radiacionA63Tiempo6 = radiacionA63Tiempo6double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n



% --- Executes during object creation, after setting all properties.
function a636_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a636 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a646_Callback(hObject, eventdata, handles)
% hObject    handle to a646 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a646 as text
%        str2double(get(hObject,'String')) returns contents of a646 as a double
radiacionA64Tiempo6 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA64Tiempo6double = str2double(radiacionA64Tiempo6); %Transformar a formato double
handles.radiacionA64Tiempo6 = radiacionA64Tiempo6double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n



% --- Executes during object creation, after setting all properties.
function a646_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a646 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a656_Callback(hObject, eventdata, handles)
% hObject    handle to a656 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a656 as text
%        str2double(get(hObject,'String')) returns contents of a656 as a double
radiacionA65Tiempo6 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA65Tiempo6double = str2double(radiacionA65Tiempo6); %Transformar a formato double
handles.radiacionA65Tiempo6 = radiacionA65Tiempo6double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n



% --- Executes during object creation, after setting all properties.
function a656_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a656 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a666_Callback(hObject, eventdata, handles)
% hObject    handle to a666 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a666 as text
%        str2double(get(hObject,'String')) returns contents of a666 as a double
radiacionA66Tiempo6 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA66Tiempo6double = str2double(radiacionA66Tiempo6); %Transformar a formato double
handles.radiacionA66Tiempo6 = radiacionA66Tiempo6double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n



% --- Executes during object creation, after setting all properties.
function a666_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a666 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a146_Callback(hObject, eventdata, handles)
% hObject    handle to a146 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a146 as text
%        str2double(get(hObject,'String')) returns contents of a146 as a double
radiacionA14Tiempo6 = get(hObject,'String'); %Almacenar valor ingresado
radiacionA14Tiempo6double = str2double(radiacionA14Tiempo6); %Transformar a formato double
handles.radiacionA14Tiempo6 = radiacionA14Tiempo6double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n



% --- Executes during object creation, after setting all properties.
function a146_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a146 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end


% --- Executes on button press in Simular.
function Simular_Callback(hObject, eventdata, handles)
% hObject    handle to Simular (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
[ArrayTension,ArrayCorriente,ArrayPotencia] = GeneradorCurvasSombrasParciales (handles)

guidata(hObject,handles); %Salvar datos de la aplicaci�n


function CantidadDeTransiciones_Callback(hObject, eventdata, handles)
% hObject    handle to CantidadDeTransiciones (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of CantidadDeTransiciones as text
%        str2double(get(hObject,'String')) returns contents of CantidadDeTransiciones as a double
cantidadTransiciones = get(hObject,'String'); %Almacenar valor ingresado
cantidadTransicionesdouble = str2double(cantidadTransiciones); %Transformar a formato double
handles.cantidadTransiciones = cantidadTransicionesdouble; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicaci�n



% --- Executes during object creation, after setting all properties.
function CantidadDeTransiciones_CreateFcn(hObject, eventdata, handles)
% hObject    handle to CantidadDeTransiciones (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end