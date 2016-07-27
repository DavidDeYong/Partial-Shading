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

% Last Modified by GUIDE v2.5 05-Jul-2016 11:21:35

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
% Update handles structure
handles.flagTemperatura = 0;
handles.temperaturaB11Tiempo1 = 25;
handles.temperaturaB12Tiempo1 = 25;
handles.temperaturaB13Tiempo1 = 25;
handles.temperaturaB14Tiempo1 = 25;
handles.temperaturaB15Tiempo1 = 25;
handles.temperaturaB16Tiempo1 = 25;
handles.temperaturaB21Tiempo1 = 25;
handles.temperaturaB22Tiempo1 = 25;
handles.temperaturaB23Tiempo1 = 25;
handles.temperaturaB24Tiempo1 = 25;
handles.temperaturaB25Tiempo1 = 25;
handles.temperaturaB26Tiempo1 = 25;
handles.temperaturaB31Tiempo1 = 25;
handles.temperaturaB32Tiempo1 = 25;
handles.temperaturaB33Tiempo1 = 25;
handles.temperaturaB34Tiempo1 = 25;
handles.temperaturaB35Tiempo1 = 25;
handles.temperaturaB36Tiempo1 = 25;
handles.temperaturaB41Tiempo1 = 25;
handles.temperaturaB42Tiempo1 = 25;
handles.temperaturaB43Tiempo1 = 25;
handles.temperaturaB44Tiempo1 = 25;
handles.temperaturaB45Tiempo1 = 25;
handles.temperaturaB46Tiempo1 = 25;
handles.temperaturaB51Tiempo1 = 25;
handles.temperaturaB52Tiempo1 = 25;
handles.temperaturaB53Tiempo1 = 25;
handles.temperaturaB54Tiempo1 = 25;
handles.temperaturaB55Tiempo1 = 25;
handles.temperaturaB56Tiempo1 = 25;
handles.temperaturaB61Tiempo1 = 25;
handles.temperaturaB62Tiempo1 = 25;
handles.temperaturaB63Tiempo1 = 25;
handles.temperaturaB64Tiempo1 = 25;
handles.temperaturaB65Tiempo1 = 25;
handles.temperaturaB66Tiempo1 = 25;
handles.temperaturaB11Tiempo2 = 25;
handles.temperaturaB12Tiempo2 = 25;
handles.temperaturaB13Tiempo2 = 25;
handles.temperaturaB14Tiempo2 = 25;
handles.temperaturaB15Tiempo2 = 25;
handles.temperaturaB16Tiempo2 = 25;
handles.temperaturaB21Tiempo2 = 25;
handles.temperaturaB22Tiempo2 = 25;
handles.temperaturaB23Tiempo2 = 25;
handles.temperaturaB24Tiempo2 = 25;
handles.temperaturaB25Tiempo2 = 25;
handles.temperaturaB26Tiempo2 = 25;
handles.temperaturaB31Tiempo2 = 25;
handles.temperaturaB32Tiempo2 = 25;
handles.temperaturaB33Tiempo2 = 25;
handles.temperaturaB34Tiempo2 = 25;
handles.temperaturaB35Tiempo2 = 25;
handles.temperaturaB36Tiempo2 = 25;
handles.temperaturaB41Tiempo2 = 25;
handles.temperaturaB42Tiempo2 = 25;
handles.temperaturaB43Tiempo2 = 25;
handles.temperaturaB44Tiempo2 = 25;
handles.temperaturaB45Tiempo2 = 25;
handles.temperaturaB46Tiempo2 = 25;
handles.temperaturaB51Tiempo2 = 25;
handles.temperaturaB52Tiempo2 = 25;
handles.temperaturaB53Tiempo2 = 25;
handles.temperaturaB54Tiempo2 = 25;
handles.temperaturaB55Tiempo2 = 25;
handles.temperaturaB56Tiempo2 = 25;
handles.temperaturaB61Tiempo2 = 25;
handles.temperaturaB62Tiempo2 = 25;
handles.temperaturaB63Tiempo2 = 25;
handles.temperaturaB64Tiempo2 = 25;
handles.temperaturaB65Tiempo2 = 25;
handles.temperaturaB66Tiempo2 = 25;
handles.temperaturaB11Tiempo3 = 25;
handles.temperaturaB12Tiempo3 = 25;
handles.temperaturaB13Tiempo3 = 25;
handles.temperaturaB14Tiempo3 = 25;
handles.temperaturaB15Tiempo3 = 25;
handles.temperaturaB16Tiempo3 = 25;
handles.temperaturaB21Tiempo3 = 25;
handles.temperaturaB22Tiempo3 = 25;
handles.temperaturaB23Tiempo3 = 25;
handles.temperaturaB24Tiempo3 = 25;
handles.temperaturaB25Tiempo3 = 25;
handles.temperaturaB26Tiempo3 = 25;
handles.temperaturaB31Tiempo3 = 25;
handles.temperaturaB32Tiempo3 = 25;
handles.temperaturaB33Tiempo3 = 25;
handles.temperaturaB34Tiempo3 = 25;
handles.temperaturaB35Tiempo3 = 25;
handles.temperaturaB36Tiempo3 = 25;
handles.temperaturaB41Tiempo3 = 25;
handles.temperaturaB42Tiempo3 = 25;
handles.temperaturaB43Tiempo3 = 25;
handles.temperaturaB44Tiempo3 = 25;
handles.temperaturaB45Tiempo3 = 25;
handles.temperaturaB46Tiempo3 = 25;
handles.temperaturaB51Tiempo3 = 25;
handles.temperaturaB52Tiempo3 = 25;
handles.temperaturaB53Tiempo3 = 25;
handles.temperaturaB54Tiempo3 = 25;
handles.temperaturaB55Tiempo3 = 25;
handles.temperaturaB56Tiempo3 = 25;
handles.temperaturaB61Tiempo3 = 25;
handles.temperaturaB62Tiempo3 = 25;
handles.temperaturaB63Tiempo3 = 25;
handles.temperaturaB64Tiempo3 = 25;
handles.temperaturaB65Tiempo3 = 25;
handles.temperaturaB66Tiempo3 = 25;
handles.temperaturaB11Tiempo4 = 25;
handles.temperaturaB12Tiempo4 = 25;
handles.temperaturaB13Tiempo4 = 25;
handles.temperaturaB14Tiempo4 = 25;
handles.temperaturaB15Tiempo4 = 25;
handles.temperaturaB16Tiempo4 = 25;
handles.temperaturaB21Tiempo4 = 25;
handles.temperaturaB22Tiempo4 = 25;
handles.temperaturaB23Tiempo4 = 25;
handles.temperaturaB24Tiempo4 = 25;
handles.temperaturaB25Tiempo4 = 25;
handles.temperaturaB26Tiempo4 = 25;
handles.temperaturaB31Tiempo4 = 25;
handles.temperaturaB32Tiempo4 = 25;
handles.temperaturaB33Tiempo4 = 25;
handles.temperaturaB34Tiempo4 = 25;
handles.temperaturaB35Tiempo4 = 25;
handles.temperaturaB36Tiempo4 = 25;
handles.temperaturaB41Tiempo4 = 25;
handles.temperaturaB42Tiempo4 = 25;
handles.temperaturaB43Tiempo4 = 25;
handles.temperaturaB44Tiempo4 = 25;
handles.temperaturaB45Tiempo4 = 25;
handles.temperaturaB46Tiempo4 = 25;
handles.temperaturaB51Tiempo4 = 25;
handles.temperaturaB52Tiempo4 = 25;
handles.temperaturaB53Tiempo4 = 25;
handles.temperaturaB54Tiempo4 = 25;
handles.temperaturaB55Tiempo4 = 25;
handles.temperaturaB56Tiempo4 = 25;
handles.temperaturaB61Tiempo4 = 25;
handles.temperaturaB62Tiempo4 = 25;
handles.temperaturaB63Tiempo4 = 25;
handles.temperaturaB64Tiempo4 = 25;
handles.temperaturaB65Tiempo4 = 25;
handles.temperaturaB66Tiempo4 = 25;
handles.temperaturaB11Tiempo5 = 25;
handles.temperaturaB12Tiempo5 = 25;
handles.temperaturaB13Tiempo5 = 25;
handles.temperaturaB14Tiempo5 = 25;
handles.temperaturaB15Tiempo5 = 25;
handles.temperaturaB16Tiempo5 = 25;
handles.temperaturaB21Tiempo5 = 25;
handles.temperaturaB22Tiempo5 = 25;
handles.temperaturaB23Tiempo5 = 25;
handles.temperaturaB24Tiempo5 = 25;
handles.temperaturaB25Tiempo5 = 25;
handles.temperaturaB26Tiempo5 = 25;
handles.temperaturaB31Tiempo5 = 25;
handles.temperaturaB32Tiempo5 = 25;
handles.temperaturaB33Tiempo5 = 25;
handles.temperaturaB34Tiempo5 = 25;
handles.temperaturaB35Tiempo5 = 25;
handles.temperaturaB36Tiempo5 = 25;
handles.temperaturaB41Tiempo5 = 25;
handles.temperaturaB42Tiempo5 = 25;
handles.temperaturaB43Tiempo5 = 25;
handles.temperaturaB44Tiempo5 = 25;
handles.temperaturaB45Tiempo5 = 25;
handles.temperaturaB46Tiempo5 = 25;
handles.temperaturaB51Tiempo5 = 25;
handles.temperaturaB52Tiempo5 = 25;
handles.temperaturaB53Tiempo5 = 25;
handles.temperaturaB54Tiempo5 = 25;
handles.temperaturaB55Tiempo5 = 25;
handles.temperaturaB56Tiempo5 = 25;
handles.temperaturaB61Tiempo5 = 25;
handles.temperaturaB62Tiempo5 = 25;
handles.temperaturaB63Tiempo5 = 25;
handles.temperaturaB64Tiempo5 = 25;
handles.temperaturaB65Tiempo5 = 25;
handles.temperaturaB66Tiempo5 = 25;
handles.temperaturaB11Tiempo6 = 25;
handles.temperaturaB12Tiempo6 = 25;
handles.temperaturaB13Tiempo6 = 25;
handles.temperaturaB14Tiempo6 = 25;
handles.temperaturaB15Tiempo6 = 25;
handles.temperaturaB16Tiempo6 = 25;
handles.temperaturaB21Tiempo6 = 25;
handles.temperaturaB22Tiempo6 = 25;
handles.temperaturaB23Tiempo6 = 25;
handles.temperaturaB24Tiempo6 = 25;
handles.temperaturaB25Tiempo6 = 25;
handles.temperaturaB26Tiempo6 = 25;
handles.temperaturaB31Tiempo6 = 25;
handles.temperaturaB32Tiempo6 = 25;
handles.temperaturaB33Tiempo6 = 25;
handles.temperaturaB34Tiempo6 = 25;
handles.temperaturaB35Tiempo6 = 25;
handles.temperaturaB36Tiempo6 = 25;
handles.temperaturaB41Tiempo6 = 25;
handles.temperaturaB42Tiempo6 = 25;
handles.temperaturaB43Tiempo6 = 25;
handles.temperaturaB44Tiempo6 = 25;
handles.temperaturaB45Tiempo6 = 25;
handles.temperaturaB46Tiempo6 = 25;
handles.temperaturaB51Tiempo6 = 25;
handles.temperaturaB52Tiempo6 = 25;
handles.temperaturaB53Tiempo6 = 25;
handles.temperaturaB54Tiempo6 = 25;
handles.temperaturaB55Tiempo6 = 25;
handles.temperaturaB56Tiempo6 = 25;
handles.temperaturaB61Tiempo6 = 25;
handles.temperaturaB62Tiempo6 = 25;
handles.temperaturaB63Tiempo6 = 25;
handles.temperaturaB64Tiempo6 = 25;
handles.temperaturaB65Tiempo6 = 25;
handles.temperaturaB66Tiempo6 = 25;
handles.temperaturaPanelTiempo1 = 25;
handles.temperaturaPanelTiempo2 = 25;
handles.temperaturaPanelTiempo3 = 25;
handles.temperaturaPanelTiempo4 = 25;
handles.temperaturaPanelTiempo5 = 25;
handles.temperaturaPanelTiempo6 = 25;
handles.activacionTemperaturaTransicion1 = 0;
handles.activacionTemperaturaTransicion2 = 0;
handles.activacionTemperaturaTransicion3 = 0;
handles.activacionTemperaturaTransicion4 = 0;
handles.activacionTemperaturaTransicion5 = 0;
handles.activacionTemperaturaTransicion6 = 0;
setappdata(0,'flagTemperatura',handles.flagTemperatura);
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
temperaturaB11Tiempo1 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB11Tiempo1double = str2double(temperaturaB11Tiempo1); %Transformar a formato double
handles.temperaturaB11Tiempo1 = temperaturaB11Tiempo1double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación



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
temperaturaB12Tiempo1 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB12Tiempo1double = str2double(temperaturaB12Tiempo1); %Transformar a formato double
handles.temperaturaB12Tiempo1 = temperaturaB12Tiempo1double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación


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
temperaturaB13Tiempo1 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB13Tiempo1double = str2double(temperaturaB13Tiempo1); %Transformar a formato double
handles.temperaturaB13Tiempo1 = temperaturaB13Tiempo1double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación


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
temperaturaB14Tiempo1 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB14Tiempo1double = str2double(temperaturaB14Tiempo1); %Transformar a formato double
handles.temperaturaB14Tiempo1 = temperaturaB14Tiempo1double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación


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
temperaturaB15Tiempo1 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB15Tiempo1double = str2double(temperaturaB15Tiempo1); %Transformar a formato double
handles.temperaturaB15Tiempo1 = temperaturaB15Tiempo1double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación



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
temperaturaB16Tiempo1 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB16Tiempo1double = str2double(temperaturaB16Tiempo1); %Transformar a formato double
handles.temperaturaB16Tiempo1 = temperaturaB16Tiempo1double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación



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
temperaturaB21Tiempo1 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB21Tiempo1double = str2double(temperaturaB21Tiempo1); %Transformar a formato double
handles.temperaturaB21Tiempo1 = temperaturaB21Tiempo1double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación


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
temperaturaB22Tiempo1 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB22Tiempo1double = str2double(temperaturaB22Tiempo1); %Transformar a formato double
handles.temperaturaB22Tiempo1 = temperaturaB22Tiempo1double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación


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
temperaturaB23Tiempo1 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB23Tiempo1double = str2double(temperaturaB23Tiempo1); %Transformar a formato double
handles.temperaturaB23Tiempo1 = temperaturaB23Tiempo1double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación


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
temperaturaB24Tiempo1 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB24Tiempo1double = str2double(temperaturaB24Tiempo1); %Transformar a formato double
handles.temperaturaB24Tiempo1 = temperaturaB24Tiempo1double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación

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
temperaturaB25Tiempo1 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB25Tiempo1double = str2double(temperaturaB25Tiempo1); %Transformar a formato double
handles.temperaturaB25Tiempo1 = temperaturaB25Tiempo1double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación

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
temperaturaB26Tiempo1 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB26Tiempo1double = str2double(temperaturaB26Tiempo1); %Transformar a formato double
handles.temperaturaB26Tiempo1 = temperaturaB26Tiempo1double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación

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
temperaturaB31Tiempo1 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB31Tiempo1double = str2double(temperaturaB31Tiempo1); %Transformar a formato double
handles.temperaturaB31Tiempo1 = temperaturaB31Tiempo1double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación

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
temperaturaB32Tiempo1 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB32Tiempo1double = str2double(temperaturaB32Tiempo1); %Transformar a formato double
handles.temperaturaB32Tiempo1 = temperaturaB32Tiempo1double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación

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
temperaturaB33Tiempo1 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB33Tiempo1double = str2double(temperaturaB33Tiempo1); %Transformar a formato double
handles.temperaturaB33Tiempo1 = temperaturaB33Tiempo1double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación

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
temperaturaB34Tiempo1 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB34Tiempo1double = str2double(temperaturaB34Tiempo1); %Transformar a formato double
handles.temperaturaB34Tiempo1 = temperaturaB34Tiempo1double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación


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
temperaturaB35Tiempo1 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB35Tiempo1double = str2double(temperaturaB35Tiempo1); %Transformar a formato double
handles.temperaturaB35Tiempo1 = temperaturaB35Tiempo1double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación


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
temperaturaB36Tiempo1 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB36Tiempo1double = str2double(temperaturaB36Tiempo1); %Transformar a formato double
handles.temperaturaB36Tiempo1 = temperaturaB36Tiempo1double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación

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
temperaturaB41Tiempo1 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB41Tiempo1double = str2double(temperaturaB41Tiempo1); %Transformar a formato double
handles.temperaturaB41Tiempo1 = temperaturaB41Tiempo1double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación

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
temperaturaB42Tiempo1 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB42Tiempo1double = str2double(temperaturaB42Tiempo1); %Transformar a formato double
handles.temperaturaB42Tiempo1 = temperaturaB42Tiempo1double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación

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
temperaturaB43Tiempo1 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB43Tiempo1double = str2double(temperaturaB43Tiempo1); %Transformar a formato double
handles.temperaturaB43Tiempo1 = temperaturaB43Tiempo1double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación


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
temperaturaB44Tiempo1 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB44Tiempo1double = str2double(temperaturaB44Tiempo1); %Transformar a formato double
handles.temperaturaB44Tiempo1 = temperaturaB44Tiempo1double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación


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
temperaturaB45Tiempo1 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB45Tiempo1double = str2double(temperaturaB45Tiempo1); %Transformar a formato double
handles.temperaturaB45Tiempo1 = temperaturaB45Tiempo1double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación

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
temperaturaB46Tiempo1 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB46Tiempo1double = str2double(temperaturaB46Tiempo1); %Transformar a formato double
handles.temperaturaB46Tiempo1 = temperaturaB46Tiempo1double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación

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
temperaturaB51Tiempo1 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB51Tiempo1double = str2double(temperaturaB51Tiempo1); %Transformar a formato double
handles.temperaturaB51Tiempo1 = temperaturaB51Tiempo1double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación

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
temperaturaB52Tiempo1 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB52Tiempo1double = str2double(temperaturaB52Tiempo1); %Transformar a formato double
handles.temperaturaB52Tiempo1 = temperaturaB52Tiempo1double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación

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
temperaturaB53Tiempo1 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB53Tiempo1double = str2double(temperaturaB53Tiempo1); %Transformar a formato double
handles.temperaturaB53Tiempo1 = temperaturaB53Tiempo1double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación

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
temperaturaB54Tiempo1 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB54Tiempo1double = str2double(temperaturaB54Tiempo1); %Transformar a formato double
handles.temperaturaB54Tiempo1 = temperaturaB54Tiempo1double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación


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
temperaturaB55Tiempo1 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB55Tiempo1double = str2double(temperaturaB55Tiempo1); %Transformar a formato double
handles.temperaturaB55Tiempo1 = temperaturaB55Tiempo1double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación


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
temperaturaB56Tiempo1 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB56Tiempo1double = str2double(temperaturaB56Tiempo1); %Transformar a formato double
handles.temperaturaB56Tiempo1 = temperaturaB56Tiempo1double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación


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
temperaturaB61Tiempo1 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB61Tiempo1double = str2double(temperaturaB61Tiempo1); %Transformar a formato double
handles.temperaturaB61Tiempo1 = temperaturaB61Tiempo1double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación


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
temperaturaB62Tiempo1 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB62Tiempo1double = str2double(temperaturaB62Tiempo1); %Transformar a formato double
handles.temperaturaB62Tiempo1 = temperaturaB62Tiempo1double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación


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
temperaturaB63Tiempo1 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB63Tiempo1double = str2double(temperaturaB63Tiempo1); %Transformar a formato double
handles.temperaturaB63Tiempo1 = temperaturaB63Tiempo1double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación

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
temperaturaB64Tiempo1 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB64Tiempo1double = str2double(temperaturaB64Tiempo1); %Transformar a formato double
handles.temperaturaB64Tiempo1 = temperaturaB64Tiempo1double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación

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
temperaturaB65Tiempo1 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB65Tiempo1double = str2double(temperaturaB65Tiempo1); %Transformar a formato double
handles.temperaturaB65Tiempo1 = temperaturaB65Tiempo1double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación

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
temperaturaB66Tiempo1 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB66Tiempo1double = str2double(temperaturaB66Tiempo1); %Transformar a formato double
handles.temperaturaB66Tiempo1 = temperaturaB66Tiempo1double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación

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
temperaturaB66Tiempo2 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB66Tiempo2double = str2double(temperaturaB66Tiempo2); %Transformar a formato double
handles.temperaturaB66Tiempo2 = temperaturaB66Tiempo2double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación


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
temperaturaB65Tiempo2 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB65Tiempo2double = str2double(temperaturaB65Tiempo2); %Transformar a formato double
handles.temperaturaB65Tiempo2 = temperaturaB65Tiempo2double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación


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
temperaturaB64Tiempo2 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB64Tiempo2double = str2double(temperaturaB64Tiempo2); %Transformar a formato double
handles.temperaturaB64Tiempo2 = temperaturaB64Tiempo2double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación


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
temperaturaB63Tiempo2 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB63Tiempo2double = str2double(temperaturaB63Tiempo2); %Transformar a formato double
handles.temperaturaB63Tiempo2 = temperaturaB63Tiempo2double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación


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
temperaturaB62Tiempo2 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB62Tiempo2double = str2double(temperaturaB62Tiempo2); %Transformar a formato double
handles.temperaturaB62Tiempo2 = temperaturaB62Tiempo2double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación


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
temperaturaB61Tiempo2 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB61Tiempo2double = str2double(temperaturaB61Tiempo2); %Transformar a formato double
handles.temperaturaB61Tiempo2 = temperaturaB61Tiempo2double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación



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
temperaturaB56Tiempo2 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB56Tiempo2double = str2double(temperaturaB56Tiempo2); %Transformar a formato double
handles.temperaturaB56Tiempo2 = temperaturaB56Tiempo2double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación



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
temperaturaB55Tiempo2 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB55Tiempo2double = str2double(temperaturaB55Tiempo2); %Transformar a formato double
handles.temperaturaB55Tiempo2 = temperaturaB55Tiempo2double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación

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
temperaturaB54Tiempo2 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB54Tiempo2double = str2double(temperaturaB54Tiempo2); %Transformar a formato double
handles.temperaturaB54Tiempo2 = temperaturaB54Tiempo2double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación


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
temperaturaB53Tiempo2 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB53Tiempo2double = str2double(temperaturaB53Tiempo2); %Transformar a formato double
handles.temperaturaB53Tiempo2 = temperaturaB53Tiempo2double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación


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
temperaturaB52Tiempo2 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB52Tiempo2double = str2double(temperaturaB52Tiempo2); %Transformar a formato double
handles.temperaturaB52Tiempo2 = temperaturaB52Tiempo2double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación



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
temperaturaB51Tiempo2 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB51Tiempo2double = str2double(temperaturaB51Tiempo2); %Transformar a formato double
handles.temperaturaB51Tiempo2 = temperaturaB51Tiempo2double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación


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
temperaturaB46Tiempo2 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB46Tiempo2double = str2double(temperaturaB46Tiempo2); %Transformar a formato double
handles.temperaturaB46Tiempo2 = temperaturaB46Tiempo2double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación

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
temperaturaB45Tiempo2 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB45Tiempo2double = str2double(temperaturaB45Tiempo2); %Transformar a formato double
handles.temperaturaB45Tiempo2 = temperaturaB45Tiempo2double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación

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
temperaturaB44Tiempo2 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB44Tiempo2double = str2double(temperaturaB44Tiempo2); %Transformar a formato double
handles.temperaturaB44Tiempo2 = temperaturaB44Tiempo2double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación

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
temperaturaB43Tiempo2 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB43Tiempo2double = str2double(temperaturaB43Tiempo2); %Transformar a formato double
handles.temperaturaB43Tiempo2 = temperaturaB43Tiempo2double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación

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
temperaturaB42Tiempo2 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB42Tiempo2double = str2double(temperaturaB42Tiempo2); %Transformar a formato double
handles.temperaturaB42Tiempo2 = temperaturaB42Tiempo2double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación


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
temperaturaB41Tiempo2 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB41Tiempo2double = str2double(temperaturaB41Tiempo2); %Transformar a formato double
handles.temperaturaB41Tiempo2 = temperaturaB41Tiempo2double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación

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
temperaturaB36Tiempo2 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB36Tiempo2double = str2double(temperaturaB36Tiempo2); %Transformar a formato double
handles.temperaturaB36Tiempo2 = temperaturaB36Tiempo2double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación


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
temperaturaB35Tiempo2 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB35Tiempo2double = str2double(temperaturaB35Tiempo2); %Transformar a formato double
handles.temperaturaB35Tiempo2 = temperaturaB35Tiempo2double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación

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
temperaturaB34Tiempo2 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB34Tiempo2double = str2double(temperaturaB34Tiempo2); %Transformar a formato double
handles.temperaturaB34Tiempo2 = temperaturaB34Tiempo2double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación


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
temperaturaB33Tiempo2 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB33Tiempo2double = str2double(temperaturaB33Tiempo2); %Transformar a formato double
handles.temperaturaB33Tiempo2 = temperaturaB33Tiempo2double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación


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
temperaturaB32Tiempo2 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB32Tiempo2double = str2double(temperaturaB32Tiempo2); %Transformar a formato double
handles.temperaturaB32Tiempo2 = temperaturaB32Tiempo2double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación

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
temperaturaB31Tiempo2 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB31Tiempo2double = str2double(temperaturaB31Tiempo2); %Transformar a formato double
handles.temperaturaB31Tiempo2 = temperaturaB31Tiempo2double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación

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
temperaturaB26Tiempo2 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB26Tiempo2double = str2double(temperaturaB26Tiempo2); %Transformar a formato double
handles.temperaturaB26Tiempo2 = temperaturaB26Tiempo2double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación

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
temperaturaB25Tiempo2 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB25Tiempo2double = str2double(temperaturaB25Tiempo2); %Transformar a formato double
handles.temperaturaB25Tiempo2 = temperaturaB25Tiempo2double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación


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
temperaturaB24Tiempo2 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB24Tiempo2double = str2double(temperaturaB24Tiempo2); %Transformar a formato double
handles.temperaturaB24Tiempo2 = temperaturaB24Tiempo2double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación


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
temperaturaB23Tiempo2 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB23Tiempo2double = str2double(temperaturaB23Tiempo2); %Transformar a formato double
handles.temperaturaB23Tiempo2 = temperaturaB23Tiempo2double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación

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
temperaturaB22Tiempo2 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB22Tiempo2double = str2double(temperaturaB22Tiempo2); %Transformar a formato double
handles.temperaturaB22Tiempo2 = temperaturaB22Tiempo2double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación

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
temperaturaB21Tiempo2 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB21Tiempo2double = str2double(temperaturaB21Tiempo2); %Transformar a formato double
handles.temperaturaB21Tiempo2 = temperaturaB21Tiempo2double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación

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
temperaturaB16Tiempo2 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB16Tiempo2double = str2double(temperaturaB16Tiempo2); %Transformar a formato double
handles.temperaturaB16Tiempo2 = temperaturaB16Tiempo2double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación

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
temperaturaB15Tiempo2 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB15Tiempo2double = str2double(temperaturaB15Tiempo2); %Transformar a formato double
handles.temperaturaB15Tiempo2 = temperaturaB15Tiempo2double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación

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
temperaturaB14Tiempo2 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB14Tiempo2double = str2double(temperaturaB14Tiempo2); %Transformar a formato double
handles.temperaturaB14Tiempo2 = temperaturaB14Tiempo2double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación

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
temperaturaB13Tiempo2 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB13Tiempo2double = str2double(temperaturaB13Tiempo2); %Transformar a formato double
handles.temperaturaB13Tiempo2 = temperaturaB13Tiempo2double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación

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
temperaturaB12Tiempo2 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB12Tiempo2double = str2double(temperaturaB12Tiempo2); %Transformar a formato double
handles.temperaturaB12Tiempo2 = temperaturaB12Tiempo2double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación


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
temperaturaB11Tiempo2 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB11Tiempo2double = str2double(temperaturaB11Tiempo2); %Transformar a formato double
handles.temperaturaB11Tiempo2 = temperaturaB11Tiempo2double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación

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



