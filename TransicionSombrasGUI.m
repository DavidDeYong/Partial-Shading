function varargout = TransicionSombrasGUI(varargin)
% TRANSICIONSOMBRASGUI MATLAB code for TransicionSombrasGUI.fig
%      TRANSICIONSOMBRASGUI, by itself, creates a new TRANSICIONSOMBRASGUI or raises the existing
%      singleton*.
%
%      H = TRANSICIONSOMBRASGUI returns the handle to a new TRANSICIONSOMBRASGUI or the handle to
%      the existing singleton*.
%
%      TRANSICIONSOMBRASGUI('CALLBACK',hObject,eventData,handles,...) calls the local
%      function named CALLBACK in TRANSICIONSOMBRASGUI.M with the given input arguments.
%
%      TRANSICIONSOMBRASGUI('Property','Value',...) creates a new TRANSICIONSOMBRASGUI or raises the
%      existing singleton*.  Starting from the left, property value pairs are
%      applied to the GUI before TransicionSombrasGUI_OpeningFcn gets called.  An
%      unrecognized property name or invalid value makes property application
%      stop.  All inputs are passed to TransicionSombrasGUI_OpeningFcn via varargin.
%
%      *See GUI Options on GUIDE's Tools menu.  Choose "GUI allows only one
%      instance to run (singleton)".
%
% See also: GUIDE, GUIDATA, GUIHANDLES

% Edit the above text to modify the response to help TransicionSombrasGUI

% Last Modified by GUIDE v2.5 10-Jun-2016 11:01:13

% Begin initialization code - DO NOT EDIT
gui_Singleton = 1;
gui_State = struct('gui_Name',       mfilename, ...
                   'gui_Singleton',  gui_Singleton, ...
                   'gui_OpeningFcn', @TransicionSombrasGUI_OpeningFcn, ...
                   'gui_OutputFcn',  @TransicionSombrasGUI_OutputFcn, ...
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


% --- Executes just before TransicionSombrasGUI is made visible.
function TransicionSombrasGUI_OpeningFcn(hObject, eventdata, handles, varargin)
% This function has no output args, see OutputFcn.
% hObject    handle to figure
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)
% varargin   command line arguments to TransicionSombrasGUI (see VARARGIN)

% Choose default command line output for TransicionSombrasGUI
handles.output = hObject;

% Update handles structure
guidata(hObject, handles);

% UIWAIT makes TransicionSombrasGUI wait for user response (see UIRESUME)
% uiwait(handles.figure1);


% --- Outputs from this function are returned to the command line.
function varargout = TransicionSombrasGUI_OutputFcn(hObject, eventdata, handles) 
% varargout  cell array for returning output args (see VARARGOUT);
% hObject    handle to figure
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Get default command line output from handles structure
varargout{1} = handles.output;



function a111_Callback(hObject, eventdata, handles)
% hObject    handle to a111 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a111 as text
%        str2double(get(hObject,'String')) returns contents of a111 as a double


% --- Executes during object creation, after setting all properties.
function a111_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a111 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a121_Callback(hObject, eventdata, handles)
% hObject    handle to a121 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a121 as text
%        str2double(get(hObject,'String')) returns contents of a121 as a double


% --- Executes during object creation, after setting all properties.
function a121_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a121 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a131_Callback(hObject, eventdata, handles)
% hObject    handle to a131 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a131 as text
%        str2double(get(hObject,'String')) returns contents of a131 as a double


% --- Executes during object creation, after setting all properties.
function a131_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a131 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a141_Callback(hObject, eventdata, handles)
% hObject    handle to a141 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a141 as text
%        str2double(get(hObject,'String')) returns contents of a141 as a double


% --- Executes during object creation, after setting all properties.
function a141_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a141 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a151_Callback(hObject, eventdata, handles)
% hObject    handle to a151 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a151 as text
%        str2double(get(hObject,'String')) returns contents of a151 as a double


% --- Executes during object creation, after setting all properties.
function a151_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a151 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a161_Callback(hObject, eventdata, handles)
% hObject    handle to a161 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a161 as text
%        str2double(get(hObject,'String')) returns contents of a161 as a double


% --- Executes during object creation, after setting all properties.
function a161_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a161 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a211_Callback(hObject, eventdata, handles)
% hObject    handle to a211 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a211 as text
%        str2double(get(hObject,'String')) returns contents of a211 as a double


