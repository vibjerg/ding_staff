<?php
/**
 * @file
 * ding_staff.field_group.inc
 */

/**
 * Implements hook_field_group_info().
 */
function ding_staff_field_group_info() {
  $export = array();

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ding_staff_contact|profile2|staff|form';
  $field_group->group_name = 'group_ding_staff_contact';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'staff';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Contact',
    'weight' => '3',
    'children' => array(
      0 => 'field_ding_staff_email',
      1 => 'field_ding_staff_phone',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_ding_staff_contact|profile2|staff|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ding_staff_name|profile2|staff|form';
  $field_group->group_name = 'group_ding_staff_name';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'staff';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Name',
    'weight' => '0',
    'children' => array(
      0 => 'field_ding_staff_forename',
      1 => 'field_ding_staff_surname',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_ding_staff_name|profile2|staff|form'] = $field_group;

  $field_group = new stdClass();
  $field_group->disabled = FALSE; /* Edit this to true to make a default field_group disabled initially */
  $field_group->api_version = 1;
  $field_group->identifier = 'group_ding_staff_organisation|profile2|staff|form';
  $field_group->group_name = 'group_ding_staff_organisation';
  $field_group->entity_type = 'profile2';
  $field_group->bundle = 'staff';
  $field_group->mode = 'form';
  $field_group->parent_name = '';
  $field_group->data = array(
    'label' => 'Organisation',
    'weight' => '2',
    'children' => array(
      0 => 'field_ding_staff_department',
      1 => 'field_ding_staff_library',
      2 => 'field_ding_staff_position',
    ),
    'format_type' => 'fieldset',
    'format_settings' => array(
      'formatter' => 'collapsible',
      'instance_settings' => array(
        'description' => '',
        'classes' => '',
        'required_fields' => 1,
      ),
    ),
  );
  $export['group_ding_staff_organisation|profile2|staff|form'] = $field_group;

  return $export;
}