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

// Function: sub_002295B0
// Address: 0x2295b0 - 0x229620
void sub_002295B0_0x2295b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002295B0_0x2295b0");
#endif

    switch (ctx->pc) {
        case 0x229600u: goto label_229600;
        default: break;
    }

    ctx->pc = 0x2295b0u;

    // 0x2295b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2295b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2295b4: 0x7fb00020  sq          $s0, 0x20($sp)
    ctx->pc = 0x2295b4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 16));
    // 0x2295b8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x2295b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x2295bc: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2295bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2295c0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2295c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2295c4: 0x92110003  lbu         $s1, 0x3($s0)
    ctx->pc = 0x2295c4u;
    SET_GPR_ZE32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x2295c8: 0x32220004  andi        $v0, $s1, 0x4
    ctx->pc = 0x2295c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)4);
    // 0x2295cc: 0x5040000a  beql        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x2295CCu;
    {
        const bool branch_taken_0x2295cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2295cc) {
            ctx->pc = 0x2295D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2295CCu;
            // 0x2295d0: 0x8e040098  lw          $a0, 0x98($s0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2295F8u;
            goto label_2295f8;
        }
    }
    ctx->pc = 0x2295D4u;
    // 0x2295d4: 0x7a020010  lq          $v0, 0x10($s0)
    ctx->pc = 0x2295d4u;
    SET_GPR_VEC(ctx, 2, READ128(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x2295d8: 0x7a030020  lq          $v1, 0x20($s0)
    ctx->pc = 0x2295d8u;
    SET_GPR_VEC(ctx, 3, READ128(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x2295dc: 0x7a040030  lq          $a0, 0x30($s0)
    ctx->pc = 0x2295dcu;
    SET_GPR_VEC(ctx, 4, READ128(ADD32(GPR_U32(ctx, 16), 48)));
    // 0x2295e0: 0x7a050040  lq          $a1, 0x40($s0)
    ctx->pc = 0x2295e0u;
    SET_GPR_VEC(ctx, 5, READ128(ADD32(GPR_U32(ctx, 16), 64)));
    // 0x2295e4: 0x7e020050  sq          $v0, 0x50($s0)
    ctx->pc = 0x2295e4u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 80), GPR_VEC(ctx, 2));
    // 0x2295e8: 0x7e030060  sq          $v1, 0x60($s0)
    ctx->pc = 0x2295e8u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 96), GPR_VEC(ctx, 3));
    // 0x2295ec: 0x7e040070  sq          $a0, 0x70($s0)
    ctx->pc = 0x2295ecu;
    WRITE128(ADD32(GPR_U32(ctx, 16), 112), GPR_VEC(ctx, 4));
    // 0x2295f0: 0x7e050080  sq          $a1, 0x80($s0)
    ctx->pc = 0x2295f0u;
    WRITE128(ADD32(GPR_U32(ctx, 16), 128), GPR_VEC(ctx, 5));
    // 0x2295f4: 0x8e040098  lw          $a0, 0x98($s0)
    ctx->pc = 0x2295f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 152)));
label_2295f8:
    // 0x2295f8: 0xc08a54a  jal         func_229528
    ctx->pc = 0x2295F8u;
    SET_GPR_U32(ctx, 31, 0x229600u);
    ctx->pc = 0x2295FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2295F8u;
    // 0x2295fc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x229528u;
    if (!ps2xDirectCall(runtime, rdram, ctx, 0x229528u, 0x2295F8u, 0x229600u)) {
        return;
    }
    ctx->pc = 0x229600u;
label_229600:
    // 0x229600: 0x322200fa  andi        $v0, $s1, 0xFA
    ctx->pc = 0x229600u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)250);
    // 0x229604: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x229604u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x229608: 0xa2020003  sb          $v0, 0x3($s0)
    ctx->pc = 0x229608u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x22960c: 0x7bb00020  lq          $s0, 0x20($sp)
    ctx->pc = 0x22960cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x229610: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x229610u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x229614: 0x3e00008  jr          $ra
    ctx->pc = 0x229614u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x229618u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x229614u;
        // 0x229618: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x229614u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22961Cu;
    // 0x22961c: 0x0  nop
    ctx->pc = 0x22961cu;
    // NOP
    ctx->pc = 0x229620u;
}
