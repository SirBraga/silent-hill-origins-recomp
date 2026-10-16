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

// Function: sub_002D9EC8
// Address: 0x2d9ec8 - 0x2d9f48
void sub_002D9EC8_0x2d9ec8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D9EC8_0x2d9ec8");
#endif

    switch (ctx->pc) {
        case 0x2d9ec8u: goto label_2d9ec8;
        case 0x2d9eccu: goto label_2d9ecc;
        case 0x2d9ed0u: goto label_2d9ed0;
        case 0x2d9ed4u: goto label_2d9ed4;
        case 0x2d9ed8u: goto label_2d9ed8;
        case 0x2d9edcu: goto label_2d9edc;
        case 0x2d9ee0u: goto label_2d9ee0;
        case 0x2d9ee4u: goto label_2d9ee4;
        case 0x2d9ee8u: goto label_2d9ee8;
        case 0x2d9eecu: goto label_2d9eec;
        case 0x2d9ef0u: goto label_2d9ef0;
        case 0x2d9ef4u: goto label_2d9ef4;
        case 0x2d9ef8u: goto label_2d9ef8;
        case 0x2d9efcu: goto label_2d9efc;
        case 0x2d9f00u: goto label_2d9f00;
        case 0x2d9f04u: goto label_2d9f04;
        case 0x2d9f08u: goto label_2d9f08;
        case 0x2d9f0cu: goto label_2d9f0c;
        case 0x2d9f10u: goto label_2d9f10;
        case 0x2d9f14u: goto label_2d9f14;
        case 0x2d9f18u: goto label_2d9f18;
        case 0x2d9f1cu: goto label_2d9f1c;
        case 0x2d9f20u: goto label_2d9f20;
        case 0x2d9f24u: goto label_2d9f24;
        case 0x2d9f28u: goto label_2d9f28;
        case 0x2d9f2cu: goto label_2d9f2c;
        case 0x2d9f30u: goto label_2d9f30;
        case 0x2d9f34u: goto label_2d9f34;
        case 0x2d9f38u: goto label_2d9f38;
        case 0x2d9f3cu: goto label_2d9f3c;
        case 0x2d9f40u: goto label_2d9f40;
        case 0x2d9f44u: goto label_2d9f44;
        default: break;
    }

    ctx->pc = 0x2d9ec8u;

label_2d9ec8:
    // 0x2d9ec8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2d9ec8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2d9ecc:
    // 0x2d9ecc: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2d9eccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_2d9ed0:
    // 0x2d9ed0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2d9ed0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_2d9ed4:
    // 0x2d9ed4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d9ed4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2d9ed8:
    // 0x2d9ed8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2d9ed8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2d9edc:
    // 0x2d9edc: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x2d9edcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2d9ee0:
    // 0x2d9ee0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2d9ee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2d9ee4:
    // 0x2d9ee4: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x2d9ee4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_2d9ee8:
    // 0x2d9ee8: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x2d9ee8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_2d9eec:
    // 0x2d9eec: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2d9eecu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2d9ef0:
    // 0x2d9ef0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2d9ef0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2d9ef4:
    // 0x2d9ef4: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2d9ef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_2d9ef8:
    // 0x2d9ef8: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2d9ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2d9efc:
    // 0x2d9efc: 0x40f809  jalr        $v0
label_2d9f00:
    if (ctx->pc == 0x2D9F00u) {
        ctx->pc = 0x2D9F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9EFCu;
        // 0x2d9f00: 0x94650004  lhu         $a1, 0x4($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D9F04u;
        goto label_2d9f04;
    }
    ctx->pc = 0x2D9EFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2D9F04u);
        ctx->pc = 0x2D9F00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9EFCu;
        // 0x2d9f00: 0x94650004  lhu         $a1, 0x4($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D9EFCu, 0x2D9F04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D9F04u;
label_2d9f04:
    // 0x2d9f04: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x2d9f04u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0));
label_2d9f08:
    // 0x2d9f08: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_2d9f0c:
    if (ctx->pc == 0x2D9F0Cu) {
        ctx->pc = 0x2D9F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9F08u;
        // 0x2d9f0c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D9F10u;
        goto label_2d9f10;
    }
    ctx->pc = 0x2D9F08u;
    {
        const bool branch_taken_0x2d9f08 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9F0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9F08u;
        // 0x2d9f0c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9f08) {
            ctx->pc = 0x2D9F24u;
            goto label_2d9f24;
        }
    }
    ctx->pc = 0x2D9F10u;
label_2d9f10:
    // 0x2d9f10: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2d9f14:
    if (ctx->pc == 0x2D9F14u) {
        ctx->pc = 0x2D9F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9F10u;
        // 0x2d9f14: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D9F18u;
        goto label_2d9f18;
    }
    ctx->pc = 0x2D9F10u;
    {
        const bool branch_taken_0x2d9f10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9F10u;
        // 0x2d9f14: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9f10) {
            ctx->pc = 0x2D9F20u;
            goto label_2d9f20;
        }
    }
    ctx->pc = 0x2D9F18u;
label_2d9f18:
    // 0x2d9f18: 0x10000002  b           . + 4 + (0x2 << 2)
label_2d9f1c:
    if (ctx->pc == 0x2D9F1Cu) {
        ctx->pc = 0x2D9F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9F18u;
        // 0x2d9f1c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D9F20u;
        goto label_2d9f20;
    }
    ctx->pc = 0x2D9F18u;
    {
        const bool branch_taken_0x2d9f18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9F1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9F18u;
        // 0x2d9f1c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9f18) {
            ctx->pc = 0x2D9F24u;
            goto label_2d9f24;
        }
    }
    ctx->pc = 0x2D9F20u;
label_2d9f20:
    // 0x2d9f20: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x2d9f20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_2d9f24:
    // 0x2d9f24: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2d9f24u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2d9f28:
    // 0x2d9f28: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2d9f28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2d9f2c:
    // 0x2d9f2c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2d9f2cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2d9f30:
    // 0x2d9f30: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2d9f30u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2d9f34:
    // 0x2d9f34: 0x3e00008  jr          $ra
label_2d9f38:
    if (ctx->pc == 0x2D9F38u) {
        ctx->pc = 0x2D9F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9F34u;
        // 0x2d9f38: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D9F3Cu;
        goto label_2d9f3c;
    }
    ctx->pc = 0x2D9F34u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D9F38u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9F34u;
        // 0x2d9f38: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D9F34u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D9F3Cu;
label_2d9f3c:
    // 0x2d9f3c: 0x0  nop
    ctx->pc = 0x2d9f3cu;
    // NOP
label_2d9f40:
    // 0x2d9f40: 0x27bd00a0  addiu       $sp, $sp, 0xA0
    ctx->pc = 0x2d9f40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_2d9f44:
    // 0x2d9f44: 0x0  nop
    ctx->pc = 0x2d9f44u;
    // NOP
    ctx->pc = 0x2d9f48u;
}
