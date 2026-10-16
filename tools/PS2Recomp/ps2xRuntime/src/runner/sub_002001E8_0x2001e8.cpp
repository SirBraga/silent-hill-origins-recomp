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

// Function: sub_002001E8
// Address: 0x2001e8 - 0x200258
void sub_002001E8_0x2001e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002001E8_0x2001e8");
#endif

    switch (ctx->pc) {
        case 0x200210u: goto label_200210;
        case 0x200224u: goto label_200224;
        case 0x20022cu: goto label_20022c;
        default: break;
    }

    ctx->pc = 0x2001e8u;

    // 0x2001e8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2001e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2001ec: 0x7fb00030  sq          $s0, 0x30($sp)
    ctx->pc = 0x2001ecu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 16));
    // 0x2001f0: 0x7fb10020  sq          $s1, 0x20($sp)
    ctx->pc = 0x2001f0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 17));
    // 0x2001f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2001f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2001f8: 0x7fb20010  sq          $s2, 0x10($sp)
    ctx->pc = 0x2001f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 18));
    // 0x2001fc: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2001fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x200200: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x200200u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200204: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x200204u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x200208: 0xc0808f0  jal         func_2023C0
    ctx->pc = 0x200208u;
    SET_GPR_U32(ctx, 31, 0x200210u);
    ctx->pc = 0x20020Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200208u;
    // 0x20020c: 0x8e040004  lw          $a0, 0x4($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2023C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2023C0u, 0x200208u, 0x200210u)) {
        return;
    }
    ctx->pc = 0x200210u;
label_200210:
    // 0x200210: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x200210u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200214: 0x8e060004  lw          $a2, 0x4($s0)
    ctx->pc = 0x200214u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x200218: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x200218u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x20021c: 0xc093546  jal         func_24D518
    ctx->pc = 0x20021Cu;
    SET_GPR_U32(ctx, 31, 0x200224u);
    ctx->pc = 0x200220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x20021Cu;
    // 0x200220: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24D518u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x24D518u, 0x20021Cu, 0x200224u)) {
        return;
    }
    ctx->pc = 0x200224u;
label_200224:
    // 0x200224: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x200224u;
    SET_GPR_U32(ctx, 31, 0x20022Cu);
    ctx->pc = 0x200228u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200224u;
    // 0x200228: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x200224u, 0x20022Cu)) {
        return;
    }
    ctx->pc = 0x20022Cu;
label_20022c:
    // 0x20022c: 0x7bb00030  lq          $s0, 0x30($sp)
    ctx->pc = 0x20022cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x200230: 0x7bb10020  lq          $s1, 0x20($sp)
    ctx->pc = 0x200230u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x200234: 0x7bb20010  lq          $s2, 0x10($sp)
    ctx->pc = 0x200234u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x200238: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x200238u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x20023c: 0x3e00008  jr          $ra
    ctx->pc = 0x20023Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x200240u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x20023Cu;
        // 0x200240: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x20023Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x200244u;
    // 0x200244: 0x0  nop
    ctx->pc = 0x200244u;
    // NOP
    // 0x200248: 0x27bd0040  addiu       $sp, $sp, 0x40
    ctx->pc = 0x200248u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x20024c: 0x0  nop
    ctx->pc = 0x20024cu;
    // NOP
    // 0x200250: 0x27bd0030  addiu       $sp, $sp, 0x30
    ctx->pc = 0x200250u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x200254: 0x0  nop
    ctx->pc = 0x200254u;
    // NOP
    ctx->pc = 0x200258u;
}
