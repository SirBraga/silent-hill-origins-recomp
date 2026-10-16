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

// Function: sub_0014AFA8
// Address: 0x14afa8 - 0x14b028
void sub_0014AFA8_0x14afa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014AFA8_0x14afa8");
#endif

    switch (ctx->pc) {
        case 0x14afa8u: goto label_14afa8;
        case 0x14afacu: goto label_14afac;
        case 0x14afb0u: goto label_14afb0;
        case 0x14afb4u: goto label_14afb4;
        case 0x14afb8u: goto label_14afb8;
        case 0x14afbcu: goto label_14afbc;
        case 0x14afc0u: goto label_14afc0;
        case 0x14afc4u: goto label_14afc4;
        case 0x14afc8u: goto label_14afc8;
        case 0x14afccu: goto label_14afcc;
        case 0x14afd0u: goto label_14afd0;
        case 0x14afd4u: goto label_14afd4;
        case 0x14afd8u: goto label_14afd8;
        case 0x14afdcu: goto label_14afdc;
        case 0x14afe0u: goto label_14afe0;
        case 0x14afe4u: goto label_14afe4;
        case 0x14afe8u: goto label_14afe8;
        case 0x14afecu: goto label_14afec;
        case 0x14aff0u: goto label_14aff0;
        case 0x14aff4u: goto label_14aff4;
        case 0x14aff8u: goto label_14aff8;
        case 0x14affcu: goto label_14affc;
        case 0x14b000u: goto label_14b000;
        case 0x14b004u: goto label_14b004;
        case 0x14b008u: goto label_14b008;
        case 0x14b00cu: goto label_14b00c;
        case 0x14b010u: goto label_14b010;
        case 0x14b014u: goto label_14b014;
        case 0x14b018u: goto label_14b018;
        case 0x14b01cu: goto label_14b01c;
        case 0x14b020u: goto label_14b020;
        case 0x14b024u: goto label_14b024;
        default: break;
    }

    ctx->pc = 0x14afa8u;

label_14afa8:
    // 0x14afa8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x14afa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_14afac:
    // 0x14afac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x14afacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14afb0:
    // 0x14afb0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x14afb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
label_14afb4:
    // 0x14afb4: 0x3c050070  lui         $a1, 0x70
    ctx->pc = 0x14afb4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)112 << 16));
label_14afb8:
    // 0x14afb8: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x14afb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
label_14afbc:
    // 0x14afbc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x14afbcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_14afc0:
    // 0x14afc0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x14afc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_14afc4:
    // 0x14afc4: 0x24a58900  addiu       $a1, $a1, -0x7700
    ctx->pc = 0x14afc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936832));
label_14afc8:
    // 0x14afc8: 0xae220068  sw          $v0, 0x68($s1)
    ctx->pc = 0x14afc8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 104), GPR_U32(ctx, 2));
label_14afcc:
    // 0x14afcc: 0x26240038  addiu       $a0, $s1, 0x38
    ctx->pc = 0x14afccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
label_14afd0:
    // 0x14afd0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x14afd0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_14afd4:
    // 0x14afd4: 0xc07fc98  jal         func_1FF260
label_14afd8:
    if (ctx->pc == 0x14AFD8u) {
        ctx->pc = 0x14AFD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AFD4u;
        // 0x14afd8: 0x3407ffff  ori         $a3, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        ctx->pc = 0x14AFDCu;
        goto label_14afdc;
    }
    ctx->pc = 0x14AFD4u;
    SET_GPR_U32(ctx, 31, 0x14AFDCu);
    ctx->pc = 0x14AFD8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14AFD4u;
    // 0x14afd8: 0x3407ffff  ori         $a3, $zero, 0xFFFF (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FF260u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FF260u, 0x14AFD4u, 0x14AFDCu)) {
        return;
    }
    ctx->pc = 0x14AFDCu;
