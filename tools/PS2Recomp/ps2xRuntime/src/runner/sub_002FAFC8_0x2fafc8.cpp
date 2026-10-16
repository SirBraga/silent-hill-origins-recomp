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

// Function: sub_002FAFC8
// Address: 0x2fafc8 - 0x2fb0a8
void sub_002FAFC8_0x2fafc8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FAFC8_0x2fafc8");
#endif

    ctx->pc = 0x2fafc8u;

    // 0x2fafc8: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x2fafc8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x2fafcc: 0x24030010  addiu       $v1, $zero, 0x10
    ctx->pc = 0x2fafccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x2fafd0: 0x3442e010  ori         $v0, $v0, 0xE010
    ctx->pc = 0x2fafd0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57360);
    // 0x2fafd4: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x2fafd4u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fafd8: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2fafd8u;
    runtime->Store32(rdram, ctx, 0x1000E010u, GPR_U32(ctx, 3)); // MMIO: 0x1000e010
    // 0x2fafdc: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2fafdcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2fafe0: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2FAFE0u;
    {
        const bool branch_taken_0x2fafe0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2FAFE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAFE0u;
        // 0x2fafe4: 0x3407ffff  ori         $a3, $zero, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fafe0) {
            ctx->pc = 0x2FAFF8u;
            goto label_2faff8;
        }
    }
    ctx->pc = 0x2FAFE8u;
    // 0x2fafe8: 0xf  sync
    ctx->pc = 0x2fafe8u;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x2fafec: 0x42000038  ei
    ctx->pc = 0x2fafecu;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x2faff0: 0x3e00008  jr          $ra
    ctx->pc = 0x2FAFF0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FAFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAFF0u;
        // 0x2faff4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FAFF0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FAFF8u;
label_2faff8:
    // 0x2faff8: 0xe2102b  sltu        $v0, $a3, $v0
    ctx->pc = 0x2faff8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 7) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x2faffc: 0x10400017  beqz        $v0, . + 4 + (0x17 << 2)
    ctx->pc = 0x2FAFFCu;
    {
        const bool branch_taken_0x2faffc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB000u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FAFFCu;
        // 0x2fb000: 0x3c031000  lui         $v1, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2faffc) {
            ctx->pc = 0x2FB05Cu;
            goto label_2fb05c;
        }
    }
    ctx->pc = 0x2FB004u;
    // 0x2fb004: 0x8cc40004  lw          $a0, 0x4($a2)
    ctx->pc = 0x2fb004u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2fb008: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x2fb008u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x2fb00c: 0x3442b410  ori         $v0, $v0, 0xB410
    ctx->pc = 0x2fb00cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46096);
    // 0x2fb010: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x2fb010u;
    runtime->Store32(rdram, ctx, 0x1000B410u, GPR_U32(ctx, 4)); // MMIO: 0x1000b410
    // 0x2fb014: 0x3463b420  ori         $v1, $v1, 0xB420
    ctx->pc = 0x2fb014u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46112);
    // 0x2fb018: 0xac670000  sw          $a3, 0x0($v1)
    ctx->pc = 0x2fb018u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7)); // MMIO: 0x1000b420
    // 0x2fb01c: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x2fb01cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x2fb020: 0x3442b400  ori         $v0, $v0, 0xB400
    ctx->pc = 0x2fb020u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46080);
    // 0x2fb024: 0x24030101  addiu       $v1, $zero, 0x101
    ctx->pc = 0x2fb024u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x2fb028: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x2fb028u;
    runtime->Store32(rdram, ctx, 0x1000B400u, GPR_U32(ctx, 3)); // MMIO: 0x1000b400
    // 0x2fb02c: 0x3c05000f  lui         $a1, 0xF
    ctx->pc = 0x2fb02cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)15 << 16));
    // 0x2fb030: 0x34a5fff0  ori         $a1, $a1, 0xFFF0
    ctx->pc = 0x2fb030u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65520);
    // 0x2fb034: 0x3c040fff  lui         $a0, 0xFFF
    ctx->pc = 0x2fb034u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4095 << 16));
    // 0x2fb038: 0x8cc30004  lw          $v1, 0x4($a2)
    ctx->pc = 0x2fb038u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2fb03c: 0x3484ffff  ori         $a0, $a0, 0xFFFF
    ctx->pc = 0x2fb03cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65535);
    // 0x2fb040: 0x8cc20000  lw          $v0, 0x0($a2)
    ctx->pc = 0x2fb040u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2fb044: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2fb044u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x2fb048: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x2fb048u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x2fb04c: 0x471023  subu        $v0, $v0, $a3
    ctx->pc = 0x2fb04cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x2fb050: 0xacc20000  sw          $v0, 0x0($a2)
    ctx->pc = 0x2fb050u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 2));
    // 0x2fb054: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x2FB054u;
    {
        const bool branch_taken_0x2fb054 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FB058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB054u;
        // 0x2fb058: 0xacc30004  sw          $v1, 0x4($a2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 6), 4), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fb054) {
            ctx->pc = 0x2FB08Cu;
            goto label_2fb08c;
        }
    }
    ctx->pc = 0x2FB05Cu;
label_2fb05c:
    // 0x2fb05c: 0x8cc40004  lw          $a0, 0x4($a2)
    ctx->pc = 0x2fb05cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 4)));
    // 0x2fb060: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x2fb060u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x2fb064: 0x3442b410  ori         $v0, $v0, 0xB410
    ctx->pc = 0x2fb064u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46096);
    // 0x2fb068: 0xac440000  sw          $a0, 0x0($v0)
    ctx->pc = 0x2fb068u;
    runtime->Store32(rdram, ctx, 0x1000B410u, GPR_U32(ctx, 4)); // MMIO: 0x1000b410
    // 0x2fb06c: 0x3463b420  ori         $v1, $v1, 0xB420
    ctx->pc = 0x2fb06cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46112);
    // 0x2fb070: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x2fb070u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x2fb074: 0x24050101  addiu       $a1, $zero, 0x101
    ctx->pc = 0x2fb074u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x2fb078: 0x8cc40000  lw          $a0, 0x0($a2)
    ctx->pc = 0x2fb078u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x2fb07c: 0x3442b400  ori         $v0, $v0, 0xB400
    ctx->pc = 0x2fb07cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)46080);
    // 0x2fb080: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x2fb080u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4));
    // 0x2fb084: 0xac450000  sw          $a1, 0x0($v0)
    ctx->pc = 0x2fb084u;
    runtime->Store32(rdram, ctx, 0x1000B400u, GPR_U32(ctx, 5)); // MMIO: 0x1000b400
    // 0x2fb088: 0xacc00000  sw          $zero, 0x0($a2)
    ctx->pc = 0x2fb088u;
    WRITE32(ADD32(GPR_U32(ctx, 6), 0), GPR_U32(ctx, 0));
label_2fb08c:
    // 0x2fb08c: 0xf  sync
    ctx->pc = 0x2fb08cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x2fb090: 0x42000038  ei
    ctx->pc = 0x2fb090u;
    ctx->cop0_status |= 0x10000; // Enable interrupts
    // 0x2fb094: 0x3e00008  jr          $ra
    ctx->pc = 0x2FB094u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FB098u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2FB094u;
        // 0x2fb098: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2FB094u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2FB09Cu;
    // 0x2fb09c: 0x0  nop
    ctx->pc = 0x2fb09cu;
    // NOP
    // 0x2fb0a0: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x2fb0a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2fb0a4: 0x0  nop
    ctx->pc = 0x2fb0a4u;
    // NOP
    ctx->pc = 0x2fb0a8u;
}
