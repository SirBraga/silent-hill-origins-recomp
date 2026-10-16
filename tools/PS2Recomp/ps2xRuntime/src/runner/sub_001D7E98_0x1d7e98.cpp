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

// Function: sub_001D7E98
// Address: 0x1d7e98 - 0x1d7f70
void sub_001D7E98_0x1d7e98(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D7E98_0x1d7e98");
#endif

    switch (ctx->pc) {
        case 0x1d7ebcu: goto label_1d7ebc;
        case 0x1d7ec8u: goto label_1d7ec8;
        case 0x1d7ed4u: goto label_1d7ed4;
        case 0x1d7ee0u: goto label_1d7ee0;
        case 0x1d7eecu: goto label_1d7eec;
        case 0x1d7ef8u: goto label_1d7ef8;
        case 0x1d7f0cu: goto label_1d7f0c;
        case 0x1d7f1cu: goto label_1d7f1c;
        case 0x1d7f2cu: goto label_1d7f2c;
        case 0x1d7f3cu: goto label_1d7f3c;
        case 0x1d7f4cu: goto label_1d7f4c;
        case 0x1d7f5cu: goto label_1d7f5c;
        default: break;
    }

    ctx->pc = 0x1d7e98u;

    // 0x1d7e98: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1d7e98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1d7e9c: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x1d7e9cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x1d7ea0: 0x14a2002e  bne         $a1, $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x1D7EA0u;
    {
        const bool branch_taken_0x1d7ea0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D7EA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7EA0u;
        // 0x1d7ea4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7ea0) {
            ctx->pc = 0x1D7F5Cu;
            goto label_1d7f5c;
        }
    }
    ctx->pc = 0x1D7EA8u;
    // 0x1d7ea8: 0x50800015  beql        $a0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x1D7EA8u;
    {
        const bool branch_taken_0x1d7ea8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d7ea8) {
            ctx->pc = 0x1D7EACu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D7EA8u;
            // 0x1d7eac: 0x3c040070  lui         $a0, 0x70 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D7F00u;
            goto label_1d7f00;
        }
    }
    ctx->pc = 0x1D7EB0u;
    // 0x1d7eb0: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1d7eb0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1d7eb4: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x1D7EB4u;
    SET_GPR_U32(ctx, 31, 0x1D7EBCu);
    ctx->pc = 0x1D7EB8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7EB4u;
    // 0x1d7eb8: 0x248488f0  addiu       $a0, $a0, -0x7710 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x1D7EB4u, 0x1D7EBCu)) {
        return;
    }
    ctx->pc = 0x1D7EBCu;
label_1d7ebc:
    // 0x1d7ebc: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1d7ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1d7ec0: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x1D7EC0u;
    SET_GPR_U32(ctx, 31, 0x1D7EC8u);
    ctx->pc = 0x1D7EC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7EC0u;
    // 0x1d7ec4: 0x248488f8  addiu       $a0, $a0, -0x7708 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936824));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x1D7EC0u, 0x1D7EC8u)) {
        return;
    }
    ctx->pc = 0x1D7EC8u;
label_1d7ec8:
    // 0x1d7ec8: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1d7ec8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1d7ecc: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x1D7ECCu;
    SET_GPR_U32(ctx, 31, 0x1D7ED4u);
    ctx->pc = 0x1D7ED0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7ECCu;
    // 0x1d7ed0: 0x24848900  addiu       $a0, $a0, -0x7700 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936832));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x1D7ECCu, 0x1D7ED4u)) {
        return;
    }
    ctx->pc = 0x1D7ED4u;
label_1d7ed4:
    // 0x1d7ed4: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1d7ed4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1d7ed8: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x1D7ED8u;
    SET_GPR_U32(ctx, 31, 0x1D7EE0u);
    ctx->pc = 0x1D7EDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7ED8u;
    // 0x1d7edc: 0x24848908  addiu       $a0, $a0, -0x76F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x1D7ED8u, 0x1D7EE0u)) {
        return;
    }
    ctx->pc = 0x1D7EE0u;
label_1d7ee0:
    // 0x1d7ee0: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1d7ee0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1d7ee4: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x1D7EE4u;
    SET_GPR_U32(ctx, 31, 0x1D7EECu);
    ctx->pc = 0x1D7EE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7EE4u;
    // 0x1d7ee8: 0x24848910  addiu       $a0, $a0, -0x76F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x1D7EE4u, 0x1D7EECu)) {
        return;
    }
    ctx->pc = 0x1D7EECu;
