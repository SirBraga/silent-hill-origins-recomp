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

// Function: sub_00101908
// Address: 0x101908 - 0x101960
void sub_00101908_0x101908(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00101908_0x101908");
#endif

    switch (ctx->pc) {
        case 0x101924u: goto label_101924;
        case 0x101948u: goto label_101948;
        default: break;
    }

    ctx->pc = 0x101908u;

    // 0x101908: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x101908u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x10190c: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x10190cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x101910: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x101910u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x101914: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x101914u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101918: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x101918u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x10191c: 0xc04ee86  jal         func_13BA18
    ctx->pc = 0x10191Cu;
    SET_GPR_U32(ctx, 31, 0x101924u);
    ctx->pc = 0x101920u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10191Cu;
    // 0x101920: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x13BA18u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x13BA18u, 0x10191Cu, 0x101924u)) {
        return;
    }
    ctx->pc = 0x101924u;
label_101924:
    // 0x101924: 0x3c020070  lui         $v0, 0x70
    ctx->pc = 0x101924u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)112 << 16));
    // 0x101928: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x101928u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x10192c: 0x8c438880  lw          $v1, -0x7780($v0)
    ctx->pc = 0x10192cu;
    SET_GPR_S32(ctx, 3, (int32_t)FAST_READ32(0x6F8880u));
    // 0x101930: 0x54830006  bnel        $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x101930u;
    {
        const bool branch_taken_0x101930 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x101930) {
            ctx->pc = 0x101934u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x101930u;
            // 0x101934: 0x7bb00020  lq          $s0, 0x20($sp) (Delay Slot)
            SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x10194Cu;
            goto label_10194c;
        }
    }
    ctx->pc = 0x101938u;
    // 0x101938: 0x8e020004  lw          $v0, 0x4($s0)
    ctx->pc = 0x101938u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x10193c: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x10193cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x101940: 0xc040402  jal         func_101008
    ctx->pc = 0x101940u;
    SET_GPR_U32(ctx, 31, 0x101948u);
    ctx->pc = 0x101944u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x101940u;
    // 0x101944: 0xc44c0008  lwc1        $f12, 0x8($v0) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x101008u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x101008u, 0x101940u, 0x101948u)) {
        return;
    }
    ctx->pc = 0x101948u;
label_101948:
    // 0x101948: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x101948u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
label_10194c:
    // 0x10194c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x10194cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x101950: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x101950u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x101954: 0x3e00008  jr          $ra
    ctx->pc = 0x101954u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x101958u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x101954u;
        // 0x101958: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x101954u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10195Cu;
    // 0x10195c: 0x0  nop
    ctx->pc = 0x10195cu;
    // NOP
    ctx->pc = 0x101960u;
}
