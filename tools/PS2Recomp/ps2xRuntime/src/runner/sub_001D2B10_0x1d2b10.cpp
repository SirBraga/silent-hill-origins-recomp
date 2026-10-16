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

// Function: sub_001D2B10
// Address: 0x1d2b10 - 0x1d2c00
void sub_001D2B10_0x1d2b10(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D2B10_0x1d2b10");
#endif

    switch (ctx->pc) {
        case 0x1d2b28u: goto label_1d2b28;
        case 0x1d2b40u: goto label_1d2b40;
        case 0x1d2b80u: goto label_1d2b80;
        case 0x1d2bc0u: goto label_1d2bc0;
        default: break;
    }

    ctx->pc = 0x1d2b10u;

    // 0x1d2b10: 0x3c0c04c1  lui         $t4, 0x4C1
    ctx->pc = 0x1d2b10u;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)1217 << 16));
    // 0x1d2b14: 0x80582d  daddu       $t3, $a0, $zero
    ctx->pc = 0x1d2b14u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2b18: 0x358c1db7  ori         $t4, $t4, 0x1DB7
    ctx->pc = 0x1d2b18u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)7607);
    // 0x1d2b1c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1d2b1cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2b20: 0x240f0008  addiu       $t7, $zero, 0x8
    ctx->pc = 0x1d2b20u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1d2b24: 0x240e0001  addiu       $t6, $zero, 0x1
    ctx->pc = 0x1d2b24u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d2b28:
    // 0x1d2b28: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d2b28u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2b2c: 0x44080  sll         $t0, $a0, 2
    ctx->pc = 0x1d2b2cu;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 4), 2));
    // 0x1d2b30: 0x248d0001  addiu       $t5, $a0, 0x1
    ctx->pc = 0x1d2b30u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x1d2b34: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1d2b34u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d2b38: 0x1e61023  subu        $v0, $t7, $a2
    ctx->pc = 0x1d2b38u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 6)));
    // 0x1d2b3c: 0x0  nop
    ctx->pc = 0x1d2b3cu;
    // NOP
label_1d2b40:
    // 0x1d2b40: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x1d2b40u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x1d2b44: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1d2b44u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1d2b48: 0x4e2804  sllv        $a1, $t6, $v0
    ctx->pc = 0x1d2b48u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 14), GPR_U32(ctx, 2) & 0x1F));
    // 0x1d2b4c: 0x42042  srl         $a0, $a0, 1
    ctx->pc = 0x1d2b4cu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x1d2b50: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D2B50u;
    {
        const bool branch_taken_0x1d2b50 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2B54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2B50u;
        // 0x1d2b54: 0x28c20009  slti        $v0, $a2, 0x9 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)9) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2b50) {
            ctx->pc = 0x1D2B5Cu;
            goto label_1d2b5c;
        }
    }
    ctx->pc = 0x1D2B58u;
    // 0x1d2b58: 0xe53825  or          $a3, $a3, $a1
    ctx->pc = 0x1d2b58u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 5));
label_1d2b5c:
    // 0x1d2b5c: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1D2B5Cu;
    {
        const bool branch_taken_0x1d2b5c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D2B60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2B5Cu;
        // 0x1d2b60: 0x1e61023  subu        $v0, $t7, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 15), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2b5c) {
            ctx->pc = 0x1D2B40u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d2b40;
        }
    }
    ctx->pc = 0x1D2B64u;
    // 0x1d2b64: 0x71e00  sll         $v1, $a3, 24
    ctx->pc = 0x1d2b64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), 24));
    // 0x1d2b68: 0x10b1021  addu        $v0, $t0, $t3
    ctx->pc = 0x1d2b68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 11)));
    // 0x1d2b6c: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x1d2b6cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x1d2b70: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1d2b70u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2b74: 0x3c078000  lui         $a3, 0x8000
    ctx->pc = 0x1d2b74u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)32768 << 16));
    // 0x1d2b78: 0x24060007  addiu       $a2, $zero, 0x7
    ctx->pc = 0x1d2b78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1d2b7c: 0x0  nop
    ctx->pc = 0x1d2b7cu;
    // NOP
