namespace Loader
{
    partial class Loader
    {
        /// <summary>
        /// Required designer variable.
        /// </summary>
        private System.ComponentModel.IContainer components = null;

        /// <summary>
        /// Clean up any resources being used.
        /// </summary>
        /// <param name="disposing">true if managed resources should be disposed; otherwise, false.</param>
        protected override void Dispose(bool disposing)
        {
            if (disposing && (components != null))
            {
                components.Dispose();
            }
            base.Dispose(disposing);
        }

        #region Windows Form Designer generated code

        /// <summary>
        /// Required method for Designer support - do not modify
        /// the contents of this method with the code editor.
        /// </summary>
        private void InitializeComponent()
        {
            this.mainLabel = new System.Windows.Forms.Label();
            this.authorInfo = new System.Windows.Forms.Label();
            this.authorPage = new System.Windows.Forms.LinkLabel();
            this.runButton = new System.Windows.Forms.Button();
            this.rotateBox = new System.Windows.Forms.CheckBox();
            this.helpButton = new System.Windows.Forms.LinkLabel();
            this.sourceButton = new System.Windows.Forms.Button();
            this.pathTB = new System.Windows.Forms.TextBox();
            this.nameTB = new System.Windows.Forms.TextBox();
            this.layerTB = new System.Windows.Forms.TextBox();
            this.data = new System.Windows.Forms.ComboBox();
            this.pathLabel = new System.Windows.Forms.Label();
            this.nameLabel = new System.Windows.Forms.Label();
            this.layerLabel = new System.Windows.Forms.Label();
            this.copyButton = new System.Windows.Forms.Button();
            this.button2 = new System.Windows.Forms.Button();
            this.SuspendLayout();
            // 
            // mainLabel
            // 
            this.mainLabel.AutoSize = true;
            this.mainLabel.Font = new System.Drawing.Font("Microsoft Sans Serif", 20.25F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(238)));
            this.mainLabel.Location = new System.Drawing.Point(98, -2);
            this.mainLabel.Name = "mainLabel";
            this.mainLabel.Size = new System.Drawing.Size(225, 31);
            this.mainLabel.TabIndex = 4;
            this.mainLabel.Text = "Tiles Map Editor";
            // 
            // authorInfo
            // 
            this.authorInfo.AutoSize = true;
            this.authorInfo.Font = new System.Drawing.Font("Microsoft Sans Serif", 12F, System.Drawing.FontStyle.Bold, System.Drawing.GraphicsUnit.Point, ((byte)(238)));
            this.authorInfo.Location = new System.Drawing.Point(170, 29);
            this.authorInfo.Name = "authorInfo";
            this.authorInfo.Size = new System.Drawing.Size(78, 20);
            this.authorInfo.TabIndex = 5;
            this.authorInfo.Text = "by mvxxx";
            // 
            // authorPage
            // 
            this.authorPage.AutoSize = true;
            this.authorPage.Location = new System.Drawing.Point(28, 195);
            this.authorPage.Name = "authorPage";
            this.authorPage.Size = new System.Drawing.Size(90, 13);
            this.authorPage.TabIndex = 8;
            this.authorPage.TabStop = true;
            this.authorPage.Text = "Check my GitHub";
            this.authorPage.LinkClicked += new System.Windows.Forms.LinkLabelLinkClickedEventHandler(this.authorPage_LinkClicked);
            // 
            // runButton
            // 
            this.runButton.Location = new System.Drawing.Point(356, 185);
            this.runButton.Name = "runButton";
            this.runButton.Size = new System.Drawing.Size(75, 23);
            this.runButton.TabIndex = 10;
            this.runButton.Text = "Run Editor";
            this.runButton.UseVisualStyleBackColor = true;
            this.runButton.Click += new System.EventHandler(this.runButton_Click);
            // 
            // rotateBox
            // 
            this.rotateBox.AutoSize = true;
            this.rotateBox.Location = new System.Drawing.Point(236, 189);
            this.rotateBox.Name = "rotateBox";
            this.rotateBox.RightToLeft = System.Windows.Forms.RightToLeft.Yes;
            this.rotateBox.Size = new System.Drawing.Size(99, 17);
            this.rotateBox.TabIndex = 11;
            this.rotateBox.Text = "Include rotation";
            this.rotateBox.UseVisualStyleBackColor = true;
            // 
            // helpButton
            // 
            this.helpButton.AutoSize = true;
            this.helpButton.Location = new System.Drawing.Point(124, 195);
            this.helpButton.Name = "helpButton";
            this.helpButton.Size = new System.Drawing.Size(29, 13);
            this.helpButton.TabIndex = 12;
            this.helpButton.TabStop = true;
            this.helpButton.Text = "Help";
            this.helpButton.LinkClicked += new System.Windows.Forms.LinkLabelLinkClickedEventHandler(this.helpButton_LinkClicked);
            // 
            // sourceButton
            // 
            this.sourceButton.Location = new System.Drawing.Point(356, 81);
            this.sourceButton.Name = "sourceButton";
            this.sourceButton.Size = new System.Drawing.Size(75, 23);
            this.sourceButton.TabIndex = 13;
            this.sourceButton.Text = "Add  source";
            this.sourceButton.UseVisualStyleBackColor = true;
            this.sourceButton.Click += new System.EventHandler(this.sourceButton_Click);
            // 
            // pathTB
            // 
            this.pathTB.Location = new System.Drawing.Point(18, 83);
            this.pathTB.Name = "pathTB";
            this.pathTB.Size = new System.Drawing.Size(100, 20);
            this.pathTB.TabIndex = 14;
            // 
            // nameTB
            // 
            this.nameTB.Location = new System.Drawing.Point(127, 84);
            this.nameTB.Name = "nameTB";
            this.nameTB.Size = new System.Drawing.Size(100, 20);
            this.nameTB.TabIndex = 15;
            // 
            // layerTB
            // 
            this.layerTB.Location = new System.Drawing.Point(238, 84);
            this.layerTB.Name = "layerTB";
            this.layerTB.Size = new System.Drawing.Size(100, 20);
            this.layerTB.TabIndex = 16;
            // 
            // data
            // 
            this.data.FormattingEnabled = true;
            this.data.Location = new System.Drawing.Point(18, 144);
            this.data.Name = "data";
            this.data.Size = new System.Drawing.Size(121, 21);
            this.data.TabIndex = 17;
            // 
            // pathLabel
            // 
            this.pathLabel.AutoSize = true;
            this.pathLabel.Font = new System.Drawing.Font("Microsoft Sans Serif", 9F, ((System.Drawing.FontStyle)((System.Drawing.FontStyle.Bold | System.Drawing.FontStyle.Italic))), System.Drawing.GraphicsUnit.Point, ((byte)(238)));
            this.pathLabel.Location = new System.Drawing.Point(44, 65);
            this.pathLabel.Name = "pathLabel";
            this.pathLabel.Size = new System.Drawing.Size(36, 15);
            this.pathLabel.TabIndex = 18;
            this.pathLabel.Text = "Path";
            // 
            // nameLabel
            // 
            this.nameLabel.AutoSize = true;
            this.nameLabel.Font = new System.Drawing.Font("Microsoft Sans Serif", 9F, ((System.Drawing.FontStyle)((System.Drawing.FontStyle.Bold | System.Drawing.FontStyle.Italic))), System.Drawing.GraphicsUnit.Point, ((byte)(238)));
            this.nameLabel.Location = new System.Drawing.Point(157, 65);
            this.nameLabel.Name = "nameLabel";
            this.nameLabel.Size = new System.Drawing.Size(45, 15);
            this.nameLabel.TabIndex = 19;
            this.nameLabel.Text = "Name";
            // 
            // layerLabel
            // 
            this.layerLabel.AutoSize = true;
            this.layerLabel.Font = new System.Drawing.Font("Microsoft Sans Serif", 9F, ((System.Drawing.FontStyle)((System.Drawing.FontStyle.Bold | System.Drawing.FontStyle.Italic))), System.Drawing.GraphicsUnit.Point, ((byte)(238)));
            this.layerLabel.Location = new System.Drawing.Point(235, 65);
            this.layerLabel.Name = "layerLabel";
            this.layerLabel.Size = new System.Drawing.Size(105, 15);
            this.layerLabel.TabIndex = 20;
            this.layerLabel.Text = "Layer (number)";
            // 
            // copyButton
            // 
            this.copyButton.Location = new System.Drawing.Point(160, 158);
            this.copyButton.Name = "copyButton";
            this.copyButton.Size = new System.Drawing.Size(127, 23);
            this.copyButton.TabIndex = 21;
            this.copyButton.Text = "Copy data to textboxes";
            this.copyButton.UseVisualStyleBackColor = true;
            this.copyButton.Click += new System.EventHandler(this.copyButton_Click);
            // 
            // button2
            // 
            this.button2.Location = new System.Drawing.Point(160, 129);
            this.button2.Name = "button2";
            this.button2.Size = new System.Drawing.Size(127, 23);
            this.button2.TabIndex = 22;
            this.button2.Text = "Remove";
            this.button2.UseVisualStyleBackColor = true;
            this.button2.Click += new System.EventHandler(this.button2_Click);
            // 
            // Loader
            // 
            this.AutoScaleDimensions = new System.Drawing.SizeF(6F, 13F);
            this.AutoScaleMode = System.Windows.Forms.AutoScaleMode.Font;
            this.ClientSize = new System.Drawing.Size(437, 212);
            this.Controls.Add(this.button2);
            this.Controls.Add(this.copyButton);
            this.Controls.Add(this.layerLabel);
            this.Controls.Add(this.nameLabel);
            this.Controls.Add(this.pathLabel);
            this.Controls.Add(this.data);
            this.Controls.Add(this.layerTB);
            this.Controls.Add(this.nameTB);
            this.Controls.Add(this.pathTB);
            this.Controls.Add(this.sourceButton);
            this.Controls.Add(this.helpButton);
            this.Controls.Add(this.rotateBox);
            this.Controls.Add(this.runButton);
            this.Controls.Add(this.authorPage);
            this.Controls.Add(this.authorInfo);
            this.Controls.Add(this.mainLabel);
            this.FormBorderStyle = System.Windows.Forms.FormBorderStyle.FixedSingle;
            this.Name = "Loader";
            this.ShowIcon = false;
            this.Text = "Map Editor by mvxxx";
            this.ResumeLayout(false);
            this.PerformLayout();

        }

        #endregion
        private System.Windows.Forms.Label mainLabel;
        private System.Windows.Forms.Label authorInfo;
        private System.Windows.Forms.LinkLabel authorPage;
        private System.Windows.Forms.Button runButton;
        private System.Windows.Forms.CheckBox rotateBox;
        private System.Windows.Forms.LinkLabel helpButton;
        private System.Windows.Forms.Button sourceButton;
        private System.Windows.Forms.TextBox pathTB;
        private System.Windows.Forms.TextBox nameTB;
        private System.Windows.Forms.TextBox layerTB;
        private System.Windows.Forms.ComboBox data;
        private System.Windows.Forms.Label pathLabel;
        private System.Windows.Forms.Label nameLabel;
        private System.Windows.Forms.Label layerLabel;
        private System.Windows.Forms.Button copyButton;
        private System.Windows.Forms.Button button2;
    }
}

