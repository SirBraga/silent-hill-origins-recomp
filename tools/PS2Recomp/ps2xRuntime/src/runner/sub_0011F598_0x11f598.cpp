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

// Function: sub_0011F598
// Address: 0x11f598 - 0x11f658
void sub_0011F598_0x11f598(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011F598_0x11f598");
#endif

    switch (ctx->pc) {
        case 0x11f5b4u: goto label_11f5b4;
        case 0x11f5fcu: goto label_11f5fc;
        case 0x11f610u: goto label_11f610;
        case 0x11f634u: goto label_11f634;
        case 0x11f640u: goto label_11f640;
        default: break;
    }

    ctx->pc = 0x11f598u;

    // 0x11f598: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x11f598u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x11f59c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x11f59cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x11f5a0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x11f5a0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x11f5a4: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x11f5a4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f5a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11f5a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11f5ac: 0xc04a474  jal         func_1291D0
    ctx->pc = 0x11F5ACu;
    SET_GPR_U32(ctx, 31, 0x11F5B4u);
    ctx->pc = 0x11F5B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F5ACu;
    // 0x11f5b0: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1291D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1291D0u, 0x11F5ACu, 0x11F5B4u)) {
        return;
    }
    ctx->pc = 0x11F5B4u;
label_11f5b4:
    // 0x11f5b4: 0x3c030070  lui         $v1, 0x70
    ctx->pc = 0x11f5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)112 << 16));
    // 0x11f5b8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x11f5b8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x11f5bc: 0x8c628880  lw          $v0, -0x7780($v1)
    ctx->pc = 0x11f5bcu;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6F8880u));
    // 0x11f5c0: 0x14820020  bne         $a0, $v0, . + 4 + (0x20 << 2)
    ctx->pc = 0x11F5C0u;
    {
        const bool branch_taken_0x11f5c0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x11F5C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F5C0u;
        // 0x11f5c4: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f5c0) {
            ctx->pc = 0x11F644u;
            goto label_11f644;
        }
    }
    ctx->pc = 0x11F5C8u;
    // 0x11f5c8: 0x8e222da4  lw          $v0, 0x2DA4($s1)
    ctx->pc = 0x11f5c8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11684)));
    // 0x11f5cc: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x11F5CCu;
    {
        const bool branch_taken_0x11f5cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11F5D0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F5CCu;
        // 0x11f5d0: 0x26300040  addiu       $s0, $s1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 64));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f5cc) {
            ctx->pc = 0x11F640u;
            goto label_11f640;
        }
    }
    ctx->pc = 0x11F5D4u;
    // 0x11f5d4: 0x8e222da8  lw          $v0, 0x2DA8($s1)
    ctx->pc = 0x11f5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11688)));
    // 0x11f5d8: 0x2442fffe  addiu       $v0, $v0, -0x2
    ctx->pc = 0x11f5d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967294));
    // 0x11f5dc: 0x441000c  bgez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x11F5DCu;
    {
        const bool branch_taken_0x11f5dc = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x11F5E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F5DCu;
        // 0x11f5e0: 0xae222da8  sw          $v0, 0x2DA8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 11688), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11f5dc) {
            ctx->pc = 0x11F610u;
            goto label_11f610;
        }
    }
    ctx->pc = 0x11F5E4u;
    // 0x11f5e4: 0xae202da8  sw          $zero, 0x2DA8($s1)
    ctx->pc = 0x11f5e4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 11688), GPR_U32(ctx, 0));
    // 0x11f5e8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11f5e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f5ec: 0xae202da4  sw          $zero, 0x2DA4($s1)
    ctx->pc = 0x11f5ecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 11684), GPR_U32(ctx, 0));
    // 0x11f5f0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x11f5f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11f5f4: 0xc04eef0  jal         func_13BBC0
    ctx->pc = 0x11F5F4u;
    SET_GPR_U32(ctx, 31, 0x11F5FCu);
    ctx->pc = 0x11F5F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F5F4u;
    // 0x11f5f8: 0x8e0500c4  lw          $a1, 0xC4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13BBC0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13BBC0u, 0x11F5F4u, 0x11F5FCu)) {
        return;
    }
    ctx->pc = 0x11F5FCu;
