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

// Function: sub_0024CC58
// Address: 0x24cc58 - 0x24ccc0
void sub_0024CC58_0x24cc58(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0024CC58_0x24cc58");
#endif

    switch (ctx->pc) {
        case 0x24cc84u: goto label_24cc84;
        default: break;
    }

    ctx->pc = 0x24cc58u;

    // 0x24cc58: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x24cc58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x24cc5c: 0x3c020073  lui         $v0, 0x73
    ctx->pc = 0x24cc5cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)115 << 16));
    // 0x24cc60: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x24cc60u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x24cc64: 0xa0182d  daddu       $v1, $a1, $zero
    ctx->pc = 0x24cc64u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24cc68: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x24cc68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x24cc6c: 0x24420fc8  addiu       $v0, $v0, 0xFC8
    ctx->pc = 0x24cc6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4040));
    // 0x24cc70: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x24cc70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24cc74: 0x8c450128  lw          $a1, 0x128($v0)
    ctx->pc = 0x24cc74u;
    SET_GPR_S32(ctx, 5, (int32_t)FAST_READ32(0x7310F0u));
    // 0x24cc78: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x24cc78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x24cc7c: 0xc0932d8  jal         func_24CB60
    ctx->pc = 0x24CC7Cu;
    SET_GPR_U32(ctx, 31, 0x24CC84u);
    ctx->pc = 0x24CC80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24CC7Cu;
    // 0x24cc80: 0xaf839128  sw          $v1, -0x6ED8($gp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 28), 4294938920), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24CB60u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24CB60u, 0x24CC7Cu, 0x24CC84u)) {
        return;
    }
    ctx->pc = 0x24CC84u;
label_24cc84:
    // 0x24cc84: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x24CC84u;
    {
        const bool branch_taken_0x24cc84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x24CC88u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CC84u;
        // 0x24cc88: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cc84) {
            ctx->pc = 0x24CCA8u;
            goto label_24cca8;
        }
    }
    ctx->pc = 0x24CC8Cu;
    // 0x24cc8c: 0x3c03006b  lui         $v1, 0x6B
    ctx->pc = 0x24cc8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)107 << 16));
    // 0x24cc90: 0x8c63419c  lw          $v1, 0x419C($v1)
    ctx->pc = 0x24cc90u;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6B419Cu));
    // 0x24cc94: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x24cc94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x24cc98: 0x3c01006b  lui         $at, 0x6B
    ctx->pc = 0x24cc98u;
    SET_GPR_S32(ctx, 1, (int32_t)((uint32_t)107 << 16));
    // 0x24cc9c: 0xac23419c  sw          $v1, 0x419C($at)
    ctx->pc = 0x24cc9cu;
    do { uint32_t _value = static_cast<uint32_t>(GPR_U32(ctx, 3)); ps2TraceGuestWrite(rdram, 0x6B419Cu, 4u, _value, 0u, "WRITE32", ctx); FAST_WRITE32(0x6B419Cu, _value); } while (0);
    // 0x24cca0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x24CCA0u;
    {
        const bool branch_taken_0x24cca0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x24CCA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CCA0u;
        // 0x24cca4: 0x7bb00010  lq          $s0, 0x10($sp) (Delay Slot)
        SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24cca0) {
            ctx->pc = 0x24CCB0u;
            goto label_24ccb0;
        }
    }
    ctx->pc = 0x24CCA8u;
label_24cca8:
    // 0x24cca8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x24cca8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24ccac: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x24ccacu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
label_24ccb0:
    // 0x24ccb0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x24ccb0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x24ccb4: 0x3e00008  jr          $ra
    ctx->pc = 0x24CCB4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x24CCB8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24CCB4u;
        // 0x24ccb8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24CCB4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x24CCBCu;
    // 0x24ccbc: 0x0  nop
    ctx->pc = 0x24ccbcu;
    // NOP
    ctx->pc = 0x24ccc0u;
}
