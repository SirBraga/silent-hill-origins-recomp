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

// Function: sub_002081E0
// Address: 0x2081e0 - 0x208300
void sub_002081E0_0x2081e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002081E0_0x2081e0");
#endif

    switch (ctx->pc) {
        case 0x2081e0u: goto label_2081e0;
        case 0x2081e4u: goto label_2081e4;
        case 0x2081e8u: goto label_2081e8;
        case 0x2081ecu: goto label_2081ec;
        case 0x2081f0u: goto label_2081f0;
        case 0x2081f4u: goto label_2081f4;
        case 0x2081f8u: goto label_2081f8;
        case 0x2081fcu: goto label_2081fc;
        case 0x208200u: goto label_208200;
        case 0x208204u: goto label_208204;
        case 0x208208u: goto label_208208;
        case 0x20820cu: goto label_20820c;
        case 0x208210u: goto label_208210;
        case 0x208214u: goto label_208214;
        case 0x208218u: goto label_208218;
        case 0x20821cu: goto label_20821c;
        case 0x208220u: goto label_208220;
        case 0x208224u: goto label_208224;
        case 0x208228u: goto label_208228;
        case 0x20822cu: goto label_20822c;
        case 0x208230u: goto label_208230;
        case 0x208234u: goto label_208234;
        case 0x208238u: goto label_208238;
        case 0x20823cu: goto label_20823c;
        case 0x208240u: goto label_208240;
        case 0x208244u: goto label_208244;
        case 0x208248u: goto label_208248;
        case 0x20824cu: goto label_20824c;
        case 0x208250u: goto label_208250;
        case 0x208254u: goto label_208254;
        case 0x208258u: goto label_208258;
        case 0x20825cu: goto label_20825c;
        case 0x208260u: goto label_208260;
        case 0x208264u: goto label_208264;
        case 0x208268u: goto label_208268;
        case 0x20826cu: goto label_20826c;
        case 0x208270u: goto label_208270;
        case 0x208274u: goto label_208274;
        case 0x208278u: goto label_208278;
        case 0x20827cu: goto label_20827c;
        case 0x208280u: goto label_208280;
        case 0x208284u: goto label_208284;
        case 0x208288u: goto label_208288;
        case 0x20828cu: goto label_20828c;
        case 0x208290u: goto label_208290;
        case 0x208294u: goto label_208294;
        case 0x208298u: goto label_208298;
        case 0x20829cu: goto label_20829c;
        case 0x2082a0u: goto label_2082a0;
        case 0x2082a4u: goto label_2082a4;
        case 0x2082a8u: goto label_2082a8;
        case 0x2082acu: goto label_2082ac;
        case 0x2082b0u: goto label_2082b0;
        case 0x2082b4u: goto label_2082b4;
        case 0x2082b8u: goto label_2082b8;
        case 0x2082bcu: goto label_2082bc;
        case 0x2082c0u: goto label_2082c0;
        case 0x2082c4u: goto label_2082c4;
        case 0x2082c8u: goto label_2082c8;
        case 0x2082ccu: goto label_2082cc;
        case 0x2082d0u: goto label_2082d0;
        case 0x2082d4u: goto label_2082d4;
        case 0x2082d8u: goto label_2082d8;
        case 0x2082dcu: goto label_2082dc;
        case 0x2082e0u: goto label_2082e0;
        case 0x2082e4u: goto label_2082e4;
        case 0x2082e8u: goto label_2082e8;
        case 0x2082ecu: goto label_2082ec;
        case 0x2082f0u: goto label_2082f0;
        case 0x2082f4u: goto label_2082f4;
        case 0x2082f8u: goto label_2082f8;
        case 0x2082fcu: goto label_2082fc;
        default: break;
    }

    ctx->pc = 0x2081e0u;

label_2081e0:
    // 0x2081e0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2081e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2081e4:
    // 0x2081e4: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2081e4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_2081e8:
    // 0x2081e8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2081e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
label_2081ec:
    // 0x2081ec: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2081ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2081f0:
    // 0x2081f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2081f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_2081f4:
    // 0x2081f4: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2081f4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_2081f8:
    // 0x2081f8: 0x8e1101b4  lw          $s1, 0x1B4($s0)
    ctx->pc = 0x2081f8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 436)));
label_2081fc:
    // 0x2081fc: 0x8e220014  lw          $v0, 0x14($s1)
    ctx->pc = 0x2081fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 20)));