label_11f5fc:
    // 0x11f5fc: 0x8e240eec  lw          $a0, 0xEEC($s1)
    ctx->pc = 0x11f5fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3820)));
    // 0x11f600: 0x5080000d  beql        $a0, $zero, . + 4 + (0xD << 2)
    ctx->pc = 0x11F600u;
    {
        const bool branch_taken_0x11f600 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x11f600) {
            ctx->pc = 0x11F604u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11F600u;
            // 0x11f604: 0x8e0400c4  lw          $a0, 0xC4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11F638u;
            goto label_11f638;
        }
    }
    ctx->pc = 0x11F608u;
    // 0x11f608: 0xc059cae  jal         func_1672B8
    ctx->pc = 0x11F608u;
    SET_GPR_U32(ctx, 31, 0x11F610u);
    ctx->pc = 0x11F60Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F608u;
    // 0x11f60c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1672B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1672B8u, 0x11F608u, 0x11F610u)) {
        return;
    }
    ctx->pc = 0x11F610u;
label_11f610:
    // 0x11f610: 0x8e240eec  lw          $a0, 0xEEC($s1)
    ctx->pc = 0x11f610u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 3820)));
    // 0x11f614: 0x50800008  beql        $a0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x11F614u;
    {
        const bool branch_taken_0x11f614 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x11f614) {
            ctx->pc = 0x11F618u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11F614u;
            // 0x11f618: 0x8e0400c4  lw          $a0, 0xC4($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x11F638u;
            goto label_11f638;
        }
    }
    ctx->pc = 0x11F61Cu;
    // 0x11f61c: 0xc6202da8  lwc1        $f0, 0x2DA8($s1)
    ctx->pc = 0x11f61cu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 17), 11688)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[0] = f; }
    // 0x11f620: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x11f620u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x11f624: 0x3c013b80  lui         $at, 0x3B80
    ctx->pc = 0x11f624u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)15232 << 16));
    // 0x11f628: 0x44816000  mtc1        $at, $f12
    ctx->pc = 0x11f628u;
    { uint32_t bits = GPR_U32(ctx, 1); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x11f62c: 0xc059cca  jal         func_167328
    ctx->pc = 0x11F62Cu;
    SET_GPR_U32(ctx, 31, 0x11F634u);
    ctx->pc = 0x11F630u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F62Cu;
    // 0x11f630: 0x460c0302  mul.s       $f12, $f0, $f12 (Delay Slot)
    ctx->f[12] = FPU_MUL_S(ctx->f[0], ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x167328u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x167328u, 0x11F62Cu, 0x11F634u)) {
        return;
    }
    ctx->pc = 0x11F634u;
label_11f634:
    // 0x11f634: 0x8e0400c4  lw          $a0, 0xC4($s0)
    ctx->pc = 0x11f634u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 196)));
label_11f638:
    // 0x11f638: 0xc077602  jal         func_1DD808
    ctx->pc = 0x11F638u;
    SET_GPR_U32(ctx, 31, 0x11F640u);
    ctx->pc = 0x11F63Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11F638u;
    // 0x11f63c: 0x8e252da8  lw          $a1, 0x2DA8($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 11688)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1DD808u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1DD808u, 0x11F638u, 0x11F640u)) {
        return;
    }
    ctx->pc = 0x11F640u;
label_11f640:
    // 0x11f640: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x11f640u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_11f644:
    // 0x11f644: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x11f644u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11f648: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11f648u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11f64c: 0x3e00008  jr          $ra
    ctx->pc = 0x11F64Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11F650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11F64Cu;
        // 0x11f650: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11F64Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11F654u;
    // 0x11f654: 0x0  nop
    ctx->pc = 0x11f654u;
    // NOP
    ctx->pc = 0x11f658u;
}
