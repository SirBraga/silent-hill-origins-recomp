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

// Function: sub_00313B58
// Address: 0x313b58 - 0x313c28
void sub_00313B58_0x313b58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00313B58_0x313b58");
#endif

    switch (ctx->pc) {
        case 0x313ba4u: goto label_313ba4;
        default: break;
    }

    ctx->pc = 0x313b58u;

    // 0x313b58: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x313b58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x313b5c: 0x7fb00080  sq          $s0, 0x80($sp)
    ctx->pc = 0x313b5cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 16));
    // 0x313b60: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x313b60u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x313b64: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x313b64u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x313b68: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x313b68u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x313b6c: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x313b6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x313b70: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x313B70u;
    {
        const bool branch_taken_0x313b70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x313B74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313B70u;
        // 0x313b74: 0x26030043  addiu       $v1, $s0, 0x43 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 67));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313b70) {
            ctx->pc = 0x313B8Cu;
            goto label_313b8c;
        }
    }
    ctx->pc = 0x313B78u;
    // 0x313b78: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x313b78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x313b7c: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x313b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
    // 0x313b80: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x313b80u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x313b84: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x313B84u;
    {
        const bool branch_taken_0x313b84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x313B88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313B84u;
        // 0x313b88: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313b84) {
            ctx->pc = 0x313C0Cu;
            goto label_313c0c;
        }
    }
    ctx->pc = 0x313B8Cu;
label_313b8c:
    // 0x313b8c: 0x8605000e  lh          $a1, 0xE($s0)
    ctx->pc = 0x313b8cu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 14)));
    // 0x313b90: 0x4a20014  bltzl       $a1, . + 4 + (0x14 << 2)
    ctx->pc = 0x313B90u;
    {
        const bool branch_taken_0x313b90 = (GPR_S64(ctx, 5) < 0);
        if (branch_taken_0x313b90) {
            ctx->pc = 0x313B94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x313B90u;
            // 0x313b94: 0x9602000c  lhu         $v0, 0xC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x313BE4u;
            goto label_313be4;
        }
    }
    ctx->pc = 0x313B98u;
    // 0x313b98: 0x8e040054  lw          $a0, 0x54($s0)
    ctx->pc = 0x313b98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 84)));
    // 0x313b9c: 0xc0c7d6e  jal         func_31F5B8
    ctx->pc = 0x313B9Cu;
    SET_GPR_U32(ctx, 31, 0x313BA4u);
    ctx->pc = 0x313BA0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x313B9Cu;
    // 0x313ba0: 0x3a0302d  daddu       $a2, $sp, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x31F5B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x31F5B8u, 0x313B9Cu, 0x313BA4u)) {
        return;
    }
    ctx->pc = 0x313BA4u;
label_313ba4:
    // 0x313ba4: 0x440000e  bltz        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x313BA4u;
    {
        const bool branch_taken_0x313ba4 = (GPR_S64(ctx, 2) < 0);
        ctx->pc = 0x313BA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313BA4u;
        // 0x313ba8: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313ba4) {
            ctx->pc = 0x313BE0u;
            goto label_313be0;
        }
    }
    ctx->pc = 0x313BACu;
    // 0x313bac: 0x34038000  ori         $v1, $zero, 0x8000
    ctx->pc = 0x313bacu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x313bb0: 0x3042f000  andi        $v0, $v0, 0xF000
    ctx->pc = 0x313bb0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)61440);
    // 0x313bb4: 0x5443000b  bnel        $v0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x313BB4u;
    {
        const bool branch_taken_0x313bb4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x313bb4) {
            ctx->pc = 0x313BB8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x313BB4u;
            // 0x313bb8: 0x9602000c  lhu         $v0, 0xC($s0) (Delay Slot)
            SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x313BE4u;
            goto label_313be4;
        }
    }
    ctx->pc = 0x313BBCu;
    // 0x313bbc: 0x3c020031  lui         $v0, 0x31
    ctx->pc = 0x313bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)49 << 16));
    // 0x313bc0: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x313bc0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x313bc4: 0x24424118  addiu       $v0, $v0, 0x4118
    ctx->pc = 0x313bc4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 16664));
    // 0x313bc8: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x313BC8u;
    {
        const bool branch_taken_0x313bc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x313BCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313BC8u;
        // 0x313bcc: 0x9602000c  lhu         $v0, 0xC($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x313bc8) {
            ctx->pc = 0x313BE4u;
            goto label_313be4;
        }
    }
    ctx->pc = 0x313BD0u;
    // 0x313bd0: 0x24030400  addiu       $v1, $zero, 0x400
    ctx->pc = 0x313bd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x313bd4: 0xae03004c  sw          $v1, 0x4C($s0)
    ctx->pc = 0x313bd4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 76), GPR_U32(ctx, 3));
    // 0x313bd8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x313BD8u;
    {
        const bool branch_taken_0x313bd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x313BDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313BD8u;
        // 0x313bdc: 0x34420400  ori         $v0, $v0, 0x400 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)1024);
        ctx->in_delay_slot = false;
        if (branch_taken_0x313bd8) {
            ctx->pc = 0x313BE8u;
            goto label_313be8;
        }
    }
    ctx->pc = 0x313BE0u;
label_313be0:
    // 0x313be0: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x313be0u;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
label_313be4:
    // 0x313be4: 0x34420800  ori         $v0, $v0, 0x800
    ctx->pc = 0x313be4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2048);
label_313be8:
    // 0x313be8: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x313be8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x313bec: 0x9602000c  lhu         $v0, 0xC($s0)
    ctx->pc = 0x313becu;
    SET_GPR_ZE32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x313bf0: 0x26040043  addiu       $a0, $s0, 0x43
    ctx->pc = 0x313bf0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 67));
    // 0x313bf4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x313bf4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x313bf8: 0xae040010  sw          $a0, 0x10($s0)
    ctx->pc = 0x313bf8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 4));
    // 0x313bfc: 0x34420002  ori         $v0, $v0, 0x2
    ctx->pc = 0x313bfcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)2);
    // 0x313c00: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x313c00u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    // 0x313c04: 0xa602000c  sh          $v0, 0xC($s0)
    ctx->pc = 0x313c04u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 12), (uint16_t)GPR_U32(ctx, 2));
    // 0x313c08: 0xae040000  sw          $a0, 0x0($s0)
    ctx->pc = 0x313c08u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 4));
label_313c0c:
    // 0x313c0c: 0x7bb00080  lq          $s0, 0x80($sp)
    ctx->pc = 0x313c0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x313c10: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x313c10u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x313c14: 0x3e00008  jr          $ra
    ctx->pc = 0x313C14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x313C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x313C14u;
        // 0x313c18: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x313C14u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x313C1Cu;
    // 0x313c1c: 0x0  nop
    ctx->pc = 0x313c1cu;
    // NOP
    // 0x313c20: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x313c20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x313c24: 0x0  nop
    ctx->pc = 0x313c24u;
    // NOP
    ctx->pc = 0x313c28u;
}
