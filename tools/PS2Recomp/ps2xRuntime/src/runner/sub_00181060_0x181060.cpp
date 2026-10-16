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

// Function: sub_00181060
// Address: 0x181060 - 0x1810c8
void sub_00181060_0x181060(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00181060_0x181060");
#endif

    switch (ctx->pc) {
        case 0x181090u: goto label_181090;
        case 0x1810a4u: goto label_1810a4;
        default: break;
    }

    ctx->pc = 0x181060u;

    // 0x181060: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x181060u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x181064: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x181064u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x181068: 0x3c12006c  lui         $s2, 0x6C
    ctx->pc = 0x181068u;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)108 << 16));
    // 0x18106c: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x18106cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x181070: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x181070u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x181074: 0x3c10006c  lui         $s0, 0x6C
    ctx->pc = 0x181074u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)108 << 16));
    // 0x181078: 0x8e42fa60  lw          $v0, -0x5A0($s2)
    ctx->pc = 0x181078u;
    SET_GPR_S32(ctx, 2, (int32_t)FAST_READ32(0x6BFA60u));
    // 0x18107c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x18107cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x181080: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x181080u;
    {
        const bool branch_taken_0x181080 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x181084u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x181080u;
        // 0x181084: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x181080) {
            ctx->pc = 0x1810A4u;
            goto label_1810a4;
        }
    }
    ctx->pc = 0x181088u;
    // 0x181088: 0xc060300  jal         func_180C00
    ctx->pc = 0x181088u;
    SET_GPR_U32(ctx, 31, 0x181090u);
    ctx->pc = 0x18108Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x181088u;
    // 0x18108c: 0x2604fa38  addiu       $a0, $s0, -0x5C8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4294965816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x180C00u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x180C00u, 0x181088u, 0x181090u)) {
        return;
    }
    ctx->pc = 0x181090u;
label_181090:
    // 0x181090: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x181090u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x181094: 0x3c040018  lui         $a0, 0x18
    ctx->pc = 0x181094u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)24 << 16));
    // 0x181098: 0xae42fa60  sw          $v0, -0x5A0($s2)
    ctx->pc = 0x181098u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294965856), GPR_U32(ctx, 2));
    // 0x18109c: 0xc0c53ae  jal         func_314EB8
    ctx->pc = 0x18109Cu;
    SET_GPR_U32(ctx, 31, 0x1810A4u);
    ctx->pc = 0x1810A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18109Cu;
    // 0x1810a0: 0x248410c8  addiu       $a0, $a0, 0x10C8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x314EB8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x314EB8u, 0x18109Cu, 0x1810A4u)) {
        return;
    }
    ctx->pc = 0x1810A4u;
label_1810a4:
    // 0x1810a4: 0x2602fa38  addiu       $v0, $s0, -0x5C8
    ctx->pc = 0x1810a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), 4294965816));
    // 0x1810a8: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x1810a8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1810ac: 0xac510024  sw          $s1, 0x24($v0)
    ctx->pc = 0x1810acu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 36), GPR_U32(ctx, 17));
    // 0x1810b0: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x1810b0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1810b4: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x1810b4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1810b8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1810b8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1810bc: 0x3e00008  jr          $ra
    ctx->pc = 0x1810BCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1810C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1810BCu;
        // 0x1810c0: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1810BCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1810C4u;
    // 0x1810c4: 0x0  nop
    ctx->pc = 0x1810c4u;
    // NOP
    ctx->pc = 0x1810c8u;
}