% --- Executes during object creation, after setting all properties.
function a211_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a211 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function edit9_Callback(hObject, eventdata, handles)
% hObject    handle to edit9 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of edit9 as text
%        str2double(get(hObject,'String')) returns contents of edit9 as a double


% --- Executes during object creation, after setting all properties.
function edit9_CreateFcn(hObject, eventdata, handles)
% hObject    handle to edit9 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a231_Callback(hObject, eventdata, handles)
% hObject    handle to a231 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a231 as text
%        str2double(get(hObject,'String')) returns contents of a231 as a double


% --- Executes during object creation, after setting all properties.
function a231_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a231 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a241_Callback(hObject, eventdata, handles)
% hObject    handle to a241 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a241 as text
%        str2double(get(hObject,'String')) returns contents of a241 as a double


% --- Executes during object creation, after setting all properties.
function a241_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a241 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a251_Callback(hObject, eventdata, handles)
% hObject    handle to a251 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a251 as text
%        str2double(get(hObject,'String')) returns contents of a251 as a double


% --- Executes during object creation, after setting all properties.
function a251_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a251 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a261_Callback(hObject, eventdata, handles)
% hObject    handle to a261 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a261 as text
%        str2double(get(hObject,'String')) returns contents of a261 as a double


% --- Executes during object creation, after setting all properties.
function a261_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a261 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a311_Callback(hObject, eventdata, handles)
% hObject    handle to a311 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a311 as text
%        str2double(get(hObject,'String')) returns contents of a311 as a double


% --- Executes during object creation, after setting all properties.
function a311_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a311 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a321_Callback(hObject, eventdata, handles)
% hObject    handle to a321 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a321 as text
%        str2double(get(hObject,'String')) returns contents of a321 as a double


% --- Executes during object creation, after setting all properties.
function a321_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a321 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a331_Callback(hObject, eventdata, handles)
% hObject    handle to a331 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a331 as text
%        str2double(get(hObject,'String')) returns contents of a331 as a double


% --- Executes during object creation, after setting all properties.
function a331_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a331 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a341_Callback(hObject, eventdata, handles)
% hObject    handle to a341 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a341 as text
%        str2double(get(hObject,'String')) returns contents of a341 as a double


% --- Executes during object creation, after setting all properties.
function a341_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a341 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a351_Callback(hObject, eventdata, handles)
% hObject    handle to a351 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a351 as text
%        str2double(get(hObject,'String')) returns contents of a351 as a double


% --- Executes during object creation, after setting all properties.
function a351_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a351 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a361_Callback(hObject, eventdata, handles)
% hObject    handle to a361 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a361 as text
%        str2double(get(hObject,'String')) returns contents of a361 as a double


% --- Executes during object creation, after setting all properties.
function a361_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a361 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a411_Callback(hObject, eventdata, handles)
% hObject    handle to a411 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a411 as text
%        str2double(get(hObject,'String')) returns contents of a411 as a double


% --- Executes during object creation, after setting all properties.
function a411_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a411 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a421_Callback(hObject, eventdata, handles)
% hObject    handle to a421 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a421 as text
%        str2double(get(hObject,'String')) returns contents of a421 as a double


% --- Executes during object creation, after setting all properties.
function a421_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a421 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a431_Callback(hObject, eventdata, handles)
% hObject    handle to a431 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a431 as text
%        str2double(get(hObject,'String')) returns contents of a431 as a double


% --- Executes during object creation, after setting all properties.
function a431_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a431 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a441_Callback(hObject, eventdata, handles)
% hObject    handle to a441 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a441 as text
%        str2double(get(hObject,'String')) returns contents of a441 as a double


% --- Executes during object creation, after setting all properties.
function a441_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a441 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a451_Callback(hObject, eventdata, handles)
% hObject    handle to a451 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a451 as text
%        str2double(get(hObject,'String')) returns contents of a451 as a double


% --- Executes during object creation, after setting all properties.
function a451_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a451 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a461_Callback(hObject, eventdata, handles)
% hObject    handle to a461 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a461 as text
%        str2double(get(hObject,'String')) returns contents of a461 as a double


% --- Executes during object creation, after setting all properties.
function a461_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a461 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a511_Callback(hObject, eventdata, handles)
% hObject    handle to a511 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a511 as text
%        str2double(get(hObject,'String')) returns contents of a511 as a double


