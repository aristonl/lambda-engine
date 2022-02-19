# Lambda Engine Contributing Guide
Hey there! Thanks for checking out my project. We'd love to have your input and we hope to see your code in this project. We'd love to see changes such as:
 - Reporting bugs
 - Submitting bug fixes
 - Proposing features/implementing
 - Writing documentation
 - Becoming a maintainer
 - and, supporting the community.
<br>
In this guide, you'll get an overview on how to contribute to our project and what guidelines we'd like for each commit, issue, or pull request to follow.

## New Contributors
To get a quick overview of the project, see the [README](https://github.com/4tl0renz0/lambda-engine#README). 
<br>
For hosting code, we are using GitHub to host our repositories. We still do accept people hosting on your own servers but to make things as easy as possible, try to host your repository on GitHub (or make a mirror).
<br>
When it comes to communication, Email comes first, Discord comes second. We tend to use email more since I (4tl) am a student and the school blocks Discord so it's easier for us to use email to communicate. You can join our mailing list through Google Groups under `lambda-engine`. [Discord](https://discord.gg/65fmUzsKkG) is also still used but only for quick communication and quick help/chit-chat.

## Getting Started
To navigate this repository, either read up on some documentation (we try to spend a lot of time on this so please read), or just hop around the files; we tend to comment a lot to help us understand the code (or express our pain and agony with mass amount of curse words).

### Issues

#### Creating an issue
If you spot a problem when building the engine, or a problem in the code or docs, check if an [issue already exists](https://github.com/4tl0renz0/lambda-engine/issues). If a related issue doesn't exist, you can open a new issue using the template. We also prefer if you mirror your issue to the mailing list since it will be easier for us to be notified.

#### Solving an issue
Look through our [issues](https://github.com/4tl0renz0/lambda-engine/issues) and find one that interests you. 

### Making changes

#### Cloning
Before cloning the repository, make sure you clone the correct fork that goes along with your commit.
 - [4tl0renz0/master](https://github.com/4tl0renz0/lambda-engine) - Main branch of Lambda. Accepts likely unstable large implementations, bug fixes, etc.. Branch may be unstable. Maintainer: [@4tl0renz0](https://github.com/4tl0renz0)
 - [redpendrew/stable](https://github.com/redpendrew/lambda-engine) - Stable branch of Lambda. Releases as MAJOR.MINOR.PATCH. Accepts only small bug-fixes. Maintainer: [@redpendrew](https://github.com/redpendrew)
 - [Myst330/release](https://github.com/Myst330/lambda-engine) - Release branch of Lambda. Fetches commits to lead up to next major release. Accepts major bugfixes and features. Maintainer: [@Myst330](https://github.com/Myst330)
Once you select which fork your commit should belong to, fork that repository and clone it.

#### Coding Style
Lambda Engine (as of now) has a very *loose* coding style, described in [CodingStyle.md](https://github.com/4tl0renz0/lambda-engine/blob/main/docs/CodingStyle.md). When making your changes, try to follow this styleguide as much as possible.

#### Commiting
When making commit names, try to make sure they are descriptive in what your commit changes. Make sure to also specify what subsection of the engine you have made changes to. Last but not least, sign off on your commit. This improves tracking of who made/accepted what and follows the Developer's Certificate of Origin. A shortened version of the Developer's Certificate of Origin is as follows:
```
By making a contribution to this project, I certify that:
	1. This commit was created in whole by me or in part by me with help from co-authors and I submit this code under the license specified in this file; or...
	2. This commit is based upon previous work that is covered under an open source license and I have the right under that license to commit this work with modifications created in whole by me or in part with co-authors, under the same license (unless I am permitted to do otherwise), as in the file; or
	3. This code was provided directly to me by some other person who certified (a), (b) or (c) and I have not modified it.
	4. I understand that this project and commit is public and a record of the commit, with included personal information that I submit with it, remains online indefinitely.
```
An example commit would be:
```
mathlib: Added a new operator to ivec4.

Signed-off-by: Ariston Lorenzo <4tl0renz0@gmail.com>
```

#### Patching
Once your commit is made, you can either directly create a pull request on GitHub, or submit a patch to the email list (which will result in a faster merge or reject). If you choose a GitHub Pull Request, just follow the template and submit your request. If you choose patches, this is how to create and send patches to the mailing list.
<br>
First, take the commit ID of your commit and run `git format-patch -1 [commit ID]`. Keep creating patches for every commit part of your PR. Once you finish, edit the subject of your tag to include the fork/branch name and commit number (out of all commits part of the PR) if multiple commits are part of the PR. It should look something like this:
```
Single Commit Example:
Subject: [4tl0renz0/master] [PATCH] mathlib: Added a new operator to ivec4.

Multiple Commit Example:
Subject: [Myst330/release] [02/03] [PATCH] mathlib: Implemented ivec3.
```
Now all you have to do is use `git send-email` to send it to the mailing list, and the maintainer will let you know if you were merged or rejected. A tutorial for `git send-email` is available at https://git-send-email.io/
