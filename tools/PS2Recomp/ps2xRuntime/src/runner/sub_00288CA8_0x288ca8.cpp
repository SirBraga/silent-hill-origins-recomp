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

// Function: sub_00288CA8
// Address: 0x288ca8 - 0x288d50
void sub_00288CA8_0x288ca8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00288CA8_0x288ca8");
#endif

    switch (ctx->pc) {
        case 0x288ce0u: goto label_288ce0;
        case 0x288cf4u: goto label_288cf4;
        default: break;
    }

    ctx->pc = 0x288ca8u;

    // 0x288ca8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x288ca8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x288cac: 0x7fb10030  sq          $s1, 0x30($sp)
    ctx->pc = 0x288cacu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 17));
    // 0x288cb0: 0x7fb00040  sq          $s0, 0x40($sp)
    ctx->pc = 0x288cb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 16));
    // 0x288cb4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x288cb4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288cb8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x288cb8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x288cbc: 0x7fb30010  sq          $s3, 0x10($sp)
    ctx->pc = 0x288cbcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 19));
    // 0x288cc0: 0x14800003  bnez        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x288CC0u;
    {
        const bool branch_taken_0x288cc0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x288CC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288CC0u;
        // 0x288cc4: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288cc0) {
            ctx->pc = 0x288CD0u;
            goto label_288cd0;
        }
    }
    ctx->pc = 0x288CC8u;
    // 0x288cc8: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x288CC8u;
    {
        const bool branch_taken_0x288cc8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x288CCCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288CC8u;
        // 0x288ccc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288cc8) {
            ctx->pc = 0x288D0Cu;
            goto label_288d0c;
        }
    }
    ctx->pc = 0x288CD0u;
label_288cd0:
    // 0x288cd0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x288cd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x288cd4: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x288cd4u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x288cd8: 0x24120018  addiu       $s2, $zero, 0x18
    ctx->pc = 0x288cd8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 24));
    // 0x288cdc: 0x0  nop
    ctx->pc = 0x288cdcu;
    // NOP
label_288ce0:
    // 0x288ce0: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x288ce0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x288ce4: 0x14530003  bne         $v0, $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x288CE4u;
    {
        const bool branch_taken_0x288ce4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        ctx->pc = 0x288CE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288CE4u;
        // 0x288ce8: 0x26310010  addiu       $s1, $s1, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288ce4) {
            ctx->pc = 0x288CF4u;
            goto label_288cf4;
        }
    }
    ctx->pc = 0x288CECu;
    // 0x288cec: 0xc09294c  jal         func_24A530
    ctx->pc = 0x288CECu;
    SET_GPR_U32(ctx, 31, 0x288CF4u);
    ctx->pc = 0x288CF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x288CECu;
    // 0x288cf0: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24A530u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24A530u, 0x288CECu, 0x288CF4u)) {
        return;
    }
    ctx->pc = 0x288CF4u;
label_288cf4:
    // 0x288cf4: 0x521818  mult        $v1, $v0, $s2
    ctx->pc = 0x288cf4u;
    { int64_t result = (int64_t)GPR_S32(ctx, 2) * (int64_t)GPR_S32(ctx, 18); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x288cf8: 0x718821  addu        $s1, $v1, $s1
    ctx->pc = 0x288cf8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 17)));
    // 0x288cfc: 0x8e100014  lw          $s0, 0x14($s0)
    ctx->pc = 0x288cfcu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x288d00: 0x1600fff7  bnez        $s0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x288D00u;
    {
        const bool branch_taken_0x288d00 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x288D04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288D00u;
        // 0x288d04: 0x2631000c  addiu       $s1, $s1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x288d00) {
            ctx->pc = 0x288CE0u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_288ce0;
        }
    }
    ctx->pc = 0x288D08u;
    // 0x288d08: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x288d08u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_288d0c:
    // 0x288d0c: 0x7bb00040  lq          $s0, 0x40($sp)
    ctx->pc = 0x288d0cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x288d10: 0x7bb10030  lq          $s1, 0x30($sp)
    ctx->pc = 0x288d10u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x288d14: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x288d14u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x288d18: 0x7bb30010  lq          $s3, 0x10($sp)
    ctx->pc = 0x288d18u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x288d1c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x288d1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x288d20: 0x3e00008  jr          $ra
    ctx->pc = 0x288D20u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x288D24u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x288D20u;
        // 0x288d24: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x288D20u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x288D28u;
    // 0x288d28: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x288d28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x288d2c: 0x0  nop
    ctx->pc = 0x288d2cu;
    // NOP
    // 0x288d30: 0x27bd0050  addiu       $sp, $sp, 0x50
    ctx->pc = 0x288d30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x288d34: 0x0  nop
    ctx->pc = 0x288d34u;
    // NOP
    // 0x288d38: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x288d38u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x288d3c: 0x0  nop
    ctx->pc = 0x288d3cu;
    // NOP
    // 0x288d40: 0x27bd0010  addiu       $sp, $sp, 0x10
    ctx->pc = 0x288d40u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x288d44: 0x0  nop
    ctx->pc = 0x288d44u;
    // NOP
    // 0x288d48: 0x27bd0080  addiu       $sp, $sp, 0x80
    ctx->pc = 0x288d48u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x288d4c: 0x0  nop
    ctx->pc = 0x288d4cu;
    // NOP
    ctx->pc = 0x288d50u;
}
