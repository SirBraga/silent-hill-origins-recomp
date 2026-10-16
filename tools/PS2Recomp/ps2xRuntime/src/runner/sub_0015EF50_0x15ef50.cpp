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

// Function: sub_0015EF50
// Address: 0x15ef50 - 0x15f030
void sub_0015EF50_0x15ef50(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0015EF50_0x15ef50");
#endif

    switch (ctx->pc) {
        case 0x15efa4u: goto label_15efa4;
        case 0x15efb4u: goto label_15efb4;
        case 0x15efbcu: goto label_15efbc;
        case 0x15efc8u: goto label_15efc8;
        case 0x15efd0u: goto label_15efd0;
        case 0x15efd8u: goto label_15efd8;
        case 0x15efe0u: goto label_15efe0;
        case 0x15efecu: goto label_15efec;
        case 0x15eff8u: goto label_15eff8;
        case 0x15f004u: goto label_15f004;
        case 0x15f010u: goto label_15f010;
        default: break;
    }

    ctx->pc = 0x15ef50u;

    // 0x15ef50: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x15ef50u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x15ef54: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x15ef54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x15ef58: 0x7fb10040  sq          $s1, 0x40($sp)
    ctx->pc = 0x15ef58u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 17));
    // 0x15ef5c: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x15ef5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x15ef60: 0x7fb40010  sq          $s4, 0x10($sp)
    ctx->pc = 0x15ef60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 20));
    // 0x15ef64: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x15ef64u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ef68: 0x7fb20030  sq          $s2, 0x30($sp)
    ctx->pc = 0x15ef68u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 18));
    // 0x15ef6c: 0xa0a02d  daddu       $s4, $a1, $zero
    ctx->pc = 0x15ef6cu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ef70: 0x7fb00050  sq          $s0, 0x50($sp)
    ctx->pc = 0x15ef70u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 16));
    // 0x15ef74: 0x24423400  addiu       $v0, $v0, 0x3400
    ctx->pc = 0x15ef74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 13312));
    // 0x15ef78: 0x7fb30020  sq          $s3, 0x20($sp)
    ctx->pc = 0x15ef78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 19));
    // 0x15ef7c: 0x24633420  addiu       $v1, $v1, 0x3420
    ctx->pc = 0x15ef7cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 13344));
    // 0x15ef80: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x15ef80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15ef84: 0x26320038  addiu       $s2, $s1, 0x38
    ctx->pc = 0x15ef84u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    // 0x15ef88: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x15ef88u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
    // 0x15ef8c: 0xae22003c  sw          $v0, 0x3C($s1)
    ctx->pc = 0x15ef8cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 2));
    // 0x15ef90: 0xae230034  sw          $v1, 0x34($s1)
    ctx->pc = 0x15ef90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 3));
    // 0x15ef94: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x15ef94u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15ef98: 0x24a58880  addiu       $a1, $a1, -0x7780
    ctx->pc = 0x15ef98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936704));
    // 0x15ef9c: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x15EF9Cu;
    SET_GPR_U32(ctx, 31, 0x15EFA4u);
    ctx->pc = 0x15EFA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15EF9Cu;
    // 0x15efa0: 0x26330090  addiu       $s3, $s1, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 17), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x15EF9Cu, 0x15EFA4u)) {
        return;
    }
    ctx->pc = 0x15EFA4u;
label_15efa4:
    // 0x15efa4: 0x26300098  addiu       $s0, $s1, 0x98
    ctx->pc = 0x15efa4u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 152));
    // 0x15efa8: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x15efa8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15efac: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x15EFACu;
    SET_GPR_U32(ctx, 31, 0x15EFB4u);
    ctx->pc = 0x15EFB0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15EFACu;
    // 0x15efb0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x15EFACu, 0x15EFB4u)) {
        return;
    }
    ctx->pc = 0x15EFB4u;
label_15efb4:
    // 0x15efb4: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x15EFB4u;
    SET_GPR_U32(ctx, 31, 0x15EFBCu);
    ctx->pc = 0x15EFB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15EFB4u;
    // 0x15efb8: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x15EFB4u, 0x15EFBCu)) {
        return;
    }
    ctx->pc = 0x15EFBCu;
