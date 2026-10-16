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

// Function: sub_0018B228
// Address: 0x18b228 - 0x18b268
void sub_0018B228_0x18b228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018B228_0x18b228");
#endif

    switch (ctx->pc) {
        case 0x18b244u: goto label_18b244;
        case 0x18b24cu: goto label_18b24c;
        default: break;
    }

    ctx->pc = 0x18b228u;

    // 0x18b228: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x18b228u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x18b22c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x18b22cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x18b230: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x18b230u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x18b234: 0x240400a0  addiu       $a0, $zero, 0xA0
    ctx->pc = 0x18b234u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 160));
    // 0x18b238: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x18b238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x18b23c: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x18B23Cu;
    SET_GPR_U32(ctx, 31, 0x18B244u);
    ctx->pc = 0x18B240u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B23Cu;
    // 0x18b240: 0x3c100034  lui         $s0, 0x34 (Delay Slot)
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)52 << 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x18B23Cu, 0x18B244u)) {
        return;
    }
    ctx->pc = 0x18B244u;
label_18b244:
    // 0x18b244: 0xc062786  jal         func_189E18
    ctx->pc = 0x18B244u;
    SET_GPR_U32(ctx, 31, 0x18B24Cu);
    ctx->pc = 0x18B248u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x18B244u;
    // 0x18b248: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x189E18u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x189E18u, 0x18B244u, 0x18B24Cu)) {
        return;
    }
    ctx->pc = 0x18B24Cu;
label_18b24c:
    // 0x18b24c: 0xae028acc  sw          $v0, -0x7534($s0)
    ctx->pc = 0x18b24cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4294937292), GPR_U32(ctx, 2));
    // 0x18b250: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x18b250u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18b254: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x18b254u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18b258: 0x3e00008  jr          $ra
    ctx->pc = 0x18B258u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18B25Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x18B258u;
        // 0x18b25c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x18B258u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x18B260u;
    // 0x18b260: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x18b260u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x18b264: 0x0  nop
    ctx->pc = 0x18b264u;
    // NOP
    ctx->pc = 0x18b268u;
}
