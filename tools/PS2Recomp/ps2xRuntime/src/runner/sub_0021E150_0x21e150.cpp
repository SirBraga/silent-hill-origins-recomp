#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include <ps2_recompiled_functions.h>
#include <ps2_recompiled_stubs.h>

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0021E150
// Address: 0x21e150 - 0x21e2f8
void sub_0021E150_0x21e150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0021E150_0x21e150");
#endif

    switch (ctx->pc) {
        case 0x21e150u: goto label_21e150;
        case 0x21e154u: goto label_21e154;
        case 0x21e158u: goto label_21e158;
        case 0x21e15cu: goto label_21e15c;
        case 0x21e160u: goto label_21e160;
        case 0x21e164u: goto label_21e164;
        case 0x21e168u: goto label_21e168;
        case 0x21e16cu: goto label_21e16c;
        case 0x21e170u: goto label_21e170;
        case 0x21e174u: goto label_21e174;
        case 0x21e178u: goto label_21e178;
        case 0x21e17cu: goto label_21e17c;
        case 0x21e180u: goto label_21e180;
        case 0x21e184u: goto label_21e184;
        case 0x21e188u: goto label_21e188;
        case 0x21e18cu: goto label_21e18c;
        case 0x21e190u: goto label_21e190;
        case 0x21e194u: goto label_21e194;
        case 0x21e198u: goto label_21e198;
        case 0x21e19cu: goto label_21e19c;
        case 0x21e1a0u: goto label_21e1a0;
        case 0x21e1a4u: goto label_21e1a4;
        case 0x21e1a8u: goto label_21e1a8;
        case 0x21e1acu: goto label_21e1ac;
        case 0x21e1b0u: goto label_21e1b0;
        case 0x21e1b4u: goto label_21e1b4;
        case 0x21e1b8u: goto label_21e1b8;
        case 0x21e1bcu: goto label_21e1bc;
        case 0x21e1c0u: goto label_21e1c0;
        case 0x21e1c4u: goto label_21e1c4;
        case 0x21e1c8u: goto label_21e1c8;
        case 0x21e1ccu: goto label_21e1cc;
        case 0x21e1d0u: goto label_21e1d0;
        case 0x21e1d4u: goto label_21e1d4;
        case 0x21e1d8u: goto label_21e1d8;
        case 0x21e1dcu: goto label_21e1dc;
        case 0x21e1e0u: goto label_21e1e0;
        case 0x21e1e4u: goto label_21e1e4;
        case 0x21e1e8u: goto label_21e1e8;
        case 0x21e1ecu: goto label_21e1ec;
        case 0x21e1f0u: goto label_21e1f0;
        case 0x21e1f4u: goto label_21e1f4;
        case 0x21e1f8u: goto label_21e1f8;
        case 0x21e1fcu: goto label_21e1fc;
        case 0x21e200u: goto label_21e200;
        case 0x21e204u: goto label_21e204;
        case 0x21e208u: goto label_21e208;
        case 0x21e20cu: goto label_21e20c;
        case 0x21e210u: goto label_21e210;
        case 0x21e214u: goto label_21e214;
        case 0x21e218u: goto label_21e218;
        case 0x21e21cu: goto label_21e21c;
        case 0x21e220u: goto label_21e220;
        case 0x21e224u: goto label_21e224;
        case 0x21e228u: goto label_21e228;
        case 0x21e22cu: goto label_21e22c;
        case 0x21e230u: goto label_21e230;
        case 0x21e234u: goto label_21e234;
        case 0x21e238u: goto label_21e238;
        case 0x21e23cu: goto label_21e23c;
        case 0x21e240u: goto label_21e240;
        case 0x21e244u: goto label_21e244;
        case 0x21e248u: goto label_21e248;
        case 0x21e24cu: goto label_21e24c;
        case 0x21e250u: goto label_21e250;
        case 0x21e254u: goto label_21e254;
        case 0x21e258u: goto label_21e258;
        case 0x21e25cu: goto label_21e25c;
        case 0x21e260u: goto label_21e260;
        case 0x21e264u: goto label_21e264;
        case 0x21e268u: goto label_21e268;
        case 0x21e26cu: goto label_21e26c;
        case 0x21e270u: goto label_21e270;
        case 0x21e274u: goto label_21e274;
        case 0x21e278u: goto label_21e278;
        case 0x21e27cu: goto label_21e27c;
        case 0x21e280u: goto label_21e280;
        case 0x21e284u: goto label_21e284;
        case 0x21e288u: goto label_21e288;
        case 0x21e28cu: goto label_21e28c;
        case 0x21e290u: goto label_21e290;
        case 0x21e294u: goto label_21e294;
        case 0x21e298u: goto label_21e298;
        case 0x21e29cu: goto label_21e29c;
        case 0x21e2a0u: goto label_21e2a0;
        case 0x21e2a4u: goto label_21e2a4;
        case 0x21e2a8u: goto label_21e2a8;
        case 0x21e2acu: goto label_21e2ac;
        case 0x21e2b0u: goto label_21e2b0;
        case 0x21e2b4u: goto label_21e2b4;
        case 0x21e2b8u: goto label_21e2b8;
        case 0x21e2bcu: goto label_21e2bc;
        case 0x21e2c0u: goto label_21e2c0;
        case 0x21e2c4u: goto label_21e2c4;
        case 0x21e2c8u: goto label_21e2c8;
        case 0x21e2ccu: goto label_21e2cc;
        case 0x21e2d0u: goto label_21e2d0;
        case 0x21e2d4u: goto label_21e2d4;
        case 0x21e2d8u: goto label_21e2d8;
        case 0x21e2dcu: goto label_21e2dc;
        case 0x21e2e0u: goto label_21e2e0;
        case 0x21e2e4u: goto label_21e2e4;
        case 0x21e2e8u: goto label_21e2e8;
        case 0x21e2ecu: goto label_21e2ec;
        case 0x21e2f0u: goto label_21e2f0;
        case 0x21e2f4u: goto label_21e2f4;
        default: break;
    }

    ctx->pc = 0x21e150u;

