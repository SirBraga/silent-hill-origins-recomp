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

// Function: sub_002173B0
// Address: 0x2173b0 - 0x2174a8
void sub_002173B0_0x2173b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002173B0_0x2173b0");
#endif

    switch (ctx->pc) {
        case 0x2173ecu: goto label_2173ec;
        case 0x2173fcu: goto label_2173fc;
        case 0x217480u: goto label_217480;
        default: break;
    }

    ctx->pc = 0x2173b0u;

    // 0x2173b0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x2173b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x2173b4: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x2173b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x2173b8: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x2173b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x2173bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2173bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2173c0: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x2173c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x2173c4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x2173c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2173c8: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x2173c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x2173cc: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x2173ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2173d0: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x2173d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x2173d4: 0xc0982d  daddu       $s3, $a2, $zero
    ctx->pc = 0x2173d4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2173d8: 0xe7b40060  swc1        $f20, 0x60($sp)
    ctx->pc = 0x2173d8u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 96), bits); }
    // 0x2173dc: 0x100a02d  daddu       $s4, $t0, $zero
    ctx->pc = 0x2173dcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2173e0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2173e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2173e4: 0xc085dbc  jal         func_2176F0
    ctx->pc = 0x2173E4u;
    SET_GPR_U32(ctx, 31, 0x2173ECu);
    ctx->pc = 0x2173E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2173E4u;
    // 0x2173e8: 0x46006506  mov.s       $f20, $f12 (Delay Slot)
    ctx->f[20] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2176F0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2176F0u, 0x2173E4u, 0x2173ECu)) {
        return;
    }
    ctx->pc = 0x2173ECu;
label_2173ec:
    // 0x2173ec: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x2173ECu;
    {
        const bool branch_taken_0x2173ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2173F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2173ECu;
        // 0x2173f0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2173ec) {
            ctx->pc = 0x217480u;
            goto label_217480;
        }
    }
    ctx->pc = 0x2173F4u;
    // 0x2173f4: 0xc085d6e  jal         func_2175B8
    ctx->pc = 0x2173F4u;
    SET_GPR_U32(ctx, 31, 0x2173FCu);
    ctx->pc = 0x2173F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2173F4u;
    // 0x2173f8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2175B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2175B8u, 0x2173F4u, 0x2173FCu)) {
        return;
    }
    ctx->pc = 0x2173FCu;
label_2173fc:
    // 0x2173fc: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x2173fcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x217400: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x217400u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217404: 0x8e04027c  lw          $a0, 0x27C($s0)
    ctx->pc = 0x217404u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 636)));
    // 0x217408: 0x12200013  beqz        $s1, . + 4 + (0x13 << 2)
    ctx->pc = 0x217408u;
    {
        const bool branch_taken_0x217408 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x21740Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217408u;
        // 0x21740c: 0xae020278  sw          $v0, 0x278($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 632), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217408) {
            ctx->pc = 0x217458u;
            goto label_217458;
        }
    }
    ctx->pc = 0x217410u;
    // 0x217410: 0x10800011  beqz        $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x217410u;
    {
        const bool branch_taken_0x217410 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x217410) {
            ctx->pc = 0x217458u;
            goto label_217458;
        }
    }
    ctx->pc = 0x217418u;
    // 0x217418: 0x92230000  lbu         $v1, 0x0($s1)
    ctx->pc = 0x217418u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x21741c: 0x90820000  lbu         $v0, 0x0($a0)
    ctx->pc = 0x21741cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x217420: 0x1462000d  bne         $v1, $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x217420u;
    {
        const bool branch_taken_0x217420 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x217420) {
            ctx->pc = 0x217458u;
            goto label_217458;
        }
    }
    ctx->pc = 0x217428u;
    // 0x217428: 0x92230001  lbu         $v1, 0x1($s1)
    ctx->pc = 0x217428u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x21742c: 0x90820001  lbu         $v0, 0x1($a0)
    ctx->pc = 0x21742cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 1)));
    // 0x217430: 0x14620009  bne         $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x217430u;
    {
        const bool branch_taken_0x217430 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x217430) {
            ctx->pc = 0x217458u;
            goto label_217458;
        }
    }
    ctx->pc = 0x217438u;
    // 0x217438: 0x92230002  lbu         $v1, 0x2($s1)
    ctx->pc = 0x217438u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x21743c: 0x90820002  lbu         $v0, 0x2($a0)
    ctx->pc = 0x21743cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x217440: 0x14620005  bne         $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x217440u;
    {
        const bool branch_taken_0x217440 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x217440) {
            ctx->pc = 0x217458u;
            goto label_217458;
        }
    }
    ctx->pc = 0x217448u;
    // 0x217448: 0x90830003  lbu         $v1, 0x3($a0)
    ctx->pc = 0x217448u;
    SET_GPR_ZE32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 3)));
    // 0x21744c: 0x92220003  lbu         $v0, 0x3($s1)
    ctx->pc = 0x21744cu;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x217450: 0x431026  xor         $v0, $v0, $v1
    ctx->pc = 0x217450u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 3));
    // 0x217454: 0x2c450001  sltiu       $a1, $v0, 0x1
    ctx->pc = 0x217454u;
    SET_GPR_U64(ctx, 5, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)1) ? 1 : 0);
label_217458:
    // 0x217458: 0x14a00003  bnez        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x217458u;
    {
        const bool branch_taken_0x217458 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x21745Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x217458u;
        // 0x21745c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x217458) {
            ctx->pc = 0x217468u;
            goto label_217468;
        }
    }
    ctx->pc = 0x217460u;
    // 0x217460: 0xae11027c  sw          $s1, 0x27C($s0)
    ctx->pc = 0x217460u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 636), GPR_U32(ctx, 17));
    // 0x217464: 0xae110284  sw          $s1, 0x284($s0)
    ctx->pc = 0x217464u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 644), GPR_U32(ctx, 17));
label_217468:
    // 0x217468: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x217468u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x21746c: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x21746cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217470: 0x4600a306  mov.s       $f12, $f20
    ctx->pc = 0x217470u;
    ctx->f[12] = FPU_MOV_S(ctx->f[20]);
    // 0x217474: 0x220382d  daddu       $a3, $s1, $zero
    ctx->pc = 0x217474u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x217478: 0xc0855ee  jal         func_2157B8
    ctx->pc = 0x217478u;
    SET_GPR_U32(ctx, 31, 0x217480u);
    ctx->pc = 0x21747Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x217478u;
    // 0x21747c: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2157B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2157B8u, 0x217478u, 0x217480u)) {
        return;
    }
    ctx->pc = 0x217480u;
label_217480:
    // 0x217480: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x217480u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x217484: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x217484u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x217488: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x217488u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x21748c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x21748cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x217490: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x217490u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x217494: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x217494u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x217498: 0xc7b40060  lwc1        $f20, 0x60($sp)
    ctx->pc = 0x217498u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 96)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x21749c: 0x3e00008  jr          $ra
    ctx->pc = 0x21749Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2174A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x21749Cu;
        // 0x2174a0: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x21749Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2174A4u;
    // 0x2174a4: 0x0  nop
    ctx->pc = 0x2174a4u;
    // NOP
    ctx->pc = 0x2174a8u;
}