% --- Executes during object creation, after setting all properties.
function a511_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a511 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a521_Callback(hObject, eventdata, handles)
% hObject    handle to a521 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a521 as text
%        str2double(get(hObject,'String')) returns contents of a521 as a double


% --- Executes during object creation, after setting all properties.
function a521_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a521 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a531_Callback(hObject, eventdata, handles)
% hObject    handle to a531 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a531 as text
%        str2double(get(hObject,'String')) returns contents of a531 as a double


% --- Executes during object creation, after setting all properties.
function a531_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a531 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a541_Callback(hObject, eventdata, handles)
% hObject    handle to a541 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a541 as text
%        str2double(get(hObject,'String')) returns contents of a541 as a double


% --- Executes during object creation, after setting all properties.
function a541_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a541 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a551_Callback(hObject, eventdata, handles)
% hObject    handle to a551 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a551 as text
%        str2double(get(hObject,'String')) returns contents of a551 as a double


% --- Executes during object creation, after setting all properties.
function a551_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a551 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a561_Callback(hObject, eventdata, handles)
% hObject    handle to a561 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a561 as text
%        str2double(get(hObject,'String')) returns contents of a561 as a double


% --- Executes during object creation, after setting all properties.
function a561_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a561 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a611_Callback(hObject, eventdata, handles)
% hObject    handle to a611 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a611 as text
%        str2double(get(hObject,'String')) returns contents of a611 as a double


% --- Executes during object creation, after setting all properties.
function a611_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a611 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a621_Callback(hObject, eventdata, handles)
% hObject    handle to a621 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a621 as text
%        str2double(get(hObject,'String')) returns contents of a621 as a double


% --- Executes during object creation, after setting all properties.
function a621_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a621 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a631_Callback(hObject, eventdata, handles)
% hObject    handle to a631 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a631 as text
%        str2double(get(hObject,'String')) returns contents of a631 as a double


% --- Executes during object creation, after setting all properties.
function a631_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a631 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a641_Callback(hObject, eventdata, handles)
% hObject    handle to a641 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a641 as text
%        str2double(get(hObject,'String')) returns contents of a641 as a double


% --- Executes during object creation, after setting all properties.
function a641_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a641 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a651_Callback(hObject, eventdata, handles)
% hObject    handle to a651 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a651 as text
%        str2double(get(hObject,'String')) returns contents of a651 as a double


% --- Executes during object creation, after setting all properties.
function a651_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a651 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a661_Callback(hObject, eventdata, handles)
% hObject    handle to a661 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a661 as text
%        str2double(get(hObject,'String')) returns contents of a661 as a double


% --- Executes during object creation, after setting all properties.
function a661_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a661 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a662_Callback(hObject, eventdata, handles)
% hObject    handle to a662 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a662 as text
%        str2double(get(hObject,'String')) returns contents of a662 as a double


% --- Executes during object creation, after setting all properties.
function a662_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a662 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a652_Callback(hObject, eventdata, handles)
% hObject    handle to a652 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a652 as text
%        str2double(get(hObject,'String')) returns contents of a652 as a double


% --- Executes during object creation, after setting all properties.
function a652_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a652 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a642_Callback(hObject, eventdata, handles)
% hObject    handle to a642 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a642 as text
%        str2double(get(hObject,'String')) returns contents of a642 as a double


% --- Executes during object creation, after setting all properties.
function a642_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a642 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function edit70_Callback(hObject, eventdata, handles)
% hObject    handle to edit70 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of edit70 as text
%        str2double(get(hObject,'String')) returns contents of edit70 as a double


% --- Executes during object creation, after setting all properties.
function edit70_CreateFcn(hObject, eventdata, handles)
% hObject    handle to edit70 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a622_Callback(hObject, eventdata, handles)
% hObject    handle to a622 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a622 as text
%        str2double(get(hObject,'String')) returns contents of a622 as a double


% --- Executes during object creation, after setting all properties.
function a622_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a622 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a612_Callback(hObject, eventdata, handles)
% hObject    handle to a612 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a612 as text
%        str2double(get(hObject,'String')) returns contents of a612 as a double


% --- Executes during object creation, after setting all properties.
function a612_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a612 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a562_Callback(hObject, eventdata, handles)
% hObject    handle to a562 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a562 as text
%        str2double(get(hObject,'String')) returns contents of a562 as a double


