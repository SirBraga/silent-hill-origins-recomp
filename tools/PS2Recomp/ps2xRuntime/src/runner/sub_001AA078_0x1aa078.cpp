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

// Function: sub_001AA078
// Address: 0x1aa078 - 0x1aa128
void sub_001AA078_0x1aa078(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AA078_0x1aa078");
#endif

    switch (ctx->pc) {
        case 0x1aa078u: goto label_1aa078;
        case 0x1aa07cu: goto label_1aa07c;
        case 0x1aa080u: goto label_1aa080;
        case 0x1aa084u: goto label_1aa084;
        case 0x1aa088u: goto label_1aa088;
        case 0x1aa08cu: goto label_1aa08c;
        case 0x1aa090u: goto label_1aa090;
        case 0x1aa094u: goto label_1aa094;
        case 0x1aa098u: goto label_1aa098;
        case 0x1aa09cu: goto label_1aa09c;
        case 0x1aa0a0u: goto label_1aa0a0;
        case 0x1aa0a4u: goto label_1aa0a4;
        case 0x1aa0a8u: goto label_1aa0a8;
        case 0x1aa0acu: goto label_1aa0ac;
        case 0x1aa0b0u: goto label_1aa0b0;
        case 0x1aa0b4u: goto label_1aa0b4;
        case 0x1aa0b8u: goto label_1aa0b8;
        case 0x1aa0bcu: goto label_1aa0bc;
        case 0x1aa0c0u: goto label_1aa0c0;
        case 0x1aa0c4u: goto label_1aa0c4;
        case 0x1aa0c8u: goto label_1aa0c8;
        case 0x1aa0ccu: goto label_1aa0cc;
        case 0x1aa0d0u: goto label_1aa0d0;
        case 0x1aa0d4u: goto label_1aa0d4;
        case 0x1aa0d8u: goto label_1aa0d8;
        case 0x1aa0dcu: goto label_1aa0dc;
        case 0x1aa0e0u: goto label_1aa0e0;
        case 0x1aa0e4u: goto label_1aa0e4;
        case 0x1aa0e8u: goto label_1aa0e8;
        case 0x1aa0ecu: goto label_1aa0ec;
        case 0x1aa0f0u: goto label_1aa0f0;
        case 0x1aa0f4u: goto label_1aa0f4;
        case 0x1aa0f8u: goto label_1aa0f8;
        case 0x1aa0fcu: goto label_1aa0fc;
        case 0x1aa100u: goto label_1aa100;
        case 0x1aa104u: goto label_1aa104;
        case 0x1aa108u: goto label_1aa108;
        case 0x1aa10cu: goto label_1aa10c;
        case 0x1aa110u: goto label_1aa110;
        case 0x1aa114u: goto label_1aa114;
        case 0x1aa118u: goto label_1aa118;
        case 0x1aa11cu: goto label_1aa11c;
        case 0x1aa120u: goto label_1aa120;
        case 0x1aa124u: goto label_1aa124;
        default: break;
    }

    ctx->pc = 0x1aa078u;

label_1aa078:
    // 0x1aa078: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1aa078u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_1aa07c:
    // 0x1aa07c: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1aa07cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
label_1aa080:
    // 0x1aa080: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1aa080u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
label_1aa084:
    // 0x1aa084: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1aa084u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1aa088:
    // 0x1aa088: 0x8e0200c8  lw          $v0, 0xC8($s0)
    ctx->pc = 0x1aa088u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
label_1aa08c:
    // 0x1aa08c: 0x50400020  beql        $v0, $zero, . + 4 + (0x20 << 2)
label_1aa090:
    if (ctx->pc == 0x1AA090u) {
        ctx->pc = 0x1AA090u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA08Cu;
        // 0x1aa090: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA094u;
        goto label_1aa094;
    }
    ctx->pc = 0x1AA08Cu;
    {
        const bool branch_taken_0x1aa08c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1aa08c) {
            ctx->pc = 0x1AA090u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AA08Cu;
            // 0x1aa090: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AA110u;
            goto label_1aa110;
        }
    }
    ctx->pc = 0x1AA094u;
label_1aa094:
    // 0x1aa094: 0x0  nop
    ctx->pc = 0x1aa094u;
    // NOP
label_1aa098:
    // 0x1aa098: 0x8e0200c8  lw          $v0, 0xC8($s0)
    ctx->pc = 0x1aa098u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
label_1aa09c:
    // 0x1aa09c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x1aa09cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
label_1aa0a0:
    // 0x1aa0a0: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x1aa0a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
label_1aa0a4:
    // 0x1aa0a4: 0x8c45fffc  lw          $a1, -0x4($v0)
    ctx->pc = 0x1aa0a4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
label_1aa0a8:
    // 0x1aa0a8: 0x8ca30050  lw          $v1, 0x50($a1)
    ctx->pc = 0x1aa0a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 80)));
label_1aa0ac:
    // 0x1aa0ac: 0x84640018  lh          $a0, 0x18($v1)
    ctx->pc = 0x1aa0acu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 24)));
label_1aa0b0:
    // 0x1aa0b0: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x1aa0b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_1aa0b4:
    // 0x1aa0b4: 0x40f809  jalr        $v0
label_1aa0b8:
    if (ctx->pc == 0x1AA0B8u) {
        ctx->pc = 0x1AA0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA0B4u;
        // 0x1aa0b8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA0BCu;
        goto label_1aa0bc;
    }
    ctx->pc = 0x1AA0B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1AA0BCu);
        ctx->pc = 0x1AA0B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA0B4u;
        // 0x1aa0b8: 0xa42021  addu        $a0, $a1, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AA0B4u, 0x1AA0BCu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1AA0BCu;
