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

// Function: sub_00230338
// Address: 0x230338 - 0x230e54
void sub_00230338_0x230338(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00230338_0x230338");
#endif

    switch (ctx->pc) {
        case 0x230388u: goto label_230388;
        case 0x230398u: goto label_230398;
        case 0x230474u: goto label_230474;
        case 0x2304e0u: goto label_2304e0;
        case 0x230588u: goto label_230588;
        case 0x230628u: goto label_230628;
        case 0x2306c8u: goto label_2306c8;
        case 0x230754u: goto label_230754;
        case 0x23082cu: goto label_23082c;
        case 0x23092cu: goto label_23092c;
        case 0x230a2cu: goto label_230a2c;
        case 0x230b2cu: goto label_230b2c;
        case 0x230bfcu: goto label_230bfc;
        case 0x230d80u: goto label_230d80;
        case 0x230e08u: goto label_230e08;
        default: break;
    }

    ctx->pc = 0x230338u;

    // 0x230338: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x230338u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x23033c: 0x2483ffff  addiu       $v1, $a0, -0x1
    ctx->pc = 0x23033cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x230340: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x230340u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x230344: 0x2c62001e  sltiu       $v0, $v1, 0x1E
    ctx->pc = 0x230344u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)30) ? 1 : 0);
    // 0x230348: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x230348u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x23034c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x23034cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x230350: 0x104002c0  beqz        $v0, . + 4 + (0x2C0 << 2)
    ctx->pc = 0x230350u;
    {
        const bool branch_taken_0x230350 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x230354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230350u;
        // 0x230354: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230350) {
            ctx->pc = 0x230E54u;
            return;
        }
    }
    ctx->pc = 0x230358u;
    // 0x230358: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x230358u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x23035c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x23035cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x230360: 0x2442a800  addiu       $v0, $v0, -0x5800
    ctx->pc = 0x230360u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944768));
    // 0x230364: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x230364u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x230368: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x230368u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x23036c: 0x800008  jr          $a0
    ctx->pc = 0x23036Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x230374u: goto label_230374;
            case 0x230534u: goto label_230534;
            case 0x2305C8u: goto label_2305c8;
            case 0x230668u: goto label_230668;
            case 0x230708u: goto label_230708;
            case 0x230718u: goto label_230718;
            case 0x230798u: goto label_230798;
            case 0x2307C4u: goto label_2307c4;
            case 0x230890u: goto label_230890;
            case 0x230970u: goto label_230970;
            case 0x230A70u: goto label_230a70;
            case 0x230B70u: goto label_230b70;
            case 0x230BB0u: goto label_230bb0;
            case 0x230BF0u: goto label_230bf0;
            case 0x230C60u: goto label_230c60;
            case 0x230C7Cu: goto label_230c7c;
            case 0x230CA4u: goto label_230ca4;
            case 0x230DC0u: goto label_230dc0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x23036Cu, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x230374u;
label_230374:
    // 0x230374: 0x24110001  addiu       $s1, $zero, 0x1
    ctx->pc = 0x230374u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x230378: 0x1200001d  beqz        $s0, . + 4 + (0x1D << 2)
    ctx->pc = 0x230378u;
    {
        const bool branch_taken_0x230378 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x23037Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230378u;
        // 0x23037c: 0xaf9090c8  sw          $s0, -0x6F38($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938824), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230378) {
            ctx->pc = 0x2303F0u;
            goto label_2303f0;
        }
    }
    ctx->pc = 0x230380u;
    // 0x230380: 0xc091a88  jal         func_246A20
    ctx->pc = 0x230380u;
    SET_GPR_U32(ctx, 31, 0x230388u);
    ctx->pc = 0x230384u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230380u;
    // 0x230384: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246A20u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x246A20u, 0x230380u, 0x230388u)) {
        return;
    }
    ctx->pc = 0x230388u;
label_230388:
    // 0x230388: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x230388u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x23038c: 0x8c844138  lw          $a0, 0x4138($a0)
    ctx->pc = 0x23038cu;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6B4138u));
    // 0x230390: 0xc091abe  jal         func_246AF8
    ctx->pc = 0x230390u;
    SET_GPR_U32(ctx, 31, 0x230398u);
    ctx->pc = 0x230394u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230390u;
    // 0x230394: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x246AF8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x246AF8u, 0x230390u, 0x230398u)) {
        return;
    }
    ctx->pc = 0x230398u;
label_230398:
    // 0x230398: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x230398u;
    {
        const bool branch_taken_0x230398 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23039Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230398u;
        // 0x23039c: 0xdf8384a0  ld          $v1, -0x7B60($gp) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 28), 4294935712)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230398) {
            ctx->pc = 0x2303D0u;
            goto label_2303d0;
        }
    }
    ctx->pc = 0x2303A0u;
    // 0x2303a0: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x2303a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2303a4: 0x3c04006b  lui         $a0, 0x6B
    ctx->pc = 0x2303a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)107 << 16));
    // 0x2303a8: 0x8c844138  lw          $a0, 0x4138($a0)
    ctx->pc = 0x2303a8u;
    SET_GPR_S32(ctx, 4, (int32_t)FAST_READ32(0x6B4138u));
    // 0x2303ac: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x2303acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x2303b0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x2303b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x2303b4: 0xff8384a0  sd          $v1, -0x7B60($gp)
    ctx->pc = 0x2303b4u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294935712), GPR_U64(ctx, 3));
    // 0x2303b8: 0x90820023  lbu         $v0, 0x23($a0)
    ctx->pc = 0x2303b8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 35)));
    // 0x2303bc: 0x3042000f  andi        $v0, $v0, 0xF
    ctx->pc = 0x2303bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)15);
    // 0x2303c0: 0x54450011  bnel        $v0, $a1, . + 4 + (0x11 << 2)
    ctx->pc = 0x2303C0u;
    {
        const bool branch_taken_0x2303c0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 5));
        if (branch_taken_0x2303c0) {
            ctx->pc = 0x2303C4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2303C0u;
            // 0x2303c4: 0xaf9190c4  sw          $s1, -0x6F3C($gp) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 28), 4294938820), GPR_U32(ctx, 17));
            ctx->in_delay_slot = false;
            ctx->pc = 0x230408u;
            goto label_230408;
        }
    }
    ctx->pc = 0x2303C8u;
    // 0x2303c8: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x2303C8u;
    {
        const bool branch_taken_0x2303c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2303CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2303C8u;
        // 0x2303cc: 0xaf8090c4  sw          $zero, -0x6F3C($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938820), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2303c8) {
            ctx->pc = 0x230408u;
            goto label_230408;
        }
    }
    ctx->pc = 0x2303D0u;
label_2303d0:
    // 0x2303d0: 0xdf8284a0  ld          $v0, -0x7B60($gp)
    ctx->pc = 0x2303d0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294935712)));
    // 0x2303d4: 0x2403ffef  addiu       $v1, $zero, -0x11
    ctx->pc = 0x2303d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x2303d8: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x2303d8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x2303dc: 0xac204134  sw          $zero, 0x4134($at)
    ctx->pc = 0x2303dcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6B4134u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B4134u, _value); } while (0);
    // 0x2303e0: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2303e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2303e4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x2303e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x2303e8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2303E8u;
    {
        const bool branch_taken_0x2303e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2303ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2303E8u;
        // 0x2303ec: 0xaf8090c8  sw          $zero, -0x6F38($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938824), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2303e8) {
            ctx->pc = 0x230404u;
            goto label_230404;
        }
    }
    ctx->pc = 0x2303F0u;
label_2303f0:
    // 0x2303f0: 0xdf8284a0  ld          $v0, -0x7B60($gp)
    ctx->pc = 0x2303f0u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294935712)));
    // 0x2303f4: 0x2403ffef  addiu       $v1, $zero, -0x11
    ctx->pc = 0x2303f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967279));
    // 0x2303f8: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x2303f8u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x2303fc: 0xac204134  sw          $zero, 0x4134($at)
    ctx->pc = 0x2303fcu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 0)); ps2TraceGuestWrite(rdram, 0x6B4134u, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B4134u, _value); } while (0);
    // 0x230400: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x230400u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_230404:
    // 0x230404: 0xff8284a0  sd          $v0, -0x7B60($gp)
    ctx->pc = 0x230404u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294935712), GPR_U64(ctx, 2));
label_230408:
    // 0x230408: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x230408u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x23040c: 0x8c42413c  lw          $v0, 0x413C($v0)
    ctx->pc = 0x23040cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B413Cu));
    // 0x230410: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x230410u;
    {
        const bool branch_taken_0x230410 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x230414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230410u;
        // 0x230414: 0xdf8284a0  ld          $v0, -0x7B60($gp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294935712)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230410) {
            ctx->pc = 0x230428u;
            goto label_230428;
        }
    }
    ctx->pc = 0x230418u;
    // 0x230418: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x230418u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x23041c: 0x8c424134  lw          $v0, 0x4134($v0)
    ctx->pc = 0x23041cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B4134u));
    // 0x230420: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x230420u;
    {
        const bool branch_taken_0x230420 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x230424u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230420u;
        // 0x230424: 0xdf8284a0  ld          $v0, -0x7B60($gp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294935712)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230420) {
            ctx->pc = 0x230434u;
            goto label_230434;
        }
    }
    ctx->pc = 0x230428u;
label_230428:
    // 0x230428: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x230428u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x23042c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x23042Cu;
    {
        const bool branch_taken_0x23042c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23042Cu;
        // 0x230430: 0x431025  or          $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23042c) {
            ctx->pc = 0x23043Cu;
            goto label_23043c;
        }
    }
    ctx->pc = 0x230434u;
label_230434:
    // 0x230434: 0x2403ffbf  addiu       $v1, $zero, -0x41
    ctx->pc = 0x230434u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
    // 0x230438: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x230438u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_23043c:
    // 0x23043c: 0xff8284a0  sd          $v0, -0x7B60($gp)
    ctx->pc = 0x23043cu;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294935712), GPR_U64(ctx, 2));
    // 0x230440: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x230440u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x230444: 0x8c424134  lw          $v0, 0x4134($v0)
    ctx->pc = 0x230444u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B4134u));
    // 0x230448: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x230448u;
    {
        const bool branch_taken_0x230448 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23044Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230448u;
        // 0x23044c: 0xdf838460  ld          $v1, -0x7BA0($gp) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 28), 4294935648)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230448) {
            ctx->pc = 0x2304B8u;
            goto label_2304b8;
        }
    }
    ctx->pc = 0x230450u;
    // 0x230450: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x230450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x230454: 0x54400282  bnel        $v0, $zero, . + 4 + (0x282 << 2)
    ctx->pc = 0x230454u;
    {
        const bool branch_taken_0x230454 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x230454) {
            ctx->pc = 0x230458u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x230454u;
            // 0x230458: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x230E60u;
            return;
        }
    }
    ctx->pc = 0x23045Cu;
    // 0x23045c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x23045cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x230460: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x230460u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x230464: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x230464u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x230468: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x230468u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x23046c: 0xc08bbd6  jal         func_22EF58
    ctx->pc = 0x23046Cu;
    SET_GPR_U32(ctx, 31, 0x230474u);
    ctx->pc = 0x230470u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23046Cu;
    // 0x230470: 0xff828460  sd          $v0, -0x7BA0($gp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294935648), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EF58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22EF58u, 0x23046Cu, 0x230474u)) {
        return;
    }
    ctx->pc = 0x230474u;