label_208200:
    // 0x208200: 0x14400039  bnez        $v0, . + 4 + (0x39 << 2)
label_208204:
    if (ctx->pc == 0x208204u) {
        ctx->pc = 0x208204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208200u;
        // 0x208204: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208208u;
        goto label_208208;
    }
    ctx->pc = 0x208200u;
    {
        const bool branch_taken_0x208200 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x208204u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208200u;
        // 0x208204: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208200) {
            ctx->pc = 0x2082E8u;
            goto label_2082e8;
        }
    }
    ctx->pc = 0x208208u;
label_208208:
    // 0x208208: 0x8e0301b8  lw          $v1, 0x1B8($s0)
    ctx->pc = 0x208208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 440)));
label_20820c:
    // 0x20820c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x20820cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
label_208210:
    // 0x208210: 0x40f809  jalr        $v0
label_208214:
    if (ctx->pc == 0x208214u) {
        ctx->pc = 0x208214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208210u;
        // 0x208214: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208218u;
        goto label_208218;
    }
    ctx->pc = 0x208210u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x208218u);
        ctx->pc = 0x208214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208210u;
        // 0x208214: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x208210u, 0x208218u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x208218u;
label_208218:
    // 0x208218: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x208218u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_20821c:
    // 0x20821c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x20821cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_208220:
    // 0x208220: 0x12430008  beq         $s2, $v1, . + 4 + (0x8 << 2)
label_208224:
    if (ctx->pc == 0x208224u) {
        ctx->pc = 0x208224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208220u;
        // 0x208224: 0x2a420002  slti        $v0, $s2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        ctx->pc = 0x208228u;
        goto label_208228;
    }
    ctx->pc = 0x208220u;
    {
        const bool branch_taken_0x208220 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        ctx->pc = 0x208224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208220u;
        // 0x208224: 0x2a420002  slti        $v0, $s2, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x208220) {
            ctx->pc = 0x208244u;
            goto label_208244;
        }
    }
    ctx->pc = 0x208228u;
label_208228:
    // 0x208228: 0x1440002f  bnez        $v0, . + 4 + (0x2F << 2)
label_20822c:
    if (ctx->pc == 0x20822Cu) {
        ctx->pc = 0x20822Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208228u;
        // 0x20822c: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208230u;
        goto label_208230;
    }
    ctx->pc = 0x208228u;
    {
        const bool branch_taken_0x208228 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x20822Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208228u;
        // 0x20822c: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208228) {
            ctx->pc = 0x2082E8u;
            goto label_2082e8;
        }
    }
    ctx->pc = 0x208230u;
label_208230:
    // 0x208230: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x208230u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_208234:
    // 0x208234: 0x12420016  beq         $s2, $v0, . + 4 + (0x16 << 2)
label_208238:
    if (ctx->pc == 0x208238u) {
        ctx->pc = 0x208238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208234u;
        // 0x208238: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20823Cu;
        goto label_20823c;
    }
    ctx->pc = 0x208234u;
    {
        const bool branch_taken_0x208234 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 2));
        ctx->pc = 0x208238u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208234u;
        // 0x208238: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208234) {
            ctx->pc = 0x208290u;
            goto label_208290;
        }
    }
    ctx->pc = 0x20823Cu;
label_20823c:
    // 0x20823c: 0x1000002b  b           . + 4 + (0x2B << 2)
label_208240:
    if (ctx->pc == 0x208240u) {
        ctx->pc = 0x208240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20823Cu;
        // 0x208240: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208244u;
        goto label_208244;
    }
    ctx->pc = 0x20823Cu;
    {
        const bool branch_taken_0x20823c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x208240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20823Cu;
        // 0x208240: 0x7bb00030  lq          $s0, 0x30($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x20823c) {
            ctx->pc = 0x2082ECu;
            goto label_2082ec;
        }
    }
    ctx->pc = 0x208244u;
label_208244:
    // 0x208244: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x208244u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_208248:
    // 0x208248: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
label_20824c:
    if (ctx->pc == 0x20824Cu) {
        ctx->pc = 0x20824Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208248u;
        // 0x20824c: 0x8e220010  lw          $v0, 0x10($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208250u;
        goto label_208250;
    }
    ctx->pc = 0x208248u;
    {
        const bool branch_taken_0x208248 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x208248) {
            ctx->pc = 0x20824Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x208248u;
            // 0x20824c: 0x8e220010  lw          $v0, 0x10($s1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x208260u;
            goto label_208260;
        }
    }
    ctx->pc = 0x208250u;