% --- Executes during object creation, after setting all properties.
function a562_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a562 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a552_Callback(hObject, eventdata, handles)
% hObject    handle to a552 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a552 as text
%        str2double(get(hObject,'String')) returns contents of a552 as a double


% --- Executes during object creation, after setting all properties.
function a552_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a552 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a542_Callback(hObject, eventdata, handles)
% hObject    handle to a542 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a542 as text
%        str2double(get(hObject,'String')) returns contents of a542 as a double


% --- Executes during object creation, after setting all properties.
function a542_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a542 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function edit64_Callback(hObject, eventdata, handles)
% hObject    handle to edit64 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of edit64 as text
%        str2double(get(hObject,'String')) returns contents of edit64 as a double


% --- Executes during object creation, after setting all properties.
function edit64_CreateFcn(hObject, eventdata, handles)
% hObject    handle to edit64 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a522_Callback(hObject, eventdata, handles)
% hObject    handle to a522 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a522 as text
%        str2double(get(hObject,'String')) returns contents of a522 as a double


% --- Executes during object creation, after setting all properties.
function a522_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a522 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a512_Callback(hObject, eventdata, handles)
% hObject    handle to a512 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a512 as text
%        str2double(get(hObject,'String')) returns contents of a512 as a double


% --- Executes during object creation, after setting all properties.
function a512_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a512 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a462_Callback(hObject, eventdata, handles)
% hObject    handle to a462 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a462 as text
%        str2double(get(hObject,'String')) returns contents of a462 as a double


% --- Executes during object creation, after setting all properties.
function a462_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a462 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a452_Callback(hObject, eventdata, handles)
% hObject    handle to a452 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a452 as text
%        str2double(get(hObject,'String')) returns contents of a452 as a double


% --- Executes during object creation, after setting all properties.
function a452_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a452 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a442_Callback(hObject, eventdata, handles)
% hObject    handle to a442 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a442 as text
%        str2double(get(hObject,'String')) returns contents of a442 as a double


% --- Executes during object creation, after setting all properties.
function a442_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a442 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a432_Callback(hObject, eventdata, handles)
% hObject    handle to a432 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a432 as text
%        str2double(get(hObject,'String')) returns contents of a432 as a double


% --- Executes during object creation, after setting all properties.
function a432_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a432 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a422_Callback(hObject, eventdata, handles)
% hObject    handle to a422 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a422 as text
%        str2double(get(hObject,'String')) returns contents of a422 as a double


% --- Executes during object creation, after setting all properties.
function a422_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a422 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a412_Callback(hObject, eventdata, handles)
% hObject    handle to a412 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a412 as text
%        str2double(get(hObject,'String')) returns contents of a412 as a double


% --- Executes during object creation, after setting all properties.
function a412_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a412 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a362_Callback(hObject, eventdata, handles)
% hObject    handle to a362 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a362 as text
%        str2double(get(hObject,'String')) returns contents of a362 as a double


% --- Executes during object creation, after setting all properties.
function a362_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a362 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a352_Callback(hObject, eventdata, handles)
% hObject    handle to a352 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a352 as text
%        str2double(get(hObject,'String')) returns contents of a352 as a double


% --- Executes during object creation, after setting all properties.
function a352_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a352 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a342_Callback(hObject, eventdata, handles)
% hObject    handle to a342 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a342 as text
%        str2double(get(hObject,'String')) returns contents of a342 as a double


% --- Executes during object creation, after setting all properties.
function a342_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a342 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a332_Callback(hObject, eventdata, handles)
% hObject    handle to a332 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a332 as text
%        str2double(get(hObject,'String')) returns contents of a332 as a double


% --- Executes during object creation, after setting all properties.
function a332_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a332 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a322_Callback(hObject, eventdata, handles)
% hObject    handle to a322 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a322 as text
%        str2double(get(hObject,'String')) returns contents of a322 as a double


% --- Executes during object creation, after setting all properties.
function a322_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a322 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a312_Callback(hObject, eventdata, handles)
% hObject    handle to a312 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a312 as text
%        str2double(get(hObject,'String')) returns contents of a312 as a double


% --- Executes during object creation, after setting all properties.
function a312_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a312 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a262_Callback(hObject, eventdata, handles)
% hObject    handle to a262 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a262 as text
%        str2double(get(hObject,'String')) returns contents of a262 as a double