label_230474:
    // 0x230474: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x230474u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x230478: 0x52b7c  dsll32      $a1, $a1, 13
    ctx->pc = 0x230478u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 13));
    // 0x23047c: 0x34a58001  ori         $a1, $a1, 0x8001
    ctx->pc = 0x23047cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32769);
    // 0x230480: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x230480u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x230484: 0x70852389  pcpyld      $a0, $a0, $a1
    ctx->pc = 0x230484u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x230488: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x230488u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x23048c: 0x8c42412c  lw          $v0, 0x412C($v0)
    ctx->pc = 0x23048cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x230490: 0x7c440000  sq          $a0, 0x0($v0)
    ctx->pc = 0x230490u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
    // 0x230494: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x230494u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x230498: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x230498u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x23049c: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x23049cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x2304a0: 0xdf858460  ld          $a1, -0x7BA0($gp)
    ctx->pc = 0x2304a0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 28), 4294935648)));
    // 0x2304a4: 0x24040047  addiu       $a0, $zero, 0x47
    ctx->pc = 0x2304a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x2304a8: 0x70852389  pcpyld      $a0, $a0, $a1
    ctx->pc = 0x2304a8u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x2304ac: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x2304ACu;
    {
        const bool branch_taken_0x2304ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2304B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2304ACu;
        // 0x2304b0: 0x7c440000  sq          $a0, 0x0($v0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2304ac) {
            ctx->pc = 0x230520u;
            goto label_230520;
        }
    }
    ctx->pc = 0x2304B4u;
    // 0x2304b4: 0x0  nop
    ctx->pc = 0x2304b4u;
    // NOP
label_2304b8:
    // 0x2304b8: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x2304b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x2304bc: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x2304bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x2304c0: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x2304c0u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x2304c4: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x2304C4u;
    {
        const bool branch_taken_0x2304c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2304C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2304C4u;
        // 0x2304c8: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2304c4) {
            ctx->pc = 0x23052Cu;
            goto label_23052c;
        }
    }
    ctx->pc = 0x2304CCu;
    // 0x2304cc: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x2304ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x2304d0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x2304d0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x2304d4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x2304d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2304d8: 0xc08bbd6  jal         func_22EF58
    ctx->pc = 0x2304D8u;
    SET_GPR_U32(ctx, 31, 0x2304E0u);
    ctx->pc = 0x2304DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2304D8u;
    // 0x2304dc: 0xff828460  sd          $v0, -0x7BA0($gp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294935648), GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EF58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22EF58u, 0x2304D8u, 0x2304E0u)) {
        return;
    }
    ctx->pc = 0x2304E0u;
label_2304e0:
    // 0x2304e0: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x2304e0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2304e4: 0x52b7c  dsll32      $a1, $a1, 13
    ctx->pc = 0x2304e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 13));
    // 0x2304e8: 0x34a58001  ori         $a1, $a1, 0x8001
    ctx->pc = 0x2304e8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32769);
    // 0x2304ec: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x2304ecu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2304f0: 0x70852389  pcpyld      $a0, $a0, $a1
    ctx->pc = 0x2304f0u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x2304f4: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2304f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x2304f8: 0x8c42412c  lw          $v0, 0x412C($v0)
    ctx->pc = 0x2304f8u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x2304fc: 0x7c440000  sq          $a0, 0x0($v0)
    ctx->pc = 0x2304fcu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
    // 0x230500: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x230500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x230504: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x230504u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x230508: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x230508u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x23050c: 0xdf858460  ld          $a1, -0x7BA0($gp)
    ctx->pc = 0x23050cu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 28), 4294935648)));
    // 0x230510: 0x24040047  addiu       $a0, $zero, 0x47
    ctx->pc = 0x230510u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x230514: 0x70852389  pcpyld      $a0, $a0, $a1
    ctx->pc = 0x230514u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x230518: 0x7c440000  sq          $a0, 0x0($v0)
    ctx->pc = 0x230518u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
    // 0x23051c: 0x0  nop
    ctx->pc = 0x23051cu;
    // NOP
label_230520:
    // 0x230520: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x230520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x230524: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x230524u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x230528: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x230528u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
label_23052c:
    // 0x23052c: 0x1000024c  b           . + 4 + (0x24C << 2)
    ctx->pc = 0x23052Cu;
    {
        const bool branch_taken_0x23052c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23052Cu;
        // 0x230530: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23052c) {
            ctx->pc = 0x230E60u;
            return;
        }
    }
    ctx->pc = 0x230534u;
label_230534:
    // 0x230534: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x230534u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x230538: 0x12020246  beq         $s0, $v0, . + 4 + (0x246 << 2)
    ctx->pc = 0x230538u;
    {
        const bool branch_taken_0x230538 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x23053Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230538u;
        // 0x23053c: 0x2e020003  sltiu       $v0, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x230538) {
            ctx->pc = 0x230E54u;
            return;
        }
    }
    ctx->pc = 0x230540u;
    // 0x230540: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x230540u;
    {
        const bool branch_taken_0x230540 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x230544u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230540u;
        // 0x230544: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230540) {
            ctx->pc = 0x230558u;
            goto label_230558;
        }
    }
    ctx->pc = 0x230548u;
    // 0x230548: 0x12020008  beq         $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x230548u;
    {
        const bool branch_taken_0x230548 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x23054Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230548u;
        // 0x23054c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230548) {
            ctx->pc = 0x23056Cu;
            goto label_23056c;
        }
    }
    ctx->pc = 0x230550u;
    // 0x230550: 0x10000244  b           . + 4 + (0x244 << 2)
    ctx->pc = 0x230550u;
    {
        const bool branch_taken_0x230550 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230554u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230550u;
        // 0x230554: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230550) {
            ctx->pc = 0x230E64u;
            return;
        }
    }
    ctx->pc = 0x230558u;
label_230558:
    // 0x230558: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x230558u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x23055c: 0x12020005  beq         $s0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x23055Cu;
    {
        const bool branch_taken_0x23055c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x230560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23055Cu;
        // 0x230560: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23055c) {
            ctx->pc = 0x230574u;
            goto label_230574;
        }
    }
    ctx->pc = 0x230564u;
    // 0x230564: 0x1000023f  b           . + 4 + (0x23F << 2)
    ctx->pc = 0x230564u;
    {
        const bool branch_taken_0x230564 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230568u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230564u;
        // 0x230568: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230564) {
            ctx->pc = 0x230E64u;
            return;
        }
    }
    ctx->pc = 0x23056Cu;
label_23056c:
    // 0x23056c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x23056Cu;
    {
        const bool branch_taken_0x23056c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230570u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23056Cu;
        // 0x230570: 0xff808480  sd          $zero, -0x7B80($gp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 28), 4294935680), GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23056c) {
            ctx->pc = 0x23057Cu;
            goto label_23057c;
        }
    }
    ctx->pc = 0x230574u;
label_230574:
    // 0x230574: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x230574u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x230578: 0xff828480  sd          $v0, -0x7B80($gp)
    ctx->pc = 0x230578u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294935680), GPR_U64(ctx, 2));
label_23057c:
    // 0x23057c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x23057cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x230580: 0xc08bbd6  jal         func_22EF58
    ctx->pc = 0x230580u;
    SET_GPR_U32(ctx, 31, 0x230588u);
    ctx->pc = 0x230584u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230580u;
    // 0x230584: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EF58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22EF58u, 0x230580u, 0x230588u)) {
        return;
    }
    ctx->pc = 0x230588u;
label_230588:
    // 0x230588: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x230588u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x23058c: 0x52b7c  dsll32      $a1, $a1, 13
    ctx->pc = 0x23058cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 13));
    // 0x230590: 0x34a58001  ori         $a1, $a1, 0x8001
    ctx->pc = 0x230590u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32769);
    // 0x230594: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x230594u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x230598: 0x70852389  pcpyld      $a0, $a0, $a1
    ctx->pc = 0x230598u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x23059c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x23059cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x2305a0: 0x8c42412c  lw          $v0, 0x412C($v0)
    ctx->pc = 0x2305a0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x2305a4: 0x7c440000  sq          $a0, 0x0($v0)
    ctx->pc = 0x2305a4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
    // 0x2305a8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x2305a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2305ac: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x2305acu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x2305b0: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x2305b0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x2305b4: 0xdf858480  ld          $a1, -0x7B80($gp)
    ctx->pc = 0x2305b4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 28), 4294935680)));
    // 0x2305b8: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x2305b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2305bc: 0x70852389  pcpyld      $a0, $a0, $a1
    ctx->pc = 0x2305bcu;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x2305c0: 0x10000221  b           . + 4 + (0x221 << 2)
    ctx->pc = 0x2305C0u;
    {
        const bool branch_taken_0x2305c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2305C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2305C0u;
        // 0x2305c4: 0x7c440000  sq          $a0, 0x0($v0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2305c0) {
            ctx->pc = 0x230E48u;
            goto label_230e48;
        }
    }
    ctx->pc = 0x2305C8u;
label_2305c8:
    // 0x2305c8: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x2305c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x2305cc: 0x12020221  beq         $s0, $v0, . + 4 + (0x221 << 2)
    ctx->pc = 0x2305CCu;
    {
        const bool branch_taken_0x2305cc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2305D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2305CCu;
        // 0x2305d0: 0x2e020003  sltiu       $v0, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2305cc) {
            ctx->pc = 0x230E54u;
            return;
        }
    }
    ctx->pc = 0x2305D4u;
    // 0x2305d4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2305D4u;
    {
        const bool branch_taken_0x2305d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2305D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2305D4u;
        // 0x2305d8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2305d4) {
            ctx->pc = 0x2305ECu;
            goto label_2305ec;
        }
    }
    ctx->pc = 0x2305DCu;
    // 0x2305dc: 0x12020008  beq         $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x2305DCu;
    {
        const bool branch_taken_0x2305dc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2305E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2305DCu;
        // 0x2305e0: 0xdf828480  ld          $v0, -0x7B80($gp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294935680)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2305dc) {
            ctx->pc = 0x230600u;
            goto label_230600;
        }
    }
    ctx->pc = 0x2305E4u;
    // 0x2305e4: 0x1000021e  b           . + 4 + (0x21E << 2)
    ctx->pc = 0x2305E4u;
    {
        const bool branch_taken_0x2305e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2305E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2305E4u;
        // 0x2305e8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2305e4) {
            ctx->pc = 0x230E60u;
            return;
        }
    }
    ctx->pc = 0x2305ECu;
label_2305ec:
    // 0x2305ec: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x2305ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x2305f0: 0x12020006  beq         $s0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2305F0u;
    {
        const bool branch_taken_0x2305f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x2305F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2305F0u;
        // 0x2305f4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2305f0) {
            ctx->pc = 0x23060Cu;
            goto label_23060c;
        }
    }
    ctx->pc = 0x2305F8u;
    // 0x2305f8: 0x1000021a  b           . + 4 + (0x21A << 2)
    ctx->pc = 0x2305F8u;
    {
        const bool branch_taken_0x2305f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2305FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2305F8u;
        // 0x2305fc: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2305f8) {
            ctx->pc = 0x230E64u;
            return;
        }
    }
    ctx->pc = 0x230600u;
