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

// Function: sub_002D9E38
// Address: 0x2d9e38 - 0x2d9ec8
void sub_002D9E38_0x2d9e38(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002D9E38_0x2d9e38");
#endif

    switch (ctx->pc) {
        case 0x2d9e38u: goto label_2d9e38;
        case 0x2d9e3cu: goto label_2d9e3c;
        case 0x2d9e40u: goto label_2d9e40;
        case 0x2d9e44u: goto label_2d9e44;
        case 0x2d9e48u: goto label_2d9e48;
        case 0x2d9e4cu: goto label_2d9e4c;
        case 0x2d9e50u: goto label_2d9e50;
        case 0x2d9e54u: goto label_2d9e54;
        case 0x2d9e58u: goto label_2d9e58;
        case 0x2d9e5cu: goto label_2d9e5c;
        case 0x2d9e60u: goto label_2d9e60;
        case 0x2d9e64u: goto label_2d9e64;
        case 0x2d9e68u: goto label_2d9e68;
        case 0x2d9e6cu: goto label_2d9e6c;
        case 0x2d9e70u: goto label_2d9e70;
        case 0x2d9e74u: goto label_2d9e74;
        case 0x2d9e78u: goto label_2d9e78;
        case 0x2d9e7cu: goto label_2d9e7c;
        case 0x2d9e80u: goto label_2d9e80;
        case 0x2d9e84u: goto label_2d9e84;
        case 0x2d9e88u: goto label_2d9e88;
        case 0x2d9e8cu: goto label_2d9e8c;
        case 0x2d9e90u: goto label_2d9e90;
        case 0x2d9e94u: goto label_2d9e94;
        case 0x2d9e98u: goto label_2d9e98;
        case 0x2d9e9cu: goto label_2d9e9c;
        case 0x2d9ea0u: goto label_2d9ea0;
        case 0x2d9ea4u: goto label_2d9ea4;
        case 0x2d9ea8u: goto label_2d9ea8;
        case 0x2d9eacu: goto label_2d9eac;
        case 0x2d9eb0u: goto label_2d9eb0;
        case 0x2d9eb4u: goto label_2d9eb4;
        case 0x2d9eb8u: goto label_2d9eb8;
        case 0x2d9ebcu: goto label_2d9ebc;
        case 0x2d9ec0u: goto label_2d9ec0;
        case 0x2d9ec4u: goto label_2d9ec4;
        default: break;
    }

    ctx->pc = 0x2d9e38u;

label_2d9e38:
    // 0x2d9e38: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2d9e38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
label_2d9e3c:
    // 0x2d9e3c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2d9e3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
label_2d9e40:
    // 0x2d9e40: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2d9e40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
label_2d9e44:
    // 0x2d9e44: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2d9e44u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2d9e48:
    // 0x2d9e48: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2d9e48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2d9e4c:
    // 0x2d9e4c: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x2d9e4cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_2d9e50:
    // 0x2d9e50: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x2d9e50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
label_2d9e54:
    // 0x2d9e54: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x2d9e54u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
label_2d9e58:
    // 0x2d9e58: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x2d9e58u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
label_2d9e5c:
    // 0x2d9e5c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x2d9e5cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2d9e60:
    // 0x2d9e60: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x2d9e60u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_2d9e64:
    // 0x2d9e64: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x2d9e64u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
label_2d9e68:
    // 0x2d9e68: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2d9e68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_2d9e6c:
    // 0x2d9e6c: 0x40f809  jalr        $v0
label_2d9e70:
    if (ctx->pc == 0x2D9E70u) {
        ctx->pc = 0x2D9E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9E6Cu;
        // 0x2d9e70: 0x94650004  lhu         $a1, 0x4($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D9E74u;
        goto label_2d9e74;
    }
    ctx->pc = 0x2D9E6Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x2D9E74u);
        ctx->pc = 0x2D9E70u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9E6Cu;
        // 0x2d9e70: 0x94650004  lhu         $a1, 0x4($v1) (Delay Slot)
        SET_GPR_ZE32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4)));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D9E6Cu, 0x2D9E74u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x2D9E74u;
