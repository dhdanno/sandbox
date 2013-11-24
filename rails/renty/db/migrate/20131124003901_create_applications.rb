class CreateApplications < ActiveRecord::Migration
  def change
    create_table :applications do |t|
      t.string :name
      t.date :dob
      t.integer :sin
      t.text :current_address
      t.string :current_employer

      t.timestamps
    end
  end
end