function b113_Callback(hObject, eventdata, handles)
% hObject    handle to b113 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b113 as text
%        str2double(get(hObject,'String')) returns contents of b113 as a double
temperaturaB11Tiempo3 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB11Tiempo3double = str2double(temperaturaB11Tiempo3); %Transformar a formato double
handles.temperaturaB11Tiempo3 = temperaturaB11Tiempo3double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación

% --- Executes during object creation, after setting all properties.
function b113_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b113 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b123_Callback(hObject, eventdata, handles)
% hObject    handle to b123 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b123 as text
%        str2double(get(hObject,'String')) returns contents of b123 as a double
temperaturaB12Tiempo3 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB12Tiempo3double = str2double(temperaturaB12Tiempo3); %Transformar a formato double
handles.temperaturaB12Tiempo3 = temperaturaB12Tiempo3double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación

% --- Executes during object creation, after setting all properties.
function b123_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b123 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b133_Callback(hObject, eventdata, handles)
% hObject    handle to b133 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b133 as text
%        str2double(get(hObject,'String')) returns contents of b133 as a double
temperaturaB13Tiempo3 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB13Tiempo3double = str2double(temperaturaB13Tiempo3); %Transformar a formato double
handles.temperaturaB13Tiempo3 = temperaturaB13Tiempo3double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación

% --- Executes during object creation, after setting all properties.
function b133_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b133 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b143_Callback(hObject, eventdata, handles)
% hObject    handle to b143 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b143 as text
%        str2double(get(hObject,'String')) returns contents of b143 as a double
temperaturaB14Tiempo3 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB14Tiempo3double = str2double(temperaturaB14Tiempo3); %Transformar a formato double
handles.temperaturaB14Tiempo3 = temperaturaB14Tiempo3double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación

% --- Executes during object creation, after setting all properties.
function b143_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b143 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b153_Callback(hObject, eventdata, handles)
% hObject    handle to b153 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b153 as text
%        str2double(get(hObject,'String')) returns contents of b153 as a double
temperaturaB15Tiempo3 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB15Tiempo3double = str2double(temperaturaB15Tiempo3); %Transformar a formato double
handles.temperaturaB15Tiempo3 = temperaturaB15Tiempo3double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación


% --- Executes during object creation, after setting all properties.
function b153_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b153 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b163_Callback(hObject, eventdata, handles)
% hObject    handle to b163 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b163 as text
%        str2double(get(hObject,'String')) returns contents of b163 as a double
temperaturaB16Tiempo3 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB16Tiempo3double = str2double(temperaturaB16Tiempo3); %Transformar a formato double
handles.temperaturaB16Tiempo3 = temperaturaB16Tiempo3double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación


% --- Executes during object creation, after setting all properties.
function b163_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b163 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b213_Callback(hObject, eventdata, handles)
% hObject    handle to b213 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b213 as text
%        str2double(get(hObject,'String')) returns contents of b213 as a double
temperaturaB21Tiempo3 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB21Tiempo3double = str2double(temperaturaB21Tiempo3); %Transformar a formato double
handles.temperaturaB21Tiempo3 = temperaturaB21Tiempo3double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación


% --- Executes during object creation, after setting all properties.
function b213_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b213 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b223_Callback(hObject, eventdata, handles)
% hObject    handle to b223 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b223 as text
%        str2double(get(hObject,'String')) returns contents of b223 as a double
temperaturaB22Tiempo3 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB22Tiempo3double = str2double(temperaturaB22Tiempo3); %Transformar a formato double
handles.temperaturaB22Tiempo3 = temperaturaB22Tiempo3double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación


% --- Executes during object creation, after setting all properties.
function b223_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b223 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b233_Callback(hObject, eventdata, handles)
% hObject    handle to b233 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b233 as text
%        str2double(get(hObject,'String')) returns contents of b233 as a double
temperaturaB23Tiempo3 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB23Tiempo3double = str2double(temperaturaB23Tiempo3); %Transformar a formato double
handles.temperaturaB23Tiempo3 = temperaturaB23Tiempo3double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación


% --- Executes during object creation, after setting all properties.
function b233_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b233 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b243_Callback(hObject, eventdata, handles)
% hObject    handle to b243 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b243 as text
%        str2double(get(hObject,'String')) returns contents of b243 as a double
temperaturaB24Tiempo3 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB24Tiempo3double = str2double(temperaturaB24Tiempo3); %Transformar a formato double
handles.temperaturaB24Tiempo3 = temperaturaB24Tiempo3double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación

% --- Executes during object creation, after setting all properties.
function b243_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b243 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b253_Callback(hObject, eventdata, handles)
% hObject    handle to b253 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b253 as text
%        str2double(get(hObject,'String')) returns contents of b253 as a double
temperaturaB25Tiempo3 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB25Tiempo3double = str2double(temperaturaB25Tiempo3); %Transformar a formato double
handles.temperaturaB25Tiempo3 = temperaturaB25Tiempo3double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación

% --- Executes during object creation, after setting all properties.
function b253_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b253 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b263_Callback(hObject, eventdata, handles)
% hObject    handle to b263 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b263 as text
%        str2double(get(hObject,'String')) returns contents of b263 as a double
temperaturaB26Tiempo3 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB26Tiempo3double = str2double(temperaturaB26Tiempo3); %Transformar a formato double
handles.temperaturaB26Tiempo3 = temperaturaB26Tiempo3double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación

% --- Executes during object creation, after setting all properties.
function b263_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b263 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b313_Callback(hObject, eventdata, handles)
% hObject    handle to b313 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b313 as text
%        str2double(get(hObject,'String')) returns contents of b313 as a double
temperaturaB31Tiempo3 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB31Tiempo3double = str2double(temperaturaB31Tiempo3); %Transformar a formato double
handles.temperaturaB31Tiempo3 = temperaturaB31Tiempo3double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación

% --- Executes during object creation, after setting all properties.
function b313_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b313 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b323_Callback(hObject, eventdata, handles)
% hObject    handle to b323 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b323 as text
%        str2double(get(hObject,'String')) returns contents of b323 as a double
temperaturaB32Tiempo3 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB32Tiempo3double = str2double(temperaturaB32Tiempo3); %Transformar a formato double
handles.temperaturaB32Tiempo3 = temperaturaB32Tiempo3double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación


% --- Executes during object creation, after setting all properties.
function b323_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b323 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b333_Callback(hObject, eventdata, handles)
% hObject    handle to b333 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b333 as text
%        str2double(get(hObject,'String')) returns contents of b333 as a double
temperaturaB33Tiempo3 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB33Tiempo3double = str2double(temperaturaB33Tiempo3); %Transformar a formato double
handles.temperaturaB33Tiempo3 = temperaturaB33Tiempo3double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación


% --- Executes during object creation, after setting all properties.
function b333_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b333 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b343_Callback(hObject, eventdata, handles)
% hObject    handle to b343 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b343 as text
%        str2double(get(hObject,'String')) returns contents of b343 as a double
temperaturaB34Tiempo3 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB34Tiempo3double = str2double(temperaturaB34Tiempo3); %Transformar a formato double
handles.temperaturaB34Tiempo3 = temperaturaB34Tiempo3double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación

% --- Executes during object creation, after setting all properties.
function b343_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b343 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b353_Callback(hObject, eventdata, handles)
% hObject    handle to b353 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b353 as text
%        str2double(get(hObject,'String')) returns contents of b353 as a double
temperaturaB35Tiempo3 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB35Tiempo3double = str2double(temperaturaB35Tiempo3); %Transformar a formato double
handles.temperaturaB35Tiempo3 = temperaturaB35Tiempo3double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación

% --- Executes during object creation, after setting all properties.
function b353_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b353 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b363_Callback(hObject, eventdata, handles)
% hObject    handle to b363 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b363 as text
%        str2double(get(hObject,'String')) returns contents of b363 as a double
temperaturaB36Tiempo3 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB36Tiempo3double = str2double(temperaturaB36Tiempo3); %Transformar a formato double
handles.temperaturaB36Tiempo3 = temperaturaB36Tiempo3double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación

% --- Executes during object creation, after setting all properties.
function b363_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b363 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b413_Callback(hObject, eventdata, handles)
% hObject    handle to b413 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b413 as text
%        str2double(get(hObject,'String')) returns contents of b413 as a double
temperaturaB41Tiempo3 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB41Tiempo3double = str2double(temperaturaB41Tiempo3); %Transformar a formato double
handles.temperaturaB41Tiempo3 = temperaturaB41Tiempo3double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación

% --- Executes during object creation, after setting all properties.
function b413_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b413 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b423_Callback(hObject, eventdata, handles)
% hObject    handle to b423 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b423 as text
%        str2double(get(hObject,'String')) returns contents of b423 as a double
temperaturaB42Tiempo3 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB42Tiempo3double = str2double(temperaturaB42Tiempo3); %Transformar a formato double
handles.temperaturaB42Tiempo3 = temperaturaB42Tiempo3double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación


% --- Executes during object creation, after setting all properties.
function b423_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b423 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b433_Callback(hObject, eventdata, handles)
% hObject    handle to b433 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b433 as text
%        str2double(get(hObject,'String')) returns contents of b433 as a double
temperaturaB43Tiempo3 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB43Tiempo3double = str2double(temperaturaB43Tiempo3); %Transformar a formato double
handles.temperaturaB43Tiempo3 = temperaturaB43Tiempo3double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación

% --- Executes during object creation, after setting all properties.
function b433_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b433 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end


function b443_Callback(hObject, eventdata, handles)
% hObject    handle to b443 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b443 as text
%        str2double(get(hObject,'String')) returns contents of b443 as a double
temperaturaB44Tiempo3 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB44Tiempo3double = str2double(temperaturaB44Tiempo3); %Transformar a formato double
handles.temperaturaB44Tiempo3 = temperaturaB44Tiempo3double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación

% --- Executes during object creation, after setting all properties.
function b443_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b443 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b453_Callback(hObject, eventdata, handles)
% hObject    handle to b453 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b453 as text
%        str2double(get(hObject,'String')) returns contents of b453 as a double
temperaturaB45Tiempo3 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB45Tiempo3double = str2double(temperaturaB45Tiempo3); %Transformar a formato double
handles.temperaturaB45Tiempo3 = temperaturaB45Tiempo3double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación

% --- Executes during object creation, after setting all properties.
function b453_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b453 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b463_Callback(hObject, eventdata, handles)
% hObject    handle to b463 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b463 as text
%        str2double(get(hObject,'String')) returns contents of b463 as a double
temperaturaB46Tiempo3 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB46Tiempo3double = str2double(temperaturaB46Tiempo3); %Transformar a formato double
handles.temperaturaB46Tiempo3 = temperaturaB46Tiempo3double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación

% --- Executes during object creation, after setting all properties.
function b463_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b463 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b513_Callback(hObject, eventdata, handles)
% hObject    handle to b513 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b513 as text
%        str2double(get(hObject,'String')) returns contents of b513 as a double
temperaturaB51Tiempo3 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB51Tiempo3double = str2double(temperaturaB51Tiempo3); %Transformar a formato double
handles.temperaturaB51Tiempo3 = temperaturaB51Tiempo3double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación

% --- Executes during object creation, after setting all properties.
function b513_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b513 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b523_Callback(hObject, eventdata, handles)
% hObject    handle to b523 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b523 as text
%        str2double(get(hObject,'String')) returns contents of b523 as a double
temperaturaB52Tiempo3 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB52Tiempo3double = str2double(temperaturaB52Tiempo3); %Transformar a formato double
handles.temperaturaB52Tiempo3 = temperaturaB52Tiempo3double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación


% --- Executes during object creation, after setting all properties.
function b523_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b523 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b533_Callback(hObject, eventdata, handles)
% hObject    handle to b533 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b533 as text
%        str2double(get(hObject,'String')) returns contents of b533 as a double
temperaturaB53Tiempo3 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB53Tiempo3double = str2double(temperaturaB53Tiempo3); %Transformar a formato double
handles.temperaturaB53Tiempo3 = temperaturaB53Tiempo3double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación


% --- Executes during object creation, after setting all properties.
function b533_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b533 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b543_Callback(hObject, eventdata, handles)
% hObject    handle to b543 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b543 as text
%        str2double(get(hObject,'String')) returns contents of b543 as a double
temperaturaB54Tiempo3 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB54Tiempo3double = str2double(temperaturaB54Tiempo3); %Transformar a formato double
handles.temperaturaB54Tiempo3 = temperaturaB54Tiempo3double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación


% --- Executes during object creation, after setting all properties.
function b543_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b543 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b553_Callback(hObject, eventdata, handles)
% hObject    handle to b553 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b553 as text
%        str2double(get(hObject,'String')) returns contents of b553 as a double
temperaturaB55Tiempo3 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB55Tiempo3double = str2double(temperaturaB55Tiempo3); %Transformar a formato double
handles.temperaturaB55Tiempo3 = temperaturaB55Tiempo3double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación

% --- Executes during object creation, after setting all properties.
function b553_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b553 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b563_Callback(hObject, eventdata, handles)
% hObject    handle to b563 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b563 as text
%        str2double(get(hObject,'String')) returns contents of b563 as a double
temperaturaB56Tiempo3 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB56Tiempo3double = str2double(temperaturaB56Tiempo3); %Transformar a formato double
handles.temperaturaB56Tiempo3 = temperaturaB56Tiempo3double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación

% --- Executes during object creation, after setting all properties.
function b563_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b563 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b613_Callback(hObject, eventdata, handles)
% hObject    handle to b613 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b613 as text
%        str2double(get(hObject,'String')) returns contents of b613 as a double
temperaturaB61Tiempo3 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB61Tiempo3double = str2double(temperaturaB61Tiempo3); %Transformar a formato double
handles.temperaturaB61Tiempo3 = temperaturaB61Tiempo3double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación


% --- Executes during object creation, after setting all properties.
function b613_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b613 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b623_Callback(hObject, eventdata, handles)
% hObject    handle to b623 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b623 as text
%        str2double(get(hObject,'String')) returns contents of b623 as a double
temperaturaB62Tiempo3 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB62Tiempo3double = str2double(temperaturaB62Tiempo3); %Transformar a formato double
handles.temperaturaB62Tiempo3 = temperaturaB62Tiempo3double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación

% --- Executes during object creation, after setting all properties.
function b623_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b623 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b633_Callback(hObject, eventdata, handles)
% hObject    handle to b633 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b633 as text
%        str2double(get(hObject,'String')) returns contents of b633 as a double
temperaturaB63Tiempo3 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB63Tiempo3double = str2double(temperaturaB63Tiempo3); %Transformar a formato double
handles.temperaturaB63Tiempo3 = temperaturaB63Tiempo3double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación

% --- Executes during object creation, after setting all properties.
function b633_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b633 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b643_Callback(hObject, eventdata, handles)
% hObject    handle to b643 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b643 as text
%        str2double(get(hObject,'String')) returns contents of b643 as a double
temperaturaB64Tiempo3 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB64Tiempo3double = str2double(temperaturaB64Tiempo3); %Transformar a formato double
handles.temperaturaB64Tiempo3 = temperaturaB64Tiempo3double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación

% --- Executes during object creation, after setting all properties.
function b643_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b643 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b653_Callback(hObject, eventdata, handles)
% hObject    handle to b653 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b653 as text
%        str2double(get(hObject,'String')) returns contents of b653 as a double
temperaturaB65Tiempo3 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB65Tiempo3double = str2double(temperaturaB65Tiempo3); %Transformar a formato double
handles.temperaturaB65Tiempo3 = temperaturaB65Tiempo3double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación

% --- Executes during object creation, after setting all properties.
function b653_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b653 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end


function b663_Callback(hObject, eventdata, handles)
% hObject    handle to b663 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b663 as text
%        str2double(get(hObject,'String')) returns contents of b663 as a double
temperaturaB66Tiempo3 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB66Tiempo3double = str2double(temperaturaB66Tiempo3); %Transformar a formato double
handles.temperaturaB66Tiempo3 = temperaturaB66Tiempo3double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación


% --- Executes during object creation, after setting all properties.
function b663_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b663 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b144_Callback(hObject, eventdata, handles)
% hObject    handle to b144 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b144 as text
%        str2double(get(hObject,'String')) returns contents of b144 as a double
temperaturaB14Tiempo4 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB14Tiempo4double = str2double(temperaturaB14Tiempo4); %Transformar a formato double
handles.temperaturaB14Tiempo4 = temperaturaB14Tiempo4double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación


% --- Executes during object creation, after setting all properties.
function b144_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b144 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b664_Callback(hObject, eventdata, handles)
% hObject    handle to b664 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b664 as text
%        str2double(get(hObject,'String')) returns contents of b664 as a double
temperaturaB66Tiempo4 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB66Tiempo4double = str2double(temperaturaB66Tiempo4); %Transformar a formato double
handles.temperaturaB66Tiempo4 = temperaturaB66Tiempo4double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación

% --- Executes during object creation, after setting all properties.
function b664_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b664 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b654_Callback(hObject, eventdata, handles)
% hObject    handle to b654 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b654 as text
%        str2double(get(hObject,'String')) returns contents of b654 as a double
temperaturaB65Tiempo4 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB65Tiempo4double = str2double(temperaturaB65Tiempo4); %Transformar a formato double
handles.temperaturaB65Tiempo4 = temperaturaB65Tiempo4double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación

% --- Executes during object creation, after setting all properties.
function b654_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b654 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b644_Callback(hObject, eventdata, handles)
% hObject    handle to b644 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b644 as text
%        str2double(get(hObject,'String')) returns contents of b644 as a double
temperaturaB64Tiempo4 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB64Tiempo4double = str2double(temperaturaB64Tiempo4); %Transformar a formato double
handles.temperaturaB64Tiempo4 = temperaturaB64Tiempo4double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación

% --- Executes during object creation, after setting all properties.
function b644_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b644 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b634_Callback(hObject, eventdata, handles)
% hObject    handle to b634 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b634 as text
%        str2double(get(hObject,'String')) returns contents of b634 as a double
temperaturaB63Tiempo4 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB63Tiempo4double = str2double(temperaturaB63Tiempo4); %Transformar a formato double
handles.temperaturaB63Tiempo4 = temperaturaB63Tiempo4double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación

% --- Executes during object creation, after setting all properties.
function b634_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b634 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b624_Callback(hObject, eventdata, handles)
% hObject    handle to b624 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b624 as text
%        str2double(get(hObject,'String')) returns contents of b624 as a double
temperaturaB62Tiempo4 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB62Tiempo4double = str2double(temperaturaB62Tiempo4); %Transformar a formato double
handles.temperaturaB62Tiempo4 = temperaturaB62Tiempo4double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación


% --- Executes during object creation, after setting all properties.
function b624_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b624 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b614_Callback(hObject, eventdata, handles)
% hObject    handle to b614 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b614 as text
%        str2double(get(hObject,'String')) returns contents of b614 as a double
temperaturaB61Tiempo4 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB61Tiempo4double = str2double(temperaturaB61Tiempo4); %Transformar a formato double
handles.temperaturaB61Tiempo4 = temperaturaB61Tiempo4double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación

% --- Executes during object creation, after setting all properties.
function b614_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b614 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end

function b564_Callback(hObject, eventdata, handles)
% hObject    handle to b564 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b564 as text
%        str2double(get(hObject,'String')) returns contents of b564 as a double
temperaturaB56Tiempo4 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB56Tiempo4double = str2double(temperaturaB56Tiempo4); %Transformar a formato double
handles.temperaturaB56Tiempo4 = temperaturaB56Tiempo4double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación

