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

// Function: sub_00150228
// Address: 0x150228 - 0x150270
void sub_00150228_0x150228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00150228_0x150228");
#endif

    switch (ctx->pc) {
        case 0x150244u: goto label_150244;
        case 0x15024cu: goto label_15024c;
        case 0x150254u: goto label_150254;
        default: break;
    }

    ctx->pc = 0x150228u;

    // 0x150228: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x150228u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x15022c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x15022cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x150230: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x150230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x150234: 0x2404002c  addiu       $a0, $zero, 0x2C
    ctx->pc = 0x150234u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 44));
    // 0x150238: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x150238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15023c: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x15023Cu;
    SET_GPR_U32(ctx, 31, 0x150244u);
    ctx->pc = 0x150240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15023Cu;
    // 0x150240: 0x3c100034  lui         $s0, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)52 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x15023Cu, 0x150244u)) {
        return;
    }
    ctx->pc = 0x150244u;
label_150244:
    // 0x150244: 0xc053cae  jal         func_14F2B8
    ctx->pc = 0x150244u;
    SET_GPR_U32(ctx, 31, 0x15024Cu);
    ctx->pc = 0x150248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150244u;
    // 0x150248: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14F2B8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x14F2B8u, 0x150244u, 0x15024Cu)) {
        return;
    }
    ctx->pc = 0x15024Cu;
label_15024c:
    // 0x15024c: 0xc0544aa  jal         func_1512A8
    ctx->pc = 0x15024Cu;
    SET_GPR_U32(ctx, 31, 0x150254u);
    ctx->pc = 0x150250u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15024Cu;
    // 0x150250: 0xae0284f4  sw          $v0, -0x7B0C($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294935796), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1512A8u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1512A8u, 0x15024Cu, 0x150254u)) {
        return;
    }
    ctx->pc = 0x150254u;
label_150254:
    // 0x150254: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x150254u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x150258: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x150258u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x15025c: 0x3e00008  jr          $ra
    ctx->pc = 0x15025Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x150260u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15025Cu;
        // 0x150260: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x15025Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x150264u;
    // 0x150264: 0x0  nop
    ctx->pc = 0x150264u;
    // NOP
    // 0x150268: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x150268u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x15026c: 0x0  nop
    ctx->pc = 0x15026cu;
    // NOP
    ctx->pc = 0x150270u;
}