label_1aa0bc:
    // 0x1aa0bc: 0x8e0300c8  lw          $v1, 0xC8($s0)
    ctx->pc = 0x1aa0bcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
label_1aa0c0:
    // 0x1aa0c0: 0x2c620032  sltiu       $v0, $v1, 0x32
    ctx->pc = 0x1aa0c0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)50) ? 1 : 0);
label_1aa0c4:
    // 0x1aa0c4: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_1aa0c8:
    if (ctx->pc == 0x1AA0C8u) {
        ctx->pc = 0x1AA0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA0C4u;
        // 0x1aa0c8: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA0CCu;
        goto label_1aa0cc;
    }
    ctx->pc = 0x1AA0C4u;
    {
        const bool branch_taken_0x1aa0c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA0C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA0C4u;
        // 0x1aa0c8: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa0c4) {
            ctx->pc = 0x1AA0D4u;
            goto label_1aa0d4;
        }
    }
    ctx->pc = 0x1AA0CCu;
label_1aa0cc:
    // 0x1aa0cc: 0x2021021  addu        $v0, $s0, $v0
    ctx->pc = 0x1aa0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
label_1aa0d0:
    // 0x1aa0d0: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x1aa0d0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
label_1aa0d4:
    // 0x1aa0d4: 0x8e0200c8  lw          $v0, 0xC8($s0)
    ctx->pc = 0x1aa0d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
label_1aa0d8:
    // 0x1aa0d8: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x1aa0d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
label_1aa0dc:
    // 0x1aa0dc: 0x1440ffee  bnez        $v0, . + 4 + (-0x12 << 2)
label_1aa0e0:
    if (ctx->pc == 0x1AA0E0u) {
        ctx->pc = 0x1AA0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA0DCu;
        // 0x1aa0e0: 0xae0200c8  sw          $v0, 0xC8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA0E4u;
        goto label_1aa0e4;
    }
    ctx->pc = 0x1AA0DCu;
    {
        const bool branch_taken_0x1aa0dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AA0E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA0DCu;
        // 0x1aa0e0: 0xae0200c8  sw          $v0, 0xC8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa0dc) {
            ctx->pc = 0x1AA098u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1aa098;
        }
    }
    ctx->pc = 0x1AA0E4u;
label_1aa0e4:
    // 0x1aa0e4: 0x8e0200c8  lw          $v0, 0xC8($s0)
    ctx->pc = 0x1aa0e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
label_1aa0e8:
    // 0x1aa0e8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
label_1aa0ec:
    if (ctx->pc == 0x1AA0ECu) {
        ctx->pc = 0x1AA0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA0E8u;
        // 0x1aa0ec: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA0F0u;
        goto label_1aa0f0;
    }
    ctx->pc = 0x1AA0E8u;
    {
        const bool branch_taken_0x1aa0e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AA0ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA0E8u;
        // 0x1aa0ec: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa0e8) {
            ctx->pc = 0x1AA110u;
            goto label_1aa110;
        }
    }
    ctx->pc = 0x1AA0F0u;
label_1aa0f0:
    // 0x1aa0f0: 0x200182d  daddu       $v1, $s0, $zero
    ctx->pc = 0x1aa0f0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1aa0f4:
    // 0x1aa0f4: 0x0  nop
    ctx->pc = 0x1aa0f4u;
    // NOP
label_1aa0f8:
    // 0x1aa0f8: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x1aa0f8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
label_1aa0fc:
    // 0x1aa0fc: 0x24840001  addiu       $a0, $a0, 0x1
    ctx->pc = 0x1aa0fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
label_1aa100:
    // 0x1aa100: 0x8e0200c8  lw          $v0, 0xC8($s0)
    ctx->pc = 0x1aa100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 200)));
label_1aa104:
    // 0x1aa104: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x1aa104u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
label_1aa108:
    // 0x1aa108: 0x1440fffb  bnez        $v0, . + 4 + (-0x5 << 2)
label_1aa10c:
    if (ctx->pc == 0x1AA10Cu) {
        ctx->pc = 0x1AA10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA108u;
        // 0x1aa10c: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA110u;
        goto label_1aa110;
    }
    ctx->pc = 0x1AA108u;
    {
        const bool branch_taken_0x1aa108 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AA10Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA108u;
        // 0x1aa10c: 0x24630004  addiu       $v1, $v1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1aa108) {
            ctx->pc = 0x1AA0F8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_1aa0f8;
        }
    }
    ctx->pc = 0x1AA110u;
label_1aa110:
    // 0x1aa110: 0xae0000c8  sw          $zero, 0xC8($s0)
    ctx->pc = 0x1aa110u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 200), GPR_U32(ctx, 0));
label_1aa114:
    // 0x1aa114: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1aa114u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_1aa118:
    // 0x1aa118: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1aa118u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1aa11c:
    // 0x1aa11c: 0x3e00008  jr          $ra
label_1aa120:
    if (ctx->pc == 0x1AA120u) {
        ctx->pc = 0x1AA120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA11Cu;
        // 0x1aa120: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1AA124u;
        goto label_1aa124;
    }
    ctx->pc = 0x1AA11Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1AA120u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AA11Cu;
        // 0x1aa120: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AA11Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AA124u;
label_1aa124:
    // 0x1aa124: 0x0  nop
    ctx->pc = 0x1aa124u;
    // NOP
    ctx->pc = 0x1aa128u;
}