% --- Executes during object creation, after setting all properties.
function b564_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b564 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b554_Callback(hObject, eventdata, handles)
% hObject    handle to b554 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b554 as text
%        str2double(get(hObject,'String')) returns contents of b554 as a double
temperaturaB55Tiempo4 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB55Tiempo4double = str2double(temperaturaB55Tiempo4); %Transformar a formato double
handles.temperaturaB55Tiempo4 = temperaturaB55Tiempo4double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación


% --- Executes during object creation, after setting all properties.
function b554_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b554 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b544_Callback(hObject, eventdata, handles)
% hObject    handle to b544 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b544 as text
%        str2double(get(hObject,'String')) returns contents of b544 as a double
temperaturaB54Tiempo4 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB54Tiempo4double = str2double(temperaturaB54Tiempo4); %Transformar a formato double
handles.temperaturaB54Tiempo4 = temperaturaB54Tiempo4double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación

% --- Executes during object creation, after setting all properties.
function b544_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b544 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b534_Callback(hObject, eventdata, handles)
% hObject    handle to b534 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b534 as text
%        str2double(get(hObject,'String')) returns contents of b534 as a double
temperaturaB53Tiempo4 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB53Tiempo4double = str2double(temperaturaB53Tiempo4); %Transformar a formato double
handles.temperaturaB53Tiempo4 = temperaturaB53Tiempo4double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación

% --- Executes during object creation, after setting all properties.
function b534_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b534 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b524_Callback(hObject, eventdata, handles)
% hObject    handle to b524 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b524 as text
%        str2double(get(hObject,'String')) returns contents of b524 as a double
temperaturaB52Tiempo4 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB52Tiempo4double = str2double(temperaturaB52Tiempo4); %Transformar a formato double
handles.temperaturaB52Tiempo4 = temperaturaB52Tiempo4double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación

% --- Executes during object creation, after setting all properties.
function b524_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b524 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b514_Callback(hObject, eventdata, handles)
% hObject    handle to b514 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b514 as text
%        str2double(get(hObject,'String')) returns contents of b514 as a double
temperaturaB51Tiempo4 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB51Tiempo4double = str2double(temperaturaB51Tiempo4); %Transformar a formato double
handles.temperaturaB51Tiempo4 = temperaturaB51Tiempo4double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación


% --- Executes during object creation, after setting all properties.
function b514_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b514 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b464_Callback(hObject, eventdata, handles)
% hObject    handle to b464 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b464 as text
%        str2double(get(hObject,'String')) returns contents of b464 as a double
temperaturaB46Tiempo4 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB46Tiempo4double = str2double(temperaturaB46Tiempo4); %Transformar a formato double
handles.temperaturaB46Tiempo4 = temperaturaB46Tiempo4double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación


% --- Executes during object creation, after setting all properties.
function b464_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b464 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b454_Callback(hObject, eventdata, handles)
% hObject    handle to b454 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b454 as text
%        str2double(get(hObject,'String')) returns contents of b454 as a double
temperaturaB45Tiempo4 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB45Tiempo4double = str2double(temperaturaB45Tiempo4); %Transformar a formato double
handles.temperaturaB45Tiempo4 = temperaturaB45Tiempo4double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación

% --- Executes during object creation, after setting all properties.
function b454_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b454 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b444_Callback(hObject, eventdata, handles)
% hObject    handle to b444 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b444 as text
%        str2double(get(hObject,'String')) returns contents of b444 as a double
temperaturaB44Tiempo4 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB44Tiempo4double = str2double(temperaturaB44Tiempo4); %Transformar a formato double
handles.temperaturaB44Tiempo4 = temperaturaB44Tiempo4double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación

% --- Executes during object creation, after setting all properties.
function b444_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b444 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b434_Callback(hObject, eventdata, handles)
% hObject    handle to b434 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b434 as text
%        str2double(get(hObject,'String')) returns contents of b434 as a double
temperaturaB43Tiempo4 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB43Tiempo4double = str2double(temperaturaB43Tiempo4); %Transformar a formato double
handles.temperaturaB43Tiempo4 = temperaturaB43Tiempo4double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación

% --- Executes during object creation, after setting all properties.
function b434_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b434 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b424_Callback(hObject, eventdata, handles)
% hObject    handle to b424 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b424 as text
%        str2double(get(hObject,'String')) returns contents of b424 as a double
temperaturaB42Tiempo4 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB42Tiempo4double = str2double(temperaturaB42Tiempo4); %Transformar a formato double
handles.temperaturaB42Tiempo4 = temperaturaB42Tiempo4double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación

% --- Executes during object creation, after setting all properties.
function b424_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b424 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b414_Callback(hObject, eventdata, handles)
% hObject    handle to b414 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b414 as text
%        str2double(get(hObject,'String')) returns contents of b414 as a double
temperaturaB41Tiempo4 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB41Tiempo4double = str2double(temperaturaB41Tiempo4); %Transformar a formato double
handles.temperaturaB41Tiempo4 = temperaturaB41Tiempo4double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación


% --- Executes during object creation, after setting all properties.
function b414_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b414 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b364_Callback(hObject, eventdata, handles)
% hObject    handle to b364 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b364 as text
%        str2double(get(hObject,'String')) returns contents of b364 as a double
temperaturaB36Tiempo4 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB36Tiempo4double = str2double(temperaturaB36Tiempo4); %Transformar a formato double
handles.temperaturaB36Tiempo4 = temperaturaB36Tiempo4double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación

% --- Executes during object creation, after setting all properties.
function b364_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b364 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b354_Callback(hObject, eventdata, handles)
% hObject    handle to b354 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b354 as text
%        str2double(get(hObject,'String')) returns contents of b354 as a double
temperaturaB35Tiempo4 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB35Tiempo4double = str2double(temperaturaB35Tiempo4); %Transformar a formato double
handles.temperaturaB35Tiempo4 = temperaturaB35Tiempo4double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación

% --- Executes during object creation, after setting all properties.
function b354_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b354 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b344_Callback(hObject, eventdata, handles)
% hObject    handle to b344 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b344 as text
%        str2double(get(hObject,'String')) returns contents of b344 as a double
temperaturaB34Tiempo4 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB34Tiempo4double = str2double(temperaturaB34Tiempo4); %Transformar a formato double
handles.temperaturaB34Tiempo4 = temperaturaB34Tiempo4double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación

% --- Executes during object creation, after setting all properties.
function b344_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b344 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b334_Callback(hObject, eventdata, handles)
% hObject    handle to b334 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b334 as text
%        str2double(get(hObject,'String')) returns contents of b334 as a double
temperaturaB33Tiempo4 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB33Tiempo4double = str2double(temperaturaB33Tiempo4); %Transformar a formato double
handles.temperaturaB33Tiempo4 = temperaturaB33Tiempo4double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación

% --- Executes during object creation, after setting all properties.
function b334_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b334 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b324_Callback(hObject, eventdata, handles)
% hObject    handle to b324 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b324 as text
%        str2double(get(hObject,'String')) returns contents of b324 as a double
temperaturaB32Tiempo4 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB32Tiempo4double = str2double(temperaturaB32Tiempo4); %Transformar a formato double
handles.temperaturaB32Tiempo4 = temperaturaB32Tiempo4double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación

% --- Executes during object creation, after setting all properties.
function b324_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b324 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b314_Callback(hObject, eventdata, handles)
% hObject    handle to b314 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b314 as text
%        str2double(get(hObject,'String')) returns contents of b314 as a double
temperaturaB31Tiempo4 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB31Tiempo4double = str2double(temperaturaB31Tiempo4); %Transformar a formato double
handles.temperaturaB31Tiempo4 = temperaturaB31Tiempo4double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación

% --- Executes during object creation, after setting all properties.
function b314_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b314 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b264_Callback(hObject, eventdata, handles)
% hObject    handle to b264 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b264 as text
%        str2double(get(hObject,'String')) returns contents of b264 as a double
temperaturaB26Tiempo4 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB26Tiempo4double = str2double(temperaturaB26Tiempo4); %Transformar a formato double
handles.temperaturaB26Tiempo4 = temperaturaB26Tiempo4double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación

% --- Executes during object creation, after setting all properties.
function b264_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b264 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b254_Callback(hObject, eventdata, handles)
% hObject    handle to b254 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b254 as text
%        str2double(get(hObject,'String')) returns contents of b254 as a double
temperaturaB25Tiempo4 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB25Tiempo4double = str2double(temperaturaB25Tiempo4); %Transformar a formato double
handles.temperaturaB25Tiempo4 = temperaturaB25Tiempo4double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación

% --- Executes during object creation, after setting all properties.
function b254_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b254 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b244_Callback(hObject, eventdata, handles)
% hObject    handle to b244 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b244 as text
%        str2double(get(hObject,'String')) returns contents of b244 as a double
temperaturaB24Tiempo4 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB24Tiempo4double = str2double(temperaturaB24Tiempo4); %Transformar a formato double
handles.temperaturaB24Tiempo4 = temperaturaB24Tiempo4double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación

% --- Executes during object creation, after setting all properties.
function b244_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b244 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b234_Callback(hObject, eventdata, handles)
% hObject    handle to b234 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b234 as text
%        str2double(get(hObject,'String')) returns contents of b234 as a double
temperaturaB23Tiempo4 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB23Tiempo4double = str2double(temperaturaB23Tiempo4); %Transformar a formato double
handles.temperaturaB23Tiempo4 = temperaturaB23Tiempo4double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación

% --- Executes during object creation, after setting all properties.
function b234_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b234 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end

function b224_Callback(hObject, eventdata, handles)
% hObject    handle to b224 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b224 as text
%        str2double(get(hObject,'String')) returns contents of b224 as a double
temperaturaB22Tiempo4 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB22Tiempo4double = str2double(temperaturaB22Tiempo4); %Transformar a formato double
handles.temperaturaB22Tiempo4 = temperaturaB22Tiempo4double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación

% --- Executes during object creation, after setting all properties.
function b224_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b224 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b214_Callback(hObject, eventdata, handles)
% hObject    handle to b214 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b214 as text
%        str2double(get(hObject,'String')) returns contents of b214 as a double
temperaturaB21Tiempo4 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB21Tiempo4double = str2double(temperaturaB21Tiempo4); %Transformar a formato double
handles.temperaturaB21Tiempo4 = temperaturaB21Tiempo4double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación

% --- Executes during object creation, after setting all properties.
function b214_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b214 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b164_Callback(hObject, eventdata, handles)
% hObject    handle to b164 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b164 as text
%        str2double(get(hObject,'String')) returns contents of b164 as a double
temperaturaB16Tiempo4 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB16Tiempo4double = str2double(temperaturaB16Tiempo4); %Transformar a formato double
handles.temperaturaB16Tiempo4 = temperaturaB16Tiempo4double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación

% --- Executes during object creation, after setting all properties.
function b164_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b164 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b154_Callback(hObject, eventdata, handles)
% hObject    handle to b154 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b154 as text
%        str2double(get(hObject,'String')) returns contents of b154 as a double
temperaturaB15Tiempo4 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB15Tiempo4double = str2double(temperaturaB15Tiempo4); %Transformar a formato double
handles.temperaturaB15Tiempo4 = temperaturaB15Tiempo4double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación

% --- Executes during object creation, after setting all properties.
function b154_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b154 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b134_Callback(hObject, eventdata, handles)
% hObject    handle to b134 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b134 as text
%        str2double(get(hObject,'String')) returns contents of b134 as a double
temperaturaB13Tiempo4 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB13Tiempo4double = str2double(temperaturaB13Tiempo4); %Transformar a formato double
handles.temperaturaB13Tiempo4 = temperaturaB13Tiempo4double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación

% --- Executes during object creation, after setting all properties.
function b134_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b134 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b124_Callback(hObject, eventdata, handles)
% hObject    handle to b124 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b124 as text
%        str2double(get(hObject,'String')) returns contents of b124 as a double
temperaturaB12Tiempo4 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB12Tiempo4double = str2double(temperaturaB12Tiempo4); %Transformar a formato double
handles.temperaturaB12Tiempo4 = temperaturaB12Tiempo4double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación


% --- Executes during object creation, after setting all properties.
function b124_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b124 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b114_Callback(hObject, eventdata, handles)
% hObject    handle to b114 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b114 as text
%        str2double(get(hObject,'String')) returns contents of b114 as a double
temperaturaB11Tiempo4 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB11Tiempo4double = str2double(temperaturaB11Tiempo4); %Transformar a formato double
handles.temperaturaB11Tiempo4 = temperaturaB11Tiempo4double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación

% --- Executes during object creation, after setting all properties.
function b114_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b114 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b115_Callback(hObject, eventdata, handles)
% hObject    handle to b115 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b115 as text
%        str2double(get(hObject,'String')) returns contents of b115 as a double
temperaturaB11Tiempo5 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB11Tiempo5double = str2double(temperaturaB11Tiempo5); %Transformar a formato double
handles.temperaturaB11Tiempo5 = temperaturaB11Tiempo5double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación


% --- Executes during object creation, after setting all properties.
function b115_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b115 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b125_Callback(hObject, eventdata, handles)
% hObject    handle to b125 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b125 as text
%        str2double(get(hObject,'String')) returns contents of b125 as a double
temperaturaB12Tiempo5 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB12Tiempo5double = str2double(temperaturaB12Tiempo5); %Transformar a formato double
handles.temperaturaB12Tiempo5 = temperaturaB12Tiempo5double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación

% --- Executes during object creation, after setting all properties.
function b125_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b125 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b135_Callback(hObject, eventdata, handles)
% hObject    handle to b135 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b135 as text
%        str2double(get(hObject,'String')) returns contents of b135 as a double
temperaturaB13Tiempo5 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB13Tiempo5double = str2double(temperaturaB13Tiempo5); %Transformar a formato double
handles.temperaturaB13Tiempo5 = temperaturaB13Tiempo5double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación



% --- Executes during object creation, after setting all properties.
function b135_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b135 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b155_Callback(hObject, eventdata, handles)
% hObject    handle to b155 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b155 as text
%        str2double(get(hObject,'String')) returns contents of b155 as a double
temperaturaB15Tiempo5 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB15Tiempo5double = str2double(temperaturaB15Tiempo5); %Transformar a formato double
handles.temperaturaB15Tiempo5 = temperaturaB15Tiempo5double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación


% --- Executes during object creation, after setting all properties.
function b155_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b155 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b165_Callback(hObject, eventdata, handles)
% hObject    handle to b165 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b165 as text
%        str2double(get(hObject,'String')) returns contents of b165 as a double
temperaturaB16Tiempo5 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB16Tiempo5double = str2double(temperaturaB16Tiempo5); %Transformar a formato double
handles.temperaturaB16Tiempo5 = temperaturaB16Tiempo5double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación

% --- Executes during object creation, after setting all properties.
function b165_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b165 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b215_Callback(hObject, eventdata, handles)
% hObject    handle to b215 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b215 as text
%        str2double(get(hObject,'String')) returns contents of b215 as a double
temperaturaB21Tiempo5 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB21Tiempo5double = str2double(temperaturaB21Tiempo5); %Transformar a formato double
handles.temperaturaB21Tiempo5 = temperaturaB21Tiempo5double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación

% --- Executes during object creation, after setting all properties.
function b215_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b215 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end

function b225_Callback(hObject, eventdata, handles)
% hObject    handle to b225 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b225 as text
%        str2double(get(hObject,'String')) returns contents of b225 as a double
temperaturaB22Tiempo5 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB22Tiempo5double = str2double(temperaturaB22Tiempo5); %Transformar a formato double
handles.temperaturaB22Tiempo5 = temperaturaB22Tiempo5double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación

% --- Executes during object creation, after setting all properties.
function b225_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b225 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b235_Callback(hObject, eventdata, handles)
% hObject    handle to b235 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b235 as text
%        str2double(get(hObject,'String')) returns contents of b235 as a double
temperaturaB23Tiempo5 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB23Tiempo5double = str2double(temperaturaB23Tiempo5); %Transformar a formato double
handles.temperaturaB23Tiempo5 = temperaturaB23Tiempo5double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación

% --- Executes during object creation, after setting all properties.
function b235_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b235 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b245_Callback(hObject, eventdata, handles)
% hObject    handle to b245 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b245 as text
%        str2double(get(hObject,'String')) returns contents of b245 as a double
temperaturaB24Tiempo5 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB24Tiempo5double = str2double(temperaturaB24Tiempo5); %Transformar a formato double
handles.temperaturaB24Tiempo5 = temperaturaB24Tiempo5double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación

% --- Executes during object creation, after setting all properties.
function b245_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b245 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b255_Callback(hObject, eventdata, handles)
% hObject    handle to b255 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b255 as text
%        str2double(get(hObject,'String')) returns contents of b255 as a double
temperaturaB25Tiempo5 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB25Tiempo5double = str2double(temperaturaB25Tiempo5); %Transformar a formato double
handles.temperaturaB25Tiempo5 = temperaturaB25Tiempo5double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación


% --- Executes during object creation, after setting all properties.
function b255_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b255 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b265_Callback(hObject, eventdata, handles)
% hObject    handle to b265 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b265 as text
%        str2double(get(hObject,'String')) returns contents of b265 as a double
temperaturaB26Tiempo5 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB26Tiempo5double = str2double(temperaturaB26Tiempo5); %Transformar a formato double
handles.temperaturaB26Tiempo5 = temperaturaB26Tiempo5double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación


% --- Executes during object creation, after setting all properties.
function b265_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b265 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b315_Callback(hObject, eventdata, handles)
% hObject    handle to b315 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b315 as text
%        str2double(get(hObject,'String')) returns contents of b315 as a double
temperaturaB31Tiempo5 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB31Tiempo5double = str2double(temperaturaB31Tiempo5); %Transformar a formato double
handles.temperaturaB31Tiempo5 = temperaturaB31Tiempo5double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación


% --- Executes during object creation, after setting all properties.
function b315_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b315 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b325_Callback(hObject, eventdata, handles)
% hObject    handle to b325 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b325 as text
%        str2double(get(hObject,'String')) returns contents of b325 as a double
temperaturaB32Tiempo5 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB32Tiempo5double = str2double(temperaturaB32Tiempo5); %Transformar a formato double
handles.temperaturaB32Tiempo5 = temperaturaB32Tiempo5double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación


% --- Executes during object creation, after setting all properties.
function b325_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b325 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b335_Callback(hObject, eventdata, handles)
% hObject    handle to b335 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b335 as text
%        str2double(get(hObject,'String')) returns contents of b335 as a double
temperaturaB33Tiempo5 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB33Tiempo5double = str2double(temperaturaB33Tiempo5); %Transformar a formato double
handles.temperaturaB33Tiempo5 = temperaturaB33Tiempo5double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación


% --- Executes during object creation, after setting all properties.
function b335_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b335 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b345_Callback(hObject, eventdata, handles)
% hObject    handle to b345 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b345 as text
%        str2double(get(hObject,'String')) returns contents of b345 as a double
temperaturaB34Tiempo5 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB34Tiempo5double = str2double(temperaturaB34Tiempo5); %Transformar a formato double
handles.temperaturaB34Tiempo5 = temperaturaB34Tiempo5double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación


% --- Executes during object creation, after setting all properties.
function b345_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b345 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b355_Callback(hObject, eventdata, handles)
% hObject    handle to b355 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b355 as text
%        str2double(get(hObject,'String')) returns contents of b355 as a double
temperaturaB35Tiempo5 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB35Tiempo5double = str2double(temperaturaB35Tiempo5); %Transformar a formato double
handles.temperaturaB35Tiempo5 = temperaturaB35Tiempo5double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación

% --- Executes during object creation, after setting all properties.
function b355_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b355 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b365_Callback(hObject, eventdata, handles)
% hObject    handle to b365 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b365 as text
%        str2double(get(hObject,'String')) returns contents of b365 as a double
temperaturaB36Tiempo5 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB36Tiempo5double = str2double(temperaturaB36Tiempo5); %Transformar a formato double
handles.temperaturaB36Tiempo5 = temperaturaB36Tiempo5double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación

% --- Executes during object creation, after setting all properties.
function b365_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b365 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b415_Callback(hObject, eventdata, handles)
% hObject    handle to b415 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b415 as text
%        str2double(get(hObject,'String')) returns contents of b415 as a double
temperaturaB41Tiempo5 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB41Tiempo5double = str2double(temperaturaB41Tiempo5); %Transformar a formato double
handles.temperaturaB41Tiempo5 = temperaturaB41Tiempo5double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación


% --- Executes during object creation, after setting all properties.
function b415_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b415 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b425_Callback(hObject, eventdata, handles)
% hObject    handle to b425 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b425 as text
%        str2double(get(hObject,'String')) returns contents of b425 as a double
temperaturaB42Tiempo5 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB42Tiempo5double = str2double(temperaturaB42Tiempo5); %Transformar a formato double
handles.temperaturaB42Tiempo5 = temperaturaB42Tiempo5double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación

% --- Executes during object creation, after setting all properties.
function b425_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b425 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b435_Callback(hObject, eventdata, handles)
% hObject    handle to b435 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b435 as text
%        str2double(get(hObject,'String')) returns contents of b435 as a double
temperaturaB43Tiempo5 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB43Tiempo5double = str2double(temperaturaB43Tiempo5); %Transformar a formato double
handles.temperaturaB43Tiempo5 = temperaturaB43Tiempo5double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación


% --- Executes during object creation, after setting all properties.
function b435_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b435 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b445_Callback(hObject, eventdata, handles)
% hObject    handle to b445 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b445 as text
%        str2double(get(hObject,'String')) returns contents of b445 as a double
temperaturaB44Tiempo5 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB44Tiempo5double = str2double(temperaturaB44Tiempo5); %Transformar a formato double
handles.temperaturaB44Tiempo5 = temperaturaB44Tiempo5double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación


% --- Executes during object creation, after setting all properties.
function b445_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b445 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b455_Callback(hObject, eventdata, handles)
% hObject    handle to b455 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b455 as text
%        str2double(get(hObject,'String')) returns contents of b455 as a double
temperaturaB45Tiempo5 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB45Tiempo5double = str2double(temperaturaB45Tiempo5); %Transformar a formato double
handles.temperaturaB45Tiempo5 = temperaturaB45Tiempo5double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación



% --- Executes during object creation, after setting all properties.
function b455_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b455 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b465_Callback(hObject, eventdata, handles)
% hObject    handle to b465 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b465 as text
%        str2double(get(hObject,'String')) returns contents of b465 as a double
temperaturaB46Tiempo5 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB46Tiempo5double = str2double(temperaturaB46Tiempo5); %Transformar a formato double
handles.temperaturaB46Tiempo5 = temperaturaB46Tiempo5double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación


% --- Executes during object creation, after setting all properties.
function b465_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b465 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b515_Callback(hObject, eventdata, handles)
% hObject    handle to b515 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b515 as text
%        str2double(get(hObject,'String')) returns contents of b515 as a double
temperaturaB51Tiempo5 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB51Tiempo5double = str2double(temperaturaB51Tiempo5); %Transformar a formato double
handles.temperaturaB51Tiempo5 = temperaturaB51Tiempo5double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación



% --- Executes during object creation, after setting all properties.
function b515_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b515 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b525_Callback(hObject, eventdata, handles)
% hObject    handle to b525 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b525 as text
%        str2double(get(hObject,'String')) returns contents of b525 as a double
temperaturaB52Tiempo5 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB52Tiempo5double = str2double(temperaturaB52Tiempo5); %Transformar a formato double
handles.temperaturaB52Tiempo5 = temperaturaB52Tiempo5double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación

% --- Executes during object creation, after setting all properties.
function b525_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b525 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b535_Callback(hObject, eventdata, handles)
% hObject    handle to b535 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b535 as text
%        str2double(get(hObject,'String')) returns contents of b535 as a double
temperaturaB53Tiempo5 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB53Tiempo5double = str2double(temperaturaB53Tiempo5); %Transformar a formato double
handles.temperaturaB53Tiempo5 = temperaturaB53Tiempo5double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación



% --- Executes during object creation, after setting all properties.
function b535_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b535 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b545_Callback(hObject, eventdata, handles)
% hObject    handle to b545 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b545 as text
%        str2double(get(hObject,'String')) returns contents of b545 as a double
temperaturaB54Tiempo5 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB54Tiempo5double = str2double(temperaturaB54Tiempo5); %Transformar a formato double
handles.temperaturaB54Tiempo5 = temperaturaB54Tiempo5double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación

% --- Executes during object creation, after setting all properties.
function b545_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b545 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b555_Callback(hObject, eventdata, handles)
% hObject    handle to b555 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b555 as text
%        str2double(get(hObject,'String')) returns contents of b555 as a double
temperaturaB55Tiempo5 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB55Tiempo5double = str2double(temperaturaB55Tiempo5); %Transformar a formato double
handles.temperaturaB55Tiempo5 = temperaturaB55Tiempo5double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación



% --- Executes during object creation, after setting all properties.
function b555_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b555 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b565_Callback(hObject, eventdata, handles)
% hObject    handle to b565 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b565 as text
%        str2double(get(hObject,'String')) returns contents of b565 as a double
temperaturaB56Tiempo5 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB56Tiempo5double = str2double(temperaturaB56Tiempo5); %Transformar a formato double
handles.temperaturaB56Tiempo5 = temperaturaB56Tiempo5double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación

% --- Executes during object creation, after setting all properties.
function b565_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b565 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b615_Callback(hObject, eventdata, handles)
% hObject    handle to b615 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b615 as text
%        str2double(get(hObject,'String')) returns contents of b615 as a double
temperaturaB61Tiempo5 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB61Tiempo5double = str2double(temperaturaB61Tiempo5); %Transformar a formato double
handles.temperaturaB61Tiempo5 = temperaturaB61Tiempo5double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación

% --- Executes during object creation, after setting all properties.
function b615_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b615 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b625_Callback(hObject, eventdata, handles)
% hObject    handle to b625 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b625 as text
%        str2double(get(hObject,'String')) returns contents of b625 as a double
temperaturaB62Tiempo5 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB62Tiempo5double = str2double(temperaturaB62Tiempo5); %Transformar a formato double
handles.temperaturaB62Tiempo5 = temperaturaB62Tiempo5double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación

% --- Executes during object creation, after setting all properties.
function b625_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b625 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b635_Callback(hObject, eventdata, handles)
% hObject    handle to b635 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b635 as text
%        str2double(get(hObject,'String')) returns contents of b635 as a double
temperaturaB63Tiempo5 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB63Tiempo5double = str2double(temperaturaB63Tiempo5); %Transformar a formato double
handles.temperaturaB63Tiempo5 = temperaturaB63Tiempo5double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación

% --- Executes during object creation, after setting all properties.
function b635_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b635 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b645_Callback(hObject, eventdata, handles)
% hObject    handle to b645 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b645 as text
%        str2double(get(hObject,'String')) returns contents of b645 as a double
temperaturaB64Tiempo5 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB64Tiempo5double = str2double(temperaturaB64Tiempo5); %Transformar a formato double
handles.temperaturaB64Tiempo5 = temperaturaB64Tiempo5double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación

% --- Executes during object creation, after setting all properties.
function b645_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b645 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b655_Callback(hObject, eventdata, handles)
% hObject    handle to b655 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b655 as text
%        str2double(get(hObject,'String')) returns contents of b655 as a double
temperaturaB65Tiempo5 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB65Tiempo5double = str2double(temperaturaB65Tiempo5); %Transformar a formato double
handles.temperaturaB65Tiempo5 = temperaturaB65Tiempo5double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación

% --- Executes during object creation, after setting all properties.
function b655_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b655 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b665_Callback(hObject, eventdata, handles)
% hObject    handle to b665 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b665 as text
%        str2double(get(hObject,'String')) returns contents of b665 as a double
temperaturaB66Tiempo5 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB66Tiempo5double = str2double(temperaturaB66Tiempo5); %Transformar a formato double
handles.temperaturaB66Tiempo5 = temperaturaB66Tiempo5double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación


% --- Executes during object creation, after setting all properties.
function b665_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b665 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b145_Callback(hObject, eventdata, handles)
% hObject    handle to b145 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b145 as text
%        str2double(get(hObject,'String')) returns contents of b145 as a double
temperaturaB14Tiempo5 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB14Tiempo5double = str2double(temperaturaB14Tiempo5); %Transformar a formato double
handles.temperaturaB14Tiempo5 = temperaturaB14Tiempo5double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación

% --- Executes during object creation, after setting all properties.
function b145_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b145 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b116_Callback(hObject, eventdata, handles)
% hObject    handle to b116 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b116 as text
%        str2double(get(hObject,'String')) returns contents of b116 as a double
temperaturaB11Tiempo6 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB11Tiempo6double = str2double(temperaturaB11Tiempo6); %Transformar a formato double
handles.temperaturaB11Tiempo6 = temperaturaB11Tiempo6double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación

% --- Executes during object creation, after setting all properties.
function b116_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b116 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b126_Callback(hObject, eventdata, handles)
% hObject    handle to b126 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b126 as text
%        str2double(get(hObject,'String')) returns contents of b126 as a double
temperaturaB12Tiempo6 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB12Tiempo6double = str2double(temperaturaB12Tiempo6); %Transformar a formato double
handles.temperaturaB12Tiempo6 = temperaturaB12Tiempo6double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación


% --- Executes during object creation, after setting all properties.
function b126_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b126 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b136_Callback(hObject, eventdata, handles)
% hObject    handle to b136 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b136 as text
%        str2double(get(hObject,'String')) returns contents of b136 as a double
temperaturaB13Tiempo6 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB13Tiempo6double = str2double(temperaturaB13Tiempo6); %Transformar a formato double
handles.temperaturaB13Tiempo6 = temperaturaB13Tiempo6double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación



% --- Executes during object creation, after setting all properties.
function b136_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b136 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b156_Callback(hObject, eventdata, handles)
% hObject    handle to b156 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b156 as text
%        str2double(get(hObject,'String')) returns contents of b156 as a double
temperaturaB15Tiempo6 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB15Tiempo6double = str2double(temperaturaB15Tiempo6); %Transformar a formato double
handles.temperaturaB15Tiempo6 = temperaturaB15Tiempo6double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación

% --- Executes during object creation, after setting all properties.
function b156_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b156 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b166_Callback(hObject, eventdata, handles)
% hObject    handle to b166 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b166 as text
%        str2double(get(hObject,'String')) returns contents of b166 as a double
temperaturaB16Tiempo6 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB16Tiempo6double = str2double(temperaturaB16Tiempo6); %Transformar a formato double
handles.temperaturaB16Tiempo6 = temperaturaB16Tiempo6double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación


% --- Executes during object creation, after setting all properties.
function b166_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b166 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b216_Callback(hObject, eventdata, handles)
% hObject    handle to b216 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b216 as text
%        str2double(get(hObject,'String')) returns contents of b216 as a double
temperaturaB21Tiempo6 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB21Tiempo6double = str2double(temperaturaB21Tiempo6); %Transformar a formato double
handles.temperaturaB21Tiempo6 = temperaturaB21Tiempo6double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación

% --- Executes during object creation, after setting all properties.
function b216_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b216 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b226_Callback(hObject, eventdata, handles)
% hObject    handle to b226 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b226 as text
%        str2double(get(hObject,'String')) returns contents of b226 as a double
temperaturaB22Tiempo6 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB22Tiempo6double = str2double(temperaturaB22Tiempo6); %Transformar a formato double
handles.temperaturaB22Tiempo6 = temperaturaB22Tiempo6double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación


% --- Executes during object creation, after setting all properties.
function b226_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b226 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b236_Callback(hObject, eventdata, handles)
% hObject    handle to b236 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b236 as text
%        str2double(get(hObject,'String')) returns contents of b236 as a double
temperaturaB23Tiempo6 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB23Tiempo6double = str2double(temperaturaB23Tiempo6); %Transformar a formato double
handles.temperaturaB23Tiempo6 = temperaturaB23Tiempo6double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación

% --- Executes during object creation, after setting all properties.
function b236_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b236 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b246_Callback(hObject, eventdata, handles)
% hObject    handle to b246 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b246 as text
%        str2double(get(hObject,'String')) returns contents of b246 as a double
temperaturaB24Tiempo6 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB24Tiempo6double = str2double(temperaturaB24Tiempo6); %Transformar a formato double
handles.temperaturaB24Tiempo6 = temperaturaB24Tiempo6double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación



% --- Executes during object creation, after setting all properties.
function b246_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b246 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b256_Callback(hObject, eventdata, handles)
% hObject    handle to b256 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b256 as text
%        str2double(get(hObject,'String')) returns contents of b256 as a double
temperaturaB25Tiempo6 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB25Tiempo6double = str2double(temperaturaB25Tiempo6); %Transformar a formato double
handles.temperaturaB25Tiempo6 = temperaturaB25Tiempo6double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación



% --- Executes during object creation, after setting all properties.
function b256_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b256 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end


function b266_Callback(hObject, eventdata, handles)
% hObject    handle to b266 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b266 as text
%        str2double(get(hObject,'String')) returns contents of b266 as a double
temperaturaB26Tiempo6 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB26Tiempo6double = str2double(temperaturaB26Tiempo6); %Transformar a formato double
handles.temperaturaB26Tiempo6 = temperaturaB26Tiempo6double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación

% --- Executes during object creation, after setting all properties.
function b266_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b266 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b316_Callback(hObject, eventdata, handles)
% hObject    handle to b316 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b316 as text
%        str2double(get(hObject,'String')) returns contents of b316 as a double
temperaturaB31Tiempo6 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB31Tiempo6double = str2double(temperaturaB31Tiempo6); %Transformar a formato double
handles.temperaturaB31Tiempo6 = temperaturaB31Tiempo6double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación


% --- Executes during object creation, after setting all properties.
function b316_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b316 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b326_Callback(hObject, eventdata, handles)
% hObject    handle to b326 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b326 as text
%        str2double(get(hObject,'String')) returns contents of b326 as a double
temperaturaB32Tiempo6 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB32Tiempo6double = str2double(temperaturaB32Tiempo6); %Transformar a formato double
handles.temperaturaB32Tiempo6 = temperaturaB32Tiempo6double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación

% --- Executes during object creation, after setting all properties.
function b326_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b326 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b336_Callback(hObject, eventdata, handles)
% hObject    handle to b336 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b336 as text
%        str2double(get(hObject,'String')) returns contents of b336 as a double
temperaturaB33Tiempo6 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB33Tiempo6double = str2double(temperaturaB33Tiempo6); %Transformar a formato double
handles.temperaturaB33Tiempo6 = temperaturaB33Tiempo6double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación




% --- Executes during object creation, after setting all properties.
function b336_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b336 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b346_Callback(hObject, eventdata, handles)
% hObject    handle to b346 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b346 as text
%        str2double(get(hObject,'String')) returns contents of b346 as a double
temperaturaB34Tiempo6 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB34Tiempo6double = str2double(temperaturaB34Tiempo6); %Transformar a formato double
handles.temperaturaB34Tiempo6 = temperaturaB34Tiempo6double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación

% --- Executes during object creation, after setting all properties.
function b346_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b346 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b356_Callback(hObject, eventdata, handles)
% hObject    handle to b356 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b356 as text
%        str2double(get(hObject,'String')) returns contents of b356 as a double
temperaturaB35Tiempo6 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB35Tiempo6double = str2double(temperaturaB35Tiempo6); %Transformar a formato double
handles.temperaturaB35Tiempo6 = temperaturaB35Tiempo6double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación

% --- Executes during object creation, after setting all properties.
function b356_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b356 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b366_Callback(hObject, eventdata, handles)
% hObject    handle to b366 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b366 as text
%        str2double(get(hObject,'String')) returns contents of b366 as a double
temperaturaB36Tiempo6 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB36Tiempo6double = str2double(temperaturaB36Tiempo6); %Transformar a formato double
handles.temperaturaB36Tiempo6 = temperaturaB36Tiempo6double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación

% --- Executes during object creation, after setting all properties.
function b366_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b366 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b416_Callback(hObject, eventdata, handles)
% hObject    handle to b416 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b416 as text
%        str2double(get(hObject,'String')) returns contents of b416 as a double
temperaturaB41Tiempo6 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB41Tiempo6double = str2double(temperaturaB41Tiempo6); %Transformar a formato double
handles.temperaturaB41Tiempo6 = temperaturaB41Tiempo6double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación


% --- Executes during object creation, after setting all properties.
function b416_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b416 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b426_Callback(hObject, eventdata, handles)
% hObject    handle to b426 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b426 as text
%        str2double(get(hObject,'String')) returns contents of b426 as a double
temperaturaB42Tiempo6 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB42Tiempo6double = str2double(temperaturaB42Tiempo6); %Transformar a formato double
handles.temperaturaB42Tiempo6 = temperaturaB42Tiempo6double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación

% --- Executes during object creation, after setting all properties.
function b426_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b426 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b436_Callback(hObject, eventdata, handles)
% hObject    handle to b436 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b436 as text
%        str2double(get(hObject,'String')) returns contents of b436 as a double
temperaturaB43Tiempo6 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB43Tiempo6double = str2double(temperaturaB43Tiempo6); %Transformar a formato double
handles.temperaturaB43Tiempo6 = temperaturaB43Tiempo6double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación

% --- Executes during object creation, after setting all properties.
function b436_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b436 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b446_Callback(hObject, eventdata, handles)
% hObject    handle to b446 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b446 as text
%        str2double(get(hObject,'String')) returns contents of b446 as a double
temperaturaB44Tiempo6 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB44Tiempo6double = str2double(temperaturaB44Tiempo6); %Transformar a formato double
handles.temperaturaB44Tiempo6 = temperaturaB44Tiempo6double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación


% --- Executes during object creation, after setting all properties.
function b446_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b446 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b456_Callback(hObject, eventdata, handles)
% hObject    handle to b456 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b456 as text
%        str2double(get(hObject,'String')) returns contents of b456 as a double
temperaturaB45Tiempo6 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB45Tiempo6double = str2double(temperaturaB45Tiempo6); %Transformar a formato double
handles.temperaturaB45Tiempo6 = temperaturaB45Tiempo6double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación

% --- Executes during object creation, after setting all properties.
function b456_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b456 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b466_Callback(hObject, eventdata, handles)
% hObject    handle to b466 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b466 as text
%        str2double(get(hObject,'String')) returns contents of b466 as a double
temperaturaB46Tiempo6 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB46Tiempo6double = str2double(temperaturaB46Tiempo6); %Transformar a formato double
handles.temperaturaB46Tiempo6 = temperaturaB46Tiempo6double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación

% --- Executes during object creation, after setting all properties.
function b466_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b466 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b516_Callback(hObject, eventdata, handles)
% hObject    handle to b516 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b516 as text
%        str2double(get(hObject,'String')) returns contents of b516 as a double
temperaturaB51Tiempo6 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB51Tiempo6double = str2double(temperaturaB51Tiempo6); %Transformar a formato double
handles.temperaturaB51Tiempo6 = temperaturaB51Tiempo6double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación



% --- Executes during object creation, after setting all properties.
function b516_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b516 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b526_Callback(hObject, eventdata, handles)
% hObject    handle to b526 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b526 as text
%        str2double(get(hObject,'String')) returns contents of b526 as a double
temperaturaB52Tiempo6 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB52Tiempo6double = str2double(temperaturaB52Tiempo6); %Transformar a formato double
handles.temperaturaB52Tiempo6 = temperaturaB52Tiempo6double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación

% --- Executes during object creation, after setting all properties.
function b526_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b526 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b536_Callback(hObject, eventdata, handles)
% hObject    handle to b536 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b536 as text
%        str2double(get(hObject,'String')) returns contents of b536 as a double
temperaturaB53Tiempo6 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB53Tiempo6double = str2double(temperaturaB53Tiempo6); %Transformar a formato double
handles.temperaturaB53Tiempo6 = temperaturaB53Tiempo6double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación

% --- Executes during object creation, after setting all properties.
function b536_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b536 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b546_Callback(hObject, eventdata, handles)
% hObject    handle to b546 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b546 as text
%        str2double(get(hObject,'String')) returns contents of b546 as a double
temperaturaB54Tiempo6 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB54Tiempo6double = str2double(temperaturaB54Tiempo6); %Transformar a formato double
handles.temperaturaB54Tiempo6 = temperaturaB54Tiempo6double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación

% --- Executes during object creation, after setting all properties.
function b546_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b546 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b556_Callback(hObject, eventdata, handles)
% hObject    handle to b556 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b556 as text
%        str2double(get(hObject,'String')) returns contents of b556 as a double
temperaturaB55Tiempo6 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB55Tiempo6double = str2double(temperaturaB55Tiempo6); %Transformar a formato double
handles.temperaturaB55Tiempo6 = temperaturaB55Tiempo6double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación

% --- Executes during object creation, after setting all properties.
function b556_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b556 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b566_Callback(hObject, eventdata, handles)
% hObject    handle to b566 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b566 as text
%        str2double(get(hObject,'String')) returns contents of b566 as a double
temperaturaB56Tiempo6 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB56Tiempo6double = str2double(temperaturaB56Tiempo6); %Transformar a formato double
handles.temperaturaB56Tiempo6 = temperaturaB56Tiempo6double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación




% --- Executes during object creation, after setting all properties.
function b566_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b566 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b616_Callback(hObject, eventdata, handles)
% hObject    handle to b616 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b616 as text
%        str2double(get(hObject,'String')) returns contents of b616 as a double
temperaturaB61Tiempo6 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB61Tiempo6double = str2double(temperaturaB61Tiempo6); %Transformar a formato double
handles.temperaturaB61Tiempo6 = temperaturaB61Tiempo6double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación


% --- Executes during object creation, after setting all properties.
function b616_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b616 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b626_Callback(hObject, eventdata, handles)
% hObject    handle to b626 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b626 as text
%        str2double(get(hObject,'String')) returns contents of b626 as a double
temperaturaB62Tiempo6 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB62Tiempo6double = str2double(temperaturaB62Tiempo6); %Transformar a formato double
handles.temperaturaB62Tiempo6 = temperaturaB62Tiempo6double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación


% --- Executes during object creation, after setting all properties.
function b626_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b626 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b636_Callback(hObject, eventdata, handles)
% hObject    handle to b636 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b636 as text
%        str2double(get(hObject,'String')) returns contents of b636 as a double
temperaturaB63Tiempo6 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB63Tiempo6double = str2double(temperaturaB63Tiempo6); %Transformar a formato double
handles.temperaturaB63Tiempo6 = temperaturaB63Tiempo6double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación

% --- Executes during object creation, after setting all properties.
function b636_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b636 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b646_Callback(hObject, eventdata, handles)
% hObject    handle to b646 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b646 as text
%        str2double(get(hObject,'String')) returns contents of b646 as a double
temperaturaB64Tiempo6 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB64Tiempo6double = str2double(temperaturaB64Tiempo6); %Transformar a formato double
handles.temperaturaB64Tiempo6 = temperaturaB64Tiempo6double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación


% --- Executes during object creation, after setting all properties.
function b646_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b646 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b656_Callback(hObject, eventdata, handles)
% hObject    handle to b656 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b656 as text
%        str2double(get(hObject,'String')) returns contents of b656 as a double
temperaturaB65Tiempo6 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB65Tiempo6double = str2double(temperaturaB65Tiempo6); %Transformar a formato double
handles.temperaturaB65Tiempo6 = temperaturaB65Tiempo6double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación

% --- Executes during object creation, after setting all properties.
function b656_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b656 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b666_Callback(hObject, eventdata, handles)
% hObject    handle to b666 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b666 as text
%        str2double(get(hObject,'String')) returns contents of b666 as a double
temperaturaB66Tiempo6 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB66Tiempo6double = str2double(temperaturaB66Tiempo6); %Transformar a formato double
handles.temperaturaB66Tiempo6 = temperaturaB66Tiempo6double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación

% --- Executes during object creation, after setting all properties.
function b666_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b666 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function b146_Callback(hObject, eventdata, handles)
% hObject    handle to b146 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of b146 as text
%        str2double(get(hObject,'String')) returns contents of b146 as a double
temperaturaB14Tiempo6 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaB14Tiempo6double = str2double(temperaturaB14Tiempo6); %Transformar a formato double
handles.temperaturaB14Tiempo6 = temperaturaB14Tiempo6double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación

% --- Executes during object creation, after setting all properties.
function b146_CreateFcn(hObject, eventdata, handles)
% hObject    handle to b146 (see GCBO)
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

guidata(hObject,handles); %Salvar datos de la aplicación


