from distutils.core import setup, Extension
module1 = Extension( 
     'lineAndPoint',  # название модуля внутри Python
     sources = ['lineAndPoint.c'] # иходные файлы модуля
)

setup( name = 'lineAndPoint', # название модуля (my_plus.__name__)
       version = '1.1', # версия модуля
       description = 'This is a first package', # описание модуля
       ext_modules = [module1] # объекты типа Extension (мы объявили его выше)
     )
