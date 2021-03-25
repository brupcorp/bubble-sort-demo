object Form1: TForm1
  Left = 192
  Top = 125
  Width = 1573
  Height = 661
  Caption = 'Form1'
  Color = clBtnFace
  Font.Charset = DEFAULT_CHARSET
  Font.Color = clWindowText
  Font.Height = -11
  Font.Name = 'MS Sans Serif'
  Font.Style = []
  OldCreateOrder = False
  PixelsPerInch = 96
  TextHeight = 13
  object onBtnAnzeigen: TButton
    Left = 40
    Top = 32
    Width = 217
    Height = 89
    Caption = 'Anzeigen/Clear'
    TabOrder = 0
    OnClick = onBtnAnzeigenClick
  end
  object Button1: TButton
    Left = 280
    Top = 32
    Width = 209
    Height = 65
    Caption = 'Zeichen'
    TabOrder = 1
    OnClick = Button1Click
  end
  object Button2: TButton
    Left = 600
    Top = 32
    Width = 75
    Height = 25
    Caption = 'mischen (WIP)'
    TabOrder = 2
    OnClick = Button2Click
  end
  object RichEdit1: TRichEdit
    Left = 1264
    Top = 40
    Width = 273
    Height = 569
    Lines.Strings = (
      'RichEdit1')
    ScrollBars = ssBoth
    TabOrder = 3
  end
  object Button3: TButton
    Left = 512
    Top = 32
    Width = 73
    Height = 25
    Caption = 'Sort'
    TabOrder = 4
    OnClick = Button3Click
  end
  object Button4: TButton
    Left = 1072
    Top = 560
    Width = 177
    Height = 41
    Caption = 'Clear!'
    TabOrder = 5
    OnClick = Button4Click
  end
end