label_208250:
    // 0x208250: 0xc081ea2  jal         func_207A88
label_208254:
    if (ctx->pc == 0x208254u) {
        ctx->pc = 0x208254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208250u;
        // 0x208254: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208258u;
        goto label_208258;
    }
    ctx->pc = 0x208250u;
    SET_GPR_U32(ctx, 31, 0x208258u);
    ctx->pc = 0x208254u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208250u;
    // 0x208254: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207A88u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x207A88u, 0x208250u, 0x208258u)) {
        return;
    }
    ctx->pc = 0x208258u;
label_208258:
    // 0x208258: 0x10000022  b           . + 4 + (0x22 << 2)
label_20825c:
    if (ctx->pc == 0x20825Cu) {
        ctx->pc = 0x20825Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208258u;
        // 0x20825c: 0xae200018  sw          $zero, 0x18($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208260u;
        goto label_208260;
    }
    ctx->pc = 0x208258u;
    {
        const bool branch_taken_0x208258 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20825Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208258u;
        // 0x20825c: 0xae200018  sw          $zero, 0x18($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208258) {
            ctx->pc = 0x2082E4u;
            goto label_2082e4;
        }
    }
    ctx->pc = 0x208260u;
label_208260:
    // 0x208260: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
label_208264:
    if (ctx->pc == 0x208264u) {
        ctx->pc = 0x208264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208260u;
        // 0x208264: 0x24030023  addiu       $v1, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208268u;
        goto label_208268;
    }
    ctx->pc = 0x208260u;
    {
        const bool branch_taken_0x208260 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x208264u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208260u;
        // 0x208264: 0x24030023  addiu       $v1, $zero, 0x23 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208260) {
            ctx->pc = 0x208280u;
            goto label_208280;
        }
    }
    ctx->pc = 0x208268u;
label_208268:
    // 0x208268: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x208268u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_20826c:
    // 0x20826c: 0xaca30014  sw          $v1, 0x14($a1)
    ctx->pc = 0x20826cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 3));
label_208270:
    // 0x208270: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x208270u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_208274:
    // 0x208274: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x208274u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_208278:
    // 0x208278: 0x60f809  jalr        $v1
label_20827c:
    if (ctx->pc == 0x20827Cu) {
        ctx->pc = 0x20827Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208278u;
        // 0x20827c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208280u;
        goto label_208280;
    }
    ctx->pc = 0x208278u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x208280u);
        ctx->pc = 0x20827Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208278u;
        // 0x20827c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x208278u, 0x208280u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x208280u;
label_208280:
    // 0x208280: 0xc081fe0  jal         func_207F80
label_208284:
    if (ctx->pc == 0x208284u) {
        ctx->pc = 0x208284u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208280u;
        // 0x208284: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208288u;
        goto label_208288;
    }
    ctx->pc = 0x208280u;
    SET_GPR_U32(ctx, 31, 0x208288u);
    ctx->pc = 0x208284u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x208280u;
    // 0x208284: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x207F80u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x207F80u, 0x208280u, 0x208288u)) {
        return;
    }
    ctx->pc = 0x208288u;
label_208288:
    // 0x208288: 0x10000017  b           . + 4 + (0x17 << 2)
label_20828c:
    if (ctx->pc == 0x20828Cu) {
        ctx->pc = 0x20828Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208288u;
        // 0x20828c: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208290u;
        goto label_208290;
    }
    ctx->pc = 0x208288u;
    {
        const bool branch_taken_0x208288 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x20828Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208288u;
        // 0x20828c: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208288) {
            ctx->pc = 0x2082E8u;
            goto label_2082e8;
        }
    }
    ctx->pc = 0x208290u;
label_208290:
    // 0x208290: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x208290u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
label_208294:
    // 0x208294: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_208298:
    if (ctx->pc == 0x208298u) {
        ctx->pc = 0x208298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208294u;
        // 0x208298: 0xae230014  sw          $v1, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x20829Cu;
        goto label_20829c;
    }
    ctx->pc = 0x208294u;
    {
        const bool branch_taken_0x208294 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x208298u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x208294u;
        // 0x208298: 0xae230014  sw          $v1, 0x14($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 20), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x208294) {
            ctx->pc = 0x2082D0u;
            goto label_2082d0;
        }
    }
    ctx->pc = 0x20829Cu;
