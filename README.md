# **Phishy_Website**

**THIS DEMONSTRATION IS STRICTLY INTENDED FOR EDUCATIONAL PURPOSES ONLY. THE USE OF THIS TECHNIQUE FOR MALICIOUS PURPOSES IS ILLEGAL AND UNETHICAL.**

## Overview 

Phishing is a form of cyber attack where an attacker impersonates a legitimate entity or website to trick individuals into providing sensitive information, such as login credentials or personal details. This demonstration simulates a basic phishing scenario in which user input is captured through a malicious form.

This implementation utilizes [Formspree](https://www.formspree.io), a form-handling service that collects submitted form data and sends it to the attacker’s email. While this demonstration is intentionally simple, attackers typically create more sophisticated and convincing websites that mimic legitimate services.

## How it works

The page collects input from the user, in this case an email and password. When the user submits the form, the data is sent to Formspree, where it is forwarded to the attacker’s designated email address.

### Setup

1. Visit [Formspree](https://www.formspree.io) and create a new form endpoint. You will be provided with a unique URL that will receive the form submissions.

2. In the provided [HTML code](index.html), replace `<your formspree url>` with the Formspree URL you received. 

### Try it

Save the HTML file and run it locally on your machine. Enter some random info into form (e.g., me@example.com & password123), and click "Submit." Check the email associated with your Formspree account; you should see the data you submitted.