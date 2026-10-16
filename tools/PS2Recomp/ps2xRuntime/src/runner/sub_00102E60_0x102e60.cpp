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

// Function: sub_00102E60
// Address: 0x102e60 - 0x102f10
void sub_00102E60_0x102e60(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00102E60_0x102e60");
#endif

    switch (ctx->pc) {
        case 0x102e74u: goto label_102e74;
        default: break;
    }

    ctx->pc = 0x102e60u;

    // 0x102e60: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x102e60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x102e64: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x102e64u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x102e68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x102e68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x102e6c: 0xc040bc4  jal         func_102F10
    ctx->pc = 0x102E6Cu;
    SET_GPR_U32(ctx, 31, 0x102E74u);
    ctx->pc = 0x102E70u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x102E6Cu;
    // 0x102e70: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x102F10u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x102F10u, 0x102E6Cu, 0x102E74u)) {
        return;
    }
    ctx->pc = 0x102E74u;
label_102e74:
    // 0x102e74: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x102e74u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102e78: 0x50600021  beql        $v1, $zero, . + 4 + (0x21 << 2)
    ctx->pc = 0x102E78u;
    {
        const bool branch_taken_0x102e78 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x102e78) {
            ctx->pc = 0x102E7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x102E78u;
            // 0x102e7c: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x102F00u;
            goto label_102f00;
        }
    }
    ctx->pc = 0x102E80u;
    // 0x102e80: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x102e80u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x102e84: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x102E84u;
    {
        const bool branch_taken_0x102e84 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x102E88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102E84u;
        // 0x102e88: 0x26050008  addiu       $a1, $s0, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102e84) {
            ctx->pc = 0x102E94u;
            goto label_102e94;
        }
    }
    ctx->pc = 0x102E8Cu;
    // 0x102e8c: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x102e8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x102e90: 0xac820004  sw          $v0, 0x4($a0)
    ctx->pc = 0x102e90u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 2));
label_102e94:
    // 0x102e94: 0x8c640004  lw          $a0, 0x4($v1)
    ctx->pc = 0x102e94u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x102e98: 0x50800004  beql        $a0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x102E98u;
    {
        const bool branch_taken_0x102e98 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x102e98) {
            ctx->pc = 0x102E9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x102E98u;
            // 0x102e9c: 0x8e020008  lw          $v0, 0x8($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x102EACu;
            goto label_102eac;
        }
    }
    ctx->pc = 0x102EA0u;
    // 0x102ea0: 0x8c620008  lw          $v0, 0x8($v1)
    ctx->pc = 0x102ea0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x102ea4: 0xac820008  sw          $v0, 0x8($a0)
    ctx->pc = 0x102ea4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 8), GPR_U32(ctx, 2));
    // 0x102ea8: 0x8e020008  lw          $v0, 0x8($s0)
    ctx->pc = 0x102ea8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
label_102eac:
    // 0x102eac: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x102EACu;
    {
        const bool branch_taken_0x102eac = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x102eac) {
            ctx->pc = 0x102EB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x102EACu;
            // 0x102eb0: 0x8ca20004  lw          $v0, 0x4($a1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x102EC0u;
            goto label_102ec0;
        }
    }
    ctx->pc = 0x102EB4u;
    // 0x102eb4: 0x8c620004  lw          $v0, 0x4($v1)
    ctx->pc = 0x102eb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    // 0x102eb8: 0xae020008  sw          $v0, 0x8($s0)
    ctx->pc = 0x102eb8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 2));
    // 0x102ebc: 0x8ca20004  lw          $v0, 0x4($a1)
    ctx->pc = 0x102ebcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
label_102ec0:
    // 0x102ec0: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x102ec0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x102ec4: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x102ec4u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x102ec8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x102ec8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x102ecc: 0x54400001  bnel        $v0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x102ECCu;
    {
        const bool branch_taken_0x102ecc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x102ecc) {
            ctx->pc = 0x102ED0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x102ECCu;
            // 0x102ed0: 0xac430008  sw          $v1, 0x8($v0) (Delay Slot)
            WRITE32(ADD32(GPR_U32(ctx, 2), 8), GPR_U32(ctx, 3));
            ctx->in_delay_slot = false;
            ctx->pc = 0x102ED4u;
            goto label_102ed4;
        }
    }
    ctx->pc = 0x102ED4u;
label_102ed4:
    // 0x102ed4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x102ed4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x102ed8: 0xac600008  sw          $zero, 0x8($v1)
    ctx->pc = 0x102ed8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 8), GPR_U32(ctx, 0));
    // 0x102edc: 0xac620004  sw          $v0, 0x4($v1)
    ctx->pc = 0x102edcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4), GPR_U32(ctx, 2));
    // 0x102ee0: 0xae030000  sw          $v1, 0x0($s0)
    ctx->pc = 0x102ee0u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
    // 0x102ee4: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x102ee4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x102ee8: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x102ee8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x102eec: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x102eecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x102ef0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x102ef0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x102ef4: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x102ef4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x102ef8: 0xae030014  sw          $v1, 0x14($s0)
    ctx->pc = 0x102ef8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 3));
    // 0x102efc: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x102efcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_102f00:
    // 0x102f00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x102f00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x102f04: 0x3e00008  jr          $ra
    ctx->pc = 0x102F04u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x102F08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x102F04u;
        // 0x102f08: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x102F04u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x102F0Cu;
    // 0x102f0c: 0x0  nop
    ctx->pc = 0x102f0cu;
    // NOP
    ctx->pc = 0x102f10u;
}