label_230600:
    // 0x230600: 0x2403fffc  addiu       $v1, $zero, -0x4
    ctx->pc = 0x230600u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x230604: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x230604u;
    {
        const bool branch_taken_0x230604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230608u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230604u;
        // 0x230608: 0x431024  and         $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230604) {
            ctx->pc = 0x230618u;
            goto label_230618;
        }
    }
    ctx->pc = 0x23060Cu;
label_23060c:
    // 0x23060c: 0xdf828480  ld          $v0, -0x7B80($gp)
    ctx->pc = 0x23060cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294935680)));
    // 0x230610: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x230610u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x230614: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x230614u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_230618:
    // 0x230618: 0xff828480  sd          $v0, -0x7B80($gp)
    ctx->pc = 0x230618u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294935680), GPR_U64(ctx, 2));
    // 0x23061c: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x23061cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x230620: 0xc08bbd6  jal         func_22EF58
    ctx->pc = 0x230620u;
    SET_GPR_U32(ctx, 31, 0x230628u);
    ctx->pc = 0x230624u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230620u;
    // 0x230624: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EF58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22EF58u, 0x230620u, 0x230628u)) {
        return;
    }
    ctx->pc = 0x230628u;
label_230628:
    // 0x230628: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x230628u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x23062c: 0x52b7c  dsll32      $a1, $a1, 13
    ctx->pc = 0x23062cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 13));
    // 0x230630: 0x34a58001  ori         $a1, $a1, 0x8001
    ctx->pc = 0x230630u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32769);
    // 0x230634: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x230634u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x230638: 0x70852389  pcpyld      $a0, $a0, $a1
    ctx->pc = 0x230638u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x23063c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x23063cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x230640: 0x8c42412c  lw          $v0, 0x412C($v0)
    ctx->pc = 0x230640u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x230644: 0x7c440000  sq          $a0, 0x0($v0)
    ctx->pc = 0x230644u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
    // 0x230648: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x230648u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x23064c: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x23064cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x230650: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x230650u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x230654: 0xdf858480  ld          $a1, -0x7B80($gp)
    ctx->pc = 0x230654u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 28), 4294935680)));
    // 0x230658: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x230658u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x23065c: 0x70852389  pcpyld      $a0, $a0, $a1
    ctx->pc = 0x23065cu;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x230660: 0x100001f9  b           . + 4 + (0x1F9 << 2)
    ctx->pc = 0x230660u;
    {
        const bool branch_taken_0x230660 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230664u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230660u;
        // 0x230664: 0x7c440000  sq          $a0, 0x0($v0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230660) {
            ctx->pc = 0x230E48u;
            goto label_230e48;
        }
    }
    ctx->pc = 0x230668u;
label_230668:
    // 0x230668: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x230668u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x23066c: 0x120201f9  beq         $s0, $v0, . + 4 + (0x1F9 << 2)
    ctx->pc = 0x23066Cu;
    {
        const bool branch_taken_0x23066c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x230670u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23066Cu;
        // 0x230670: 0x2e020003  sltiu       $v0, $s0, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 16) < (uint64_t)(int64_t)(int32_t)3) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x23066c) {
            ctx->pc = 0x230E54u;
            return;
        }
    }
    ctx->pc = 0x230674u;
    // 0x230674: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x230674u;
    {
        const bool branch_taken_0x230674 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x230678u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230674u;
        // 0x230678: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230674) {
            ctx->pc = 0x23068Cu;
            goto label_23068c;
        }
    }
    ctx->pc = 0x23067Cu;
    // 0x23067c: 0x12020008  beq         $s0, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x23067Cu;
    {
        const bool branch_taken_0x23067c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x230680u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23067Cu;
        // 0x230680: 0xdf828480  ld          $v0, -0x7B80($gp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294935680)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23067c) {
            ctx->pc = 0x2306A0u;
            goto label_2306a0;
        }
    }
    ctx->pc = 0x230684u;
    // 0x230684: 0x100001f6  b           . + 4 + (0x1F6 << 2)
    ctx->pc = 0x230684u;
    {
        const bool branch_taken_0x230684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230684u;
        // 0x230688: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230684) {
            ctx->pc = 0x230E60u;
            return;
        }
    }
    ctx->pc = 0x23068Cu;
label_23068c:
    // 0x23068c: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x23068cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x230690: 0x12020006  beq         $s0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x230690u;
    {
        const bool branch_taken_0x230690 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 2));
        ctx->pc = 0x230694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230690u;
        // 0x230694: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230690) {
            ctx->pc = 0x2306ACu;
            goto label_2306ac;
        }
    }
    ctx->pc = 0x230698u;
    // 0x230698: 0x100001f2  b           . + 4 + (0x1F2 << 2)
    ctx->pc = 0x230698u;
    {
        const bool branch_taken_0x230698 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23069Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230698u;
        // 0x23069c: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230698) {
            ctx->pc = 0x230E64u;
            return;
        }
    }
    ctx->pc = 0x2306A0u;
label_2306a0:
    // 0x2306a0: 0x2403fff3  addiu       $v1, $zero, -0xD
    ctx->pc = 0x2306a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967283));
    // 0x2306a4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2306A4u;
    {
        const bool branch_taken_0x2306a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2306A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2306A4u;
        // 0x2306a8: 0x431024  and         $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2306a4) {
            ctx->pc = 0x2306B8u;
            goto label_2306b8;
        }
    }
    ctx->pc = 0x2306ACu;
label_2306ac:
    // 0x2306ac: 0xdf828480  ld          $v0, -0x7B80($gp)
    ctx->pc = 0x2306acu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294935680)));
    // 0x2306b0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x2306b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2306b4: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x2306b4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
label_2306b8:
    // 0x2306b8: 0xff828480  sd          $v0, -0x7B80($gp)
    ctx->pc = 0x2306b8u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294935680), GPR_U64(ctx, 2));
    // 0x2306bc: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x2306bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x2306c0: 0xc08bbd6  jal         func_22EF58
    ctx->pc = 0x2306C0u;
    SET_GPR_U32(ctx, 31, 0x2306C8u);
    ctx->pc = 0x2306C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2306C0u;
    // 0x2306c4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EF58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22EF58u, 0x2306C0u, 0x2306C8u)) {
        return;
    }
    ctx->pc = 0x2306C8u;
label_2306c8:
    // 0x2306c8: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x2306c8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x2306cc: 0x52b7c  dsll32      $a1, $a1, 13
    ctx->pc = 0x2306ccu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 13));
    // 0x2306d0: 0x34a58001  ori         $a1, $a1, 0x8001
    ctx->pc = 0x2306d0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32769);
    // 0x2306d4: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x2306d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x2306d8: 0x70852389  pcpyld      $a0, $a0, $a1
    ctx->pc = 0x2306d8u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x2306dc: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x2306dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x2306e0: 0x8c42412c  lw          $v0, 0x412C($v0)
    ctx->pc = 0x2306e0u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x2306e4: 0x7c440000  sq          $a0, 0x0($v0)
    ctx->pc = 0x2306e4u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
    // 0x2306e8: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x2306e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x2306ec: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x2306ecu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x2306f0: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x2306f0u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x2306f4: 0xdf858480  ld          $a1, -0x7B80($gp)
    ctx->pc = 0x2306f4u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 28), 4294935680)));
    // 0x2306f8: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x2306f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x2306fc: 0x70852389  pcpyld      $a0, $a0, $a1
    ctx->pc = 0x2306fcu;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x230700: 0x100001d1  b           . + 4 + (0x1D1 << 2)
    ctx->pc = 0x230700u;
    {
        const bool branch_taken_0x230700 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230700u;
        // 0x230704: 0x7c440000  sq          $a0, 0x0($v0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230700) {
            ctx->pc = 0x230E48u;
            goto label_230e48;
        }
    }
    ctx->pc = 0x230708u;
label_230708:
    // 0x230708: 0x120001d2  beqz        $s0, . + 4 + (0x1D2 << 2)
    ctx->pc = 0x230708u;
    {
        const bool branch_taken_0x230708 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x23070Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230708u;
        // 0x23070c: 0xdf8284a0  ld          $v0, -0x7B60($gp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294935712)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230708) {
            ctx->pc = 0x230E54u;
            return;
        }
    }
    ctx->pc = 0x230710u;
    // 0x230710: 0x10000124  b           . + 4 + (0x124 << 2)
    ctx->pc = 0x230710u;
    {
        const bool branch_taken_0x230710 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230714u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230710u;
        // 0x230714: 0x2403feff  addiu       $v1, $zero, -0x101 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967039));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230710) {
            ctx->pc = 0x230BA4u;
            goto label_230ba4;
        }
    }
    ctx->pc = 0x230718u;
label_230718:
    // 0x230718: 0x12000005  beqz        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x230718u;
    {
        const bool branch_taken_0x230718 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x23071Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230718u;
        // 0x23071c: 0xdf828460  ld          $v0, -0x7BA0($gp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294935648)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230718) {
            ctx->pc = 0x230730u;
            goto label_230730;
        }
    }
    ctx->pc = 0x230720u;
    // 0x230720: 0x3c03fff8  lui         $v1, 0xFFF8
    ctx->pc = 0x230720u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65528 << 16));
    // 0x230724: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x230724u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x230728: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x230728u;
    {
        const bool branch_taken_0x230728 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23072Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230728u;
        // 0x23072c: 0x3c040005  lui         $a0, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)5 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230728) {
            ctx->pc = 0x23073Cu;
            goto label_23073c;
        }
    }
    ctx->pc = 0x230730u;
label_230730:
    // 0x230730: 0x3c03fff8  lui         $v1, 0xFFF8
    ctx->pc = 0x230730u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65528 << 16));
    // 0x230734: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x230734u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x230738: 0x3c040003  lui         $a0, 0x3
    ctx->pc = 0x230738u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)3 << 16));
label_23073c:
    // 0x23073c: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x23073cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x230740: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x230740u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x230744: 0xff828460  sd          $v0, -0x7BA0($gp)
    ctx->pc = 0x230744u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294935648), GPR_U64(ctx, 2));
    // 0x230748: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x230748u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x23074c: 0xc08bbd6  jal         func_22EF58
    ctx->pc = 0x23074Cu;
    SET_GPR_U32(ctx, 31, 0x230754u);
    ctx->pc = 0x230750u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x23074Cu;
    // 0x230750: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EF58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22EF58u, 0x23074Cu, 0x230754u)) {
        return;
    }
    ctx->pc = 0x230754u;
