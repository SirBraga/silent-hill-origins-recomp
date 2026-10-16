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

// Function: sub_0016A6C8
// Address: 0x16a6c8 - 0x16a778
void sub_0016A6C8_0x16a6c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0016A6C8_0x16a6c8");
#endif

    switch (ctx->pc) {
        case 0x16a710u: goto label_16a710;
        case 0x16a728u: goto label_16a728;
        case 0x16a730u: goto label_16a730;
        case 0x16a740u: goto label_16a740;
        case 0x16a74cu: goto label_16a74c;
        case 0x16a758u: goto label_16a758;
        default: break;
    }

    ctx->pc = 0x16a6c8u;

    // 0x16a6c8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x16a6c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x16a6cc: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x16a6ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x16a6d0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x16a6d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x16a6d4: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x16a6d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x16a6d8: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x16a6d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x16a6dc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x16a6dcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a6e0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x16a6e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x16a6e4: 0x244245f8  addiu       $v0, $v0, 0x45F8
    ctx->pc = 0x16a6e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 17912));
    // 0x16a6e8: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x16a6e8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x16a6ec: 0x246345b0  addiu       $v1, $v1, 0x45B0
    ctx->pc = 0x16a6ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 17840));
    // 0x16a6f0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x16a6f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x16a6f4: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x16a6f4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a6f8: 0xae42003c  sw          $v0, 0x3C($s2)
    ctx->pc = 0x16a6f8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 60), GPR_U32(ctx, 2));
    // 0x16a6fc: 0x8e440054  lw          $a0, 0x54($s2)
    ctx->pc = 0x16a6fcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 84)));
    // 0x16a700: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x16A700u;
    {
        const bool branch_taken_0x16a700 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x16A704u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A700u;
        // 0x16a704: 0xae430034  sw          $v1, 0x34($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x16a700) {
            ctx->pc = 0x16A714u;
            goto label_16a714;
        }
    }
    ctx->pc = 0x16A708u;
    // 0x16a708: 0xc07bcb6  jal         func_1EF2D8
    ctx->pc = 0x16A708u;
    SET_GPR_U32(ctx, 31, 0x16A710u);
    ctx->pc = 0x16A70Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A708u;
    // 0x16a70c: 0x24050003  addiu       $a1, $zero, 0x3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EF2D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1EF2D8u, 0x16A708u, 0x16A710u)) {
        return;
    }
    ctx->pc = 0x16A710u;
label_16a710:
    // 0x16a710: 0xae400054  sw          $zero, 0x54($s2)
    ctx->pc = 0x16a710u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 84), GPR_U32(ctx, 0));
label_16a714:
    // 0x16a714: 0x26500044  addiu       $s0, $s2, 0x44
    ctx->pc = 0x16a714u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 68));
    // 0x16a718: 0x26510038  addiu       $s1, $s2, 0x38
    ctx->pc = 0x16a718u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 18), 56));
    // 0x16a71c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x16a71cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a720: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x16A720u;
    SET_GPR_U32(ctx, 31, 0x16A728u);
    ctx->pc = 0x16A724u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A720u;
    // 0x16a724: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x16A720u, 0x16A728u)) {
        return;
    }
    ctx->pc = 0x16A728u;
label_16a728:
    // 0x16a728: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x16A728u;
    SET_GPR_U32(ctx, 31, 0x16A730u);
    ctx->pc = 0x16A72Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A728u;
    // 0x16a72c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x16A728u, 0x16A730u)) {
        return;
    }
    ctx->pc = 0x16A730u;
label_16a730:
    // 0x16a730: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x16a730u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x16a734: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x16a734u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a738: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x16A738u;
    SET_GPR_U32(ctx, 31, 0x16A740u);
    ctx->pc = 0x16A73Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A738u;
    // 0x16a73c: 0x24a58880  addiu       $a1, $a1, -0x7780 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936704));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x16A738u, 0x16A740u)) {
        return;
    }
    ctx->pc = 0x16A740u;
label_16a740:
    // 0x16a740: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x16a740u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a744: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x16A744u;
    SET_GPR_U32(ctx, 31, 0x16A74Cu);
    ctx->pc = 0x16A748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A744u;
    // 0x16a748: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x16A744u, 0x16A74Cu)) {
        return;
    }
    ctx->pc = 0x16A74Cu;
label_16a74c:
    // 0x16a74c: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x16a74cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x16a750: 0xc04f084  jal         func_13C210
    ctx->pc = 0x16A750u;
    SET_GPR_U32(ctx, 31, 0x16A758u);
    ctx->pc = 0x16A754u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x16A750u;
    // 0x16a754: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C210u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C210u, 0x16A750u, 0x16A758u)) {
        return;
    }
    ctx->pc = 0x16A758u;
label_16a758:
    // 0x16a758: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x16a758u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x16a75c: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x16a75cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x16a760: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x16a760u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x16a764: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x16a764u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x16a768: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x16a768u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x16a76c: 0x3e00008  jr          $ra
    ctx->pc = 0x16A76Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x16A770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x16A76Cu;
        // 0x16a770: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x16A76Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x16A774u;
    // 0x16a774: 0x0  nop
    ctx->pc = 0x16a774u;
    // NOP
    ctx->pc = 0x16a778u;
}
