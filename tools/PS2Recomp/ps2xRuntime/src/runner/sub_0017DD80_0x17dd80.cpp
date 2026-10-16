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

// Function: sub_0017DD80
// Address: 0x17dd80 - 0x17de08
void sub_0017DD80_0x17dd80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0017DD80_0x17dd80");
#endif

    switch (ctx->pc) {
        case 0x17ddc4u: goto label_17ddc4;
        case 0x17ddd0u: goto label_17ddd0;
        case 0x17ddd8u: goto label_17ddd8;
        case 0x17dde4u: goto label_17dde4;
        case 0x17ddf0u: goto label_17ddf0;
        default: break;
    }

    ctx->pc = 0x17dd80u;

    // 0x17dd80: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x17dd80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x17dd84: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x17dd84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x17dd88: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x17dd88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x17dd8c: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x17dd8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x17dd90: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x17dd90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17dd94: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x17dd94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x17dd98: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x17dd98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x17dd9c: 0x24427600  addiu       $v0, $v0, 0x7600
    ctx->pc = 0x17dd9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 30208));
    // 0x17dda0: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x17dda0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x17dda4: 0x24637620  addiu       $v1, $v1, 0x7620
    ctx->pc = 0x17dda4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 30240));
    // 0x17dda8: 0x3c04006c  lui         $a0, 0x6C
    ctx->pc = 0x17dda8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)108 << 16));
    // 0x17ddac: 0xae22003c  sw          $v0, 0x3C($s1)
    ctx->pc = 0x17ddacu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 60), GPR_U32(ctx, 2));
    // 0x17ddb0: 0xae230034  sw          $v1, 0x34($s1)
    ctx->pc = 0x17ddb0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 3));
    // 0x17ddb4: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x17ddb4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ddb8: 0x2484f950  addiu       $a0, $a0, -0x6B0
    ctx->pc = 0x17ddb8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294965584));
    // 0x17ddbc: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x17DDBCu;
    SET_GPR_U32(ctx, 31, 0x17DDC4u);
    ctx->pc = 0x17DDC0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17DDBCu;
    // 0x17ddc0: 0x26300044  addiu       $s0, $s1, 0x44 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 68));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x17DDBCu, 0x17DDC4u)) {
        return;
    }
    ctx->pc = 0x17DDC4u;
label_17ddc4:
    // 0x17ddc4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x17ddc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17ddc8: 0xc07fb0c  jal         func_1FEC30
    ctx->pc = 0x17DDC8u;
    SET_GPR_U32(ctx, 31, 0x17DDD0u);
    ctx->pc = 0x17DDCCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17DDC8u;
    // 0x17ddcc: 0x26240038  addiu       $a0, $s1, 0x38 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 56));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEC30u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEC30u, 0x17DDC8u, 0x17DDD0u)) {
        return;
    }
    ctx->pc = 0x17DDD0u;
label_17ddd0:
    // 0x17ddd0: 0xc07fac2  jal         func_1FEB08
    ctx->pc = 0x17DDD0u;
    SET_GPR_U32(ctx, 31, 0x17DDD8u);
    ctx->pc = 0x17DDD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17DDD0u;
    // 0x17ddd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEB08u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEB08u, 0x17DDD0u, 0x17DDD8u)) {
        return;
    }
    ctx->pc = 0x17DDD8u;
label_17ddd8:
    // 0x17ddd8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x17ddd8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17dddc: 0xc07fbec  jal         func_1FEFB0
    ctx->pc = 0x17DDDCu;
    SET_GPR_U32(ctx, 31, 0x17DDE4u);
    ctx->pc = 0x17DDE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17DDDCu;
    // 0x17dde0: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FEFB0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FEFB0u, 0x17DDDCu, 0x17DDE4u)) {
        return;
    }
    ctx->pc = 0x17DDE4u;
label_17dde4:
    // 0x17dde4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x17dde4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x17dde8: 0xc04f084  jal         func_13C210
    ctx->pc = 0x17DDE8u;
    SET_GPR_U32(ctx, 31, 0x17DDF0u);
    ctx->pc = 0x17DDECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x17DDE8u;
    // 0x17ddec: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13C210u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13C210u, 0x17DDE8u, 0x17DDF0u)) {
        return;
    }
    ctx->pc = 0x17DDF0u;
label_17ddf0:
    // 0x17ddf0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x17ddf0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x17ddf4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x17ddf4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x17ddf8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x17ddf8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x17ddfc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x17ddfcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x17de00: 0x3e00008  jr          $ra
    ctx->pc = 0x17DE00u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x17DE04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x17DE00u;
        // 0x17de04: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x17DE00u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x17DE08u;
}