label_230754:
    // 0x230754: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x230754u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x230758: 0x52b7c  dsll32      $a1, $a1, 13
    ctx->pc = 0x230758u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 13));
    // 0x23075c: 0x34a58001  ori         $a1, $a1, 0x8001
    ctx->pc = 0x23075cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32769);
    // 0x230760: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x230760u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x230764: 0x70852389  pcpyld      $a0, $a0, $a1
    ctx->pc = 0x230764u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x230768: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x230768u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x23076c: 0x8c42412c  lw          $v0, 0x412C($v0)
    ctx->pc = 0x23076cu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x230770: 0x7c440000  sq          $a0, 0x0($v0)
    ctx->pc = 0x230770u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
    // 0x230774: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x230774u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x230778: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x230778u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x23077c: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x23077cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x230780: 0xdf858460  ld          $a1, -0x7BA0($gp)
    ctx->pc = 0x230780u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 28), 4294935648)));
    // 0x230784: 0x24040047  addiu       $a0, $zero, 0x47
    ctx->pc = 0x230784u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x230788: 0x70852389  pcpyld      $a0, $a0, $a1
    ctx->pc = 0x230788u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x23078c: 0x100001ae  b           . + 4 + (0x1AE << 2)
    ctx->pc = 0x23078Cu;
    {
        const bool branch_taken_0x23078c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230790u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23078Cu;
        // 0x230790: 0x7c440000  sq          $a0, 0x0($v0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23078c) {
            ctx->pc = 0x230E48u;
            goto label_230e48;
        }
    }
    ctx->pc = 0x230794u;
    // 0x230794: 0x0  nop
    ctx->pc = 0x230794u;
    // NOP
label_230798:
    // 0x230798: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x230798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x23079c: 0x16020004  bne         $s0, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x23079Cu;
    {
        const bool branch_taken_0x23079c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2307A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x23079Cu;
        // 0x2307a0: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x23079c) {
            ctx->pc = 0x2307B0u;
            goto label_2307b0;
        }
    }
    ctx->pc = 0x2307A4u;
    // 0x2307a4: 0xdf8284a0  ld          $v0, -0x7B60($gp)
    ctx->pc = 0x2307a4u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294935712)));
    // 0x2307a8: 0x100000fe  b           . + 4 + (0xFE << 2)
    ctx->pc = 0x2307A8u;
    {
        const bool branch_taken_0x2307a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2307ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2307A8u;
        // 0x2307ac: 0x2403fff7  addiu       $v1, $zero, -0x9 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2307a8) {
            ctx->pc = 0x230BA4u;
            goto label_230ba4;
        }
    }
    ctx->pc = 0x2307B0u;
label_2307b0:
    // 0x2307b0: 0x160201ab  bne         $s0, $v0, . + 4 + (0x1AB << 2)
    ctx->pc = 0x2307B0u;
    {
        const bool branch_taken_0x2307b0 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x2307B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2307B0u;
        // 0x2307b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2307b0) {
            ctx->pc = 0x230E60u;
            return;
        }
    }
    ctx->pc = 0x2307B8u;
    // 0x2307b8: 0xdf8284a0  ld          $v0, -0x7B60($gp)
    ctx->pc = 0x2307b8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294935712)));
    // 0x2307bc: 0x100000f5  b           . + 4 + (0xF5 << 2)
    ctx->pc = 0x2307BCu;
    {
        const bool branch_taken_0x2307bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2307C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2307BCu;
        // 0x2307c0: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2307bc) {
            ctx->pc = 0x230B94u;
            goto label_230b94;
        }
    }
    ctx->pc = 0x2307C4u;
label_2307c4:
    // 0x2307c4: 0x12000012  beqz        $s0, . + 4 + (0x12 << 2)
    ctx->pc = 0x2307C4u;
    {
        const bool branch_taken_0x2307c4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x2307C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2307C4u;
        // 0x2307c8: 0xdf828450  ld          $v0, -0x7BB0($gp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294935632)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2307c4) {
            ctx->pc = 0x230810u;
            goto label_230810;
        }
    }
    ctx->pc = 0x2307CCu;
    // 0x2307cc: 0x3c04bfff  lui         $a0, 0xBFFF
    ctx->pc = 0x2307ccu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)49151 << 16));
    // 0x2307d0: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x2307d0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x2307d4: 0x420b8  dsll        $a0, $a0, 2
    ctx->pc = 0x2307d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << 2);
    // 0x2307d8: 0x34840003  ori         $a0, $a0, 0x3
    ctx->pc = 0x2307d8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)3);
    // 0x2307dc: 0xdf858460  ld          $a1, -0x7BA0($gp)
    ctx->pc = 0x2307dcu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 28), 4294935648)));
    // 0x2307e0: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x2307e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x2307e4: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x2307e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x2307e8: 0xa31824  and         $v1, $a1, $v1
    ctx->pc = 0x2307e8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 5) & GPR_U64(ctx, 3));
    // 0x2307ec: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x2307ECu;
    {
        const bool branch_taken_0x2307ec = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x2307F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2307ECu;
        // 0x2307f0: 0xff828450  sd          $v0, -0x7BB0($gp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 28), 4294935632), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2307ec) {
            ctx->pc = 0x230820u;
            goto label_230820;
        }
    }
    ctx->pc = 0x2307F4u;
    // 0x2307f4: 0x3c02fff8  lui         $v0, 0xFFF8
    ctx->pc = 0x2307f4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65528 << 16));
    // 0x2307f8: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2307f8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2307fc: 0x3c030003  lui         $v1, 0x3
    ctx->pc = 0x2307fcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)3 << 16));
    // 0x230800: 0xa21024  and         $v0, $a1, $v0
    ctx->pc = 0x230800u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x230804: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x230804u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x230808: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x230808u;
    {
        const bool branch_taken_0x230808 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23080Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230808u;
        // 0x23080c: 0xff828460  sd          $v0, -0x7BA0($gp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 28), 4294935648), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230808) {
            ctx->pc = 0x230820u;
            goto label_230820;
        }
    }
    ctx->pc = 0x230810u;
label_230810:
    // 0x230810: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x230810u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x230814: 0x31c78  dsll        $v1, $v1, 17
    ctx->pc = 0x230814u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 17);
    // 0x230818: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x230818u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x23081c: 0xff828450  sd          $v0, -0x7BB0($gp)
    ctx->pc = 0x23081cu;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294935632), GPR_U64(ctx, 2));
label_230820:
    // 0x230820: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x230820u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x230824: 0xc08bbd6  jal         func_22EF58
    ctx->pc = 0x230824u;
    SET_GPR_U32(ctx, 31, 0x23082Cu);
    ctx->pc = 0x230828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230824u;
    // 0x230828: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EF58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22EF58u, 0x230824u, 0x23082Cu)) {
        return;
    }
    ctx->pc = 0x23082Cu;
label_23082c:
    // 0x23082c: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x23082cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x230830: 0x52b7c  dsll32      $a1, $a1, 13
    ctx->pc = 0x230830u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 13));
    // 0x230834: 0x34a58002  ori         $a1, $a1, 0x8002
    ctx->pc = 0x230834u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32770);
    // 0x230838: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x230838u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x23083c: 0x70852389  pcpyld      $a0, $a0, $a1
    ctx->pc = 0x23083cu;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x230840: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x230840u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x230844: 0x8c63412c  lw          $v1, 0x412C($v1)
    ctx->pc = 0x230844u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x230848: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x230848u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x23084c: 0x24630010  addiu       $v1, $v1, 0x10
    ctx->pc = 0x23084cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x230850: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x230850u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x230854: 0xac23412c  sw          $v1, 0x412C($at)
    ctx->pc = 0x230854u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x230858: 0xdf858450  ld          $a1, -0x7BB0($gp)
    ctx->pc = 0x230858u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 28), 4294935632)));
    // 0x23085c: 0x2404004e  addiu       $a0, $zero, 0x4E
    ctx->pc = 0x23085cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 78));
    // 0x230860: 0x70852389  pcpyld      $a0, $a0, $a1
    ctx->pc = 0x230860u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x230864: 0x7c640000  sq          $a0, 0x0($v1)
    ctx->pc = 0x230864u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 0), GPR_VEC(ctx, 4));
    // 0x230868: 0x24620010  addiu       $v0, $v1, 0x10
    ctx->pc = 0x230868u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 16));
    // 0x23086c: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x23086cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x230870: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x230870u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x230874: 0xdf858460  ld          $a1, -0x7BA0($gp)
    ctx->pc = 0x230874u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 28), 4294935648)));
    // 0x230878: 0x24040047  addiu       $a0, $zero, 0x47
    ctx->pc = 0x230878u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x23087c: 0x70852389  pcpyld      $a0, $a0, $a1
    ctx->pc = 0x23087cu;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x230880: 0x7c640010  sq          $a0, 0x10($v1)
    ctx->pc = 0x230880u;
    WRITE128(ADD32(GPR_U32(ctx, 3), 16), GPR_VEC(ctx, 4));
    // 0x230884: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x230884u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x230888: 0x10000174  b           . + 4 + (0x174 << 2)
    ctx->pc = 0x230888u;
    {
        const bool branch_taken_0x230888 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23088Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230888u;
        // 0x23088c: 0xaf8390bc  sw          $v1, -0x6F44($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938812), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230888) {
            ctx->pc = 0x230E5Cu;
            return;
        }
    }
    ctx->pc = 0x230890u;
label_230890:
    // 0x230890: 0x2603ffff  addiu       $v1, $s0, -0x1
    ctx->pc = 0x230890u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x230894: 0x2c620006  sltiu       $v0, $v1, 0x6
    ctx->pc = 0x230894u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)6) ? 1 : 0);
    // 0x230898: 0x1040016e  beqz        $v0, . + 4 + (0x16E << 2)
    ctx->pc = 0x230898u;
    {
        const bool branch_taken_0x230898 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23089Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230898u;
        // 0x23089c: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230898) {
            ctx->pc = 0x230E54u;
            return;
        }
    }
    ctx->pc = 0x2308A0u;
    // 0x2308a0: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x2308a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x2308a4: 0x2442a880  addiu       $v0, $v0, -0x5780
    ctx->pc = 0x2308a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944896));
    // 0x2308a8: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x2308a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x2308ac: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x2308acu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2308b0: 0x800008  jr          $a0
    ctx->pc = 0x2308B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x2308B8u: goto label_2308b8;
            case 0x2308C8u: goto label_2308c8;
            case 0x2308D8u: goto label_2308d8;
            case 0x2308E8u: goto label_2308e8;
            case 0x2308F8u: goto label_2308f8;
            case 0x230908u: goto label_230908;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2308B0u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x2308B8u;
label_2308b8:
    // 0x2308b8: 0xdf828488  ld          $v0, -0x7B78($gp)
    ctx->pc = 0x2308b8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294935688)));
    // 0x2308bc: 0x2403fe1f  addiu       $v1, $zero, -0x1E1
    ctx->pc = 0x2308bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966815));
    // 0x2308c0: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2308C0u;
    {
        const bool branch_taken_0x2308c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2308C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2308C0u;
        // 0x2308c4: 0x431024  and         $v0, $v0, $v1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2308c0) {
            ctx->pc = 0x23091Cu;
            goto label_23091c;
        }
    }
    ctx->pc = 0x2308C8u;
label_2308c8:
    // 0x2308c8: 0xdf828488  ld          $v0, -0x7B78($gp)
    ctx->pc = 0x2308c8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294935688)));
    // 0x2308cc: 0x2403fe1f  addiu       $v1, $zero, -0x1E1
    ctx->pc = 0x2308ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966815));
    // 0x2308d0: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x2308D0u;
    {
        const bool branch_taken_0x2308d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2308D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2308D0u;
        // 0x2308d4: 0x24040060  addiu       $a0, $zero, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2308d0) {
            ctx->pc = 0x230914u;
            goto label_230914;
        }
    }
    ctx->pc = 0x2308D8u;