label_21e150:
    // 0x21e150: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x21e150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
label_21e154:
    // 0x21e154: 0x3403fc00  ori         $v1, $zero, 0xFC00
    ctx->pc = 0x21e154u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)64512);
label_21e158:
    // 0x21e158: 0x31db8  dsll        $v1, $v1, 22
    ctx->pc = 0x21e158u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 22);
label_21e15c:
    // 0x21e15c: 0x7fb20040  sq          $s2, 0x40($sp)
    ctx->pc = 0x21e15cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 18));
label_21e160:
    // 0x21e160: 0x7fb00060  sq          $s0, 0x60($sp)
    ctx->pc = 0x21e160u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 16));
label_21e164:
    // 0x21e164: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x21e164u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_21e168:
    // 0x21e168: 0x7fb10050  sq          $s1, 0x50($sp)
    ctx->pc = 0x21e168u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 17));
label_21e16c:
    // 0x21e16c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x21e16cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
label_21e170:
    // 0x21e170: 0x7fb40020  sq          $s4, 0x20($sp)
    ctx->pc = 0x21e170u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 20));
label_21e174:
    // 0x21e174: 0x7fb50010  sq          $s5, 0x10($sp)
    ctx->pc = 0x21e174u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 21));
label_21e178:
    // 0x21e178: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x21e178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_21e17c:
    // 0x21e17c: 0xde420190  ld          $v0, 0x190($s2)
    ctx->pc = 0x21e17cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 400)));
label_21e180:
    // 0x21e180: 0x14430004  bne         $v0, $v1, . + 4 + (0x4 << 2)
label_21e184:
    if (ctx->pc == 0x21E184u) {
        ctx->pc = 0x21E184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E180u;
        // 0x21e184: 0x8e5501bc  lw          $s5, 0x1BC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 444)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E188u;
        goto label_21e188;
    }
    ctx->pc = 0x21E180u;
    {
        const bool branch_taken_0x21e180 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x21E184u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E180u;
        // 0x21e184: 0x8e5501bc  lw          $s5, 0x1BC($s2) (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 444)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e180) {
            ctx->pc = 0x21E194u;
            goto label_21e194;
        }
    }
    ctx->pc = 0x21E188u;
label_21e188:
    // 0x21e188: 0xde420198  ld          $v0, 0x198($s2)
    ctx->pc = 0x21e188u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 18), 408)));
label_21e18c:
    // 0x21e18c: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
