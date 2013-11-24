class CreateProfiles < ActiveRecord::Migration
  def change
    create_table :profiles do |t|
      t.string :first_name
      t.string :last_name
      t.string :company_name
      t.string :type

      t.timestamps
    end
  end
end
