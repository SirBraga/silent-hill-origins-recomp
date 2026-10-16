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

// Function: sub_001F7CF8
// Address: 0x1f7cf8 - 0x1f7d90
void sub_001F7CF8_0x1f7cf8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F7CF8_0x1f7cf8");
#endif

    switch (ctx->pc) {
        case 0x1f7d10u: goto label_1f7d10;
        case 0x1f7d28u: goto label_1f7d28;
        default: break;
    }

    ctx->pc = 0x1f7cf8u;

    // 0x1f7cf8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x1f7cf8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x1f7cfc: 0xffa40020  sd          $a0, 0x20($sp)
    ctx->pc = 0x1f7cfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 4));
    // 0x1f7d00: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x1f7d00u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7d04: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x1f7d04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x1f7d08: 0xc07dcca  jal         func_1F7328
    ctx->pc = 0x1F7D08u;
    SET_GPR_U32(ctx, 31, 0x1F7D10u);
    ctx->pc = 0x1F7D0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7D08u;
    // 0x1f7d0c: 0x27a40020  addiu       $a0, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7328u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1F7328u, 0x1F7D08u, 0x1F7D10u)) {
        return;
    }
    ctx->pc = 0x1F7D10u;
label_1f7d10:
    // 0x1f7d10: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1f7d10u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f7d14: 0x38620002  xori        $v0, $v1, 0x2
    ctx->pc = 0x1f7d14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)2);
    // 0x1f7d18: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F7D18u;
    {
        const bool branch_taken_0x1f7d18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7D18u;
        // 0x1f7d1c: 0x2c620002  sltiu       $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7d18) {
            ctx->pc = 0x1F7D28u;
            goto label_1f7d28;
        }
    }
    ctx->pc = 0x1F7D20u;
    // 0x1f7d20: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F7D20u;
    {
        const bool branch_taken_0x1f7d20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7D20u;
        // 0x1f7d24: 0x38620004  xori        $v0, $v1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7d20) {
            ctx->pc = 0x1F7D30u;
            goto label_1f7d30;
        }
    }
    ctx->pc = 0x1F7D28u;
label_1f7d28:
    // 0x1f7d28: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x1F7D28u;
    {
        const bool branch_taken_0x1f7d28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7D2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7D28u;
        // 0x1f7d2c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7d28) {
            ctx->pc = 0x1F7D80u;
            goto label_1f7d80;
        }
    }
    ctx->pc = 0x1F7D30u;
label_1f7d30:
    // 0x1f7d30: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F7D30u;
    {
        const bool branch_taken_0x1f7d30 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7D34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7D30u;
        // 0x1f7d34: 0x8fa40008  lw          $a0, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7d30) {
            ctx->pc = 0x1F7D48u;
            goto label_1f7d48;
        }
    }
    ctx->pc = 0x1F7D38u;
    // 0x1f7d38: 0x480fffb  bltz        $a0, . + 4 + (-0x5 << 2)
    ctx->pc = 0x1F7D38u;
    {
        const bool branch_taken_0x1f7d38 = (GPR_S64(ctx, 4) < 0);
        ctx->pc = 0x1F7D3Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7D38u;
        // 0x1f7d3c: 0x2882001f  slti        $v0, $a0, 0x1F (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)31) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7d38) {
            ctx->pc = 0x1F7D28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1f7d28;
        }
    }
    ctx->pc = 0x1F7D40u;
    // 0x1f7d40: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F7D40u;
    {
        const bool branch_taken_0x1f7d40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F7D44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7D40u;
        // 0x1f7d44: 0x2403003c  addiu       $v1, $zero, 0x3C (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 60));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7d40) {
            ctx->pc = 0x1F7D60u;
            goto label_1f7d60;
        }
    }
    ctx->pc = 0x1F7D48u;
label_1f7d48:
    // 0x1f7d48: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x1f7d48u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1f7d4c: 0x3c027fff  lui         $v0, 0x7FFF
    ctx->pc = 0x1f7d4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
    // 0x1f7d50: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x1f7d50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x1f7d54: 0x3c048000  lui         $a0, 0x8000
    ctx->pc = 0x1f7d54u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)32768 << 16));
    // 0x1f7d58: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1F7D58u;
    {
        const bool branch_taken_0x1f7d58 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F7D5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7D58u;
        // 0x1f7d5c: 0x83100b  movn        $v0, $a0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7d58) {
            ctx->pc = 0x1F7D80u;
            goto label_1f7d80;
        }
    }
    ctx->pc = 0x1F7D60u;
label_1f7d60:
    // 0x1f7d60: 0xdfa20010  ld          $v0, 0x10($sp)
    ctx->pc = 0x1f7d60u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f7d64: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1f7d64u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1f7d68: 0x621016  dsrlv       $v0, $v0, $v1
    ctx->pc = 0x1f7d68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (GPR_U32(ctx, 3) & 0x3F));
    // 0x1f7d6c: 0x8fa40004  lw          $a0, 0x4($sp)
    ctx->pc = 0x1f7d6cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1f7d70: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x1f7d70u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x1f7d74: 0x2103f  dsra32      $v0, $v0, 0
    ctx->pc = 0x1f7d74u;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 0));
    // 0x1f7d78: 0x21823  negu        $v1, $v0
    ctx->pc = 0x1f7d78u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x1f7d7c: 0x64100b  movn        $v0, $v1, $a0
    ctx->pc = 0x1f7d7cu;
    if (GPR_U64(ctx, 4) != 0) SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3));
label_1f7d80:
    // 0x1f7d80: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x1f7d80u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f7d84: 0x3e00008  jr          $ra
    ctx->pc = 0x1F7D84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F7D88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7D84u;
        // 0x1f7d88: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F7D84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F7D8Cu;
    // 0x1f7d8c: 0x0  nop
    ctx->pc = 0x1f7d8cu;
    // NOP
    ctx->pc = 0x1f7d90u;
}
