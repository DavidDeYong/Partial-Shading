function varargout = GeneradorSombrasParciales(varargin)
% GENERADORSOMBRASPARCIALES MATLAB code for GeneradorSombrasParciales.fig
%      GENERADORSOMBRASPARCIALES, by itself, creates a new GENERADORSOMBRASPARCIALES or raises the existing
%      singleton*.
%
%      H = GENERADORSOMBRASPARCIALES returns the handle to a new GENERADORSOMBRASPARCIALES or the handle to
%      the existing singleton*.
%
%      GENERADORSOMBRASPARCIALES('CALLBACK',hObject,eventData,handles,...) calls the local
%      function named CALLBACK in GENERADORSOMBRASPARCIALES.M with the given input arguments.
%
%      GENERADORSOMBRASPARCIALES('Property','Value',...) creates a new GENERADORSOMBRASPARCIALES or raises the
%      existing singleton*.  Starting from the left, property value pairs are
%      applied to the GUI before GeneradorSombrasParciales_OpeningFcn gets called.  An
%      unrecognized property name or invalid value makes property application
%      stop.  All inputs are passed to GeneradorSombrasParciales_OpeningFcn via varargin.
%
%      *See GUI Options on GUIDE's Tools menu.  Choose "GUI allows only one
%      instance to run (singleton)".
%
% See also: GUIDE, GUIDATA, GUIHANDLES

% Edit the above text to modify the response to help GeneradorSombrasParciales

% Last Modified by GUIDE v2.5 30-Jun-2016 19:12:29

% Begin initialization code - DO NOT EDIT
gui_Singleton = 1;
gui_State = struct('gui_Name',       mfilename, ...
                   'gui_Singleton',  gui_Singleton, ...
                   'gui_OpeningFcn', @GeneradorSombrasParciales_OpeningFcn, ...
                   'gui_OutputFcn',  @GeneradorSombrasParciales_OutputFcn, ...
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


% --- Executes just before GeneradorSombrasParciales is made visible.
function GeneradorSombrasParciales_OpeningFcn(hObject, eventdata, handles, varargin)
% This function has no output args, see OutputFcn.
% hObject    handle to figure
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
% varargin   command line arguments to GeneradorSombrasParciales (see VARARGIN)

% Choose default command line output for GeneradorSombrasParciales
handles.output = hObject;
handles.cantidadTransiciones  = 6;

% Update handles structure
guidata(hObject, handles);

% UIWAIT makes GeneradorSombrasParciales wait for user response (see UIRESUME)
% uiwait(handles.figure1);


% --- Outputs from this function are returned to the command line.
function varargout = GeneradorSombrasParciales_OutputFcn(hObject, eventdata, handles) 
% varargout  cell array for returning output args (see VARARGOUT);
% hObject    handle to figure
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Get default command line output from handles structure
varargout{1} = handles.output;


% --- Executes on button press in Generar.
function Generar_Callback(hObject, eventdata, handles)
% hObject    handle to Generar (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)


% --- Executes on button press in pushbutton2.
function pushbutton2_Callback(hObject, eventdata, handles)
% hObject    handle to pushbutton2 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
TransicionSombrasGUI


% --- Executes on button press in pushbutton3.
function pushbutton3_Callback(hObject, eventdata, handles)
% hObject    handle to pushbutton3 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
TemperaturaDelArray


% --- Executes on button press in pushbutton5.
function pushbutton5_Callback(hObject, eventdata, handles)
% hObject    handle to pushbutton5 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
Temperaturas = getappdata(0,'Temperaturas');
Radiacion = getappdata(0,'Radiacion');
flagRadiacion = getappdata(0,'flagRadiacion');
flagTemperatura = getappdata(0,'flagTemperatura');
[ArrayTension,ArrayCorriente,ArrayPotencia] = GeneradorCurvasSombrasParciales (handles,Temperaturas,Radiacion,flagRadiacion,flagTemperatura);
guidata(hObject,handles); %Salvar datos de la aplicación



function edit2_Callback(hObject, eventdata, handles)
% hObject    handle to edit2 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of edit2 as text
%        str2double(get(hObject,'String')) returns contents of edit2 as a double
cantidadTransiciones = get(hObject,'String'); %Almacenar valor ingresado
cantidadTransicionesdouble = str2double(cantidadTransiciones); %Transformar a formato double
handles.cantidadTransiciones = cantidadTransicionesdouble; %Almacenar en identificador
guidata(hObject,handles); %Salvar datos de la aplicación
 

% --- Executes during object creation, after setting all properties.
function edit2_CreateFcn(hObject, eventdata, handles)
% hObject    handle to edit2 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end