label_2308d8:
    // 0x2308d8: 0xdf828488  ld          $v0, -0x7B78($gp)
    ctx->pc = 0x2308d8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294935688)));
    // 0x2308dc: 0x2403fe1f  addiu       $v1, $zero, -0x1E1
    ctx->pc = 0x2308dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966815));
    // 0x2308e0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2308E0u;
    {
        const bool branch_taken_0x2308e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2308E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2308E0u;
        // 0x2308e4: 0x24040080  addiu       $a0, $zero, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2308e0) {
            ctx->pc = 0x230914u;
            goto label_230914;
        }
    }
    ctx->pc = 0x2308E8u;
label_2308e8:
    // 0x2308e8: 0xdf828488  ld          $v0, -0x7B78($gp)
    ctx->pc = 0x2308e8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294935688)));
    // 0x2308ec: 0x2403fe1f  addiu       $v1, $zero, -0x1E1
    ctx->pc = 0x2308ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966815));
    // 0x2308f0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2308F0u;
    {
        const bool branch_taken_0x2308f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2308F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2308F0u;
        // 0x2308f4: 0x24040120  addiu       $a0, $zero, 0x120 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2308f0) {
            ctx->pc = 0x230914u;
            goto label_230914;
        }
    }
    ctx->pc = 0x2308F8u;
label_2308f8:
    // 0x2308f8: 0xdf828488  ld          $v0, -0x7B78($gp)
    ctx->pc = 0x2308f8u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294935688)));
    // 0x2308fc: 0x2403fe1f  addiu       $v1, $zero, -0x1E1
    ctx->pc = 0x2308fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966815));
    // 0x230900: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x230900u;
    {
        const bool branch_taken_0x230900 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230904u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230900u;
        // 0x230904: 0x240400c0  addiu       $a0, $zero, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 192));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230900) {
            ctx->pc = 0x230914u;
            goto label_230914;
        }
    }
    ctx->pc = 0x230908u;
label_230908:
    // 0x230908: 0xdf828488  ld          $v0, -0x7B78($gp)
    ctx->pc = 0x230908u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294935688)));
    // 0x23090c: 0x2403fe1f  addiu       $v1, $zero, -0x1E1
    ctx->pc = 0x23090cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294966815));
    // 0x230910: 0x24040160  addiu       $a0, $zero, 0x160
    ctx->pc = 0x230910u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 352));
label_230914:
    // 0x230914: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x230914u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x230918: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x230918u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
label_23091c:
    // 0x23091c: 0xff828488  sd          $v0, -0x7B78($gp)
    ctx->pc = 0x23091cu;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294935688), GPR_U64(ctx, 2));
    // 0x230920: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x230920u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x230924: 0xc08bbd6  jal         func_22EF58
    ctx->pc = 0x230924u;
    SET_GPR_U32(ctx, 31, 0x23092Cu);
    ctx->pc = 0x230928u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230924u;
    // 0x230928: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EF58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22EF58u, 0x230924u, 0x23092Cu)) {
        return;
    }
    ctx->pc = 0x23092Cu;
label_23092c:
    // 0x23092c: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x23092cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x230930: 0x52b7c  dsll32      $a1, $a1, 13
    ctx->pc = 0x230930u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 13));
    // 0x230934: 0x34a58001  ori         $a1, $a1, 0x8001
    ctx->pc = 0x230934u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32769);
    // 0x230938: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x230938u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x23093c: 0x70852389  pcpyld      $a0, $a0, $a1
    ctx->pc = 0x23093cu;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x230940: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x230940u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x230944: 0x8c42412c  lw          $v0, 0x412C($v0)
    ctx->pc = 0x230944u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x230948: 0x7c440000  sq          $a0, 0x0($v0)
    ctx->pc = 0x230948u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
    // 0x23094c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x23094cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x230950: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x230950u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x230954: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x230954u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x230958: 0xdf858488  ld          $a1, -0x7B78($gp)
    ctx->pc = 0x230958u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 28), 4294935688)));
    // 0x23095c: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x23095cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x230960: 0x70852389  pcpyld      $a0, $a0, $a1
    ctx->pc = 0x230960u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x230964: 0x10000138  b           . + 4 + (0x138 << 2)
    ctx->pc = 0x230964u;
    {
        const bool branch_taken_0x230964 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230968u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230964u;
        // 0x230968: 0x7c440000  sq          $a0, 0x0($v0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230964) {
            ctx->pc = 0x230E48u;
            goto label_230e48;
        }
    }
    ctx->pc = 0x23096Cu;
    // 0x23096c: 0x0  nop
    ctx->pc = 0x23096cu;
    // NOP
label_230970:
    // 0x230970: 0x2603ffff  addiu       $v1, $s0, -0x1
    ctx->pc = 0x230970u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x230974: 0x2c620008  sltiu       $v0, $v1, 0x8
    ctx->pc = 0x230974u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x230978: 0x10400136  beqz        $v0, . + 4 + (0x136 << 2)
    ctx->pc = 0x230978u;
    {
        const bool branch_taken_0x230978 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x23097Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230978u;
        // 0x23097c: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230978) {
            ctx->pc = 0x230E54u;
            return;
        }
    }
    ctx->pc = 0x230980u;
    // 0x230980: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x230980u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x230984: 0x2442a8a0  addiu       $v0, $v0, -0x5760
    ctx->pc = 0x230984u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944928));
    // 0x230988: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x230988u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x23098c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x23098cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x230990: 0x800008  jr          $a0
    ctx->pc = 0x230990u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x230998u: goto label_230998;
            case 0x2309A0u: goto label_2309a0;
            case 0x2309A8u: goto label_2309a8;
            case 0x2309B0u: goto label_2309b0;
            case 0x2309B8u: goto label_2309b8;
            case 0x2309C0u: goto label_2309c0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x230990u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x230998u;
label_230998:
    // 0x230998: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x230998u;
    {
        const bool branch_taken_0x230998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x23099Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230998u;
        // 0x23099c: 0xaf8084a8  sw          $zero, -0x7B58($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935720), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230998) {
            ctx->pc = 0x2309C8u;
            goto label_2309c8;
        }
    }
    ctx->pc = 0x2309A0u;
label_2309a0:
    // 0x2309a0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x2309A0u;
    {
        const bool branch_taken_0x2309a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2309A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2309A0u;
        // 0x2309a4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2309a0) {
            ctx->pc = 0x2309C4u;
            goto label_2309c4;
        }
    }
    ctx->pc = 0x2309A8u;
label_2309a8:
    // 0x2309a8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x2309A8u;
    {
        const bool branch_taken_0x2309a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2309ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2309A8u;
        // 0x2309ac: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2309a8) {
            ctx->pc = 0x2309C4u;
            goto label_2309c4;
        }
    }
    ctx->pc = 0x2309B0u;
label_2309b0:
    // 0x2309b0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2309B0u;
    {
        const bool branch_taken_0x2309b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2309B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2309B0u;
        // 0x2309b4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2309b0) {
            ctx->pc = 0x2309C4u;
            goto label_2309c4;
        }
    }
    ctx->pc = 0x2309B8u;
label_2309b8:
    // 0x2309b8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x2309B8u;
    {
        const bool branch_taken_0x2309b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2309BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2309B8u;
        // 0x2309bc: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2309b8) {
            ctx->pc = 0x2309C4u;
            goto label_2309c4;
        }
    }
    ctx->pc = 0x2309C0u;
label_2309c0:
    // 0x2309c0: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x2309c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_2309c4:
    // 0x2309c4: 0xaf8284a8  sw          $v0, -0x7B58($gp)
    ctx->pc = 0x2309c4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935720), GPR_U32(ctx, 2));
label_2309c8:
    // 0x2309c8: 0x8f8684ac  lw          $a2, -0x7B54($gp)
    ctx->pc = 0x2309c8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935724)));
    // 0x2309cc: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x2309ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x2309d0: 0x8f8584a8  lw          $a1, -0x7B58($gp)
    ctx->pc = 0x2309d0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935720)));
    // 0x2309d4: 0x3c03005c  lui         $v1, 0x5C
    ctx->pc = 0x2309d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)92 << 16));
    // 0x2309d8: 0xc42018  mult        $a0, $a2, $a0
    ctx->pc = 0x2309d8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x2309dc: 0x24630ce8  addiu       $v1, $v1, 0xCE8
    ctx->pc = 0x2309dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3304));
    // 0x2309e0: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x2309e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x2309e4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x2309e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x2309e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x2309e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x2309ec: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x2309ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x2309f0: 0xff838490  sd          $v1, -0x7B70($gp)
    ctx->pc = 0x2309f0u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294935696), GPR_U64(ctx, 3));
    // 0x2309f4: 0x460011a  bltz        $v1, . + 4 + (0x11A << 2)
    ctx->pc = 0x2309F4u;
    {
        const bool branch_taken_0x2309f4 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x2309F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2309F4u;
        // 0x2309f8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2309f4) {
            ctx->pc = 0x230E60u;
            return;
        }
    }
    ctx->pc = 0x2309FCu;
    // 0x2309fc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x2309fcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x230a00: 0x14a20007  bne         $a1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x230A00u;
    {
        const bool branch_taken_0x230a00 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x230a00) {
            ctx->pc = 0x230A20u;
            goto label_230a20;
        }
    }
    ctx->pc = 0x230A08u;
    // 0x230a08: 0x14c50005  bne         $a2, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x230A08u;
    {
        const bool branch_taken_0x230a08 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 5));
        if (branch_taken_0x230a08) {
            ctx->pc = 0x230A20u;
            goto label_230a20;
        }
    }
    ctx->pc = 0x230A10u;
    // 0x230a10: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x230a10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x230a14: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x230a14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x230a18: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x230a18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x230a1c: 0xff828490  sd          $v0, -0x7B70($gp)
    ctx->pc = 0x230a1cu;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294935696), GPR_U64(ctx, 2));
label_230a20:
    // 0x230a20: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x230a20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x230a24: 0xc08bbd6  jal         func_22EF58
    ctx->pc = 0x230A24u;
    SET_GPR_U32(ctx, 31, 0x230A2Cu);
    ctx->pc = 0x230A28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230A24u;
    // 0x230a28: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EF58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22EF58u, 0x230A24u, 0x230A2Cu)) {
        return;
    }
    ctx->pc = 0x230A2Cu;
