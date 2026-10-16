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

// Function: sub_002F2AD8
// Address: 0x2f2ad8 - 0x2f2b68
void sub_002F2AD8_0x2f2ad8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F2AD8_0x2f2ad8");
#endif

    switch (ctx->pc) {
        case 0x2f2b08u: goto label_2f2b08;
        case 0x2f2b20u: goto label_2f2b20;
        default: break;
    }

    ctx->pc = 0x2f2ad8u;

    // 0x2f2ad8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2f2ad8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2f2adc: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2f2adcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2f2ae0: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x2f2ae0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x2f2ae4: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2f2ae4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2f2ae8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x2f2ae8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x2f2aec: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2f2aecu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2af0: 0x14a20003  bne         $a1, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F2AF0u;
    {
        const bool branch_taken_0x2f2af0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 2));
        ctx->pc = 0x2F2AF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2AF0u;
        // 0x2f2af4: 0xffb00010  sd          $s0, 0x10($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2af0) {
            ctx->pc = 0x2F2B00u;
            goto label_2f2b00;
        }
    }
    ctx->pc = 0x2F2AF8u;
    // 0x2f2af8: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x2F2AF8u;
    {
        const bool branch_taken_0x2f2af8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2AFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2AF8u;
        // 0x2f2afc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2af8) {
            ctx->pc = 0x2F2B54u;
            goto label_2f2b54;
        }
    }
    ctx->pc = 0x2F2B00u;
label_2f2b00:
    // 0x2f2b00: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x2F2B00u;
    {
        const bool branch_taken_0x2f2b00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2B04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2B00u;
        // 0x2f2b04: 0x24100001  addiu       $s0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2b00) {
            ctx->pc = 0x2F2B14u;
            goto label_2f2b14;
        }
    }
    ctx->pc = 0x2F2B08u;
label_2f2b08:
    // 0x2f2b08: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x2f2b08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x2f2b0c: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2f2b0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2f2b10: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x2f2b10u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
label_2f2b14:
    // 0x2f2b14: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f2b14u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f2b18: 0xc0bc95c  jal         func_2F2570
    ctx->pc = 0x2F2B18u;
    SET_GPR_U32(ctx, 31, 0x2F2B20u);
    ctx->pc = 0x2F2B1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F2B18u;
    // 0x2f2b1c: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F2570u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2F2570u, 0x2F2B18u, 0x2F2B20u)) {
        return;
    }
    ctx->pc = 0x2F2B20u;
label_2f2b20:
    // 0x2f2b20: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x2f2b20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f2b24: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x2F2B24u;
    {
        const bool branch_taken_0x2f2b24 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2B28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2B24u;
        // 0x2f2b28: 0x40282d  daddu       $a1, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2b24) {
            ctx->pc = 0x2F2B34u;
            goto label_2f2b34;
        }
    }
    ctx->pc = 0x2F2B2Cu;
    // 0x2f2b2c: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x2F2B2Cu;
    {
        const bool branch_taken_0x2f2b2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2F2B30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2B2Cu;
        // 0x2f2b30: 0x60102d  daddu       $v0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2b2c) {
            ctx->pc = 0x2F2B54u;
            goto label_2f2b54;
        }
    }
    ctx->pc = 0x2F2B34u;
label_2f2b34:
    // 0x2f2b34: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x2f2b34u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x2f2b38: 0x3442ffff  ori         $v0, $v0, 0xFFFF
    ctx->pc = 0x2f2b38u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x2f2b3c: 0x10a20005  beq         $a1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2F2B3Cu;
    {
        const bool branch_taken_0x2f2b3c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 2));
        ctx->pc = 0x2F2B40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2B3Cu;
        // 0x2f2b40: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2b3c) {
            ctx->pc = 0x2F2B54u;
            goto label_2f2b54;
        }
    }
    ctx->pc = 0x2F2B44u;
    // 0x2f2b44: 0x4a0fff0  bltz        $a1, . + 4 + (-0x10 << 2)
    ctx->pc = 0x2F2B44u;
    {
        const bool branch_taken_0x2f2b44 = (GPR_S64(ctx, 5) < 0);
        ctx->pc = 0x2F2B48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2B44u;
        // 0x2f2b48: 0x3c027fff  lui         $v0, 0x7FFF (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)32767 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f2b44) {
            ctx->pc = 0x2F2B08u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_2f2b08;
        }
    }
    ctx->pc = 0x2F2B4Cu;
    // 0x2f2b4c: 0x3c028101  lui         $v0, 0x8101
    ctx->pc = 0x2f2b4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)33025 << 16));
    // 0x2f2b50: 0x34429002  ori         $v0, $v0, 0x9002
    ctx->pc = 0x2f2b50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36866);
label_2f2b54:
    // 0x2f2b54: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x2f2b54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f2b58: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x2f2b58u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f2b5c: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2f2b5cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f2b60: 0x3e00008  jr          $ra
    ctx->pc = 0x2F2B60u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F2B64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F2B60u;
        // 0x2f2b64: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F2B60u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F2B68u;
}