label_1d2b80:
    // 0x1d2b80: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x1d2b80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x1d2b84: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1d2b84u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1d2b88: 0x22040  sll         $a0, $v0, 1
    ctx->pc = 0x1d2b88u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1d2b8c: 0x471024  and         $v0, $v0, $a3
    ctx->pc = 0x1d2b8cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x1d2b90: 0x8c1826  xor         $v1, $a0, $t4
    ctx->pc = 0x1d2b90u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) ^ GPR_U64(ctx, 12));
    // 0x1d2b94: 0x82180a  movz        $v1, $a0, $v0
    ctx->pc = 0x1d2b94u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4));
    // 0x1d2b98: 0x4c1fff9  bgez        $a2, . + 4 + (-0x7 << 2)
    ctx->pc = 0x1D2B98u;
    {
        const bool branch_taken_0x1d2b98 = (GPR_S64(ctx, 6) >= 0);
        ctx->pc = 0x1D2B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2B98u;
        // 0x1d2b9c: 0xaca30000  sw          $v1, 0x0($a1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2b98) {
            ctx->pc = 0x1D2B80u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d2b80;
        }
    }
    ctx->pc = 0x1D2BA0u;
    // 0x1d2ba0: 0x10b1021  addu        $v0, $t0, $t3
    ctx->pc = 0x1d2ba0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 11)));
    // 0x1d2ba4: 0x240a0020  addiu       $t2, $zero, 0x20
    ctx->pc = 0x1d2ba4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1d2ba8: 0x8c440000  lw          $a0, 0x0($v0)
    ctx->pc = 0x1d2ba8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1d2bac: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x1d2bacu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2bb0: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1d2bb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d2bb4: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x1d2bb4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1d2bb8: 0x1461023  subu        $v0, $t2, $a2
    ctx->pc = 0x1d2bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 6)));
    // 0x1d2bbc: 0x0  nop
    ctx->pc = 0x1d2bbcu;
    // NOP
label_1d2bc0:
    // 0x1d2bc0: 0x30830001  andi        $v1, $a0, 0x1
    ctx->pc = 0x1d2bc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x1d2bc4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x1d2bc4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x1d2bc8: 0x492804  sllv        $a1, $t1, $v0
    ctx->pc = 0x1d2bc8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 9), GPR_U32(ctx, 2) & 0x1F));
    // 0x1d2bcc: 0x42042  srl         $a0, $a0, 1
    ctx->pc = 0x1d2bccu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x1d2bd0: 0x10600002  beqz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D2BD0u;
    {
        const bool branch_taken_0x1d2bd0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D2BD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2BD0u;
        // 0x1d2bd4: 0x28c20021  slti        $v0, $a2, 0x21 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)33) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2bd0) {
            ctx->pc = 0x1D2BDCu;
            goto label_1d2bdc;
        }
    }
    ctx->pc = 0x1D2BD8u;
    // 0x1d2bd8: 0xe53825  or          $a3, $a3, $a1
    ctx->pc = 0x1d2bd8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 5));
label_1d2bdc:
    // 0x1d2bdc: 0x1440fff8  bnez        $v0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x1D2BDCu;
    {
        const bool branch_taken_0x1d2bdc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D2BE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2BDCu;
        // 0x1d2be0: 0x1461023  subu        $v0, $t2, $a2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 10), GPR_U32(ctx, 6)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2bdc) {
            ctx->pc = 0x1D2BC0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d2bc0;
        }
    }
    ctx->pc = 0x1D2BE4u;
    // 0x1d2be4: 0x10b1821  addu        $v1, $t0, $t3
    ctx->pc = 0x1d2be4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 11)));
    // 0x1d2be8: 0x1a0202d  daddu       $a0, $t5, $zero
    ctx->pc = 0x1d2be8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d2bec: 0x28820100  slti        $v0, $a0, 0x100
    ctx->pc = 0x1d2becu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)256) ? 1 : 0);
    // 0x1d2bf0: 0x1440ffcd  bnez        $v0, . + 4 + (-0x33 << 2)
    ctx->pc = 0x1D2BF0u;
    {
        const bool branch_taken_0x1d2bf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D2BF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D2BF0u;
        // 0x1d2bf4: 0xac670000  sw          $a3, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d2bf0) {
            ctx->pc = 0x1D2B28u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1d2b28;
        }
    }
    ctx->pc = 0x1D2BF8u;
    // 0x1d2bf8: 0x3e00008  jr          $ra
    ctx->pc = 0x1D2BF8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D2BF8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D2C00u;
}
