using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using Xamarin.Forms;

namespace Formulario_1
{
    public partial class MainPage : ContentPage
    {
        public MainPage()
        {
            InitializeComponent();
        }
        private void btn_Listo_Clicked(object sender, EventArgs e)
        {
            Navigation.PushAsync(new curriculum(nombre.Text, apellido.Text, Estudios.Text, xp.Text, area.Text, tel.Text, correo.Text));
          
        }
    }
}