label_230a2c:
    // 0x230a2c: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x230a2cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x230a30: 0x52b7c  dsll32      $a1, $a1, 13
    ctx->pc = 0x230a30u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 13));
    // 0x230a34: 0x34a58001  ori         $a1, $a1, 0x8001
    ctx->pc = 0x230a34u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32769);
    // 0x230a38: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x230a38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x230a3c: 0x70852389  pcpyld      $a0, $a0, $a1
    ctx->pc = 0x230a3cu;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x230a40: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x230a40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x230a44: 0x8c42412c  lw          $v0, 0x412C($v0)
    ctx->pc = 0x230a44u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x230a48: 0x7c440000  sq          $a0, 0x0($v0)
    ctx->pc = 0x230a48u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
    // 0x230a4c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x230a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x230a50: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x230a50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x230a54: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x230a54u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x230a58: 0xdf858490  ld          $a1, -0x7B70($gp)
    ctx->pc = 0x230a58u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 28), 4294935696)));
    // 0x230a5c: 0x24040042  addiu       $a0, $zero, 0x42
    ctx->pc = 0x230a5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x230a60: 0x70852389  pcpyld      $a0, $a0, $a1
    ctx->pc = 0x230a60u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x230a64: 0x100000f8  b           . + 4 + (0xF8 << 2)
    ctx->pc = 0x230A64u;
    {
        const bool branch_taken_0x230a64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230A68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230A64u;
        // 0x230a68: 0x7c440000  sq          $a0, 0x0($v0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230a64) {
            ctx->pc = 0x230E48u;
            goto label_230e48;
        }
    }
    ctx->pc = 0x230A6Cu;
    // 0x230a6c: 0x0  nop
    ctx->pc = 0x230a6cu;
    // NOP
label_230a70:
    // 0x230a70: 0x2603ffff  addiu       $v1, $s0, -0x1
    ctx->pc = 0x230a70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x230a74: 0x2c620008  sltiu       $v0, $v1, 0x8
    ctx->pc = 0x230a74u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x230a78: 0x104000f6  beqz        $v0, . + 4 + (0xF6 << 2)
    ctx->pc = 0x230A78u;
    {
        const bool branch_taken_0x230a78 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x230A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230A78u;
        // 0x230a7c: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230a78) {
            ctx->pc = 0x230E54u;
            return;
        }
    }
    ctx->pc = 0x230A80u;
    // 0x230a80: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x230a80u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x230a84: 0x2442a8c0  addiu       $v0, $v0, -0x5740
    ctx->pc = 0x230a84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944960));
    // 0x230a88: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x230a88u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x230a8c: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x230a8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x230a90: 0x800008  jr          $a0
    ctx->pc = 0x230A90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x230A98u: goto label_230a98;
            case 0x230AA0u: goto label_230aa0;
            case 0x230AA8u: goto label_230aa8;
            case 0x230AB0u: goto label_230ab0;
            case 0x230AB8u: goto label_230ab8;
            case 0x230AC0u: goto label_230ac0;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x230A90u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x230A98u;
label_230a98:
    // 0x230a98: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x230A98u;
    {
        const bool branch_taken_0x230a98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230A9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230A98u;
        // 0x230a9c: 0xaf8084ac  sw          $zero, -0x7B54($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294935724), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230a98) {
            ctx->pc = 0x230AC8u;
            goto label_230ac8;
        }
    }
    ctx->pc = 0x230AA0u;
label_230aa0:
    // 0x230aa0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x230AA0u;
    {
        const bool branch_taken_0x230aa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230AA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230AA0u;
        // 0x230aa4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230aa0) {
            ctx->pc = 0x230AC4u;
            goto label_230ac4;
        }
    }
    ctx->pc = 0x230AA8u;
label_230aa8:
    // 0x230aa8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x230AA8u;
    {
        const bool branch_taken_0x230aa8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230AACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230AA8u;
        // 0x230aac: 0x24020002  addiu       $v0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230aa8) {
            ctx->pc = 0x230AC4u;
            goto label_230ac4;
        }
    }
    ctx->pc = 0x230AB0u;
label_230ab0:
    // 0x230ab0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x230AB0u;
    {
        const bool branch_taken_0x230ab0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230AB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230AB0u;
        // 0x230ab4: 0x24020003  addiu       $v0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230ab0) {
            ctx->pc = 0x230AC4u;
            goto label_230ac4;
        }
    }
    ctx->pc = 0x230AB8u;
label_230ab8:
    // 0x230ab8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x230AB8u;
    {
        const bool branch_taken_0x230ab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230AB8u;
        // 0x230abc: 0x24020004  addiu       $v0, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230ab8) {
            ctx->pc = 0x230AC4u;
            goto label_230ac4;
        }
    }
    ctx->pc = 0x230AC0u;
label_230ac0:
    // 0x230ac0: 0x24020005  addiu       $v0, $zero, 0x5
    ctx->pc = 0x230ac0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_230ac4:
    // 0x230ac4: 0xaf8284ac  sw          $v0, -0x7B54($gp)
    ctx->pc = 0x230ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294935724), GPR_U32(ctx, 2));
label_230ac8:
    // 0x230ac8: 0x8f8684ac  lw          $a2, -0x7B54($gp)
    ctx->pc = 0x230ac8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935724)));
    // 0x230acc: 0x24040018  addiu       $a0, $zero, 0x18
    ctx->pc = 0x230accu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x230ad0: 0x8f8584a8  lw          $a1, -0x7B58($gp)
    ctx->pc = 0x230ad0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 4294935720)));
    // 0x230ad4: 0x3c03005c  lui         $v1, 0x5C
    ctx->pc = 0x230ad4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)92 << 16));
    // 0x230ad8: 0xc42018  mult        $a0, $a2, $a0
    ctx->pc = 0x230ad8u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x230adc: 0x24630ce8  addiu       $v1, $v1, 0xCE8
    ctx->pc = 0x230adcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 3304));
    // 0x230ae0: 0x51080  sll         $v0, $a1, 2
    ctx->pc = 0x230ae0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x230ae4: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x230ae4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x230ae8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x230ae8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x230aec: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x230aecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x230af0: 0xff838490  sd          $v1, -0x7B70($gp)
    ctx->pc = 0x230af0u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294935696), GPR_U64(ctx, 3));
    // 0x230af4: 0x46000da  bltz        $v1, . + 4 + (0xDA << 2)
    ctx->pc = 0x230AF4u;
    {
        const bool branch_taken_0x230af4 = (GPR_S64(ctx, 3) < 0);
        ctx->pc = 0x230AF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230AF4u;
        // 0x230af8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230af4) {
            ctx->pc = 0x230E60u;
            return;
        }
    }
    ctx->pc = 0x230AFCu;
    // 0x230afc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x230afcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x230b00: 0x14a20007  bne         $a1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x230B00u;
    {
        const bool branch_taken_0x230b00 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        if (branch_taken_0x230b00) {
            ctx->pc = 0x230B20u;
            goto label_230b20;
        }
    }
    ctx->pc = 0x230B08u;
    // 0x230b08: 0x14c50005  bne         $a2, $a1, . + 4 + (0x5 << 2)
    ctx->pc = 0x230B08u;
    {
        const bool branch_taken_0x230b08 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 5));
        if (branch_taken_0x230b08) {
            ctx->pc = 0x230B20u;
            goto label_230b20;
        }
    }
    ctx->pc = 0x230B10u;
    // 0x230b10: 0x34028000  ori         $v0, $zero, 0x8000
    ctx->pc = 0x230b10u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x230b14: 0x21638  dsll        $v0, $v0, 24
    ctx->pc = 0x230b14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 24);
    // 0x230b18: 0x621025  or          $v0, $v1, $v0
    ctx->pc = 0x230b18u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x230b1c: 0xff828490  sd          $v0, -0x7B70($gp)
    ctx->pc = 0x230b1cu;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294935696), GPR_U64(ctx, 2));
label_230b20:
    // 0x230b20: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x230b20u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x230b24: 0xc08bbd6  jal         func_22EF58
    ctx->pc = 0x230B24u;
    SET_GPR_U32(ctx, 31, 0x230B2Cu);
    ctx->pc = 0x230B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230B24u;
    // 0x230b28: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EF58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22EF58u, 0x230B24u, 0x230B2Cu)) {
        return;
    }
    ctx->pc = 0x230B2Cu;
label_230b2c:
    // 0x230b2c: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x230b2cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x230b30: 0x52b7c  dsll32      $a1, $a1, 13
    ctx->pc = 0x230b30u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 13));
    // 0x230b34: 0x34a58001  ori         $a1, $a1, 0x8001
    ctx->pc = 0x230b34u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32769);
    // 0x230b38: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x230b38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x230b3c: 0x70852389  pcpyld      $a0, $a0, $a1
    ctx->pc = 0x230b3cu;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x230b40: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x230b40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x230b44: 0x8c42412c  lw          $v0, 0x412C($v0)
    ctx->pc = 0x230b44u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x230b48: 0x7c440000  sq          $a0, 0x0($v0)
    ctx->pc = 0x230b48u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
    // 0x230b4c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x230b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x230b50: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x230b50u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x230b54: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x230b54u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x230b58: 0xdf858490  ld          $a1, -0x7B70($gp)
    ctx->pc = 0x230b58u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 28), 4294935696)));
    // 0x230b5c: 0x24040042  addiu       $a0, $zero, 0x42
    ctx->pc = 0x230b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x230b60: 0x70852389  pcpyld      $a0, $a0, $a1
    ctx->pc = 0x230b60u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x230b64: 0x100000b8  b           . + 4 + (0xB8 << 2)
    ctx->pc = 0x230B64u;
    {
        const bool branch_taken_0x230b64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230B68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230B64u;
        // 0x230b68: 0x7c440000  sq          $a0, 0x0($v0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230b64) {
            ctx->pc = 0x230E48u;
            goto label_230e48;
        }
    }
    ctx->pc = 0x230B6Cu;
    // 0x230b6c: 0x0  nop
    ctx->pc = 0x230b6cu;
    // NOP
label_230b70:
    // 0x230b70: 0x10102b  sltu        $v0, $zero, $s0
    ctx->pc = 0x230b70u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x230b74: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x230B74u;
    {
        const bool branch_taken_0x230b74 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x230B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230B74u;
        // 0x230b78: 0xaf8290cc  sw          $v0, -0x6F34($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938828), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230b74) {
            ctx->pc = 0x230B8Cu;
            goto label_230b8c;
        }
    }
    ctx->pc = 0x230B7Cu;
    // 0x230b7c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x230b7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x230b80: 0x8c424134  lw          $v0, 0x4134($v0)
    ctx->pc = 0x230b80u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B4134u));
    // 0x230b84: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x230B84u;
    {
        const bool branch_taken_0x230b84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x230B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230B84u;
        // 0x230b88: 0xdf8284a0  ld          $v0, -0x7B60($gp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294935712)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230b84) {
            ctx->pc = 0x230BA0u;
            goto label_230ba0;
        }
    }
    ctx->pc = 0x230B8Cu;
label_230b8c:
    // 0x230b8c: 0xdf8284a0  ld          $v0, -0x7B60($gp)
    ctx->pc = 0x230b8cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294935712)));
    // 0x230b90: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x230b90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
label_230b94:
    // 0x230b94: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x230b94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x230b98: 0x100000b0  b           . + 4 + (0xB0 << 2)
    ctx->pc = 0x230B98u;
    {
        const bool branch_taken_0x230b98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230B98u;
        // 0x230b9c: 0xff8284a0  sd          $v0, -0x7B60($gp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 28), 4294935712), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230b98) {
            ctx->pc = 0x230E5Cu;
            return;
        }
    }
    ctx->pc = 0x230BA0u;