label_14afdc:
    // 0x14afdc: 0xc07600c  jal         func_1D8030
label_14afe0:
    if (ctx->pc == 0x14AFE0u) {
        ctx->pc = 0x14AFE4u;
        goto label_14afe4;
    }
    ctx->pc = 0x14AFDCu;
    SET_GPR_U32(ctx, 31, 0x14AFE4u);
    ctx->pc = 0x1D8030u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1D8030u, 0x14AFDCu, 0x14AFE4u)) {
        return;
    }
    ctx->pc = 0x14AFE4u;
label_14afe4:
    // 0x14afe4: 0x8c500014  lw          $s0, 0x14($v0)
    ctx->pc = 0x14afe4u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 20)));
label_14afe8:
    // 0x14afe8: 0x5200000b  beql        $s0, $zero, . + 4 + (0xB << 2)
label_14afec:
    if (ctx->pc == 0x14AFECu) {
        ctx->pc = 0x14AFECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14AFE8u;
        // 0x14afec: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14AFF0u;
        goto label_14aff0;
    }
    ctx->pc = 0x14AFE8u;
    {
        const bool branch_taken_0x14afe8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x14afe8) {
            ctx->pc = 0x14AFECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14AFE8u;
            // 0x14afec: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x14B018u;
            goto label_14b018;
        }
    }
    ctx->pc = 0x14AFF0u;
label_14aff0:
    // 0x14aff0: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x14aff0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_14aff4:
    // 0x14aff4: 0x8e050040  lw          $a1, 0x40($s0)
    ctx->pc = 0x14aff4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 64)));
label_14aff8:
    // 0x14aff8: 0x84440038  lh          $a0, 0x38($v0)
    ctx->pc = 0x14aff8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 56)));
label_14affc:
    // 0x14affc: 0x8c43003c  lw          $v1, 0x3C($v0)
    ctx->pc = 0x14affcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 60)));
label_14b000:
    // 0x14b000: 0x24a50010  addiu       $a1, $a1, 0x10
    ctx->pc = 0x14b000u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 16));
label_14b004:
    // 0x14b004: 0x60f809  jalr        $v1
label_14b008:
    if (ctx->pc == 0x14B008u) {
        ctx->pc = 0x14B008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B004u;
        // 0x14b008: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14B00Cu;
        goto label_14b00c;
    }
    ctx->pc = 0x14B004u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x14B00Cu);
        ctx->pc = 0x14B008u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B004u;
        // 0x14b008: 0x2242021  addu        $a0, $s1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14B004u, 0x14B00Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x14B00Cu;
label_14b00c:
    // 0x14b00c: 0xc07f210  jal         func_1FC840
label_14b010:
    if (ctx->pc == 0x14B010u) {
        ctx->pc = 0x14B010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B00Cu;
        // 0x14b010: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14B014u;
        goto label_14b014;
    }
    ctx->pc = 0x14B00Cu;
    SET_GPR_U32(ctx, 31, 0x14B014u);
    ctx->pc = 0x14B010u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x14B00Cu;
    // 0x14b010: 0x26040004  addiu       $a0, $s0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FC840u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FC840u, 0x14B00Cu, 0x14B014u)) {
        return;
    }
    ctx->pc = 0x14B014u;
label_14b014:
    // 0x14b014: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x14b014u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_14b018:
    // 0x14b018: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x14b018u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_14b01c:
    // 0x14b01c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x14b01cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_14b020:
    // 0x14b020: 0x3e00008  jr          $ra
label_14b024:
    if (ctx->pc == 0x14B024u) {
        ctx->pc = 0x14B024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B020u;
        // 0x14b024: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x14B028u;
        goto label_fallthrough_0x14b020;
    }
    ctx->pc = 0x14B020u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14B024u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14B020u;
        // 0x14b024: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14B020u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
label_fallthrough_0x14b020:
    ctx->pc = 0x14B028u;
}
