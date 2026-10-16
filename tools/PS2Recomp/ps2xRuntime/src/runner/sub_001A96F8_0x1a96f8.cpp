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

// Function: sub_001A96F8
// Address: 0x1a96f8 - 0x1a97d8
void sub_001A96F8_0x1a96f8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A96F8_0x1a96f8");
#endif

    switch (ctx->pc) {
        case 0x1a974cu: goto label_1a974c;
        case 0x1a9770u: goto label_1a9770;
        case 0x1a9790u: goto label_1a9790;
        default: break;
    }

    ctx->pc = 0x1a96f8u;

    // 0x1a96f8: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x1a96f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x1a96fc: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x1a96fcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1a9700: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x1a9700u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x1a9704: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x1a9704u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x1a9708: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x1a9708u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x1a970c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1a970cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9710: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x1a9710u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x1a9714: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x1a9714u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x1a9718: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a9718u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a971c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x1a971cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9720: 0x8e820000  lw          $v0, 0x0($s4)
    ctx->pc = 0x1a9720u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 0)));
    // 0x1a9724: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x1a9724u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x1a9728: 0x29402  srl         $s2, $v0, 16
    ctx->pc = 0x1a9728u;
    SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 2), 16));
    // 0x1a972c: 0x12030005  beq         $s0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x1A972Cu;
    {
        const bool branch_taken_0x1a972c = (GPR_U64(ctx, 16) == GPR_U64(ctx, 3));
        ctx->pc = 0x1A9730u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A972Cu;
        // 0x1a9730: 0x200982d  daddu       $s3, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a972c) {
            ctx->pc = 0x1A9744u;
            goto label_1a9744;
        }
    }
    ctx->pc = 0x1A9734u;
    // 0x1a9734: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x1a9734u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x1a9738: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1a9738u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x1a973c: 0x16420012  bne         $s2, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1A973Cu;
    {
        const bool branch_taken_0x1a973c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 2));
        ctx->pc = 0x1A9740u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A973Cu;
        // 0x1a9740: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a973c) {
            ctx->pc = 0x1A9788u;
            goto label_1a9788;
        }
    }
    ctx->pc = 0x1A9744u;
label_1a9744:
    // 0x1a9744: 0xc06a630  jal         func_1A98C0
    ctx->pc = 0x1A9744u;
    SET_GPR_U32(ctx, 31, 0x1A974Cu);
    ctx->pc = 0x1A9748u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9744u;
    // 0x1a9748: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A98C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A98C0u, 0x1A9744u, 0x1A974Cu)) {
        return;
    }
    ctx->pc = 0x1A974Cu;
label_1a974c:
    // 0x1a974c: 0x3c03ffff  lui         $v1, 0xFFFF
    ctx->pc = 0x1a974cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)65535 << 16));
    // 0x1a9750: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1a9750u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9754: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1a9754u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1a9758: 0x16030003  bne         $s0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A9758u;
    {
        const bool branch_taken_0x1a9758 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 3));
        ctx->pc = 0x1A975Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9758u;
        // 0x1a975c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9758) {
            ctx->pc = 0x1A9768u;
            goto label_1a9768;
        }
    }
    ctx->pc = 0x1A9760u;
    // 0x1a9760: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1A9760u;
    {
        const bool branch_taken_0x1a9760 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9764u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9760u;
        // 0x1a9764: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9760) {
            ctx->pc = 0x1A97B8u;
            goto label_1a97b8;
        }
    }
    ctx->pc = 0x1A9768u;
label_1a9768:
    // 0x1a9768: 0xc06a62a  jal         func_1A98A8
    ctx->pc = 0x1A9768u;
    SET_GPR_U32(ctx, 31, 0x1A9770u);
    ctx->pc = 0x1A976Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9768u;
    // 0x1a976c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A98A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A98A8u, 0x1A9768u, 0x1A9770u)) {
        return;
    }
    ctx->pc = 0x1A9770u;
label_1a9770:
    // 0x1a9770: 0x131c00  sll         $v1, $s3, 16
    ctx->pc = 0x1a9770u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 16));
    // 0x1a9774: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x1a9774u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a9778: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x1a9778u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x1a977c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1a977cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1a9780: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x1A9780u;
    {
        const bool branch_taken_0x1a9780 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A9784u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A9780u;
        // 0x1a9784: 0x24420004  addiu       $v0, $v0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a9780) {
            ctx->pc = 0x1A97ACu;
            goto label_1a97ac;
        }
    }
    ctx->pc = 0x1A9788u;
label_1a9788:
    // 0x1a9788: 0xc06a62a  jal         func_1A98A8
    ctx->pc = 0x1A9788u;
    SET_GPR_U32(ctx, 31, 0x1A9790u);
    ctx->pc = 0x1A978Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1A9788u;
    // 0x1a978c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A98A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1A98A8u, 0x1A9788u, 0x1A9790u)) {
        return;
    }
    ctx->pc = 0x1A9790u;
label_1a9790:
    // 0x1a9790: 0x8e230004  lw          $v1, 0x4($s1)
    ctx->pc = 0x1a9790u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 4)));
    // 0x1a9794: 0x26440001  addiu       $a0, $s2, 0x1
    ctx->pc = 0x1a9794u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x1a9798: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1a9798u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1a979c: 0x80282d  daddu       $a1, $a0, $zero
    ctx->pc = 0x1a979cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a97a0: 0x641818  mult        $v1, $v1, $a0
    ctx->pc = 0x1a97a0u;
    { int64_t result = (int64_t)GPR_S32(ctx, 3) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x1a97a4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x1a97a4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x1a97a8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1a97a8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1a97ac:
    // 0x1a97ac: 0x51c00  sll         $v1, $a1, 16
    ctx->pc = 0x1a97acu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 16));
    // 0x1a97b0: 0x701825  or          $v1, $v1, $s0
    ctx->pc = 0x1a97b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 16));
    // 0x1a97b4: 0xae830000  sw          $v1, 0x0($s4)
    ctx->pc = 0x1a97b4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 3));
label_1a97b8:
    // 0x1a97b8: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x1a97b8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1a97bc: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x1a97bcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1a97c0: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x1a97c0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1a97c4: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x1a97c4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1a97c8: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x1a97c8u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1a97cc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a97ccu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a97d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1A97D0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A97D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1A97D0u;
        // 0x1a97d4: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1A97D0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1A97D8u;
}
