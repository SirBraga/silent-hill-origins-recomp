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

// Function: sub_00206EA8
// Address: 0x206ea8 - 0x206f38
void sub_00206EA8_0x206ea8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00206EA8_0x206ea8");
#endif

    switch (ctx->pc) {
        case 0x206ed0u: goto label_206ed0;
        case 0x206ee4u: goto label_206ee4;
        case 0x206ef8u: goto label_206ef8;
        default: break;
    }

    ctx->pc = 0x206ea8u;

    // 0x206ea8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x206ea8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x206eac: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x206eacu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206eb0: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x206eb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x206eb4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x206eb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x206eb8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x206eb8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206ebc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x206ebcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x206ec0: 0x12000017  beqz        $s0, . + 4 + (0x17 << 2)
    ctx->pc = 0x206EC0u;
    {
        const bool branch_taken_0x206ec0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x206EC4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206EC0u;
        // 0x206ec4: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206ec0) {
            ctx->pc = 0x206F20u;
            goto label_206f20;
        }
    }
    ctx->pc = 0x206EC8u;
    // 0x206ec8: 0xc0c4ab8  jal         func_312AE0
    ctx->pc = 0x206EC8u;
    SET_GPR_U32(ctx, 31, 0x206ED0u);
    ctx->pc = 0x312AE0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x312AE0u, 0x206EC8u, 0x206ED0u)) {
        return;
    }
    ctx->pc = 0x206ED0u;
label_206ed0:
    // 0x206ed0: 0x56200006  bnel        $s1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x206ED0u;
    {
        const bool branch_taken_0x206ed0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x206ed0) {
            ctx->pc = 0x206ED4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x206ED0u;
            // 0x206ed4: 0x82020000  lb          $v0, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x206EECu;
            goto label_206eec;
        }
    }
    ctx->pc = 0x206ED8u;
    // 0x206ed8: 0x24440001  addiu       $a0, $v0, 0x1
    ctx->pc = 0x206ed8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x206edc: 0xc080888  jal         func_202220
    ctx->pc = 0x206EDCu;
    SET_GPR_U32(ctx, 31, 0x206EE4u);
    ctx->pc = 0x206EE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x206EDCu;
    // 0x206ee0: 0x42040  sll         $a0, $a0, 1 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x202220u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x202220u, 0x206EDCu, 0x206EE4u)) {
        return;
    }
    ctx->pc = 0x206EE4u;
label_206ee4:
    // 0x206ee4: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x206ee4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206ee8: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x206ee8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
label_206eec:
    // 0x206eec: 0x220182d  daddu       $v1, $s1, $zero
    ctx->pc = 0x206eecu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x206ef0: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x206EF0u;
    {
        const bool branch_taken_0x206ef0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x206EF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206EF0u;
        // 0x206ef4: 0x92040000  lbu         $a0, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206ef0) {
            ctx->pc = 0x206F18u;
            goto label_206f18;
        }
    }
    ctx->pc = 0x206EF8u;
label_206ef8:
    // 0x206ef8: 0x41600  sll         $v0, $a0, 24
    ctx->pc = 0x206ef8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 24));
    // 0x206efc: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x206efcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x206f00: 0x21603  sra         $v0, $v0, 24
    ctx->pc = 0x206f00u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 24));
    // 0x206f04: 0xa4620000  sh          $v0, 0x0($v1)
    ctx->pc = 0x206f04u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x206f08: 0x24630002  addiu       $v1, $v1, 0x2
    ctx->pc = 0x206f08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 2));
    // 0x206f0c: 0x82020000  lb          $v0, 0x0($s0)
    ctx->pc = 0x206f0cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x206f10: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x206F10u;
    {
        const bool branch_taken_0x206f10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x206F14u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206F10u;
        // 0x206f14: 0x92040000  lbu         $a0, 0x0($s0) (Delay Slot)
        SET_GPR_ZE32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x206f10) {
            ctx->pc = 0x206EF8u;
            if (runtime->eeCheckpointDue()) {
                return;
            }
            goto label_206ef8;
        }
    }
    ctx->pc = 0x206F18u;
label_206f18:
    // 0x206f18: 0xa4600000  sh          $zero, 0x0($v1)
    ctx->pc = 0x206f18u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x206f1c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x206f1cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_206f20:
    // 0x206f20: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x206f20u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x206f24: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x206f24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x206f28: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x206f28u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x206f2c: 0x3e00008  jr          $ra
    ctx->pc = 0x206F2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x206F30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x206F2Cu;
        // 0x206f30: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x206F2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x206F34u;
    // 0x206f34: 0x0  nop
    ctx->pc = 0x206f34u;
    // NOP
    ctx->pc = 0x206f38u;
}
