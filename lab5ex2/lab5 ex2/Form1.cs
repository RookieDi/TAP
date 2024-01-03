using System;
using System.Collections.Generic;
using System.ComponentModel;
using System.Data;
using System.Drawing;
using System.Linq;
using System.Text;
using System.Threading.Tasks;
using System.Windows.Forms;

namespace lab5_ex2
{
    public partial class Form1 : Form
    {
        public Form1()
        {
            InitializeComponent();
        }

        private void adaugareToolStripMenuItem_Click(object sender, EventArgs e)
        {
            AddProduct f = new AddProduct();

            f.ShowDialog();
        }

        private void dataGridView1_CellContentClick(object sender, DataGridViewCellEventArgs e)
        {

        }

        private void refresh_Click(object sender, EventArgs e)
        {
            using (MagazinDBContext dB = new MagazinDBContext())
            {
                var res = from s in dB.Produse select new
                {
                    s.Id,
                    s.Denumire,
                    s.Cantitate
                };
                dataGridView1.DataSource = res.ToList();
            }
        }

        private void dataGridView1_CellDoubleClick(object sender, DataGridViewCellEventArgs e)
        {
            int id;
            id = int.Parse(dataGridView1.Rows[e.RowIndex].Cells["Id"].Value.ToString());

            using (MagazinDBContext dbB = new MagazinDBContext())
            {
                var res = dbB.Produse.SingleOrDefault(x => x.Id == id);
                
                if (res == null)
                {
                    res.Cantitate--;
                    dbB.SaveChanges();
                }
                
            }
        }

        private void txtsearch_TextChanged(object sender, EventArgs e)
        {

        }

        private void cautare_Click(object sender, EventArgs e)
        {

        }
    }
}
