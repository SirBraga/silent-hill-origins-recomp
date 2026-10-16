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

// Function: sub_00320198
// Address: 0x320198 - 0x320258
void sub_00320198_0x320198(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00320198_0x320198");
#endif

    ctx->pc = 0x320198u;

    // 0x320198: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x320198u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x32019c: 0x30620007  andi        $v0, $v1, 0x7
    ctx->pc = 0x32019cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)7);
    // 0x3201a0: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x3201A0u;
    {
        const bool branch_taken_0x3201a0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3201A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3201A0u;
        // 0x3201a4: 0x30620001  andi        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3201a0) {
            ctx->pc = 0x3201DCu;
            goto label_3201dc;
        }
    }
    ctx->pc = 0x3201A8u;
    // 0x3201a8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3201A8u;
    {
        const bool branch_taken_0x3201a8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x3201ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3201A8u;
        // 0x3201ac: 0x30620002  andi        $v0, $v1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3201a8) {
            ctx->pc = 0x3201B8u;
            goto label_3201b8;
        }
    }
    ctx->pc = 0x3201B0u;
    // 0x3201b0: 0x3e00008  jr          $ra
    ctx->pc = 0x3201B0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3201B4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3201B0u;
        // 0x3201b4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3201B0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3201B8u;
label_3201b8:
    // 0x3201b8: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x3201B8u;
    {
        const bool branch_taken_0x3201b8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x3201b8) {
            ctx->pc = 0x3201BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x3201B8u;
            // 0x3201bc: 0x31882  srl         $v1, $v1, 2 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
            ctx->in_delay_slot = false;
            ctx->pc = 0x3201D0u;
            goto label_3201d0;
        }
    }
    ctx->pc = 0x3201C0u;
    // 0x3201c0: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x3201c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x3201c4: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x3201c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x3201c8: 0x3e00008  jr          $ra
    ctx->pc = 0x3201C8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3201CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3201C8u;
        // 0x3201cc: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3201C8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3201D0u;
label_3201d0:
    // 0x3201d0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x3201d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3201d4: 0x3e00008  jr          $ra
    ctx->pc = 0x3201D4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3201D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3201D4u;
        // 0x3201d8: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x3201D4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x3201DCu;
label_3201dc:
    // 0x3201dc: 0x3062ffff  andi        $v0, $v1, 0xFFFF
    ctx->pc = 0x3201dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65535);
    // 0x3201e0: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x3201E0u;
    {
        const bool branch_taken_0x3201e0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3201E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3201E0u;
        // 0x3201e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3201e0) {
            ctx->pc = 0x3201F0u;
            goto label_3201f0;
        }
    }
    ctx->pc = 0x3201E8u;
    // 0x3201e8: 0x24050010  addiu       $a1, $zero, 0x10
    ctx->pc = 0x3201e8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x3201ec: 0x31c02  srl         $v1, $v1, 16
    ctx->pc = 0x3201ecu;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 16));
label_3201f0:
    // 0x3201f0: 0x306200ff  andi        $v0, $v1, 0xFF
    ctx->pc = 0x3201f0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x3201f4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x3201F4u;
    {
        const bool branch_taken_0x3201f4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x3201F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x3201F4u;
        // 0x3201f8: 0x3062000f  andi        $v0, $v1, 0xF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
        ctx->in_delay_slot = false;
        if (branch_taken_0x3201f4) {
            ctx->pc = 0x320208u;
            goto label_320208;
        }
    }
    ctx->pc = 0x3201FCu;
    // 0x3201fc: 0x24a50008  addiu       $a1, $a1, 0x8
    ctx->pc = 0x3201fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 8));
    // 0x320200: 0x31a02  srl         $v1, $v1, 8
    ctx->pc = 0x320200u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 8));
    // 0x320204: 0x3062000f  andi        $v0, $v1, 0xF
    ctx->pc = 0x320204u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)15);
label_320208:
    // 0x320208: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x320208u;
    {
        const bool branch_taken_0x320208 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x32020Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320208u;
        // 0x32020c: 0x30620003  andi        $v0, $v1, 0x3 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
        ctx->in_delay_slot = false;
        if (branch_taken_0x320208) {
            ctx->pc = 0x32021Cu;
            goto label_32021c;
        }
    }
    ctx->pc = 0x320210u;
    // 0x320210: 0x24a50004  addiu       $a1, $a1, 0x4
    ctx->pc = 0x320210u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4));
    // 0x320214: 0x31902  srl         $v1, $v1, 4
    ctx->pc = 0x320214u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 4));
    // 0x320218: 0x30620003  andi        $v0, $v1, 0x3
    ctx->pc = 0x320218u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
label_32021c:
    // 0x32021c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x32021Cu;
    {
        const bool branch_taken_0x32021c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x320220u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32021Cu;
        // 0x320220: 0x30620001  andi        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x32021c) {
            ctx->pc = 0x320230u;
            goto label_320230;
        }
    }
    ctx->pc = 0x320224u;
    // 0x320224: 0x24a50002  addiu       $a1, $a1, 0x2
    ctx->pc = 0x320224u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 2));
    // 0x320228: 0x31882  srl         $v1, $v1, 2
    ctx->pc = 0x320228u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
    // 0x32022c: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x32022cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
label_320230:
    // 0x320230: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x320230u;
    {
        const bool branch_taken_0x320230 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x320230) {
            ctx->pc = 0x320234u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x320230u;
            // 0x320234: 0xac830000  sw          $v1, 0x0($a0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x320250u;
            goto label_320250;
        }
    }
    ctx->pc = 0x320238u;
    // 0x320238: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x320238u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x32023c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x32023Cu;
    {
        const bool branch_taken_0x32023c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x320240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x32023Cu;
        // 0x320240: 0x24a50001  addiu       $a1, $a1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x32023c) {
            ctx->pc = 0x32024Cu;
            goto label_32024c;
        }
    }
    ctx->pc = 0x320244u;
    // 0x320244: 0x3e00008  jr          $ra
    ctx->pc = 0x320244u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x320248u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320244u;
        // 0x320248: 0x24020020  addiu       $v0, $zero, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x320244u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x32024Cu;
label_32024c:
    // 0x32024c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x32024cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
label_320250:
    // 0x320250: 0x3e00008  jr          $ra
    ctx->pc = 0x320250u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x320254u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x320250u;
        // 0x320254: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x320250u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x320258u;
}
