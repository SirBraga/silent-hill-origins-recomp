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

// Function: sub_00191080
// Address: 0x191080 - 0x191148
void sub_00191080_0x191080(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00191080_0x191080");
#endif

    switch (ctx->pc) {
        case 0x1910a4u: goto label_1910a4;
        case 0x1910b8u: goto label_1910b8;
        case 0x1910ccu: goto label_1910cc;
        case 0x1910e0u: goto label_1910e0;
        case 0x1910f8u: goto label_1910f8;
        case 0x191108u: goto label_191108;
        case 0x19111cu: goto label_19111c;
        default: break;
    }

    ctx->pc = 0x191080u;

    // 0x191080: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x191080u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x191084: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x191084u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x191088: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x191088u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x19108c: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x19108cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191090: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x191090u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x191094: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x191094u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x191098: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x191098u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19109c: 0xc07d234  jal         func_1F48D0
    ctx->pc = 0x19109Cu;
    SET_GPR_U32(ctx, 31, 0x1910A4u);
    ctx->pc = 0x1910A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x19109Cu;
    // 0x1910a0: 0x80982d  daddu       $s3, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F48D0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F48D0u, 0x19109Cu, 0x1910A4u)) {
        return;
    }
    ctx->pc = 0x1910A4u;
label_1910a4:
    // 0x1910a4: 0x3c030034  lui         $v1, 0x34
    ctx->pc = 0x1910a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)52 << 16));
    // 0x1910a8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1910a8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1910ac: 0x8c658ae4  lw          $a1, -0x751C($v1)
    ctx->pc = 0x1910acu;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x338AE4u));
    // 0x1910b0: 0xc07d3d6  jal         func_1F4F58
    ctx->pc = 0x1910B0u;
    SET_GPR_U32(ctx, 31, 0x1910B8u);
    ctx->pc = 0x1910B4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1910B0u;
    // 0x1910b4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4F58u, 0x1910B0u, 0x1910B8u)) {
        return;
    }
    ctx->pc = 0x1910B8u;
label_1910b8:
    // 0x1910b8: 0x1040001b  beqz        $v0, . + 4 + (0x1B << 2)
    ctx->pc = 0x1910B8u;
    {
        const bool branch_taken_0x1910b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1910BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1910B8u;
        // 0x1910bc: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1910b8) {
            ctx->pc = 0x191128u;
            goto label_191128;
        }
    }
    ctx->pc = 0x1910C0u;
    // 0x1910c0: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1910c0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1910c4: 0xc07d3d6  jal         func_1F4F58
    ctx->pc = 0x1910C4u;
    SET_GPR_U32(ctx, 31, 0x1910CCu);
    ctx->pc = 0x1910C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1910C4u;
    // 0x1910c8: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4F58u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4F58u, 0x1910C4u, 0x1910CCu)) {
        return;
    }
    ctx->pc = 0x1910CCu;
label_1910cc:
    // 0x1910cc: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1910ccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1910d0: 0x12200015  beqz        $s1, . + 4 + (0x15 << 2)
    ctx->pc = 0x1910D0u;
    {
        const bool branch_taken_0x1910d0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x1910D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1910D0u;
        // 0x1910d4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1910d0) {
            ctx->pc = 0x191128u;
            goto label_191128;
        }
    }
    ctx->pc = 0x1910D8u;
    // 0x1910d8: 0xc07d2ca  jal         func_1F4B28
    ctx->pc = 0x1910D8u;
    SET_GPR_U32(ctx, 31, 0x1910E0u);
    ctx->pc = 0x1910DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1910D8u;
    // 0x1910dc: 0x2670009c  addiu       $s0, $s3, 0x9C (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 19), 156));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4B28u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4B28u, 0x1910D8u, 0x1910E0u)) {
        return;
    }
    ctx->pc = 0x1910E0u;
label_1910e0:
    // 0x1910e0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x1910e0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1910e4: 0x8e66009c  lw          $a2, 0x9C($s3)
    ctx->pc = 0x1910e4u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 156)));
    // 0x1910e8: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x1910e8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x1910ec: 0x24a59480  addiu       $a1, $a1, -0x6B80
    ctx->pc = 0x1910ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294939776));
    // 0x1910f0: 0xc07d2f8  jal         func_1F4BE0
    ctx->pc = 0x1910F0u;
    SET_GPR_U32(ctx, 31, 0x1910F8u);
    ctx->pc = 0x1910F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1910F0u;
    // 0x1910f4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4BE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4BE0u, 0x1910F0u, 0x1910F8u)) {
        return;
    }
    ctx->pc = 0x1910F8u;
label_1910f8:
    // 0x1910f8: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x1910f8u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x1910fc: 0x5200000b  beql        $s0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x1910FCu;
    {
        const bool branch_taken_0x1910fc = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x1910fc) {
            ctx->pc = 0x191100u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1910FCu;
            // 0x191100: 0x7bb00040  lq          $s0, 0x40($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x19112Cu;
            goto label_19112c;
        }
    }
    ctx->pc = 0x191104u;
    // 0x191104: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x191104u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_191108:
    // 0x191108: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x191108u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19110c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x19110cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x191110: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x191110u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x191114: 0xc07d334  jal         func_1F4CD0
    ctx->pc = 0x191114u;
    SET_GPR_U32(ctx, 31, 0x19111Cu);
    ctx->pc = 0x191118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x191114u;
    // 0x191118: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4CD0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F4CD0u, 0x191114u, 0x19111Cu)) {
        return;
    }
    ctx->pc = 0x19111Cu;
label_19111c:
    // 0x19111c: 0x8e100004  lw          $s0, 0x4($s0)
    ctx->pc = 0x19111cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x191120: 0x5600fff9  bnel        $s0, $zero, . + 4 + (-0x7 << 2)
    ctx->pc = 0x191120u;
    {
        const bool branch_taken_0x191120 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x191120) {
            ctx->pc = 0x191124u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x191120u;
            // 0x191124: 0x8e020000  lw          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x191108u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_191108;
        }
    }
    ctx->pc = 0x191128u;
label_191128:
    // 0x191128: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x191128u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
label_19112c:
    // 0x19112c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x19112cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x191130: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x191130u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x191134: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x191134u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x191138: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x191138u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19113c: 0x3e00008  jr          $ra
    ctx->pc = 0x19113Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x191140u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x19113Cu;
        // 0x191140: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x19113Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x191144u;
    // 0x191144: 0x0  nop
    ctx->pc = 0x191144u;
    // NOP
    ctx->pc = 0x191148u;
}