label_15efbc:
    // 0x15efbc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x15efbcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15efc0: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x15EFC0u;
    SET_GPR_U32(ctx, 31, 0x15EFC8u);
    ctx->pc = 0x15EFC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15EFC0u;
    // 0x15efc4: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x15EFC0u, 0x15EFC8u)) {
        return;
    }
    ctx->pc = 0x15EFC8u;
label_15efc8:
    // 0x15efc8: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x15EFC8u;
    SET_GPR_U32(ctx, 31, 0x15EFD0u);
    ctx->pc = 0x15EFCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15EFC8u;
    // 0x15efcc: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x15EFC8u, 0x15EFD0u)) {
        return;
    }
    ctx->pc = 0x15EFD0u;
label_15efd0:
    // 0x15efd0: 0xc079246  jal         func_1E4918
    ctx->pc = 0x15EFD0u;
    SET_GPR_U32(ctx, 31, 0x15EFD8u);
    ctx->pc = 0x15EFD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15EFD0u;
    // 0x15efd4: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E4918u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E4918u, 0x15EFD0u, 0x15EFD8u)) {
        return;
    }
    ctx->pc = 0x15EFD8u;
label_15efd8:
    // 0x15efd8: 0xc07922e  jal         func_1E48B8
    ctx->pc = 0x15EFD8u;
    SET_GPR_U32(ctx, 31, 0x15EFE0u);
    ctx->pc = 0x15EFDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15EFD8u;
    // 0x15efdc: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E48B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E48B8u, 0x15EFD8u, 0x15EFE0u)) {
        return;
    }
    ctx->pc = 0x15EFE0u;
label_15efe0:
    // 0x15efe0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x15efe0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15efe4: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x15EFE4u;
    SET_GPR_U32(ctx, 31, 0x15EFECu);
    ctx->pc = 0x15EFE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15EFE4u;
    // 0x15efe8: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x15EFE4u, 0x15EFECu)) {
        return;
    }
    ctx->pc = 0x15EFECu;
label_15efec:
    // 0x15efec: 0x260202d  daddu       $a0, $s3, $zero
    ctx->pc = 0x15efecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15eff0: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x15EFF0u;
    SET_GPR_U32(ctx, 31, 0x15EFF8u);
    ctx->pc = 0x15EFF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15EFF0u;
    // 0x15eff4: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x15EFF0u, 0x15EFF8u)) {
        return;
    }
    ctx->pc = 0x15EFF8u;
label_15eff8:
    // 0x15eff8: 0x26240044  addiu       $a0, $s1, 0x44
    ctx->pc = 0x15eff8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 68));
    // 0x15effc: 0xc07924c  jal         func_1E4930
    ctx->pc = 0x15EFFCu;
    SET_GPR_U32(ctx, 31, 0x15F004u);
    ctx->pc = 0x15F000u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15EFFCu;
    // 0x15f000: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E4930u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1E4930u, 0x15EFFCu, 0x15F004u)) {
        return;
    }
    ctx->pc = 0x15F004u;
label_15f004:
    // 0x15f004: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x15f004u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15f008: 0xc04f084  jal         func_13C210
    ctx->pc = 0x15F008u;
    SET_GPR_U32(ctx, 31, 0x15F010u);
    ctx->pc = 0x15F00Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15F008u;
    // 0x15f00c: 0x280282d  daddu       $a1, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C210u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C210u, 0x15F008u, 0x15F010u)) {
        return;
    }
    ctx->pc = 0x15F010u;
label_15f010:
    // 0x15f010: 0x7bb00050  lq          $s0, 0x50($sp)
    ctx->pc = 0x15f010u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x15f014: 0x7bb10040  lq          $s1, 0x40($sp)
    ctx->pc = 0x15f014u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x15f018: 0x7bb20030  lq          $s2, 0x30($sp)
    ctx->pc = 0x15f018u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x15f01c: 0x7bb30020  lq          $s3, 0x20($sp)
    ctx->pc = 0x15f01cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x15f020: 0x7bb40010  lq          $s4, 0x10($sp)
    ctx->pc = 0x15f020u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x15f024: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x15f024u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15f028: 0x3e00008  jr          $ra
    ctx->pc = 0x15F028u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15F02Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15F028u;
        // 0x15f02c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15F028u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x15F030u;
}
