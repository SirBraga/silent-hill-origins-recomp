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

// Function: sub_0018BCE0
// Address: 0x18bce0 - 0x18bd48
void sub_0018BCE0_0x18bce0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018BCE0_0x18bce0");
#endif

    switch (ctx->pc) {
        case 0x18bcf4u: goto label_18bcf4;
        default: break;
    }

    ctx->pc = 0x18bce0u;

    // 0x18bce0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x18bce0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18bce4: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x18bce4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x18bce8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18bce8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18bcec: 0xc0647d4  jal         func_191F50
    ctx->pc = 0x18BCECu;
    SET_GPR_U32(ctx, 31, 0x18BCF4u);
    ctx->pc = 0x18BCF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18BCECu;
    // 0x18bcf0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x191F50u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x191F50u, 0x18BCECu, 0x18BCF4u)) {
        return;
    }
    ctx->pc = 0x18BCF4u;
label_18bcf4:
    // 0x18bcf4: 0x3c02006a  lui         $v0, 0x6A
    ctx->pc = 0x18bcf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)106 << 16));
    // 0x18bcf8: 0x3c03006a  lui         $v1, 0x6A
    ctx->pc = 0x18bcf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)106 << 16));
    // 0x18bcfc: 0x24428f78  addiu       $v0, $v0, -0x7088
    ctx->pc = 0x18bcfcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938488));
    // 0x18bd00: 0x3c04006a  lui         $a0, 0x6A
    ctx->pc = 0x18bd00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)106 << 16));
    // 0x18bd04: 0xae020074  sw          $v0, 0x74($s0)
    ctx->pc = 0x18bd04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 116), GPR_U32(ctx, 2));
    // 0x18bd08: 0x24638f58  addiu       $v1, $v1, -0x70A8
    ctx->pc = 0x18bd08u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294938456));
    // 0x18bd0c: 0x24848fc0  addiu       $a0, $a0, -0x7040
    ctx->pc = 0x18bd0cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294938560));
    // 0x18bd10: 0x24050032  addiu       $a1, $zero, 0x32
    ctx->pc = 0x18bd10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x18bd14: 0x24060096  addiu       $a2, $zero, 0x96
    ctx->pc = 0x18bd14u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 150));
    // 0x18bd18: 0x240700fa  addiu       $a3, $zero, 0xFA
    ctx->pc = 0x18bd18u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 250));
    // 0x18bd1c: 0xae03007c  sw          $v1, 0x7C($s0)
    ctx->pc = 0x18bd1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 3));
    // 0x18bd20: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x18bd20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18bd24: 0xae040030  sw          $a0, 0x30($s0)
    ctx->pc = 0x18bd24u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 48), GPR_U32(ctx, 4));
    // 0x18bd28: 0xae050120  sw          $a1, 0x120($s0)
    ctx->pc = 0x18bd28u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 288), GPR_U32(ctx, 5));
    // 0x18bd2c: 0xae060124  sw          $a2, 0x124($s0)
    ctx->pc = 0x18bd2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 292), GPR_U32(ctx, 6));
    // 0x18bd30: 0xae070128  sw          $a3, 0x128($s0)
    ctx->pc = 0x18bd30u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 296), GPR_U32(ctx, 7));
    // 0x18bd34: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x18bd34u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18bd38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18bd38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18bd3c: 0x3e00008  jr          $ra
    ctx->pc = 0x18BD3Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18BD40u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18BD3Cu;
        // 0x18bd40: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18BD3Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18BD44u;
    // 0x18bd44: 0x0  nop
    ctx->pc = 0x18bd44u;
    // NOP
    ctx->pc = 0x18bd48u;
}
