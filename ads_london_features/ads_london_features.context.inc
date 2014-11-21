<?php
/**
 * @file
 * ads_london_features.context.inc
 */

/**
 * Implements hook_context_default_contexts().
 */
function ads_london_features_context_default_contexts() {
  $export = array();

  $context = new stdClass();
  $context->disabled = FALSE; /* Edit this to true to make a default context disabled initially */
  $context->api_version = 3;
  $context->name = 'ads_london_content_home';
  $context->description = 'Display blocks on Homepage.';
  $context->tag = 'ADS London';
  $context->conditions = array(
    'path' => array(
      'values' => array(
        '<front>' => '<front>',
      ),
    ),
  );
  $context->reactions = array(
    'block' => array(
      'blocks' => array(
        'views-ads_selected-recent' => array(
          'module' => 'views',
          'delta' => 'ads_selected-recent',
          'region' => 'header_bottom',
          'weight' => '-10',
        ),
      ),
    ),
  );
  $context->condition_mode = 0;

  // Translatables
  // Included for use with string extractors like potx.
  t('ADS London');
  t('Display blocks on Homepage.');
  $export['ads_london_content_home'] = $context;

  return $export;
}
