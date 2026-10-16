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

// Function: sub_001CEBC0
// Address: 0x1cebc0 - 0x1cec70
void sub_001CEBC0_0x1cebc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001CEBC0_0x1cebc0");
#endif

    switch (ctx->pc) {
        case 0x1cebd4u: goto label_1cebd4;
        case 0x1cebe8u: goto label_1cebe8;
        case 0x1cebf0u: goto label_1cebf0;
        case 0x1cec48u: goto label_1cec48;
        default: break;
    }

    ctx->pc = 0x1cebc0u;

    // 0x1cebc0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1cebc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1cebc4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1cebc4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1cebc8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1cebc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1cebcc: 0xc06bbe0  jal         func_1AEF80
    ctx->pc = 0x1CEBCCu;
    SET_GPR_U32(ctx, 31, 0x1CEBD4u);
    ctx->pc = 0x1CEBD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1CEBCCu;
    // 0x1cebd0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1AEF80u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1AEF80u, 0x1CEBCCu, 0x1CEBD4u)) {
        return;
    }
    ctx->pc = 0x1CEBD4u;
label_1cebd4:
    // 0x1cebd4: 0x8e040260  lw          $a0, 0x260($s0)
    ctx->pc = 0x1cebd4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 608)));
    // 0x1cebd8: 0x10800004  beqz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1CEBD8u;
    {
        const bool branch_taken_0x1cebd8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1CEBDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEBD8u;
        // 0x1cebdc: 0x24050004  addiu       $a1, $zero, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cebd8) {
            ctx->pc = 0x1CEBECu;
            goto label_1cebec;
        }
    }
    ctx->pc = 0x1CEBE0u;
    // 0x1cebe0: 0xc06db7c  jal         func_1B6DF0
    ctx->pc = 0x1CEBE0u;
    SET_GPR_U32(ctx, 31, 0x1CEBE8u);
    ctx->pc = 0x1B6DF0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1B6DF0u, 0x1CEBE0u, 0x1CEBE8u)) {
        return;
    }
    ctx->pc = 0x1CEBE8u;
label_1cebe8:
    // 0x1cebe8: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x1cebe8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_1cebec:
    // 0x1cebec: 0x2606026c  addiu       $a2, $s0, 0x26C
    ctx->pc = 0x1cebecu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 620));
label_1cebf0:
    // 0x1cebf0: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x1cebf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x1cebf4: 0x51880  sll         $v1, $a1, 2
    ctx->pc = 0x1cebf4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x1cebf8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x1cebf8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x1cebfc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1cebfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1cec00: 0x28a40008  slti        $a0, $a1, 0x8
    ctx->pc = 0x1cec00u;
    SET_GPR_U64(ctx, 4, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x1cec04: 0x1480fffa  bnez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x1CEC04u;
    {
        const bool branch_taken_0x1cec04 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1CEC08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEC04u;
        // 0x1cec08: 0xac4001d0  sw          $zero, 0x1D0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 464), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cec04) {
            ctx->pc = 0x1CEBF0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cebf0;
        }
    }
    ctx->pc = 0x1CEC0Cu;
    // 0x1cec0c: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x1cec0cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x1cec10: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x1cec10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1cec14: 0x24c50010  addiu       $a1, $a2, 0x10
    ctx->pc = 0x1cec14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 16));
    // 0x1cec18: 0x24070005  addiu       $a3, $zero, 0x5
    ctx->pc = 0x1cec18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1cec1c: 0xac4000f4  sw          $zero, 0xF4($v0)
    ctx->pc = 0x1cec1cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 244), GPR_U32(ctx, 0));
    // 0x1cec20: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x1cec20u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1cec24: 0x8e020044  lw          $v0, 0x44($s0)
    ctx->pc = 0x1cec24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x1cec28: 0xac40002c  sw          $zero, 0x2C($v0)
    ctx->pc = 0x1cec28u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 44), GPR_U32(ctx, 0));
    // 0x1cec2c: 0x8e030044  lw          $v1, 0x44($s0)
    ctx->pc = 0x1cec2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 68)));
    // 0x1cec30: 0xac6001d0  sw          $zero, 0x1D0($v1)
    ctx->pc = 0x1cec30u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 464), GPR_U32(ctx, 0));
    // 0x1cec34: 0xae040284  sw          $a0, 0x284($s0)
    ctx->pc = 0x1cec34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 644), GPR_U32(ctx, 4));
    // 0x1cec38: 0xae000288  sw          $zero, 0x288($s0)
    ctx->pc = 0x1cec38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 648), GPR_U32(ctx, 0));
    // 0x1cec3c: 0xae000268  sw          $zero, 0x268($s0)
    ctx->pc = 0x1cec3cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 616), GPR_U32(ctx, 0));
    // 0x1cec40: 0xae000280  sw          $zero, 0x280($s0)
    ctx->pc = 0x1cec40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 640), GPR_U32(ctx, 0));
    // 0x1cec44: 0x0  nop
    ctx->pc = 0x1cec44u;
    // NOP
label_1cec48:
    // 0x1cec48: 0xaca70000  sw          $a3, 0x0($a1)
    ctx->pc = 0x1cec48u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 7));
    // 0x1cec4c: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1cec4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1cec50: 0x0  nop
    ctx->pc = 0x1cec50u;
    // NOP
    // 0x1cec54: 0x0  nop
    ctx->pc = 0x1cec54u;
    // NOP
    // 0x1cec58: 0x4c1fffb  bgez        $a2, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1CEC58u;
    {
        const bool branch_taken_0x1cec58 = (GPR_S64(ctx, 6) >= 0);
        ctx->pc = 0x1CEC5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEC58u;
        // 0x1cec5c: 0x24a5fffc  addiu       $a1, $a1, -0x4 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967292));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1cec58) {
            ctx->pc = 0x1CEC48u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1cec48;
        }
    }
    ctx->pc = 0x1CEC60u;
    // 0x1cec60: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1cec60u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1cec64: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1cec64u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1cec68: 0x3e00008  jr          $ra
    ctx->pc = 0x1CEC68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1CEC6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1CEC68u;
        // 0x1cec6c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1CEC68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1CEC70u;
}