label_20829c:
    // 0x20829c: 0x8e0201b8  lw          $v0, 0x1B8($s0)
    ctx->pc = 0x20829cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 440)));
label_2082a0:
    // 0x2082a0: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x2082a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
label_2082a4:
    // 0x2082a4: 0x10600010  beqz        $v1, . + 4 + (0x10 << 2)
label_2082a8:
    if (ctx->pc == 0x2082A8u) {
        ctx->pc = 0x2082A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2082A4u;
        // 0x2082a8: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2082ACu;
        goto label_2082ac;
    }
    ctx->pc = 0x2082A4u;
    {
        const bool branch_taken_0x2082a4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2082A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2082A4u;
        // 0x2082a8: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2082a4) {
            ctx->pc = 0x2082E8u;
            goto label_2082e8;
        }
    }
    ctx->pc = 0x2082ACu;
label_2082ac:
    // 0x2082ac: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x2082acu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2082b0:
    // 0x2082b0: 0x2403003b  addiu       $v1, $zero, 0x3B
    ctx->pc = 0x2082b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
label_2082b4:
    // 0x2082b4: 0xaca30014  sw          $v1, 0x14($a1)
    ctx->pc = 0x2082b4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 20), GPR_U32(ctx, 3));
label_2082b8:
    // 0x2082b8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2082b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2082bc:
    // 0x2082bc: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2082bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_2082c0:
    // 0x2082c0: 0x60f809  jalr        $v1
label_2082c4:
    if (ctx->pc == 0x2082C4u) {
        ctx->pc = 0x2082C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2082C0u;
        // 0x2082c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2082C8u;
        goto label_2082c8;
    }
    ctx->pc = 0x2082C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x2082C8u);
        ctx->pc = 0x2082C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2082C0u;
        // 0x2082c4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2082C0u, 0x2082C8u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2082C8u;
label_2082c8:
    // 0x2082c8: 0x10000007  b           . + 4 + (0x7 << 2)
label_2082cc:
    if (ctx->pc == 0x2082CCu) {
        ctx->pc = 0x2082CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2082C8u;
        // 0x2082cc: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2082D0u;
        goto label_2082d0;
    }
    ctx->pc = 0x2082C8u;
    {
        const bool branch_taken_0x2082c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2082CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2082C8u;
        // 0x2082cc: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2082c8) {
            ctx->pc = 0x2082E8u;
            goto label_2082e8;
        }
    }
    ctx->pc = 0x2082D0u;
label_2082d0:
    // 0x2082d0: 0x8e020098  lw          $v0, 0x98($s0)
    ctx->pc = 0x2082d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
label_2082d4:
    // 0x2082d4: 0x8e030090  lw          $v1, 0x90($s0)
    ctx->pc = 0x2082d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 144)));
label_2082d8:
    // 0x2082d8: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x2082d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
label_2082dc:
    // 0x2082dc: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
label_2082e0:
    if (ctx->pc == 0x2082E0u) {
        ctx->pc = 0x2082E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2082DCu;
        // 0x2082e0: 0xae030098  sw          $v1, 0x98($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2082E4u;
        goto label_2082e4;
    }
    ctx->pc = 0x2082DCu;
    {
        const bool branch_taken_0x2082dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2082dc) {
            ctx->pc = 0x2082E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2082DCu;
            // 0x2082e0: 0xae030098  sw          $v1, 0x98($s0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 16), 152), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2082E4u;
            goto label_2082e4;
        }
    }
    ctx->pc = 0x2082E4u;
label_2082e4:
    // 0x2082e4: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x2082e4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_2082e8:
    // 0x2082e8: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2082e8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2082ec:
    // 0x2082ec: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2082ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2082f0:
    // 0x2082f0: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x2082f0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2082f4:
    // 0x2082f4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2082f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_2082f8:
    // 0x2082f8: 0x3e00008  jr          $ra
label_2082fc:
    if (ctx->pc == 0x2082FCu) {
        ctx->pc = 0x2082FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2082F8u;
        // 0x2082fc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x208300u;
        goto label_fallthrough_0x2082f8;
    }
    ctx->pc = 0x2082F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2082FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2082F8u;
        // 0x2082fc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2082F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x2082f8:
    ctx->pc = 0x208300u;
}