label_21e190:
    if (ctx->pc == 0x21E190u) {
        ctx->pc = 0x21E190u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E18Cu;
        // 0x21e190: 0x8e420148  lw          $v0, 0x148($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 328)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E194u;
        goto label_21e194;
    }
    ctx->pc = 0x21E18Cu;
    {
        const bool branch_taken_0x21e18c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21e18c) {
            ctx->pc = 0x21E190u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21E18Cu;
            // 0x21e190: 0x8e420148  lw          $v0, 0x148($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 328)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21E1B8u;
            goto label_21e1b8;
        }
    }
    ctx->pc = 0x21E194u;
label_21e194:
    // 0x21e194: 0x8e460000  lw          $a2, 0x0($s2)
    ctx->pc = 0x21e194u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_21e198:
    // 0x21e198: 0x2403007a  addiu       $v1, $zero, 0x7A
    ctx->pc = 0x21e198u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 122));
label_21e19c:
    // 0x21e19c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21e19cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_21e1a0:
    // 0x21e1a0: 0xacc30014  sw          $v1, 0x14($a2)
    ctx->pc = 0x21e1a0u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 20), GPR_U32(ctx, 3));
label_21e1a4:
    // 0x21e1a4: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x21e1a4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_21e1a8:
    // 0x21e1a8: 0x8c430004  lw          $v1, 0x4($v0)
    ctx->pc = 0x21e1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
label_21e1ac:
    // 0x21e1ac: 0x60f809  jalr        $v1
label_21e1b0:
    if (ctx->pc == 0x21E1B0u) {
        ctx->pc = 0x21E1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E1ACu;
        // 0x21e1b0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E1B4u;
        goto label_21e1b4;
    }
    ctx->pc = 0x21E1ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x21E1B4u);
        ctx->pc = 0x21E1B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E1ACu;
        // 0x21e1b0: 0x2405ffff  addiu       $a1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21E1ACu, 0x21E1B4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x21E1B4u;
label_21e1b4:
    // 0x21e1b4: 0x8e420148  lw          $v0, 0x148($s2)
    ctx->pc = 0x21e1b4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 328)));
label_21e1b8:
    // 0x21e1b8: 0x1840001a  blez        $v0, . + 4 + (0x1A << 2)
label_21e1bc:
    if (ctx->pc == 0x21E1BCu) {
        ctx->pc = 0x21E1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E1B8u;
        // 0x21e1bc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E1C0u;
        goto label_21e1c0;
    }
    ctx->pc = 0x21E1B8u;
    {
        const bool branch_taken_0x21e1b8 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x21E1BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E1B8u;
        // 0x21e1bc: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e1b8) {
            ctx->pc = 0x21E224u;
            goto label_21e224;
        }
    }
    ctx->pc = 0x21E1C0u;
label_21e1c0:
    // 0x21e1c0: 0x26b40020  addiu       $s4, $s5, 0x20
    ctx->pc = 0x21e1c0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 21), 32));
label_21e1c4:
    // 0x21e1c4: 0x2653014c  addiu       $s3, $s2, 0x14C
    ctx->pc = 0x21e1c4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 18), 332));
label_21e1c8:
    // 0x21e1c8: 0x8e670000  lw          $a3, 0x0($s3)
    ctx->pc = 0x21e1c8u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
label_21e1cc:
    // 0x21e1cc: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21e1ccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_21e1d0:
    // 0x21e1d0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x21e1d0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21e1d4:
    // 0x21e1d4: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x21e1d4u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
label_21e1d8:
    // 0x21e1d8: 0x8ce60014  lw          $a2, 0x14($a3)
    ctx->pc = 0x21e1d8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
label_21e1dc:
    // 0x21e1dc: 0x26730004  addiu       $s3, $s3, 0x4
    ctx->pc = 0x21e1dcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 4));
label_21e1e0:
    // 0x21e1e0: 0x8cf00018  lw          $s0, 0x18($a3)
    ctx->pc = 0x21e1e0u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
label_21e1e4:
    // 0x21e1e4: 0x63880  sll         $a3, $a2, 2
    ctx->pc = 0x21e1e4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
label_21e1e8:
    // 0x21e1e8: 0x24e70034  addiu       $a3, $a3, 0x34
    ctx->pc = 0x21e1e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 52));
label_21e1ec:
    // 0x21e1ec: 0xc0878be  jal         func_21E2F8
