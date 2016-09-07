<?php
/**
 * @file
 * stanford_opportunity_importer.strongarm.inc
 */

/**
 * Implements hook_strongarm().
 */
function stanford_opportunity_importer_strongarm() {
  $export = array();

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_options_stanford_opportunity_importer';
  $strongarm->value = array();
  $export['menu_options_stanford_opportunity_importer'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'menu_parent_stanford_opportunity_importer';
  $strongarm->value = 'main-menu:0';
  $export['menu_parent_stanford_opportunity_importer'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_options_stanford_opportunity_importer';
  $strongarm->value = array(
    0 => 'status',
  );
  $export['node_options_stanford_opportunity_importer'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_preview_stanford_opportunity_importer';
  $strongarm->value = '1';
  $export['node_preview_stanford_opportunity_importer'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'node_submitted_stanford_opportunity_importer';
  $strongarm->value = 0;
  $export['node_submitted_stanford_opportunity_importer'] = $strongarm;

  $strongarm = new stdClass();
  $strongarm->disabled = FALSE; /* Edit this to true to make a default strongarm disabled initially */
  $strongarm->api_version = 1;
  $strongarm->name = 'pathauto_node_stanford_opportunity_importer_pattern';
  $strongarm->value = '';
  $export['pathauto_node_stanford_opportunity_importer_pattern'] = $strongarm;

  return $export;
}