% --- Executes during object creation, after setting all properties.
function a262_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a262 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a252_Callback(hObject, eventdata, handles)
% hObject    handle to a252 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a252 as text
%        str2double(get(hObject,'String')) returns contents of a252 as a double


% --- Executes during object creation, after setting all properties.
function a252_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a252 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a242_Callback(hObject, eventdata, handles)
% hObject    handle to a242 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a242 as text
%        str2double(get(hObject,'String')) returns contents of a242 as a double


% --- Executes during object creation, after setting all properties.
function a242_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a242 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a232_Callback(hObject, eventdata, handles)
% hObject    handle to a232 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a232 as text
%        str2double(get(hObject,'String')) returns contents of a232 as a double


% --- Executes during object creation, after setting all properties.
function a232_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a232 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a222_Callback(hObject, eventdata, handles)
% hObject    handle to a222 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a222 as text
%        str2double(get(hObject,'String')) returns contents of a222 as a double


% --- Executes during object creation, after setting all properties.
function a222_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a222 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a212_Callback(hObject, eventdata, handles)
% hObject    handle to a212 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a212 as text
%        str2double(get(hObject,'String')) returns contents of a212 as a double


% --- Executes during object creation, after setting all properties.
function a212_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a212 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a162_Callback(hObject, eventdata, handles)
% hObject    handle to a162 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a162 as text
%        str2double(get(hObject,'String')) returns contents of a162 as a double


% --- Executes during object creation, after setting all properties.
function a162_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a162 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a152_Callback(hObject, eventdata, handles)
% hObject    handle to a152 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a152 as text
%        str2double(get(hObject,'String')) returns contents of a152 as a double


% --- Executes during object creation, after setting all properties.
function a152_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a152 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a142_Callback(hObject, eventdata, handles)
% hObject    handle to a142 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a142 as text
%        str2double(get(hObject,'String')) returns contents of a142 as a double


% --- Executes during object creation, after setting all properties.
function a142_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a142 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a132_Callback(hObject, eventdata, handles)
% hObject    handle to a132 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a132 as text
%        str2double(get(hObject,'String')) returns contents of a132 as a double


% --- Executes during object creation, after setting all properties.
function a132_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a132 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a122_Callback(hObject, eventdata, handles)
% hObject    handle to a122 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a122 as text
%        str2double(get(hObject,'String')) returns contents of a122 as a double


% --- Executes during object creation, after setting all properties.
function a122_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a122 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    empty - handles not created until after all CreateFcns called

% Hint: edit controls usually have a white background on Windows.
%       See ISPC and COMPUTER.
if ispc && isequal(get(hObject,'BackgroundColor'), get(0,'defaultUicontrolBackgroundColor'))
    set(hObject,'BackgroundColor','white');
end



function a112_Callback(hObject, eventdata, handles)
% hObject    handle to a112 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a112 as text
%        str2double(get(hObject,'String')) returns contents of a112 as a double


% --- Executes during object creation, after setting all properties.
function a112_CreateFcn(hObject, eventdata, handles)
% hObject    handle to a112 (see GCBO)
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



function a133_Callback(hObject, eventdata, handles)
% hObject    handle to a133 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a133 as text
%        str2double(get(hObject,'String')) returns contents of a133 as a double


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



function edit107_Callback(hObject, eventdata, handles)
% hObject    handle to edit107 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of edit107 as text
%        str2double(get(hObject,'String')) returns contents of edit107 as a double


% --- Executes during object creation, after setting all properties.
function edit107_CreateFcn(hObject, eventdata, handles)
% hObject    handle to edit107 (see GCBO)
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



function a233_Callback(hObject, eventdata, handles)
% hObject    handle to a233 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of a233 as text
%        str2double(get(hObject,'String')) returns contents of a233 as a double


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



function edit101_Callback(hObject, eventdata, handles)
% hObject    handle to edit101 (see GCBO)
% eventdata  reserved - to be defined in a future version of MATLAB
% handles    structure with handles and user data (see GUIDATA)

% Hints: get(hObject,'String') returns contents of edit101 as text
%        str2double(get(hObject,'String')) returns contents of edit101 as a double


% --- Executes during object creation, after setting all properties.
function edit101_CreateFcn(hObject, eventdata, handles)
% hObject    handle to edit101 (see GCBO)
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
