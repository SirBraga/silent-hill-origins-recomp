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

// Function: sub_00200FB8
// Address: 0x200fb8 - 0x201010
void sub_00200FB8_0x200fb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00200FB8_0x200fb8");
#endif

    switch (ctx->pc) {
        case 0x200fd4u: goto label_200fd4;
        case 0x200fe4u: goto label_200fe4;
        default: break;
    }

    ctx->pc = 0x200fb8u;

    // 0x200fb8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x200fb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x200fbc: 0x3c05006a  lui         $a1, 0x6A
    ctx->pc = 0x200fbcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)106 << 16));
    // 0x200fc0: 0x7fb00010  sq          $s0, 0x10($sp)
    ctx->pc = 0x200fc0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 16));
    // 0x200fc4: 0x24a536b8  addiu       $a1, $a1, 0x36B8
    ctx->pc = 0x200fc4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 14008));
    // 0x200fc8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x200fc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x200fcc: 0xc07f8ce  jal         func_1FE338
    ctx->pc = 0x200FCCu;
    SET_GPR_U32(ctx, 31, 0x200FD4u);
    ctx->pc = 0x200FD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200FCCu;
    // 0x200fd0: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FE338u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x1FE338u, 0x200FCCu, 0x200FD4u)) {
        return;
    }
    ctx->pc = 0x200FD4u;
label_200fd4:
    // 0x200fd4: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x200FD4u;
    {
        const bool branch_taken_0x200fd4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x200fd4) {
            ctx->pc = 0x200FD8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x200FD4u;
            // 0x200fd8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x200FECu;
            goto label_200fec;
        }
    }
    ctx->pc = 0x200FDCu;
    // 0x200fdc: 0xc0b5b70  jal         func_2D6DC0
    ctx->pc = 0x200FDCu;
    SET_GPR_U32(ctx, 31, 0x200FE4u);
    ctx->pc = 0x200FE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x200FDCu;
    // 0x200fe0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D6DC0u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x2D6DC0u, 0x200FDCu, 0x200FE4u)) {
        return;
    }
    ctx->pc = 0x200FE4u;
label_200fe4:
    // 0x200fe4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x200fe4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x200fe8: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x200fe8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_200fec:
    // 0x200fec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x200fecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x200ff0: 0x7bb00010  lq          $s0, 0x10($sp)
    ctx->pc = 0x200ff0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x200ff4: 0x3e00008  jr          $ra
    ctx->pc = 0x200FF4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x200FF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x200FF4u;
        // 0x200ff8: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x200FF4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x200FFCu;
    // 0x200ffc: 0x0  nop
    ctx->pc = 0x200ffcu;
    // NOP
    // 0x201000: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x201000u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x201004: 0x0  nop
    ctx->pc = 0x201004u;
    // NOP
    // 0x201008: 0x27bd0020  addiu       $sp, $sp, 0x20
    ctx->pc = 0x201008u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x20100c: 0x0  nop
    ctx->pc = 0x20100cu;
    // NOP
    ctx->pc = 0x201010u;
}
