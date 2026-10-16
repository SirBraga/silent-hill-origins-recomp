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

// Function: sub_00119128
// Address: 0x119128 - 0x1191b0
void sub_00119128_0x119128(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00119128_0x119128");
#endif

    switch (ctx->pc) {
        case 0x119168u: goto label_119168;
        case 0x11917cu: goto label_11917c;
        case 0x11918cu: goto label_11918c;
        case 0x119198u: goto label_119198;
        default: break;
    }

    ctx->pc = 0x119128u;

    // 0x119128: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x119128u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x11912c: 0x3c020069  lui         $v0, 0x69
    ctx->pc = 0x11912cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)105 << 16));
    // 0x119130: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x119130u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x119134: 0x3c030069  lui         $v1, 0x69
    ctx->pc = 0x119134u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)105 << 16));
    // 0x119138: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x119138u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x11913c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x11913cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119140: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x119140u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x119144: 0x2442ad30  addiu       $v0, $v0, -0x52D0
    ctx->pc = 0x119144u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294946096));
    // 0x119148: 0x2463ad50  addiu       $v1, $v1, -0x52B0
    ctx->pc = 0x119148u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294946128));
    // 0x11914c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x11914cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119150: 0x8e040208  lw          $a0, 0x208($s0)
    ctx->pc = 0x119150u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 520)));
    // 0x119154: 0xae02003c  sw          $v0, 0x3C($s0)
    ctx->pc = 0x119154u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 60), GPR_U32(ctx, 2));
    // 0x119158: 0x10800003  beqz        $a0, . + 4 + (0x3 << 2)
    ctx->pc = 0x119158u;
    {
        const bool branch_taken_0x119158 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x11915Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x119158u;
        // 0x11915c: 0xae030034  sw          $v1, 0x34($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 52), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x119158) {
            ctx->pc = 0x119168u;
            goto label_119168;
        }
    }
    ctx->pc = 0x119160u;
    // 0x119160: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x119160u;
    SET_GPR_U32(ctx, 31, 0x119168u);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x119160u, 0x119168u)) {
        return;
    }
    ctx->pc = 0x119168u;
label_119168:
    // 0x119168: 0x8e0402b4  lw          $a0, 0x2B4($s0)
    ctx->pc = 0x119168u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 692)));
    // 0x11916c: 0x50800005  beql        $a0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x11916Cu;
    {
        const bool branch_taken_0x11916c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x11916c) {
            ctx->pc = 0x119170u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x11916Cu;
            // 0x119170: 0x260400a8  addiu       $a0, $s0, 0xA8 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 168));
            ctx->in_delay_slot = false;
            ctx->pc = 0x119184u;
            goto label_119184;
        }
    }
    ctx->pc = 0x119174u;
    // 0x119174: 0xc0808b8  jal         func_2022E0
    ctx->pc = 0x119174u;
    SET_GPR_U32(ctx, 31, 0x11917Cu);
    ctx->pc = 0x2022E0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2022E0u, 0x119174u, 0x11917Cu)) {
        return;
    }
    ctx->pc = 0x11917Cu;
label_11917c:
    // 0x11917c: 0xae0002b4  sw          $zero, 0x2B4($s0)
    ctx->pc = 0x11917cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 692), GPR_U32(ctx, 0));
    // 0x119180: 0x260400a8  addiu       $a0, $s0, 0xA8
    ctx->pc = 0x119180u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 168));
label_119184:
    // 0x119184: 0xc065a70  jal         func_1969C0
    ctx->pc = 0x119184u;
    SET_GPR_U32(ctx, 31, 0x11918Cu);
    ctx->pc = 0x119188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119184u;
    // 0x119188: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1969C0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1969C0u, 0x119184u, 0x11918Cu)) {
        return;
    }
    ctx->pc = 0x11918Cu;
label_11918c:
    // 0x11918c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11918cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x119190: 0xc04465e  jal         func_111978
    ctx->pc = 0x119190u;
    SET_GPR_U32(ctx, 31, 0x119198u);
    ctx->pc = 0x119194u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x119190u;
    // 0x119194: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x111978u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x111978u, 0x119190u, 0x119198u)) {
        return;
    }
    ctx->pc = 0x119198u;
label_119198:
    // 0x119198: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x119198u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11919c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x11919cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1191a0: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1191a0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1191a4: 0x3e00008  jr          $ra
    ctx->pc = 0x1191A4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1191A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1191A4u;
        // 0x1191a8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1191A4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1191ACu;
    // 0x1191ac: 0x0  nop
    ctx->pc = 0x1191acu;
    // NOP
    ctx->pc = 0x1191b0u;
}