label_230ba0:
    // 0x230ba0: 0x2403ffbf  addiu       $v1, $zero, -0x41
    ctx->pc = 0x230ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967231));
label_230ba4:
    // 0x230ba4: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x230ba4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x230ba8: 0x100000ac  b           . + 4 + (0xAC << 2)
    ctx->pc = 0x230BA8u;
    {
        const bool branch_taken_0x230ba8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230BACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230BA8u;
        // 0x230bac: 0xff8284a0  sd          $v0, -0x7B60($gp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 28), 4294935712), GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230ba8) {
            ctx->pc = 0x230E5Cu;
            return;
        }
    }
    ctx->pc = 0x230BB0u;
label_230bb0:
    // 0x230bb0: 0x12000007  beqz        $s0, . + 4 + (0x7 << 2)
    ctx->pc = 0x230BB0u;
    {
        const bool branch_taken_0x230bb0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x230BB4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230BB0u;
        // 0x230bb4: 0xdf8284a0  ld          $v0, -0x7B60($gp) (Delay Slot)
        SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294935712)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230bb0) {
            ctx->pc = 0x230BD0u;
            goto label_230bd0;
        }
    }
    ctx->pc = 0x230BB8u;
    // 0x230bb8: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x230bb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x230bbc: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x230bbcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x230bc0: 0x90633550  lbu         $v1, 0x3550($v1)
    ctx->pc = 0x230bc0u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x6B3550u));
    // 0x230bc4: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x230bc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x230bc8: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x230BC8u;
    {
        const bool branch_taken_0x230bc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230BC8u;
        // 0x230bcc: 0x34630001  ori         $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x230bc8) {
            ctx->pc = 0x230BE4u;
            goto label_230be4;
        }
    }
    ctx->pc = 0x230BD0u;
label_230bd0:
    // 0x230bd0: 0x2404ffdf  addiu       $a0, $zero, -0x21
    ctx->pc = 0x230bd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967263));
    // 0x230bd4: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x230bd4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x230bd8: 0x90633550  lbu         $v1, 0x3550($v1)
    ctx->pc = 0x230bd8u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)FAST_READ8(0x6B3550u));
    // 0x230bdc: 0x441024  and         $v0, $v0, $a0
    ctx->pc = 0x230bdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 4));
    // 0x230be0: 0x306300fe  andi        $v1, $v1, 0xFE
    ctx->pc = 0x230be0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)254);
label_230be4:
    // 0x230be4: 0xff8284a0  sd          $v0, -0x7B60($gp)
    ctx->pc = 0x230be4u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294935712), GPR_U64(ctx, 2));
    // 0x230be8: 0x1000009c  b           . + 4 + (0x9C << 2)
    ctx->pc = 0x230BE8u;
    {
        const bool branch_taken_0x230be8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230BECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230BE8u;
        // 0x230bec: 0xa38384e0  sb          $v1, -0x7B20($gp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 28), 4294935776), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230be8) {
            ctx->pc = 0x230E5Cu;
            return;
        }
    }
    ctx->pc = 0x230BF0u;
label_230bf0:
    // 0x230bf0: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x230bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x230bf4: 0xc08bbd6  jal         func_22EF58
    ctx->pc = 0x230BF4u;
    SET_GPR_U32(ctx, 31, 0x230BFCu);
    ctx->pc = 0x230BF8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230BF4u;
    // 0x230bf8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EF58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22EF58u, 0x230BF4u, 0x230BFCu)) {
        return;
    }
    ctx->pc = 0x230BFCu;
label_230bfc:
    // 0x230bfc: 0x101c02  srl         $v1, $s0, 16
    ctx->pc = 0x230bfcu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 16), 16));
    // 0x230c00: 0x320400ff  andi        $a0, $s0, 0xFF
    ctx->pc = 0x230c00u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)255);
    // 0x230c04: 0x306300ff  andi        $v1, $v1, 0xFF
    ctx->pc = 0x230c04u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x230c08: 0x3202ff00  andi        $v0, $s0, 0xFF00
    ctx->pc = 0x230c08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65280);
    // 0x230c0c: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x230c0cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x230c10: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x230c10u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x230c14: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x230c14u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x230c18: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x230c18u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x230c1c: 0x52b7c  dsll32      $a1, $a1, 13
    ctx->pc = 0x230c1cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 13));
    // 0x230c20: 0x34a58001  ori         $a1, $a1, 0x8001
    ctx->pc = 0x230c20u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32769);
    // 0x230c24: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x230c24u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x230c28: 0xff838478  sd          $v1, -0x7B88($gp)
    ctx->pc = 0x230c28u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294935672), GPR_U64(ctx, 3));
    // 0x230c2c: 0x70852389  pcpyld      $a0, $a0, $a1
    ctx->pc = 0x230c2cu;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x230c30: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x230c30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x230c34: 0x8c42412c  lw          $v0, 0x412C($v0)
    ctx->pc = 0x230c34u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x230c38: 0x7c440000  sq          $a0, 0x0($v0)
    ctx->pc = 0x230c38u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
    // 0x230c3c: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x230c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x230c40: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x230c40u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x230c44: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x230c44u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x230c48: 0xdf858478  ld          $a1, -0x7B88($gp)
    ctx->pc = 0x230c48u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 28), 4294935672)));
    // 0x230c4c: 0x2404003d  addiu       $a0, $zero, 0x3D
    ctx->pc = 0x230c4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 61));
    // 0x230c50: 0x70852389  pcpyld      $a0, $a0, $a1
    ctx->pc = 0x230c50u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x230c54: 0x1000007c  b           . + 4 + (0x7C << 2)
    ctx->pc = 0x230C54u;
    {
        const bool branch_taken_0x230c54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230C58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230C54u;
        // 0x230c58: 0x7c440000  sq          $a0, 0x0($v0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230c54) {
            ctx->pc = 0x230E48u;
            goto label_230e48;
        }
    }
    ctx->pc = 0x230C5Cu;
    // 0x230c5c: 0x0  nop
    ctx->pc = 0x230c5cu;
    // NOP
label_230c60:
    // 0x230c60: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x230c60u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x230c64: 0x1602007e  bne         $s0, $v0, . + 4 + (0x7E << 2)
    ctx->pc = 0x230C64u;
    {
        const bool branch_taken_0x230c64 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x230C68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230C64u;
        // 0x230c68: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230c64) {
            ctx->pc = 0x230E60u;
            return;
        }
    }
    ctx->pc = 0x230C6Cu;
    // 0x230c6c: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x230c6cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x230c70: 0x24423cd0  addiu       $v0, $v0, 0x3CD0
    ctx->pc = 0x230c70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 15568));
    // 0x230c74: 0x10000079  b           . + 4 + (0x79 << 2)
    ctx->pc = 0x230C74u;
    {
        const bool branch_taken_0x230c74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230C78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230C74u;
        // 0x230c78: 0xaf8290f8  sw          $v0, -0x6F08($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938872), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230c74) {
            ctx->pc = 0x230E5Cu;
            return;
        }
    }
    ctx->pc = 0x230C7Cu;
label_230c7c:
    // 0x230c7c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x230c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x230c80: 0x16020003  bne         $s0, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x230C80u;
    {
        const bool branch_taken_0x230c80 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        ctx->pc = 0x230C84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230C80u;
        // 0x230c84: 0x938284e0  lbu         $v0, -0x7B20($gp) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 28), 4294935776)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230c80) {
            ctx->pc = 0x230C90u;
            goto label_230c90;
        }
    }
    ctx->pc = 0x230C88u;
    // 0x230c88: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x230C88u;
    {
        const bool branch_taken_0x230c88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230C8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230C88u;
        // 0x230c8c: 0x304200df  andi        $v0, $v0, 0xDF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)223);
        ctx->in_delay_slot = false;
        if (branch_taken_0x230c88) {
            ctx->pc = 0x230C94u;
            goto label_230c94;
        }
    }
    ctx->pc = 0x230C90u;
label_230c90:
    // 0x230c90: 0x34420020  ori         $v0, $v0, 0x20
    ctx->pc = 0x230c90u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)32);
label_230c94:
    // 0x230c94: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x230c94u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x230c98: 0xa0223550  sb          $v0, 0x3550($at)
    ctx->pc = 0x230c98u;
    do { uint8_t _value = static_cast<uint8_t>((uint8_t)GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B3550u, 1u, _value, 0u, "WRITE8", ctx); FAST_WRITE8(0x6B3550u, _value); } while (0);
    // 0x230c9c: 0x1000006f  b           . + 4 + (0x6F << 2)
    ctx->pc = 0x230C9Cu;
    {
        const bool branch_taken_0x230c9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230CA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230C9Cu;
        // 0x230ca0: 0xaf9090d0  sw          $s0, -0x6F30($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938832), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230c9c) {
            ctx->pc = 0x230E5Cu;
            return;
        }
    }
    ctx->pc = 0x230CA4u;
label_230ca4:
    // 0x230ca4: 0x2603ffff  addiu       $v1, $s0, -0x1
    ctx->pc = 0x230ca4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
    // 0x230ca8: 0x2c620008  sltiu       $v0, $v1, 0x8
    ctx->pc = 0x230ca8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)8) ? 1 : 0);
    // 0x230cac: 0x10400069  beqz        $v0, . + 4 + (0x69 << 2)
    ctx->pc = 0x230CACu;
    {
        const bool branch_taken_0x230cac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x230CB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230CACu;
        // 0x230cb0: 0x3c02006b  lui         $v0, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230cac) {
            ctx->pc = 0x230E54u;
            return;
        }
    }
    ctx->pc = 0x230CB4u;
    // 0x230cb4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x230cb4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x230cb8: 0x2442a8e0  addiu       $v0, $v0, -0x5720
    ctx->pc = 0x230cb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944992));
    // 0x230cbc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x230cbcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x230cc0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x230cc0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x230cc4: 0x800008  jr          $a0
    ctx->pc = 0x230CC4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x230CCCu: goto label_230ccc;
            case 0x230CDCu: goto label_230cdc;
            case 0x230CECu: goto label_230cec;
            case 0x230CFCu: goto label_230cfc;
            case 0x230D0Cu: goto label_230d0c;
            case 0x230D1Cu: goto label_230d1c;
            case 0x230D2Cu: goto label_230d2c;
            case 0x230D3Cu: goto label_230d3c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x230CC4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x230CCCu;
label_230ccc:
    // 0x230ccc: 0xdf828460  ld          $v0, -0x7BA0($gp)
    ctx->pc = 0x230cccu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294935648)));
    // 0x230cd0: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x230cd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x230cd4: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x230CD4u;
    {
        const bool branch_taken_0x230cd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230CD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230CD4u;
        // 0x230cd8: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230cd4) {
            ctx->pc = 0x230D48u;
            goto label_230d48;
        }
    }
    ctx->pc = 0x230CDCu;
label_230cdc:
    // 0x230cdc: 0xdf828460  ld          $v0, -0x7BA0($gp)
    ctx->pc = 0x230cdcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294935648)));
    // 0x230ce0: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x230ce0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x230ce4: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x230CE4u;
    {
        const bool branch_taken_0x230ce4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230CE4u;
        // 0x230ce8: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230ce4) {
            ctx->pc = 0x230D48u;
            goto label_230d48;
        }
    }
    ctx->pc = 0x230CECu;
