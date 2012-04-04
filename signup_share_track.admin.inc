<?php

function signup_share_track_settings() {
  $form = array();
  $form['allows_char'] = array(
    '#type' => 'textfield',
    '#title' => t('Allows character for generate user url'),
    '#default_value' => variable_get('signup_share_track_allow_char', 'QWERTYUIOPASDFGHJKLZXCVBNMqwertyuiopasdfghjklzxcvbnm'),
    '#required' => TRUE,
  );
  $form['num'] = array(
    '#type' => 'textfield',
    '#title' => t('Num character for url'),
    '#default_value' => variable_get('signup_share_track_len_link', '3'),
    '#required' => TRUE,
  );
  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Save'),
  );

  return $form;
}

function signup_share_track_settings_validate($form, $form_state) {
  $values = $form_state['values'];
  if (!is_numeric($values['num'])) {
    form_set_error('num', t('You can use only numbers'));
  }
  elseif ($values['num'] > 200) {
    form_set_error('num', t('Max number 200'));
  }
}

function signup_share_track_settings_submit($form, $form_state) {
  variable_set('signup_share_track_allow_char', $form_state['values']['allows_char']);
  variable_set('signup_share_track_len_link', $form_state['values']['num']);
  drupal_set_message('Saved');
}

function signup_share_track_view($form, $form_state) {
  $form = array();
  $form['title'] = array(
    '#title' => t('Title'),
    '#type' => 'textfield',
    '#weight' => '-5',
    '#default_value' => variable_get('sst_title', 'Join The Revolution'),
    '#required' => '1',
  );
  $form['text'] = array(
    '#title' => t('Text'),
    '#type' => 'textfield',
    '#weight' => '-4',
    '#default_value' => variable_get('sst_text', '<username> Recommends You Join The Revolution, Sign Up Now'),
    '#description' => t('You can use variable &lt;username&gt; for display name of page owner.'),
    '#required' => '1',
  );
  $form['button'] = array(
    '#title' => t('Button text'),
    '#type' => 'textfield',
    '#weight' => '-3',
    '#default_value' => variable_get('sst_signup_button', 'Signup Now'),
    '#required' => '1',
  );
  $form['share_checkboxes'] = array(
    '#multiple' => '1',
    /* '#key_type_toggled' => '1', */
    '#required' => '0',
    '#weight' => '1',
    '#default_value' => array(
      '1' => variable_get('sst_addthis', 1),
      '2' => variable_get('sst_jiathis', 2),
    ),
    '#type' => 'checkboxes',
    '#title' => t('Share buttons'),
    '#options' => array(
      '1' => t('Addthis'),
      '2' => t('JiaThis'),
    ),
  );
  $form['submit'] = array(
    '#type' => 'submit',
    '#value' => t('Submit'),
    '#weight' => '2',
  );
  return $form;
}

function signup_share_track_view_submit($form, $form_state) {

  $values = $form_state['values'];
  variable_set('sst_addthis', $values['share_checkboxes']['1']);
  variable_set('sst_jiathis', $values['share_checkboxes']['2']);
  variable_set('sst_title', $values['title']);
  variable_set('sst_text', $values['text']);
  variable_set('sst_signup_button', $values['button']);
  drupal_set_message(t('Saved'));
}
