using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows;
using System.Windows.Controls;
using System.Windows.Data;
using System.Windows.Documents;
using System.Windows.Input;
using System.Windows.Media;
using System.Windows.Media.Imaging;
using System.Windows.Navigation;
using System.Windows.Shapes;

namespace WpfApp2
{
    /// <summary>
    /// MainWindow.xaml에 대한 상호 작용 논리
    /// </summary>
    public partial class MainWindow : Window
    {
        public MainWindow()
        {
            InitializeComponent();
        }

        private void a_Click(object sender, RoutedEventArgs e)
        {
            a w = new a();
            w.Show();
        }

        private void b_Click(object sender, RoutedEventArgs e)
        {
            b w = new b();
            w.Show();
        }

        private void c_Click(object sender, RoutedEventArgs e)
        {
            c w = new c();
            w.Show();
        }

        private void d_Click(object sender, RoutedEventArgs e)
        {
            d w = new d();
            w.Show();
        }

        private void e_Click(object sender, RoutedEventArgs e)
        {
            e w = new e();
            w.Show();
        }

        //private void f_Click(object sender, RoutedEventArgs e)
        //{
        //    f w = new f();
        //    w.Show();
        //}

        private void btnExit_Click(object sender, RoutedEventArgs e)
        {
            this.Close();
        }

        private void f_Click(object sender, RoutedEventArgs e)
        {
            f w = new f();
            w.Show();
        }
    }
}
