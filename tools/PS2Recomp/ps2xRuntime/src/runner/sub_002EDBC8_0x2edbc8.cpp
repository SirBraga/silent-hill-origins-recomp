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

// Function: sub_002EDBC8
// Address: 0x2edbc8 - 0x2edc28
void sub_002EDBC8_0x2edbc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002EDBC8_0x2edbc8");
#endif

    switch (ctx->pc) {
        case 0x2edbf4u: goto label_2edbf4;
        case 0x2edc04u: goto label_2edc04;
        case 0x2edc14u: goto label_2edc14;
        default: break;
    }

    ctx->pc = 0x2edbc8u;

    // 0x2edbc8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2edbc8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x2edbcc: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x2edbccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x2edbd0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2edbd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2edbd4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2edbd4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2edbd8: 0x92020029  lbu         $v0, 0x29($s0)
    ctx->pc = 0x2edbd8u;
    SET_GPR_ZE32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 41)));
    // 0x2edbdc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x2edbdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x2edbe0: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x2EDBE0u;
    {
        const bool branch_taken_0x2edbe0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EDBE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDBE0u;
        // 0x2edbe4: 0x3c05006b  lui         $a1, 0x6B (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)107 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2edbe0) {
            ctx->pc = 0x2EDC0Cu;
            goto label_2edc0c;
        }
    }
    ctx->pc = 0x2EDBE8u;
    // 0x2edbe8: 0x8e040014  lw          $a0, 0x14($s0)
    ctx->pc = 0x2edbe8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x2edbec: 0xc0b7d14  jal         func_2DF450
    ctx->pc = 0x2EDBECu;
    SET_GPR_U32(ctx, 31, 0x2EDBF4u);
    ctx->pc = 0x2EDBF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDBECu;
    // 0x2edbf0: 0x24a5f0f0  addiu       $a1, $a1, -0xF10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294963440));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF450u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DF450u, 0x2EDBECu, 0x2EDBF4u)) {
        return;
    }
    ctx->pc = 0x2EDBF4u;
label_2edbf4:
    // 0x2edbf4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2EDBF4u;
    {
        const bool branch_taken_0x2edbf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2edbf4) {
            ctx->pc = 0x2EDC0Cu;
            goto label_2edc0c;
        }
    }
    ctx->pc = 0x2EDBFCu;
    // 0x2edbfc: 0xc0b7080  jal         func_2DC200
    ctx->pc = 0x2EDBFCu;
    SET_GPR_U32(ctx, 31, 0x2EDC04u);
    ctx->pc = 0x2EDC00u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDBFCu;
    // 0x2edc00: 0x8e04004c  lw          $a0, 0x4C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC200u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2DC200u, 0x2EDBFCu, 0x2EDC04u)) {
        return;
    }
    ctx->pc = 0x2EDC04u;
label_2edc04:
    // 0x2edc04: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2EDC04u;
    {
        const bool branch_taken_0x2edc04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2EDC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDC04u;
        // 0x2edc08: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2edc04) {
            ctx->pc = 0x2EDC18u;
            goto label_2edc18;
        }
    }
    ctx->pc = 0x2EDC0Cu;
label_2edc0c:
    // 0x2edc0c: 0xc0bb66c  jal         func_2ED9B0
    ctx->pc = 0x2EDC0Cu;
    SET_GPR_U32(ctx, 31, 0x2EDC14u);
    ctx->pc = 0x2EDC10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2EDC0Cu;
    // 0x2edc10: 0x8e04004c  lw          $a0, 0x4C($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2ED9B0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2ED9B0u, 0x2EDC0Cu, 0x2EDC14u)) {
        return;
    }
    ctx->pc = 0x2EDC14u;
label_2edc14:
    // 0x2edc14: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x2edc14u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_2edc18:
    // 0x2edc18: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x2edc18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2edc1c: 0x3e00008  jr          $ra
    ctx->pc = 0x2EDC1Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2EDC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2EDC1Cu;
        // 0x2edc20: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2EDC1Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2EDC24u;
    // 0x2edc24: 0x0  nop
    ctx->pc = 0x2edc24u;
    // NOP
    ctx->pc = 0x2edc28u;
}