label_230cec:
    // 0x230cec: 0xdf828460  ld          $v0, -0x7BA0($gp)
    ctx->pc = 0x230cecu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294935648)));
    // 0x230cf0: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x230cf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x230cf4: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x230CF4u;
    {
        const bool branch_taken_0x230cf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230CF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230CF4u;
        // 0x230cf8: 0x24040009  addiu       $a0, $zero, 0x9 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230cf4) {
            ctx->pc = 0x230D48u;
            goto label_230d48;
        }
    }
    ctx->pc = 0x230CFCu;
label_230cfc:
    // 0x230cfc: 0xdf828460  ld          $v0, -0x7BA0($gp)
    ctx->pc = 0x230cfcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294935648)));
    // 0x230d00: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x230d00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x230d04: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x230D04u;
    {
        const bool branch_taken_0x230d04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230D08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230D04u;
        // 0x230d08: 0x24040007  addiu       $a0, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230d04) {
            ctx->pc = 0x230D48u;
            goto label_230d48;
        }
    }
    ctx->pc = 0x230D0Cu;
label_230d0c:
    // 0x230d0c: 0xdf828460  ld          $v0, -0x7BA0($gp)
    ctx->pc = 0x230d0cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294935648)));
    // 0x230d10: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x230d10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x230d14: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x230D14u;
    {
        const bool branch_taken_0x230d14 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230D18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230D14u;
        // 0x230d18: 0x2404000d  addiu       $a0, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230d14) {
            ctx->pc = 0x230D48u;
            goto label_230d48;
        }
    }
    ctx->pc = 0x230D1Cu;
label_230d1c:
    // 0x230d1c: 0xdf828460  ld          $v0, -0x7BA0($gp)
    ctx->pc = 0x230d1cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294935648)));
    // 0x230d20: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x230d20u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x230d24: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x230D24u;
    {
        const bool branch_taken_0x230d24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230D28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230D24u;
        // 0x230d28: 0x2404000f  addiu       $a0, $zero, 0xF (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230d24) {
            ctx->pc = 0x230D48u;
            goto label_230d48;
        }
    }
    ctx->pc = 0x230D2Cu;
label_230d2c:
    // 0x230d2c: 0xdf828460  ld          $v0, -0x7BA0($gp)
    ctx->pc = 0x230d2cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294935648)));
    // 0x230d30: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x230d30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x230d34: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x230D34u;
    {
        const bool branch_taken_0x230d34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230D38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230D34u;
        // 0x230d38: 0x2404000b  addiu       $a0, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230d34) {
            ctx->pc = 0x230D48u;
            goto label_230d48;
        }
    }
    ctx->pc = 0x230D3Cu;
label_230d3c:
    // 0x230d3c: 0xdf828460  ld          $v0, -0x7BA0($gp)
    ctx->pc = 0x230d3cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 28), 4294935648)));
    // 0x230d40: 0x2403fff0  addiu       $v1, $zero, -0x10
    ctx->pc = 0x230d40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x230d44: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x230d44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
label_230d48:
    // 0x230d48: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x230d48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x230d4c: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x230d4cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x230d50: 0xff828460  sd          $v0, -0x7BA0($gp)
    ctx->pc = 0x230d50u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294935648), GPR_U64(ctx, 2));
    // 0x230d54: 0xdf838460  ld          $v1, -0x7BA0($gp)
    ctx->pc = 0x230d54u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 28), 4294935648)));
    // 0x230d58: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x230d58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x230d5c: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x230d5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x230d60: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x230d60u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x230d64: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x230D64u;
    {
        const bool branch_taken_0x230d64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x230D68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230D64u;
        // 0x230d68: 0x2402cfff  addiu       $v0, $zero, -0x3001 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294955007));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230d64) {
            ctx->pc = 0x230D74u;
            goto label_230d74;
        }
    }
    ctx->pc = 0x230D6Cu;
    // 0x230d6c: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x230d6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x230d70: 0xff828460  sd          $v0, -0x7BA0($gp)
    ctx->pc = 0x230d70u;
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294935648), GPR_U64(ctx, 2));
label_230d74:
    // 0x230d74: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x230d74u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x230d78: 0xc08bbd6  jal         func_22EF58
    ctx->pc = 0x230D78u;
    SET_GPR_U32(ctx, 31, 0x230D80u);
    ctx->pc = 0x230D7Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230D78u;
    // 0x230d7c: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EF58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22EF58u, 0x230D78u, 0x230D80u)) {
        return;
    }
    ctx->pc = 0x230D80u;
label_230d80:
    // 0x230d80: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x230d80u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x230d84: 0x52b7c  dsll32      $a1, $a1, 13
    ctx->pc = 0x230d84u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 13));
    // 0x230d88: 0x34a58001  ori         $a1, $a1, 0x8001
    ctx->pc = 0x230d88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32769);
    // 0x230d8c: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x230d8cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x230d90: 0x70852389  pcpyld      $a0, $a0, $a1
    ctx->pc = 0x230d90u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x230d94: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x230d94u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x230d98: 0x8c42412c  lw          $v0, 0x412C($v0)
    ctx->pc = 0x230d98u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x230d9c: 0x7c440000  sq          $a0, 0x0($v0)
    ctx->pc = 0x230d9cu;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
    // 0x230da0: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x230da0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x230da4: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x230da4u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x230da8: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x230da8u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x230dac: 0xdf858460  ld          $a1, -0x7BA0($gp)
    ctx->pc = 0x230dacu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 28), 4294935648)));
    // 0x230db0: 0x24040047  addiu       $a0, $zero, 0x47
    ctx->pc = 0x230db0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x230db4: 0x70852389  pcpyld      $a0, $a0, $a1
    ctx->pc = 0x230db4u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x230db8: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x230DB8u;
    {
        const bool branch_taken_0x230db8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230DB8u;
        // 0x230dbc: 0x7c440000  sq          $a0, 0x0($v0) (Delay Slot)
        WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230db8) {
            ctx->pc = 0x230E48u;
            goto label_230e48;
        }
    }
    ctx->pc = 0x230DC0u;
label_230dc0:
    // 0x230dc0: 0x44900000  mtc1        $s0, $f0
    ctx->pc = 0x230dc0u;
    { uint32_t bits = GPR_U32(ctx, 16); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x230dc4: 0x0  nop
    ctx->pc = 0x230dc4u;
    // NOP
    // 0x230dc8: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x230dc8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x230dcc: 0x3c013f00  lui         $at, 0x3F00
    ctx->pc = 0x230dccu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)16128 << 16));
    // 0x230dd0: 0x34218088  ori         $at, $at, 0x8088
    ctx->pc = 0x230dd0u;
    SET_GPR_U64(ctx, 1, GPR_U64(ctx, 1) | (uint64_t)(uint16_t)32904);
    // 0x230dd4: 0x44810800  mtc1        $at, $f1
    ctx->pc = 0x230dd4u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x230dd8: 0xdf838460  ld          $v1, -0x7BA0($gp)
    ctx->pc = 0x230dd8u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 28), 4294935648)));
    // 0x230ddc: 0x2406f00f  addiu       $a2, $zero, -0xFF1
    ctx->pc = 0x230ddcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294963215));
    // 0x230de0: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x230de0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x230de4: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x230de4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x230de8: 0x46010002  mul.s       $f0, $f0, $f1
    ctx->pc = 0x230de8u;
    ctx->f[0] = FPU_MUL_S(ctx->f[0], ctx->f[1]);
    // 0x230dec: 0x661824  and         $v1, $v1, $a2
    ctx->pc = 0x230decu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 6));
    // 0x230df0: 0x46000064  .word       0x46000064                   # cvt.w.s     $f1, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x230df0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[1], &tmp, sizeof(tmp)); }
    // 0x230df4: 0x44020800  mfc1        $v0, $f1
    ctx->pc = 0x230df4u;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[1], sizeof(bits)); SET_GPR_U32(ctx, 2, bits); }
    // 0x230df8: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x230df8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x230dfc: 0x431825  or          $v1, $v0, $v1
    ctx->pc = 0x230dfcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x230e00: 0xc08bbd6  jal         func_22EF58
    ctx->pc = 0x230E00u;
    SET_GPR_U32(ctx, 31, 0x230E08u);
    ctx->pc = 0x230E04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x230E00u;
    // 0x230e04: 0xff838460  sd          $v1, -0x7BA0($gp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 28), 4294935648), GPR_U64(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22EF58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x22EF58u, 0x230E00u, 0x230E08u)) {
        return;
    }
    ctx->pc = 0x230E08u;
label_230e08:
    // 0x230e08: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x230e08u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x230e0c: 0x52b7c  dsll32      $a1, $a1, 13
    ctx->pc = 0x230e0cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 13));
    // 0x230e10: 0x34a58001  ori         $a1, $a1, 0x8001
    ctx->pc = 0x230e10u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)32769);
    // 0x230e14: 0x2404000e  addiu       $a0, $zero, 0xE
    ctx->pc = 0x230e14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
    // 0x230e18: 0x70852389  pcpyld      $a0, $a0, $a1
    ctx->pc = 0x230e18u;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x230e1c: 0x3c02006b  lui         $v0, 0x6B
    ctx->pc = 0x230e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)107 << 16));
    // 0x230e20: 0x8c42412c  lw          $v0, 0x412C($v0)
    ctx->pc = 0x230e20u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6B412Cu));
    // 0x230e24: 0x7c440000  sq          $a0, 0x0($v0)
    ctx->pc = 0x230e24u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
    // 0x230e28: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x230e28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x230e2c: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x230e2cu;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x230e30: 0xac22412c  sw          $v0, 0x412C($at)
    ctx->pc = 0x230e30u;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 2)); ps2TraceGuestWrite(rdram, 0x6B412Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B412Cu, _value); } while (0);
    // 0x230e34: 0xdf858460  ld          $a1, -0x7BA0($gp)
    ctx->pc = 0x230e34u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 28), 4294935648)));
    // 0x230e38: 0x24040047  addiu       $a0, $zero, 0x47
    ctx->pc = 0x230e38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x230e3c: 0x70852389  pcpyld      $a0, $a0, $a1
    ctx->pc = 0x230e3cu;
    SET_GPR_VEC(ctx, 4, PS2_PCPYLD(GPR_VEC(ctx, 4), GPR_VEC(ctx, 5)));
    // 0x230e40: 0x7c440000  sq          $a0, 0x0($v0)
    ctx->pc = 0x230e40u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 0), GPR_VEC(ctx, 4));
    // 0x230e44: 0x0  nop
    ctx->pc = 0x230e44u;
    // NOP
label_230e48:
    // 0x230e48: 0x24420010  addiu       $v0, $v0, 0x10
    ctx->pc = 0x230e48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16));
    // 0x230e4c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x230E4Cu;
    {
        const bool branch_taken_0x230e4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x230E50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x230E4Cu;
        // 0x230e50: 0xaf8290bc  sw          $v0, -0x6F44($gp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 28), 4294938812), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x230e4c) {
            ctx->pc = 0x230E5Cu;
            return;
        }
    }
    ctx->pc = 0x230E54u;
}
