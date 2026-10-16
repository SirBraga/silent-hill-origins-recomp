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

// Function: sub_001DDB00
// Address: 0x1ddb00 - 0x1ddb60
void sub_001DDB00_0x1ddb00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001DDB00_0x1ddb00");
#endif

    switch (ctx->pc) {
        case 0x1ddb18u: goto label_1ddb18;
        case 0x1ddb3cu: goto label_1ddb3c;
        default: break;
    }

    ctx->pc = 0x1ddb00u;

    // 0x1ddb00: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1ddb00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1ddb04: 0x24040a04  addiu       $a0, $zero, 0xA04
    ctx->pc = 0x1ddb04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2564));
    // 0x1ddb08: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x1ddb08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x1ddb0c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1ddb0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1ddb10: 0xc0895f6  jal         func_2257D8
    ctx->pc = 0x1DDB10u;
    SET_GPR_U32(ctx, 31, 0x1DDB18u);
    ctx->pc = 0x1DDB14u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DDB10u;
    // 0x1ddb14: 0x3c100034  lui         $s0, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)52 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2257D8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2257D8u, 0x1DDB10u, 0x1DDB18u)) {
        return;
    }
    ctx->pc = 0x1DDB18u;
label_1ddb18:
    // 0x1ddb18: 0x441000c  bgez        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1DDB18u;
    {
        const bool branch_taken_0x1ddb18 = (GPR_S64(ctx, 2) >= 0);
        ctx->pc = 0x1DDB1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDB18u;
        // 0x1ddb1c: 0xae02e688  sw          $v0, -0x1978($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4294960776), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddb18) {
            ctx->pc = 0x1DDB4Cu;
            goto label_1ddb4c;
        }
    }
    ctx->pc = 0x1DDB20u;
    // 0x1ddb20: 0x3c06001e  lui         $a2, 0x1E
    ctx->pc = 0x1ddb20u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)30 << 16));
    // 0x1ddb24: 0x3c07001e  lui         $a3, 0x1E
    ctx->pc = 0x1ddb24u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)30 << 16));
    // 0x1ddb28: 0x24c6dc30  addiu       $a2, $a2, -0x23D0
    ctx->pc = 0x1ddb28u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294958128));
    // 0x1ddb2c: 0x24e7dca0  addiu       $a3, $a3, -0x2360
    ctx->pc = 0x1ddb2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294958240));
    // 0x1ddb30: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x1ddb30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1ddb34: 0xc0895e6  jal         func_225798
    ctx->pc = 0x1DDB34u;
    SET_GPR_U32(ctx, 31, 0x1DDB3Cu);
    ctx->pc = 0x1DDB38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1DDB34u;
    // 0x1ddb38: 0x24050a04  addiu       $a1, $zero, 0xA04 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2564));
    ctx->in_delay_slot = false;
    ctx->pc = 0x225798u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x225798u, 0x1DDB34u, 0x1DDB3Cu)) {
        return;
    }
    ctx->pc = 0x1DDB3Cu;
label_1ddb3c:
    // 0x1ddb3c: 0x28430000  slti        $v1, $v0, 0x0
    ctx->pc = 0x1ddb3cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)0) ? 1 : 0);
    // 0x1ddb40: 0xae02e688  sw          $v0, -0x1978($s0)
    ctx->pc = 0x1ddb40u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294960776), GPR_U32(ctx, 2));
    // 0x1ddb44: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1DDB44u;
    {
        const bool branch_taken_0x1ddb44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1DDB48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDB44u;
        // 0x1ddb48: 0x38620001  xori        $v0, $v1, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ddb44) {
            ctx->pc = 0x1DDB50u;
            goto label_1ddb50;
        }
    }
    ctx->pc = 0x1DDB4Cu;
label_1ddb4c:
    // 0x1ddb4c: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1ddb4cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1ddb50:
    // 0x1ddb50: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x1ddb50u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1ddb54: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1ddb54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ddb58: 0x3e00008  jr          $ra
    ctx->pc = 0x1DDB58u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1DDB5Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1DDB58u;
        // 0x1ddb5c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1DDB58u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1DDB60u;
}