label_2d9e74:
    // 0x2d9e74: 0x2800a  movz        $s0, $zero, $v0
    ctx->pc = 0x2d9e74u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0));
label_2d9e78:
    // 0x2d9e78: 0x12200006  beqz        $s1, . + 4 + (0x6 << 2)
label_2d9e7c:
    if (ctx->pc == 0x2D9E7Cu) {
        ctx->pc = 0x2D9E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9E78u;
        // 0x2d9e7c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D9E80u;
        goto label_2d9e80;
    }
    ctx->pc = 0x2D9E78u;
    {
        const bool branch_taken_0x2d9e78 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9E7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9E78u;
        // 0x2d9e7c: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9e78) {
            ctx->pc = 0x2D9E94u;
            goto label_2d9e94;
        }
    }
    ctx->pc = 0x2D9E80u;
label_2d9e80:
    // 0x2d9e80: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
label_2d9e84:
    if (ctx->pc == 0x2D9E84u) {
        ctx->pc = 0x2D9E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9E80u;
        // 0x2d9e84: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D9E88u;
        goto label_2d9e88;
    }
    ctx->pc = 0x2D9E80u;
    {
        const bool branch_taken_0x2d9e80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9E84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9E80u;
        // 0x2d9e84: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9e80) {
            ctx->pc = 0x2D9E90u;
            goto label_2d9e90;
        }
    }
    ctx->pc = 0x2D9E88u;
label_2d9e88:
    // 0x2d9e88: 0x10000002  b           . + 4 + (0x2 << 2)
label_2d9e8c:
    if (ctx->pc == 0x2D9E8Cu) {
        ctx->pc = 0x2D9E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9E88u;
        // 0x2d9e8c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D9E90u;
        goto label_2d9e90;
    }
    ctx->pc = 0x2D9E88u;
    {
        const bool branch_taken_0x2d9e88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2D9E8Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9E88u;
        // 0x2d9e8c: 0xae220000  sw          $v0, 0x0($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2d9e88) {
            ctx->pc = 0x2D9E94u;
            goto label_2d9e94;
        }
    }
    ctx->pc = 0x2D9E90u;
label_2d9e90:
    // 0x2d9e90: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x2d9e90u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_2d9e94:
    // 0x2d9e94: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x2d9e94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_2d9e98:
    // 0x2d9e98: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x2d9e98u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
label_2d9e9c:
    // 0x2d9e9c: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x2d9e9cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_2d9ea0:
    // 0x2d9ea0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x2d9ea0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_2d9ea4:
    // 0x2d9ea4: 0x3e00008  jr          $ra
label_2d9ea8:
    if (ctx->pc == 0x2D9EA8u) {
        ctx->pc = 0x2D9EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9EA4u;
        // 0x2d9ea8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = 0x2D9EACu;
        goto label_2d9eac;
    }
    ctx->pc = 0x2D9EA4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2D9EA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2D9EA4u;
        // 0x2d9ea8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2D9EA4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2D9EACu;
label_2d9eac:
    // 0x2d9eac: 0x0  nop
    ctx->pc = 0x2d9eacu;
    // NOP
label_2d9eb0:
    // 0x2d9eb0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2d9eb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_2d9eb4:
    // 0x2d9eb4: 0x0  nop
    ctx->pc = 0x2d9eb4u;
    // NOP
label_2d9eb8:
    // 0x2d9eb8: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2d9eb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_2d9ebc:
    // 0x2d9ebc: 0x0  nop
    ctx->pc = 0x2d9ebcu;
    // NOP
label_2d9ec0:
    // 0x2d9ec0: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x2d9ec0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
label_2d9ec4:
    // 0x2d9ec4: 0x0  nop
    ctx->pc = 0x2d9ec4u;
    // NOP
    ctx->pc = 0x2d9ec8u;
}