label_1d7eec:
    // 0x1d7eec: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1d7eecu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1d7ef0: 0xc07fbe6  jal         func_1FEF98
    ctx->pc = 0x1D7EF0u;
    SET_GPR_U32(ctx, 31, 0x1D7EF8u);
    ctx->pc = 0x1D7EF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7EF0u;
    // 0x1d7ef4: 0x24848918  addiu       $a0, $a0, -0x76E8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936856));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEF98u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEF98u, 0x1D7EF0u, 0x1D7EF8u)) {
        return;
    }
    ctx->pc = 0x1D7EF8u;
label_1d7ef8:
    // 0x1d7ef8: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x1D7EF8u;
    {
        const bool branch_taken_0x1d7ef8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D7EFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7EF8u;
        // 0x1d7efc: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d7ef8) {
            ctx->pc = 0x1D7F60u;
            goto label_1d7f60;
        }
    }
    ctx->pc = 0x1D7F00u;
label_1d7f00:
    // 0x1d7f00: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1d7f00u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d7f04: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x1D7F04u;
    SET_GPR_U32(ctx, 31, 0x1D7F0Cu);
    ctx->pc = 0x1D7F08u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7F04u;
    // 0x1d7f08: 0x24848918  addiu       $a0, $a0, -0x76E8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936856));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x1D7F04u, 0x1D7F0Cu)) {
        return;
    }
    ctx->pc = 0x1D7F0Cu;
label_1d7f0c:
    // 0x1d7f0c: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1d7f0cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1d7f10: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1d7f10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d7f14: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x1D7F14u;
    SET_GPR_U32(ctx, 31, 0x1D7F1Cu);
    ctx->pc = 0x1D7F18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7F14u;
    // 0x1d7f18: 0x24848910  addiu       $a0, $a0, -0x76F0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936848));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x1D7F14u, 0x1D7F1Cu)) {
        return;
    }
    ctx->pc = 0x1D7F1Cu;
label_1d7f1c:
    // 0x1d7f1c: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1d7f1cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1d7f20: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1d7f20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d7f24: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x1D7F24u;
    SET_GPR_U32(ctx, 31, 0x1D7F2Cu);
    ctx->pc = 0x1D7F28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7F24u;
    // 0x1d7f28: 0x24848908  addiu       $a0, $a0, -0x76F8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936840));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x1D7F24u, 0x1D7F2Cu)) {
        return;
    }
    ctx->pc = 0x1D7F2Cu;
label_1d7f2c:
    // 0x1d7f2c: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1d7f2cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1d7f30: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1d7f30u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d7f34: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x1D7F34u;
    SET_GPR_U32(ctx, 31, 0x1D7F3Cu);
    ctx->pc = 0x1D7F38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7F34u;
    // 0x1d7f38: 0x24848900  addiu       $a0, $a0, -0x7700 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936832));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x1D7F34u, 0x1D7F3Cu)) {
        return;
    }
    ctx->pc = 0x1D7F3Cu;
label_1d7f3c:
    // 0x1d7f3c: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1d7f3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1d7f40: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1d7f40u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d7f44: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x1D7F44u;
    SET_GPR_U32(ctx, 31, 0x1D7F4Cu);
    ctx->pc = 0x1D7F48u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7F44u;
    // 0x1d7f48: 0x248488f8  addiu       $a0, $a0, -0x7708 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936824));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x1D7F44u, 0x1D7F4Cu)) {
        return;
    }
    ctx->pc = 0x1D7F4Cu;
label_1d7f4c:
    // 0x1d7f4c: 0x3c040070  lui         $a0, 0x70
    ctx->pc = 0x1d7f4cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)112 << 16));
    // 0x1d7f50: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x1d7f50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1d7f54: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x1D7F54u;
    SET_GPR_U32(ctx, 31, 0x1D7F5Cu);
    ctx->pc = 0x1D7F58u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D7F54u;
    // 0x1d7f58: 0x248488f0  addiu       $a0, $a0, -0x7710 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x1D7F54u, 0x1D7F5Cu)) {
        return;
    }
    ctx->pc = 0x1D7F5Cu;
label_1d7f5c:
    // 0x1d7f5c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1d7f5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1d7f60:
    // 0x1d7f60: 0x3e00008  jr          $ra
    ctx->pc = 0x1D7F60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D7F64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D7F60u;
        // 0x1d7f64: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D7F60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D7F68u;
    // 0x1d7f68: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1d7f68u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1d7f6c: 0x0  nop
    ctx->pc = 0x1d7f6cu;
    // NOP
    ctx->pc = 0x1d7f70u;
}