label_21e1f0:
    if (ctx->pc == 0x21E1F0u) {
        ctx->pc = 0x21E1F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E1ECu;
        // 0x21e1f0: 0x2a73821  addu        $a3, $s5, $a3 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 7)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E1F4u;
        goto label_21e1f4;
    }
    ctx->pc = 0x21E1ECu;
    SET_GPR_U32(ctx, 31, 0x21E1F4u);
    ctx->pc = 0x21E1F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E1ECu;
    // 0x21e1f0: 0x2a73821  addu        $a3, $s5, $a3 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 7)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21E2F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x21E2F8u, 0x21E1ECu, 0x21E1F4u)) {
        return;
    }
    ctx->pc = 0x21E1F4u;
label_21e1f4:
    // 0x21e1f4: 0x103880  sll         $a3, $s0, 2
    ctx->pc = 0x21e1f4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 16), 2));
label_21e1f8:
    // 0x21e1f8: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x21e1f8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_21e1fc:
    // 0x21e1fc: 0x24e70044  addiu       $a3, $a3, 0x44
    ctx->pc = 0x21e1fcu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 68));
label_21e200:
    // 0x21e200: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x21e200u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_21e204:
    // 0x21e204: 0x2a73821  addu        $a3, $s5, $a3
    ctx->pc = 0x21e204u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 7)));
label_21e208:
    // 0x21e208: 0xc0878be  jal         func_21E2F8
label_21e20c:
    if (ctx->pc == 0x21E20Cu) {
        ctx->pc = 0x21E20Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E208u;
        // 0x21e20c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E210u;
        goto label_21e210;
    }
    ctx->pc = 0x21E208u;
    SET_GPR_U32(ctx, 31, 0x21E210u);
    ctx->pc = 0x21E20Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x21E208u;
    // 0x21e20c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x21E2F8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x21E2F8u, 0x21E208u, 0x21E210u)) {
        return;
    }
    ctx->pc = 0x21E210u;
label_21e210:
    // 0x21e210: 0xae800000  sw          $zero, 0x0($s4)
    ctx->pc = 0x21e210u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
label_21e214:
    // 0x21e214: 0x8e420148  lw          $v0, 0x148($s2)
    ctx->pc = 0x21e214u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 328)));
label_21e218:
    // 0x21e218: 0x222102a  slt         $v0, $s1, $v0
    ctx->pc = 0x21e218u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_21e21c:
    // 0x21e21c: 0x1440ffea  bnez        $v0, . + 4 + (-0x16 << 2)
label_21e220:
    if (ctx->pc == 0x21E220u) {
        ctx->pc = 0x21E220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E21Cu;
        // 0x21e220: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E224u;
        goto label_21e224;
    }
    ctx->pc = 0x21E21Cu;
    {
        const bool branch_taken_0x21e21c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21E220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E21Cu;
        // 0x21e220: 0x26940004  addiu       $s4, $s4, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e21c) {
            ctx->pc = 0x21E1C8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21e1c8;
        }
    }
    ctx->pc = 0x21E224u;
label_21e224:
    // 0x21e224: 0x8e420164  lw          $v0, 0x164($s2)
    ctx->pc = 0x21e224u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 356)));
label_21e228:
    // 0x21e228: 0x18400025  blez        $v0, . + 4 + (0x25 << 2)
label_21e22c:
    if (ctx->pc == 0x21E22Cu) {
        ctx->pc = 0x21E22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E228u;
        // 0x21e22c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E230u;
        goto label_21e230;
    }
    ctx->pc = 0x21E228u;
    {
        const bool branch_taken_0x21e228 = (GPR_S64(ctx, 2) <= 0);
        ctx->pc = 0x21E22Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E228u;
        // 0x21e22c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e228) {
            ctx->pc = 0x21E2C0u;
            goto label_21e2c0;
        }
    }
    ctx->pc = 0x21E230u;
label_21e230:
    // 0x21e230: 0x264b014c  addiu       $t3, $s2, 0x14C
    ctx->pc = 0x21e230u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 18), 332));
label_21e234:
    // 0x21e234: 0x26aa0034  addiu       $t2, $s5, 0x34
    ctx->pc = 0x21e234u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 21), 52));
