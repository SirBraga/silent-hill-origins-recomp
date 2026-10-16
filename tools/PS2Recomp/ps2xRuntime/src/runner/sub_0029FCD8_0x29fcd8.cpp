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

// Function: sub_0029FCD8
// Address: 0x29fcd8 - 0x29fd98
void sub_0029FCD8_0x29fcd8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029FCD8_0x29fcd8");
#endif

    ctx->pc = 0x29fcd8u;

    // 0x29fcd8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x29fcd8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x29fcdc: 0x30620007  andi        $v0, $v1, 0x7
    ctx->pc = 0x29fcdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x29fce0: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x29FCE0u;
    {
        const bool branch_taken_0x29fce0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29FCE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FCE0u;
        // 0x29fce4: 0x30620001  andi        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29fce0) {
            ctx->pc = 0x29FD1Cu;
            goto label_29fd1c;
        }
    }
    ctx->pc = 0x29FCE8u;
    // 0x29fce8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x29FCE8u;
    {
        const bool branch_taken_0x29fce8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29FCECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FCE8u;
        // 0x29fcec: 0x30620002  andi        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29fce8) {
            ctx->pc = 0x29FCF8u;
            goto label_29fcf8;
        }
    }
    ctx->pc = 0x29FCF0u;
    // 0x29fcf0: 0x3e00008  jr          $ra
    ctx->pc = 0x29FCF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29FCF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FCF0u;
        // 0x29fcf4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29FCF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29FCF8u;
label_29fcf8:
    // 0x29fcf8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x29FCF8u;
    {
        const bool branch_taken_0x29fcf8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29fcf8) {
            ctx->pc = 0x29FCFCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29FCF8u;
            // 0x29fcfc: 0x31882  srl         $v1, $v1, 2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29FD10u;
            goto label_29fd10;
        }
    }
    ctx->pc = 0x29FD00u;
    // 0x29fd00: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x29fd00u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x29fd04: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x29fd04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x29fd08: 0x3e00008  jr          $ra
    ctx->pc = 0x29FD08u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29FD0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FD08u;
        // 0x29fd0c: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29FD08u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29FD10u;
label_29fd10:
    // 0x29fd10: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x29fd10u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x29fd14: 0x3e00008  jr          $ra
    ctx->pc = 0x29FD14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29FD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FD14u;
        // 0x29fd18: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29FD14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29FD1Cu;
label_29fd1c:
    // 0x29fd1c: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x29fd1cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x29fd20: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x29FD20u;
    {
        const bool branch_taken_0x29fd20 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29FD24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FD20u;
        // 0x29fd24: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29fd20) {
            ctx->pc = 0x29FD30u;
            goto label_29fd30;
        }
    }
    ctx->pc = 0x29FD28u;
    // 0x29fd28: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x29fd28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x29fd2c: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x29fd2cu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
label_29fd30:
    // 0x29fd30: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x29fd30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x29fd34: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29FD34u;
    {
        const bool branch_taken_0x29fd34 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29FD38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FD34u;
        // 0x29fd38: 0x3062000f  andi        $v0, $v1, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29fd34) {
            ctx->pc = 0x29FD48u;
            goto label_29fd48;
        }
    }
    ctx->pc = 0x29FD3Cu;
    // 0x29fd3c: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x29fd3cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x29fd40: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x29fd40u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x29fd44: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x29fd44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
label_29fd48:
    // 0x29fd48: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29FD48u;
    {
        const bool branch_taken_0x29fd48 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29FD4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FD48u;
        // 0x29fd4c: 0x30620003  andi        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29fd48) {
            ctx->pc = 0x29FD5Cu;
            goto label_29fd5c;
        }
    }
    ctx->pc = 0x29FD50u;
    // 0x29fd50: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x29fd50u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x29fd54: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x29fd54u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x29fd58: 0x30620003  andi        $v0, $v1, 0x3
    ctx->pc = 0x29fd58u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
label_29fd5c:
    // 0x29fd5c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x29FD5Cu;
    {
        const bool branch_taken_0x29fd5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x29FD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FD5Cu;
        // 0x29fd60: 0x30620001  andi        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x29fd5c) {
            ctx->pc = 0x29FD70u;
            goto label_29fd70;
        }
    }
    ctx->pc = 0x29FD64u;
    // 0x29fd64: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x29fd64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x29fd68: 0x31882  srl         $v1, $v1, 2
    ctx->pc = 0x29fd68u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
    // 0x29fd6c: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x29fd6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_29fd70:
    // 0x29fd70: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x29FD70u;
    {
        const bool branch_taken_0x29fd70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x29fd70) {
            ctx->pc = 0x29FD74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x29FD70u;
            // 0x29fd74: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x29FD90u;
            goto label_29fd90;
        }
    }
    ctx->pc = 0x29FD78u;
    // 0x29fd78: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x29fd78u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x29fd7c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x29FD7Cu;
    {
        const bool branch_taken_0x29fd7c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x29FD80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FD7Cu;
        // 0x29fd80: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29fd7c) {
            ctx->pc = 0x29FD8Cu;
            goto label_29fd8c;
        }
    }
    ctx->pc = 0x29FD84u;
    // 0x29fd84: 0x3e00008  jr          $ra
    ctx->pc = 0x29FD84u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29FD88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FD84u;
        // 0x29fd88: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29FD84u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29FD8Cu;
label_29fd8c:
    // 0x29fd8c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x29fd8cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_29fd90:
    // 0x29fd90: 0x3e00008  jr          $ra
    ctx->pc = 0x29FD90u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29FD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x29FD90u;
        // 0x29fd94: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x29FD90u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x29FD98u;
}