function CantidadDeTransiciones_Callback(hObject, eventdata, handles)
% hObject    handle to CantidadDeTransiciones (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of CantidadDeTransiciones as text
%        str2double(get(hObject,'String')) returns contents of CantidadDeTransiciones as a double
cantidadTransiciones = get(hObject,'String'); %Almacenar valor ingresado
cantidadTransicionesdouble = str2double(cantidadTransiciones); %Transformar a formato double
handles.cantidadTransiciones = cantidadTransicionesdouble; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación



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


% --- Executes on button press in checkBoxTemperaturaTransicion6.
function checkBoxTemperaturaTransicion6_Callback(hObject, eventdata, handles)
% hObject    handle to checkBoxTemperaturaTransicion6 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
handles.activacionTemperaturaTransicion6 = get(hObject,'Value');
guidata(hObject, handles);
% Hint: get(hObject,'Value') returns toggle state of checkBoxTemperaturaTransicion6



function temperaturaPanelTransicion6_Callback(hObject, eventdata, handles)
% hObject    handle to temperaturaPanelTransicion6 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of temperaturaPanelTransicion6 as text
%        str2double(get(hObject,'String')) returns contents of temperaturaPanelTransicion6 as a double
temperaturaPanelTiempo6 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaPanelTiempo6double = str2double(temperaturaPanelTiempo6); %Transformar a formato double
handles.temperaturaPanelTiempo6 = temperaturaPanelTiempo6double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación


% --- Executes during object creation, after setting all properties.
function temperaturaPanelTransicion6_CreateFcn(hObject, eventdata, handles)
% hObject    handle to temperaturaPanelTransicion6 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end


% --- Executes on button press in checkBoxTemperaturaTransicion5.
function checkBoxTemperaturaTransicion5_Callback(hObject, eventdata, handles)
% hObject    handle to checkBoxTemperaturaTransicion5 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
handles.activacionTemperaturaTransicion5 = get(hObject,'Value');
guidata(hObject, handles);

% Hint: get(hObject,'Value') returns toggle state of checkBoxTemperaturaTransicion5



function temperaturaPanelTransicion5_Callback(hObject, eventdata, handles)
% hObject    handle to temperaturaPanelTransicion5 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of temperaturaPanelTransicion5 as text
%        str2double(get(hObject,'String')) returns contents of temperaturaPanelTransicion5 as a double
temperaturaPanelTiempo5 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaPanelTiempo5double = str2double(temperaturaPanelTiempo5); %Transformar a formato double
handles.temperaturaPanelTiempo5 = temperaturaPanelTiempo5double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación

% --- Executes during object creation, after setting all properties.
function temperaturaPanelTransicion5_CreateFcn(hObject, eventdata, handles)
% hObject    handle to temperaturaPanelTransicion5 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end


% --- Executes on button press in checkBoxTemperaturaTransicion4.
function checkBoxTemperaturaTransicion4_Callback(hObject, eventdata, handles)
% hObject    handle to checkBoxTemperaturaTransicion4 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
handles.activacionTemperaturaTransicion4 = get(hObject,'Value');
guidata(hObject, handles);
% Hint: get(hObject,'Value') returns toggle state of checkBoxTemperaturaTransicion4



function temperaturaPanelTransicion4_Callback(hObject, eventdata, handles)
% hObject    handle to temperaturaPanelTransicion4 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of temperaturaPanelTransicion4 as text
%        str2double(get(hObject,'String')) returns contents of temperaturaPanelTransicion4 as a double
temperaturaPanelTiempo4 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaPanelTiempo4double = str2double(temperaturaPanelTiempo4); %Transformar a formato double
handles.temperaturaPanelTiempo4 = temperaturaPanelTiempo4double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación

% --- Executes during object creation, after setting all properties.
function temperaturaPanelTransicion4_CreateFcn(hObject, eventdata, handles)
% hObject    handle to temperaturaPanelTransicion4 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end


% --- Executes on button press in checkBoxTemperaturaTransicion3.
function checkBoxTemperaturaTransicion3_Callback(hObject, eventdata, handles)
% hObject    handle to checkBoxTemperaturaTransicion3 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
handles.activacionTemperaturaTransicion3 = get(hObject,'Value');
guidata(hObject, handles);
% Hint: get(hObject,'Value') returns toggle state of checkBoxTemperaturaTransicion3



function temperaturaPanelTransicion3_Callback(hObject, eventdata, handles)
% hObject    handle to temperaturaPanelTransicion3 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of temperaturaPanelTransicion3 as text
%        str2double(get(hObject,'String')) returns contents of temperaturaPanelTransicion3 as a double
temperaturaPanelTiempo3 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaPanelTiempo3double = str2double(temperaturaPanelTiempo3); %Transformar a formato double
handles.temperaturaPanelTiempo3 = temperaturaPanelTiempo3double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación

% --- Executes during object creation, after setting all properties.
function temperaturaPanelTransicion3_CreateFcn(hObject, eventdata, handles)
% hObject    handle to temperaturaPanelTransicion3 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end


% --- Executes on button press in checkBoxTemperaturaTransicion2.
function checkBoxTemperaturaTransicion2_Callback(hObject, eventdata, handles)
% hObject    handle to checkBoxTemperaturaTransicion2 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
handles.activacionTemperaturaTransicion2 = get(hObject,'Value');
guidata(hObject, handles);
% Hint: get(hObject,'Value') returns toggle state of checkBoxTemperaturaTransicion2



function temperaturaPanelTransicion2_Callback(hObject, eventdata, handles)
% hObject    handle to temperaturaPanelTransicion2 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of temperaturaPanelTransicion2 as text
%        str2double(get(hObject,'String')) returns contents of temperaturaPanelTransicion2 as a double
temperaturaPanelTiempo2 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaPanelTiempo2double = str2double(temperaturaPanelTiempo2); %Transformar a formato double
handles.temperaturaPanelTiempo2 = temperaturaPanelTiempo2double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación



% --- Executes during object creation, after setting all properties.
function temperaturaPanelTransicion2_CreateFcn(hObject, eventdata, handles)
% hObject    handle to temperaturaPanelTransicion2 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end


% --- Executes on button press in checkBoxTemperaturaTransicion1.
function checkBoxTemperaturaTransicion1_Callback(hObject, eventdata, handles)
% hObject    handle to checkBoxTemperaturaTransicion1 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
handles.activacionTemperaturaTransicion1 = get(hObject,'Value');
guidata(hObject, handles);
% Hint: get(hObject,'Value') returns toggle state of checkBoxTemperaturaTransicion1



function temperaturaPanelTransicion1_Callback(hObject, eventdata, handles)
% hObject    handle to temperaturaPanelTransicion1 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of temperaturaPanelTransicion1 as text
%        str2double(get(hObject,'String')) returns contents of temperaturaPanelTransicion1 as a double
temperaturaPanelTiempo1 = get(hObject,'String'); %Almacenar valor ingresado
temperaturaPanelTiempo1double = str2double(temperaturaPanelTiempo1); %Transformar a formato double
handles.temperaturaPanelTiempo1 = temperaturaPanelTiempo1double; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación

% --- Executes during object creation, after setting all properties.
function temperaturaPanelTransicion1_CreateFcn(hObject, eventdata, handles)
% hObject    handle to temperaturaPanelTransicion1 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end


% --- Executes on button press in Guardar.
function Guardar_Callback(hObject, eventdata, handles)
% hObject    handle to Guardar (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
if handles.activacionTemperaturaTransicion1 == 0;
    b111 = handles.temperaturaB11Tiempo1;
    b121 = handles.temperaturaB12Tiempo1;
    b131 = handles.temperaturaB13Tiempo1;
    b141 = handles.temperaturaB14Tiempo1;
    b151 = handles.temperaturaB15Tiempo1;
    b161 = handles.temperaturaB16Tiempo1;
    b211 = handles.temperaturaB21Tiempo1;
    b221 = handles.temperaturaB22Tiempo1;
    b231 = handles.temperaturaB23Tiempo1;
    b241 = handles.temperaturaB24Tiempo1;
    b251 = handles.temperaturaB25Tiempo1;
    b261 = handles.temperaturaB26Tiempo1;
    b311 = handles.temperaturaB31Tiempo1;
    b321 = handles.temperaturaB32Tiempo1;
    b331 = handles.temperaturaB33Tiempo1;
    b341 = handles.temperaturaB34Tiempo1;
    b351 = handles.temperaturaB35Tiempo1;
    b361 = handles.temperaturaB36Tiempo1;
    b411 = handles.temperaturaB41Tiempo1;
    b421 = handles.temperaturaB42Tiempo1;
    b431 = handles.temperaturaB43Tiempo1;
    b441 = handles.temperaturaB44Tiempo1;
    b451 = handles.temperaturaB45Tiempo1;
    b461 = handles.temperaturaB46Tiempo1;
    b511 = handles.temperaturaB51Tiempo1;
    b521 = handles.temperaturaB52Tiempo1;
    b531 = handles.temperaturaB53Tiempo1;
    b541 = handles.temperaturaB54Tiempo1;
    b551 = handles.temperaturaB55Tiempo1;
    b561 = handles.temperaturaB56Tiempo1;
    b611 = handles.temperaturaB61Tiempo1;
    b621 = handles.temperaturaB62Tiempo1;
    b631 = handles.temperaturaB63Tiempo1;
    b641 = handles.temperaturaB64Tiempo1;
    b651 = handles.temperaturaB65Tiempo1;
    b661 = handles.temperaturaB66Tiempo1;
else
    b111 = handles.temperaturaPanelTiempo1;
    b121 = handles.temperaturaPanelTiempo1;
    b131 = handles.temperaturaPanelTiempo1;
    b141 = handles.temperaturaPanelTiempo1;
    b151 = handles.temperaturaPanelTiempo1;
    b161 = handles.temperaturaPanelTiempo1;
    b211 = handles.temperaturaPanelTiempo1;
    b221 = handles.temperaturaPanelTiempo1;
    b231 = handles.temperaturaPanelTiempo1;
    b241 = handles.temperaturaPanelTiempo1;
    b251 = handles.temperaturaPanelTiempo1;
    b261 = handles.temperaturaPanelTiempo1;
    b311 = handles.temperaturaPanelTiempo1;
    b321 = handles.temperaturaPanelTiempo1;
    b331 = handles.temperaturaPanelTiempo1;
    b341 = handles.temperaturaPanelTiempo1;
    b351 = handles.temperaturaPanelTiempo1;
    b361 = handles.temperaturaPanelTiempo1;
    b411 = handles.temperaturaPanelTiempo1;
    b421 = handles.temperaturaPanelTiempo1;
    b431 = handles.temperaturaPanelTiempo1;
    b441 = handles.temperaturaPanelTiempo1;
    b451 = handles.temperaturaPanelTiempo1;
    b461 = handles.temperaturaPanelTiempo1;
    b511 = handles.temperaturaPanelTiempo1;
    b521 = handles.temperaturaPanelTiempo1;
    b531 = handles.temperaturaPanelTiempo1;
    b541 = handles.temperaturaPanelTiempo1;
    b551 = handles.temperaturaPanelTiempo1;
    b561 = handles.temperaturaPanelTiempo1;
    b611 = handles.temperaturaPanelTiempo1;
    b621 = handles.temperaturaPanelTiempo1;
    b631 = handles.temperaturaPanelTiempo1;
    b641 = handles.temperaturaPanelTiempo1;
    b651 = handles.temperaturaPanelTiempo1;
    b661 = handles.temperaturaPanelTiempo1; 
end
if handles.activacionTemperaturaTransicion2 == 0;
    b112 = handles.temperaturaB11Tiempo2;
    b122 = handles.temperaturaB12Tiempo2;
    b132 = handles.temperaturaB13Tiempo2;
    b142 = handles.temperaturaB14Tiempo2;
    b152 = handles.temperaturaB15Tiempo2;
    b162 = handles.temperaturaB16Tiempo2;
    b212 = handles.temperaturaB21Tiempo2;
    b222 = handles.temperaturaB22Tiempo2;
    b232 = handles.temperaturaB23Tiempo2;
    b242 = handles.temperaturaB24Tiempo2;
    b252 = handles.temperaturaB25Tiempo2;
    b262 = handles.temperaturaB26Tiempo2;
    b312 = handles.temperaturaB31Tiempo2;
    b322 = handles.temperaturaB32Tiempo2;
    b332 = handles.temperaturaB33Tiempo2;
    b342 = handles.temperaturaB34Tiempo2;
    b352 = handles.temperaturaB35Tiempo2;
    b362 = handles.temperaturaB36Tiempo2;
    b412 = handles.temperaturaB41Tiempo2;
    b422 = handles.temperaturaB42Tiempo2;
    b432 = handles.temperaturaB43Tiempo2;
    b442 = handles.temperaturaB44Tiempo2;
    b452 = handles.temperaturaB45Tiempo2;
    b462 = handles.temperaturaB46Tiempo2;
    b512 = handles.temperaturaB51Tiempo2;
    b522 = handles.temperaturaB52Tiempo2;
    b532 = handles.temperaturaB53Tiempo2;
    b542 = handles.temperaturaB54Tiempo2;
    b552 = handles.temperaturaB55Tiempo2;
    b562 = handles.temperaturaB56Tiempo2;
    b612 = handles.temperaturaB61Tiempo2;
    b622 = handles.temperaturaB62Tiempo2;
    b632 = handles.temperaturaB63Tiempo2;
    b642 = handles.temperaturaB64Tiempo2;
    b652 = handles.temperaturaB65Tiempo2;
    b662 = handles.temperaturaB66Tiempo2;
else
    b112 = handles.temperaturaPanelTiempo2;
    b122 = handles.temperaturaPanelTiempo2;
    b132 = handles.temperaturaPanelTiempo2;
    b142 = handles.temperaturaPanelTiempo2;
    b152 = handles.temperaturaPanelTiempo2;
    b162 = handles.temperaturaPanelTiempo2;
    b212 = handles.temperaturaPanelTiempo2;
    b222 = handles.temperaturaPanelTiempo2;
    b232 = handles.temperaturaPanelTiempo2;
    b242 = handles.temperaturaPanelTiempo2;
    b252 = handles.temperaturaPanelTiempo2;
    b262 = handles.temperaturaPanelTiempo2;
    b312 = handles.temperaturaPanelTiempo2;
    b322 = handles.temperaturaPanelTiempo2;
    b332 = handles.temperaturaPanelTiempo2;
    b342 = handles.temperaturaPanelTiempo2;
    b352 = handles.temperaturaPanelTiempo2;
    b362 = handles.temperaturaPanelTiempo2;
    b412 = handles.temperaturaPanelTiempo2;
    b422 = handles.temperaturaPanelTiempo2;
    b432 = handles.temperaturaPanelTiempo2;
    b442 = handles.temperaturaPanelTiempo2;
    b452 = handles.temperaturaPanelTiempo2;
    b462 = handles.temperaturaPanelTiempo2;
    b512 = handles.temperaturaPanelTiempo2;
    b522 = handles.temperaturaPanelTiempo2;
    b532 = handles.temperaturaPanelTiempo2;
    b542 = handles.temperaturaPanelTiempo2;
    b552 = handles.temperaturaPanelTiempo2;
    b562 = handles.temperaturaPanelTiempo2;
    b612 = handles.temperaturaPanelTiempo2;
    b622 = handles.temperaturaPanelTiempo2;
    b632 = handles.temperaturaPanelTiempo2;
    b642 = handles.temperaturaPanelTiempo2;
    b652 = handles.temperaturaPanelTiempo2;
    b662 = handles.temperaturaPanelTiempo2; 
end

if handles.activacionTemperaturaTransicion3 == 0
    b113 = handles.temperaturaB11Tiempo3;
    b123 = handles.temperaturaB12Tiempo3;
    b133 = handles.temperaturaB13Tiempo3;
    b143 = handles.temperaturaB14Tiempo3;
    b153 = handles.temperaturaB15Tiempo3;
    b163 = handles.temperaturaB16Tiempo3;
    b213 = handles.temperaturaB21Tiempo3;
    b223 = handles.temperaturaB22Tiempo3;
    b233 = handles.temperaturaB23Tiempo3;
    b243 = handles.temperaturaB24Tiempo3;
    b253 = handles.temperaturaB25Tiempo3;
    b263 = handles.temperaturaB26Tiempo3;
    b313 = handles.temperaturaB31Tiempo3;
    b323 = handles.temperaturaB32Tiempo3;
    b333 = handles.temperaturaB33Tiempo3;
    b343 = handles.temperaturaB34Tiempo3;
    b353 = handles.temperaturaB35Tiempo3;
    b363 = handles.temperaturaB36Tiempo3;
    b413 = handles.temperaturaB41Tiempo3;
    b423 = handles.temperaturaB42Tiempo3;
    b433 = handles.temperaturaB43Tiempo3;
    b443 = handles.temperaturaB44Tiempo3;
    b453 = handles.temperaturaB45Tiempo3;
    b463 = handles.temperaturaB46Tiempo3;
    b513 = handles.temperaturaB51Tiempo3;
    b523 = handles.temperaturaB52Tiempo3;
    b533 = handles.temperaturaB53Tiempo3;
    b543 = handles.temperaturaB54Tiempo3;
    b553 = handles.temperaturaB55Tiempo3;
    b563 = handles.temperaturaB56Tiempo3;
    b613 = handles.temperaturaB61Tiempo3;
    b623 = handles.temperaturaB62Tiempo3;
    b633 = handles.temperaturaB63Tiempo3;
    b643 = handles.temperaturaB64Tiempo3;
    b653 = handles.temperaturaB65Tiempo3;
    b663 = handles.temperaturaB66Tiempo3;
else
    b113 = handles.temperaturaPanelTiempo3;
    b123 = handles.temperaturaPanelTiempo3;
    b133 = handles.temperaturaPanelTiempo3;
    b143 = handles.temperaturaPanelTiempo3;
    b153 = handles.temperaturaPanelTiempo3;
    b163 = handles.temperaturaPanelTiempo3;
    b213 = handles.temperaturaPanelTiempo3;
    b223 = handles.temperaturaPanelTiempo3;
    b233 = handles.temperaturaPanelTiempo3;
    b243 = handles.temperaturaPanelTiempo3;
    b253 = handles.temperaturaPanelTiempo3;
    b263 = handles.temperaturaPanelTiempo3;
    b313 = handles.temperaturaPanelTiempo3;
    b323 = handles.temperaturaPanelTiempo3;
    b333 = handles.temperaturaPanelTiempo3;
    b343 = handles.temperaturaPanelTiempo3;
    b353 = handles.temperaturaPanelTiempo3;
    b363 = handles.temperaturaPanelTiempo3;
    b413 = handles.temperaturaPanelTiempo3;
    b423 = handles.temperaturaPanelTiempo3;
    b433 = handles.temperaturaPanelTiempo3;
    b443 = handles.temperaturaPanelTiempo3;
    b453 = handles.temperaturaPanelTiempo3;
    b463 = handles.temperaturaPanelTiempo3;
    b513 = handles.temperaturaPanelTiempo3;
    b523 = handles.temperaturaPanelTiempo3;
    b533 = handles.temperaturaPanelTiempo3;
    b543 = handles.temperaturaPanelTiempo3;
    b553 = handles.temperaturaPanelTiempo3;
    b563 = handles.temperaturaPanelTiempo3;
    b613 = handles.temperaturaPanelTiempo3;
    b623 = handles.temperaturaPanelTiempo3;
    b633 = handles.temperaturaPanelTiempo3;
    b643 = handles.temperaturaPanelTiempo3;
    b653 = handles.temperaturaPanelTiempo3;
    b663 = handles.temperaturaPanelTiempo3; 
end

if handles.activacionTemperaturaTransicion4 == 0
    b114 = handles.temperaturaB11Tiempo4;
    b124 = handles.temperaturaB12Tiempo4;
    b134 = handles.temperaturaB13Tiempo4;
    b144 = handles.temperaturaB14Tiempo4;
    b154 = handles.temperaturaB15Tiempo4;
    b164 = handles.temperaturaB16Tiempo4;
    b214 = handles.temperaturaB21Tiempo4;
    b224 = handles.temperaturaB22Tiempo4;
    b234 = handles.temperaturaB23Tiempo4;
    b244 = handles.temperaturaB24Tiempo4;
    b254 = handles.temperaturaB25Tiempo4;
    b264 = handles.temperaturaB26Tiempo4;
    b314 = handles.temperaturaB31Tiempo4;
    b324 = handles.temperaturaB32Tiempo4;
    b334 = handles.temperaturaB33Tiempo4;
    b344 = handles.temperaturaB34Tiempo4;
    b354 = handles.temperaturaB35Tiempo4;
    b364 = handles.temperaturaB36Tiempo4;
    b414 = handles.temperaturaB41Tiempo4;
    b424 = handles.temperaturaB42Tiempo4;
    b434 = handles.temperaturaB43Tiempo4;
    b444 = handles.temperaturaB44Tiempo4;
    b454 = handles.temperaturaB45Tiempo4;
    b464 = handles.temperaturaB46Tiempo4;
    b514 = handles.temperaturaB51Tiempo4;
    b524 = handles.temperaturaB52Tiempo4;
    b534 = handles.temperaturaB53Tiempo4;
    b544 = handles.temperaturaB54Tiempo4;
    b554 = handles.temperaturaB55Tiempo4;
    b564 = handles.temperaturaB56Tiempo4;
    b614 = handles.temperaturaB61Tiempo4;
    b624 = handles.temperaturaB62Tiempo4;
    b634 = handles.temperaturaB63Tiempo4;
    b644 = handles.temperaturaB64Tiempo4;
    b654 = handles.temperaturaB65Tiempo4;
    b664 = handles.temperaturaB66Tiempo4;
else
    b114 = handles.temperaturaPanelTiempo4;
    b124 = handles.temperaturaPanelTiempo4;
    b134 = handles.temperaturaPanelTiempo4;
    b144 = handles.temperaturaPanelTiempo4;
    b154 = handles.temperaturaPanelTiempo4;
    b164 = handles.temperaturaPanelTiempo4;
    b214 = handles.temperaturaPanelTiempo4;
    b224 = handles.temperaturaPanelTiempo4;
    b234 = handles.temperaturaPanelTiempo4;
    b244 = handles.temperaturaPanelTiempo4;
    b254 = handles.temperaturaPanelTiempo4;
    b264 = handles.temperaturaPanelTiempo4;
    b314 = handles.temperaturaPanelTiempo4;
    b324 = handles.temperaturaPanelTiempo4;
    b334 = handles.temperaturaPanelTiempo4;
    b344 = handles.temperaturaPanelTiempo4;
    b354 = handles.temperaturaPanelTiempo4;
    b364 = handles.temperaturaPanelTiempo4;
    b414 = handles.temperaturaPanelTiempo4;
    b424 = handles.temperaturaPanelTiempo4;
    b434 = handles.temperaturaPanelTiempo4;
    b444 = handles.temperaturaPanelTiempo4;
    b454 = handles.temperaturaPanelTiempo4;
    b464 = handles.temperaturaPanelTiempo4;
    b514 = handles.temperaturaPanelTiempo4;
    b524 = handles.temperaturaPanelTiempo4;
    b534 = handles.temperaturaPanelTiempo4;
    b544 = handles.temperaturaPanelTiempo4;
    b554 = handles.temperaturaPanelTiempo4;
    b564 = handles.temperaturaPanelTiempo4;
    b614 = handles.temperaturaPanelTiempo4;
    b624 = handles.temperaturaPanelTiempo4;
    b634 = handles.temperaturaPanelTiempo4;
    b644 = handles.temperaturaPanelTiempo4;
    b654 = handles.temperaturaPanelTiempo4;
    b664 = handles.temperaturaPanelTiempo4; 
end

if handles.activacionTemperaturaTransicion5 == 0
    b115 = handles.temperaturaB11Tiempo5;
    b125 = handles.temperaturaB12Tiempo5;
    b135 = handles.temperaturaB13Tiempo5;
    b145 = handles.temperaturaB14Tiempo5;
    b155 = handles.temperaturaB15Tiempo5;
    b165 = handles.temperaturaB16Tiempo5;
    b215 = handles.temperaturaB21Tiempo5;
    b225 = handles.temperaturaB22Tiempo5;
    b235 = handles.temperaturaB23Tiempo5;
    b245 = handles.temperaturaB24Tiempo5;
    b255 = handles.temperaturaB25Tiempo5;
    b265 = handles.temperaturaB26Tiempo5;
    b315 = handles.temperaturaB31Tiempo5;
    b325 = handles.temperaturaB32Tiempo5;
    b335 = handles.temperaturaB33Tiempo5;
    b345 = handles.temperaturaB34Tiempo5;
    b355 = handles.temperaturaB35Tiempo5;
    b365 = handles.temperaturaB36Tiempo5;
    b415 = handles.temperaturaB41Tiempo5;
    b425 = handles.temperaturaB42Tiempo5;
    b435 = handles.temperaturaB43Tiempo5;
    b445 = handles.temperaturaB44Tiempo5;
    b455 = handles.temperaturaB45Tiempo5;
    b465 = handles.temperaturaB46Tiempo5;
    b515 = handles.temperaturaB51Tiempo5;
    b525 = handles.temperaturaB52Tiempo5;
    b535 = handles.temperaturaB53Tiempo5;
    b545 = handles.temperaturaB54Tiempo5;
    b555 = handles.temperaturaB55Tiempo5;
    b565 = handles.temperaturaB56Tiempo5;
    b615 = handles.temperaturaB61Tiempo5;
    b625 = handles.temperaturaB62Tiempo5;
    b635 = handles.temperaturaB63Tiempo5;
    b645 = handles.temperaturaB64Tiempo5;
    b655 = handles.temperaturaB65Tiempo5;
    b665 = handles.temperaturaB66Tiempo5;
else
    b115 = handles.temperaturaPanelTiempo5;
    b125 = handles.temperaturaPanelTiempo5;
    b135 = handles.temperaturaPanelTiempo5;
    b145 = handles.temperaturaPanelTiempo5;
    b155 = handles.temperaturaPanelTiempo5;
    b165 = handles.temperaturaPanelTiempo5;
    b215 = handles.temperaturaPanelTiempo5;
    b225 = handles.temperaturaPanelTiempo5;
    b235 = handles.temperaturaPanelTiempo5;
    b245 = handles.temperaturaPanelTiempo5;
    b255 = handles.temperaturaPanelTiempo5;
    b265 = handles.temperaturaPanelTiempo5;
    b315 = handles.temperaturaPanelTiempo5;
    b325 = handles.temperaturaPanelTiempo5;
    b335 = handles.temperaturaPanelTiempo5;
    b345 = handles.temperaturaPanelTiempo5;
    b355 = handles.temperaturaPanelTiempo5;
    b365 = handles.temperaturaPanelTiempo5;
    b415 = handles.temperaturaPanelTiempo5;
    b425 = handles.temperaturaPanelTiempo5;
    b435 = handles.temperaturaPanelTiempo5;
    b445 = handles.temperaturaPanelTiempo5;
    b455 = handles.temperaturaPanelTiempo5;
    b465 = handles.temperaturaPanelTiempo5;
    b515 = handles.temperaturaPanelTiempo5;
    b525 = handles.temperaturaPanelTiempo5;
    b535 = handles.temperaturaPanelTiempo5;
    b545 = handles.temperaturaPanelTiempo5;
    b555 = handles.temperaturaPanelTiempo5;
    b565 = handles.temperaturaPanelTiempo5;
    b615 = handles.temperaturaPanelTiempo5;
    b625 = handles.temperaturaPanelTiempo5;
    b635 = handles.temperaturaPanelTiempo5;
    b645 = handles.temperaturaPanelTiempo5;
    b655 = handles.temperaturaPanelTiempo5;
    b665 = handles.temperaturaPanelTiempo5; 
end
if handles.activacionTemperaturaTransicion6 == 0
    b116 = handles.temperaturaB11Tiempo6;
    b126 = handles.temperaturaB12Tiempo6;
    b136 = handles.temperaturaB13Tiempo6;
    b146 = handles.temperaturaB14Tiempo6;
    b156 = handles.temperaturaB15Tiempo6;
    b166 = handles.temperaturaB16Tiempo6;
    b216 = handles.temperaturaB21Tiempo6;
    b226 = handles.temperaturaB22Tiempo6;
    b236 = handles.temperaturaB23Tiempo6;
    b246 = handles.temperaturaB24Tiempo6;
    b256 = handles.temperaturaB25Tiempo6;
    b266 = handles.temperaturaB26Tiempo6;
    b316 = handles.temperaturaB31Tiempo6;
    b326 = handles.temperaturaB32Tiempo6;
    b336 = handles.temperaturaB33Tiempo6;
    b346 = handles.temperaturaB34Tiempo6;
    b356 = handles.temperaturaB35Tiempo6;
    b366 = handles.temperaturaB36Tiempo6;
    b416 = handles.temperaturaB41Tiempo6;
    b426 = handles.temperaturaB42Tiempo6;
    b436 = handles.temperaturaB43Tiempo6;
    b446 = handles.temperaturaB44Tiempo6;
    b456 = handles.temperaturaB45Tiempo6;
    b466 = handles.temperaturaB46Tiempo6;
    b516 = handles.temperaturaB51Tiempo6;
    b526 = handles.temperaturaB52Tiempo6;
    b536 = handles.temperaturaB53Tiempo6;
    b546 = handles.temperaturaB54Tiempo6;
    b556 = handles.temperaturaB55Tiempo6;
    b566 = handles.temperaturaB56Tiempo6;
    b616 = handles.temperaturaB61Tiempo6;
    b626 = handles.temperaturaB62Tiempo6;
    b636 = handles.temperaturaB63Tiempo6;
    b646 = handles.temperaturaB64Tiempo6;
    b656 = handles.temperaturaB65Tiempo6;
    b666 = handles.temperaturaB66Tiempo6;
else
    b116 = handles.temperaturaPanelTiempo6;
    b126 = handles.temperaturaPanelTiempo6;
    b136 = handles.temperaturaPanelTiempo6;
    b146 = handles.temperaturaPanelTiempo6;
    b156 = handles.temperaturaPanelTiempo6;
    b166 = handles.temperaturaPanelTiempo6;
    b216 = handles.temperaturaPanelTiempo6;
    b226 = handles.temperaturaPanelTiempo6;
    b236 = handles.temperaturaPanelTiempo6;
    b246 = handles.temperaturaPanelTiempo6;
    b256 = handles.temperaturaPanelTiempo6;
    b266 = handles.temperaturaPanelTiempo6;
    b316 = handles.temperaturaPanelTiempo6;
    b326 = handles.temperaturaPanelTiempo6;
    b336 = handles.temperaturaPanelTiempo6;
    b346 = handles.temperaturaPanelTiempo6;
    b356 = handles.temperaturaPanelTiempo6;
    b366 = handles.temperaturaPanelTiempo6;
    b416 = handles.temperaturaPanelTiempo6;
    b426 = handles.temperaturaPanelTiempo6;
    b436 = handles.temperaturaPanelTiempo6;
    b446 = handles.temperaturaPanelTiempo6;
    b456 = handles.temperaturaPanelTiempo6;
    b466 = handles.temperaturaPanelTiempo6;
    b516 = handles.temperaturaPanelTiempo6;
    b526 = handles.temperaturaPanelTiempo6;
    b536 = handles.temperaturaPanelTiempo6;
    b546 = handles.temperaturaPanelTiempo6;
    b556 = handles.temperaturaPanelTiempo6;
    b566 = handles.temperaturaPanelTiempo6;
    b616 = handles.temperaturaPanelTiempo6;
    b626 = handles.temperaturaPanelTiempo6;
    b636 = handles.temperaturaPanelTiempo6;
    b646 = handles.temperaturaPanelTiempo6;
    b656 = handles.temperaturaPanelTiempo6;
    b666 = handles.temperaturaPanelTiempo6; 
end
Temperaturas.b11Transicion = [b111 b112 b113 b114 b115 b116];
Temperaturas.b12Transicion = [b121 b122 b123 b124 b125 b126];
Temperaturas.b13Transicion = [b131 b132 b133 b134 b135 b136];
Temperaturas.b14Transicion = [b141 b142 b143 b144 b145 b146];
Temperaturas.b15Transicion = [b151 b152 b153 b154 b155 b156];
Temperaturas.b16Transicion = [b161 b162 b163 b164 b165 b166];
Temperaturas.b21Transicion = [b211 b212 b213 b214 b215 b216];
Temperaturas.b22Transicion = [b221 b222 b223 b224 b225 b226];
Temperaturas.b23Transicion = [b231 b232 b233 b234 b235 b236];
Temperaturas.b24Transicion = [b241 b242 b243 b244 b245 b246];
Temperaturas.b25Transicion = [b251 b252 b253 b254 b255 b256];
Temperaturas.b26Transicion = [b261 b262 b263 b264 b265 b266];
Temperaturas.b33Transicion = [b331 b332 b333 b334 b335 b336];
Temperaturas.b34Transicion = [b341 b342 b343 b344 b345 b346];
Temperaturas.b35Transicion = [b351 b352 b353 b354 b355 b356];
Temperaturas.b36Transicion = [b361 b362 b363 b364 b365 b366];
Temperaturas.b45Transicion = [b451 b452 b453 b454 b455 b456];
Temperaturas.b46Transicion = [b461 b462 b463 b464 b465 b466];
Temperaturas.b31Transicion = [b311 b312 b313 b314 b315 b316];
Temperaturas.b32Transicion = [b321 b322 b323 b324 b325 b326];
Temperaturas.b43Transicion = [b431 b432 b433 b434 b435 b436];
Temperaturas.b44Transicion = [b441 b442 b443 b444 b445 b446];
Temperaturas.b55Transicion = [b551 b552 b553 b554 b555 b556];
Temperaturas.b56Transicion = [b561 b562 b563 b564 b565 b566];
Temperaturas.b66Transicion = [b661 b662 b663 b664 b665 b666];
Temperaturas.b41Transicion = [b411 b412 b413 b414 b415 b416];
Temperaturas.b42Transicion = [b421 b422 b423 b424 b425 b426];
Temperaturas.b51Transicion = [b511 b512 b513 b514 b515 b516];
Temperaturas.b52Transicion = [b521 b522 b523 b524 b525 b526];
Temperaturas.b53Transicion = [b531 b532 b533 b534 b535 b536];
Temperaturas.b54Transicion = [b541 b542 b543 b544 b545 b546];
Temperaturas.b61Transicion = [b611 b612 b613 b614 b615 b616];
Temperaturas.b62Transicion = [b621 b622 b623 b624 b625 b626];
Temperaturas.b63Transicion = [b631 b632 b633 b634 b635 b636];
Temperaturas.b64Transicion = [b641 b642 b643 b644 b645 b646];
Temperaturas.b65Transicion = [b651 b652 b653 b654 b655 b656];
handles.flagTemperatura = 1;
setappdata(0,'Temperaturas',Temperaturas);
setappdata(0,'flagTemperatura',handles.flagTemperatura);
set(handles.VariableTemperaturaGuardada,'String','Temperaturas Guardadas');
guidata(hObject, handles);

function VariablesRadiacionGuardadas_Callback(hObject, eventdata, handles)
% hObject    handle to VariablesRadiacionGuardadas (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of VariablesRadiacionGuardadas as text
%        str2double(get(hObject,'String')) returns contents of VariablesRadiacionGuardadas as a double


% --- Executes during object creation, after setting all properties.
function VariablesRadiacionGuardadas_CreateFcn(hObject, eventdata, handles)
% hObject    handle to VariablesRadiacionGuardadas (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end


% --- Executes during object creation, after setting all properties.
function VariableTemperaturaGuardada_CreateFcn(hObject, eventdata, handles)
% hObject    handle to VariableTemperaturaGuardada (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called