label_21e238:
    // 0x21e238: 0x26a90044  addiu       $t1, $s5, 0x44
    ctx->pc = 0x21e238u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 21), 68));
label_21e23c:
    // 0x21e23c: 0x240c0001  addiu       $t4, $zero, 0x1
    ctx->pc = 0x21e23cu;
    SET_GPR_S32(ctx, 12, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_21e240:
    // 0x21e240: 0x26a500a4  addiu       $a1, $s5, 0xA4
    ctx->pc = 0x21e240u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 21), 164));
label_21e244:
    // 0x21e244: 0x26460168  addiu       $a2, $s2, 0x168
    ctx->pc = 0x21e244u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 360));
label_21e248:
    // 0x21e248: 0x8cd10000  lw          $s1, 0x0($a2)
    ctx->pc = 0x21e248u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
label_21e24c:
    // 0x21e24c: 0x111080  sll         $v0, $s1, 2
    ctx->pc = 0x21e24cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
label_21e250:
    // 0x21e250: 0x1621021  addu        $v0, $t3, $v0
    ctx->pc = 0x21e250u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 2)));
label_21e254:
    // 0x21e254: 0x8c470000  lw          $a3, 0x0($v0)
    ctx->pc = 0x21e254u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_21e258:
    // 0x21e258: 0x8ce30014  lw          $v1, 0x14($a3)
    ctx->pc = 0x21e258u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 20)));
label_21e25c:
    // 0x21e25c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x21e25cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
label_21e260:
    // 0x21e260: 0x1431821  addu        $v1, $t2, $v1
    ctx->pc = 0x21e260u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 10), GPR_U32(ctx, 3)));
label_21e264:
    // 0x21e264: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x21e264u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_21e268:
    // 0x21e268: 0xaca4ffb0  sw          $a0, -0x50($a1)
    ctx->pc = 0x21e268u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294967216), GPR_U32(ctx, 4));
label_21e26c:
    // 0x21e26c: 0x8ce20018  lw          $v0, 0x18($a3)
    ctx->pc = 0x21e26cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 24)));
label_21e270:
    // 0x21e270: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x21e270u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_21e274:
    // 0x21e274: 0x1221021  addu        $v0, $t1, $v0
    ctx->pc = 0x21e274u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 2)));
label_21e278:
    // 0x21e278: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x21e278u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_21e27c:
    // 0x21e27c: 0xaca3ffd8  sw          $v1, -0x28($a1)
    ctx->pc = 0x21e27cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294967256), GPR_U32(ctx, 3));
label_21e280:
    // 0x21e280: 0x8ce20030  lw          $v0, 0x30($a3)
    ctx->pc = 0x21e280u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 48)));
label_21e284:
    // 0x21e284: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
label_21e288:
    if (ctx->pc == 0x21E288u) {
        ctx->pc = 0x21E288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E284u;
        // 0x21e288: 0xaca00028  sw          $zero, 0x28($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E28Cu;
        goto label_21e28c;
    }
    ctx->pc = 0x21E284u;
    {
        const bool branch_taken_0x21e284 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x21e284) {
            ctx->pc = 0x21E288u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x21E284u;
            // 0x21e288: 0xaca00028  sw          $zero, 0x28($a1) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x21E2A4u;
            goto label_21e2a4;
        }
    }
    ctx->pc = 0x21E28Cu;
label_21e28c:
    // 0x21e28c: 0xacac0000  sw          $t4, 0x0($a1)
    ctx->pc = 0x21e28cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 12));
label_21e290:
    // 0x21e290: 0x8ce20024  lw          $v0, 0x24($a3)
    ctx->pc = 0x21e290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 36)));
label_21e294:
    // 0x21e294: 0x28420002  slti        $v0, $v0, 0x2
    ctx->pc = 0x21e294u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)2) ? 1 : 0);
label_21e298:
    // 0x21e298: 0x38420001  xori        $v0, $v0, 0x1
    ctx->pc = 0x21e298u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ (uint64_t)(uint16_t)1);
label_21e29c:
    // 0x21e29c: 0x10000002  b           . + 4 + (0x2 << 2)
