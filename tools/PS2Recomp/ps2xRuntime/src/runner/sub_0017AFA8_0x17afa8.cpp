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

// Function: sub_0017AFA8
// Address: 0x17afa8 - 0x17b050
void sub_0017AFA8_0x17afa8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017AFA8_0x17afa8");
#endif

    switch (ctx->pc) {
        case 0x17afd0u: goto label_17afd0;
        case 0x17b034u: goto label_17b034;
        default: break;
    }

    ctx->pc = 0x17afa8u;

    // 0x17afa8: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x17afa8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x17afac: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x17afacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x17afb0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17afb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17afb4: 0x24426f30  addiu       $v0, $v0, 0x6F30
    ctx->pc = 0x17afb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 28464));
    // 0x17afb8: 0xac82000c  sw          $v0, 0xC($a0)
    ctx->pc = 0x17afb8u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 2));
    // 0x17afbc: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x17afbcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x17afc0: 0x10600018  beqz        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x17AFC0u;
    {
        const bool branch_taken_0x17afc0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x17AFC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AFC0u;
        // 0x17afc4: 0x30a20001  andi        $v0, $a1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17afc0) {
            ctx->pc = 0x17B024u;
            goto label_17b024;
        }
    }
    ctx->pc = 0x17AFC8u;
    // 0x17afc8: 0x8c830004  lw          $v1, 0x4($a0)
    ctx->pc = 0x17afc8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x17afcc: 0x0  nop
    ctx->pc = 0x17afccu;
    // NOP
label_17afd0:
    // 0x17afd0: 0x50600011  beql        $v1, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x17AFD0u;
    {
        const bool branch_taken_0x17afd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x17afd0) {
            ctx->pc = 0x17AFD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17AFD0u;
            // 0x17afd4: 0x8c820004  lw          $v0, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17B018u;
            goto label_17b018;
        }
    }
    ctx->pc = 0x17AFD8u;
    // 0x17afd8: 0x8c660004  lw          $a2, 0x4($v1)
    ctx->pc = 0x17afd8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x17afdc: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x17AFDCu;
    {
        const bool branch_taken_0x17afdc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x17AFE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AFDCu;
        // 0x17afe0: 0x8c620000  lw          $v0, 0x0($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17afdc) {
            ctx->pc = 0x17AFECu;
            goto label_17afec;
        }
    }
    ctx->pc = 0x17AFE4u;
    // 0x17afe4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x17AFE4u;
    {
        const bool branch_taken_0x17afe4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17AFE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AFE4u;
        // 0x17afe8: 0xac820004  sw          $v0, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17afe4) {
            ctx->pc = 0x17AFF0u;
            goto label_17aff0;
        }
    }
    ctx->pc = 0x17AFECu;
label_17afec:
    // 0x17afec: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x17afecu;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
label_17aff0:
    // 0x17aff0: 0x8c660000  lw          $a2, 0x0($v1)
    ctx->pc = 0x17aff0u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x17aff4: 0x14c00003  bnez        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x17AFF4u;
    {
        const bool branch_taken_0x17aff4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x17AFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AFF4u;
        // 0x17aff8: 0x8c620004  lw          $v0, 0x4($v1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17aff4) {
            ctx->pc = 0x17B004u;
            goto label_17b004;
        }
    }
    ctx->pc = 0x17AFFCu;
    // 0x17affc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x17AFFCu;
    {
        const bool branch_taken_0x17affc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17AFFCu;
        // 0x17b000: 0xac820008  sw          $v0, 0x8($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17affc) {
            ctx->pc = 0x17B008u;
            goto label_17b008;
        }
    }
    ctx->pc = 0x17B004u;
label_17b004:
    // 0x17b004: 0xacc20004  sw          $v0, 0x4($a2)
    ctx->pc = 0x17b004u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 2));
label_17b008:
    // 0x17b008: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x17b008u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x17b00c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x17b00cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x17b010: 0xac820000  sw          $v0, 0x0($a0)
    ctx->pc = 0x17b010u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
    // 0x17b014: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x17b014u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
label_17b018:
    // 0x17b018: 0x5440ffed  bnel        $v0, $zero, . + 4 + (-0x13 << 2)
    ctx->pc = 0x17B018u;
    {
        const bool branch_taken_0x17b018 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x17b018) {
            ctx->pc = 0x17B01Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x17B018u;
            // 0x17b01c: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x17AFD0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_17afd0;
        }
    }
    ctx->pc = 0x17B020u;
    // 0x17b020: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x17b020u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
label_17b024:
    // 0x17b024: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x17B024u;
    {
        const bool branch_taken_0x17b024 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x17B028u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B024u;
        // 0x17b028: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x17b024) {
            ctx->pc = 0x17B038u;
            goto label_17b038;
        }
    }
    ctx->pc = 0x17B02Cu;
    // 0x17b02c: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x17B02Cu;
    SET_GPR_U32(ctx, 31, 0x17B034u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x17B02Cu, 0x17B034u)) {
        return;
    }
    ctx->pc = 0x17B034u;
label_17b034:
    // 0x17b034: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17b034u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_17b038:
    // 0x17b038: 0x3e00008  jr          $ra
    ctx->pc = 0x17B038u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17B03Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17B038u;
        // 0x17b03c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17B038u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17B040u;
    // 0x17b040: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x17b040u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x17b044: 0x0  nop
    ctx->pc = 0x17b044u;
    // NOP
    // 0x17b048: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x17b048u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x17b04c: 0x0  nop
    ctx->pc = 0x17b04cu;
    // NOP
    ctx->pc = 0x17b050u;
}