label_21e2a0:
    if (ctx->pc == 0x21E2A0u) {
        ctx->pc = 0x21E2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E29Cu;
        // 0x21e2a0: 0xaca20028  sw          $v0, 0x28($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E2A4u;
        goto label_21e2a4;
    }
    ctx->pc = 0x21E29Cu;
    {
        const bool branch_taken_0x21e29c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x21E2A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E29Cu;
        // 0x21e2a0: 0xaca20028  sw          $v0, 0x28($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 40), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e29c) {
            ctx->pc = 0x21E2A8u;
            goto label_21e2a8;
        }
    }
    ctx->pc = 0x21E2A4u;
label_21e2a4:
    // 0x21e2a4: 0xaca00000  sw          $zero, 0x0($a1)
    ctx->pc = 0x21e2a4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 0));
label_21e2a8:
    // 0x21e2a8: 0x8e420164  lw          $v0, 0x164($s2)
    ctx->pc = 0x21e2a8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 356)));
label_21e2ac:
    // 0x21e2ac: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x21e2acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
label_21e2b0:
    // 0x21e2b0: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x21e2b0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
label_21e2b4:
    // 0x21e2b4: 0x102102a  slt         $v0, $t0, $v0
    ctx->pc = 0x21e2b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 8) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_21e2b8:
    // 0x21e2b8: 0x1440ffe3  bnez        $v0, . + 4 + (-0x1D << 2)
label_21e2bc:
    if (ctx->pc == 0x21E2BCu) {
        ctx->pc = 0x21E2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E2B8u;
        // 0x21e2bc: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E2C0u;
        goto label_21e2c0;
    }
    ctx->pc = 0x21E2B8u;
    {
        const bool branch_taken_0x21e2b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x21E2BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E2B8u;
        // 0x21e2bc: 0x24c60004  addiu       $a2, $a2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x21e2b8) {
            ctx->pc = 0x21E248u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_21e248;
        }
    }
    ctx->pc = 0x21E2C0u;
label_21e2c0:
    // 0x21e2c0: 0xaea00018  sw          $zero, 0x18($s5)
    ctx->pc = 0x21e2c0u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 24), GPR_U32(ctx, 0));
label_21e2c4:
    // 0x21e2c4: 0xfea00010  sd          $zero, 0x10($s5)
    ctx->pc = 0x21e2c4u;
    WRITE64(ADD32(GPR_U32(ctx, 21), 16), GPR_U64(ctx, 0));
label_21e2c8:
    // 0x21e2c8: 0xaea00008  sw          $zero, 0x8($s5)
    ctx->pc = 0x21e2c8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 8), GPR_U32(ctx, 0));
label_21e2cc:
    // 0x21e2cc: 0x7bb00060  lq          $s0, 0x60($sp)
    ctx->pc = 0x21e2ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 96)));
label_21e2d0:
    // 0x21e2d0: 0x8e420114  lw          $v0, 0x114($s2)
    ctx->pc = 0x21e2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 276)));
label_21e2d4:
    // 0x21e2d4: 0x7bb10050  lq          $s1, 0x50($sp)
    ctx->pc = 0x21e2d4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 80)));
label_21e2d8:
    // 0x21e2d8: 0xaea20030  sw          $v0, 0x30($s5)
    ctx->pc = 0x21e2d8u;
    WRITE32(ADD32(GPR_U32(ctx, 21), 48), GPR_U32(ctx, 2));
label_21e2dc:
    // 0x21e2dc: 0x7bb20040  lq          $s2, 0x40($sp)
    ctx->pc = 0x21e2dcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_21e2e0:
    // 0x21e2e0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x21e2e0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_21e2e4:
    // 0x21e2e4: 0x7bb40020  lq          $s4, 0x20($sp)
    ctx->pc = 0x21e2e4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_21e2e8:
    // 0x21e2e8: 0x7bb50010  lq          $s5, 0x10($sp)
    ctx->pc = 0x21e2e8u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_21e2ec:
    // 0x21e2ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x21e2ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_21e2f0:
    // 0x21e2f0: 0x3e00008  jr          $ra
label_21e2f4:
    if (ctx->pc == 0x21E2F4u) {
        ctx->pc = 0x21E2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E2F0u;
        // 0x21e2f4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = 0x21E2F8u;
        goto label_fallthrough_0x21e2f0;
    }
    ctx->pc = 0x21E2F0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x21E2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21E2F0u;
        // 0x21e2f4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21E2F0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x21e2f0:
    ctx->pc = 0x21E2F8u;
}
